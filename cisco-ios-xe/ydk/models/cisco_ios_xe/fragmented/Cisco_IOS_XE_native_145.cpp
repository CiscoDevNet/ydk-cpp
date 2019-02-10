
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_145.hpp"
#include "Cisco_IOS_XE_native_146.hpp"
#include "Cisco_IOS_XE_native_163.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::has_data() const
{
    if (is_presence_container) return true;
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::has_operation() const
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

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::has_operation() const
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

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::Rip()
    :
    id{YType::str, "id"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::RedistOptions()
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

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::Static()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::~Static()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::RedistOptions()
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

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"}
        ,
    threshold_warning_only_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer>())
{
    threshold_warning_only_container->parent = this;

    yang_name = "maximum-prefix"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (threshold_warning_only_container !=  nullptr && threshold_warning_only_container->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (threshold_warning_only_container !=  nullptr && threshold_warning_only_container->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-warning-only-container")
    {
        if(threshold_warning_only_container == nullptr)
        {
            threshold_warning_only_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer>();
        }
        return threshold_warning_only_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold_warning_only_container != nullptr)
    {
        _children["threshold-warning-only-container"] = threshold_warning_only_container;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-warning-only-container" || name == "number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::ThresholdWarningOnlyContainer()
    :
    threshold{YType::uint32, "threshold"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "threshold-warning-only-container"; yang_parent_name = "maximum-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::~ThresholdWarningOnlyContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| warning_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-warning-only-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Vrf_()
    :
    non_global_vrf(this, {"name"})
    , global(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global>())
{
    global->parent = this;

    yang_name = "vrf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::~Vrf_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<non_global_vrf.len(); index++)
    {
        if(non_global_vrf[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::has_operation() const
{
    for (std::size_t index=0; index<non_global_vrf.len(); index++)
    {
        if(non_global_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-global-vrf")
    {
        auto ent_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf>();
        ent_->parent = this;
        non_global_vrf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : non_global_vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-global-vrf" || name == "global")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::NonGlobalVrf()
    :
    name{YType::str, "name"}
        ,
    application(this, {"name"})
    , bgp(this, {"as_number"})
    , connected(nullptr) // presence node
    , eigrp(this, {"as_number"})
    , isis(nullptr) // presence node
    , iso_igrp(nullptr) // presence node
    , lisp(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp>())
    , mobile(nullptr) // presence node
    , odr(nullptr) // presence node
    , ospf(this, {"id"})
    , ospfv3(this, {"id"})
    , rip(this, {"id"})
    , static_(nullptr) // presence node
{
    lisp->parent = this;

    yang_name = "non-global-vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::~NonGlobalVrf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
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

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-global-vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto ent_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application>();
        ent_->parent = this;
        application.append(ent_);
        return ent_;
    }

    if(child_yang_name == "bgp")
    {
        auto ent_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp>();
        ent_->parent = this;
        bgp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        auto ent_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp>();
        ent_->parent = this;
        eigrp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        auto ent_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf>();
        ent_->parent = this;
        ospf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ospfv3")
    {
        auto ent_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_>();
        ent_->parent = this;
        ospfv3.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rip")
    {
        auto ent_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip>();
        ent_->parent = this;
        rip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : application.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : bgp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(connected != nullptr)
    {
        _children["connected"] = connected;
    }

    count_ = 0;
    for (auto ent_ : eigrp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        _children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        _children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        _children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        _children["odr"] = odr;
    }

    count_ = 0;
    for (auto ent_ : ospf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ospfv3.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::Application()
    :
    name{YType::str, "name"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "application"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::~Application()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "bgp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::~Bgp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    ADD_KEY_TOKEN(as_number, "as-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::Connected()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "connected"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::~Connected()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::Eigrp()
    :
    as_number{YType::str, "as-number"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "eigrp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::~Eigrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(as_number, "as-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::Isis()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
        ,
    isis_area(this, {"name"})
    , redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::~Isis()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_area.len(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.len(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        auto ent_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea>();
        ent_->parent = this;
        isis_area.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : isis_area.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "redist-options" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    isis_level_routes{YType::enumeration, "isis-level-routes"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"}
        ,
    area_tag_route_map_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer>())
    , iso_igrp_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer>())
{
    area_tag_route_map_container->parent = this;
    iso_igrp_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    if(child_yang_name == "iso-igrp-container")
    {
        if(iso_igrp_container == nullptr)
        {
            iso_igrp_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer>();
        }
        return iso_igrp_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(area_tag_route_map_container != nullptr)
    {
        _children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    if(iso_igrp_container != nullptr)
    {
        _children["iso-igrp-container"] = iso_igrp_container;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "iso-igrp-container" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{

    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    if (is_presence_container) return true;
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::IsoIgrpContainer()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"}
{

    yang_name = "iso-igrp-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::~IsoIgrpContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::Lisp()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "lisp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::~Lisp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::Mobile()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "mobile"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::~Mobile()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::Odr()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "odr"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::~Odr()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Ospf()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"},
    vrf{YType::str, "vrf"}
        ,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::~Ospf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Match()
    :
    internal(nullptr) // presence node
    , external(nullptr) // presence node
    , nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::has_data() const
{
    if (is_presence_container) return true;
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(internal != nullptr)
    {
        _children["internal"] = internal;
    }

    if(external != nullptr)
    {
        _children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        _children["nssa-external"] = nssa_external;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::has_data() const
{
    if (is_presence_container) return true;
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::has_operation() const
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

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::has_operation() const
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

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Ospfv3_()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
        ,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::~Ospfv3_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::has_operation() const
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

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Match()
    :
    internal(nullptr) // presence node
    , external(nullptr) // presence node
    , nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::has_data() const
{
    if (is_presence_container) return true;
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(internal != nullptr)
    {
        _children["internal"] = internal;
    }

    if(external != nullptr)
    {
        _children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        _children["nssa-external"] = nssa_external;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::has_data() const
{
    if (is_presence_container) return true;
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::has_operation() const
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

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::has_operation() const
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

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::Rip()
    :
    id{YType::str, "id"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::~Rip()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::RedistOptions()
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

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::Static()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::~Static()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::RedistOptions()
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

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Global()
    :
    application(this, {"name"})
    , bgp(this, {"as_number"})
    , connected(nullptr) // presence node
    , eigrp(this, {"as_number"})
    , isis(nullptr) // presence node
    , iso_igrp(nullptr) // presence node
    , lisp(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp>())
    , mobile(nullptr) // presence node
    , odr(nullptr) // presence node
    , ospf(this, {"id"})
    , ospfv3(this, {"id"})
    , rip(this, {"id"})
    , static_(nullptr) // presence node
{
    lisp->parent = this;

    yang_name = "global"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::~Global()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
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

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto ent_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application>();
        ent_->parent = this;
        application.append(ent_);
        return ent_;
    }

    if(child_yang_name == "bgp")
    {
        auto ent_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp>();
        ent_->parent = this;
        bgp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        auto ent_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp>();
        ent_->parent = this;
        eigrp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        auto ent_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf>();
        ent_->parent = this;
        ospf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ospfv3")
    {
        auto ent_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_>();
        ent_->parent = this;
        ospfv3.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rip")
    {
        auto ent_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip>();
        ent_->parent = this;
        rip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : application.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : bgp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(connected != nullptr)
    {
        _children["connected"] = connected;
    }

    count_ = 0;
    for (auto ent_ : eigrp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        _children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        _children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        _children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        _children["odr"] = odr;
    }

    count_ = 0;
    for (auto ent_ : ospf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ospfv3.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::Application()
    :
    name{YType::str, "name"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "application"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::~Application()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "bgp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::~Bgp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    ADD_KEY_TOKEN(as_number, "as-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::Connected()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "connected"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::~Connected()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::Eigrp()
    :
    as_number{YType::str, "as-number"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "eigrp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::~Eigrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(as_number, "as-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::Isis()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
        ,
    isis_area(this, {"name"})
    , redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::~Isis()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_area.len(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.len(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        auto ent_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea>();
        ent_->parent = this;
        isis_area.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : isis_area.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "redist-options" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    isis_level_routes{YType::enumeration, "isis-level-routes"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"}
        ,
    area_tag_route_map_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer>())
    , iso_igrp_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer>())
{
    area_tag_route_map_container->parent = this;
    iso_igrp_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    if(child_yang_name == "iso-igrp-container")
    {
        if(iso_igrp_container == nullptr)
        {
            iso_igrp_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer>();
        }
        return iso_igrp_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(area_tag_route_map_container != nullptr)
    {
        _children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    if(iso_igrp_container != nullptr)
    {
        _children["iso-igrp-container"] = iso_igrp_container;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "iso-igrp-container" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{

    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    if (is_presence_container) return true;
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::IsoIgrpContainer()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"}
{

    yang_name = "iso-igrp-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::~IsoIgrpContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::Lisp()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "lisp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::~Lisp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::Mobile()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "mobile"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::~Mobile()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::Odr()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "odr"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::~Odr()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Ospf()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"},
    vrf{YType::str, "vrf"}
        ,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::~Ospf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Match()
    :
    internal(nullptr) // presence node
    , external(nullptr) // presence node
    , nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::has_data() const
{
    if (is_presence_container) return true;
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(internal != nullptr)
    {
        _children["internal"] = internal;
    }

    if(external != nullptr)
    {
        _children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        _children["nssa-external"] = nssa_external;
    }

    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

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

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "ospfv3";
    ADD_KEY_TOKEN(id, "id");
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
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
    , external(nullptr) // presence node
    , nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(internal != nullptr)
    {
        _children["internal"] = internal;
    }

    if(external != nullptr)
    {
        _children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        _children["nssa-external"] = nssa_external;
    }

    return _children;
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

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "rip";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "static"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::~Static()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redist_options != nullptr)
    {
        _children["redist-options"] = redist_options;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "graceful-restart"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(helper != nullptr)
    {
        _children["helper"] = helper;
    }

    return _children;
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

    yang_name = "helper"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::~Helper()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , peering(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cache != nullptr)
    {
        _children["cache"] = cache;
    }

    if(peering != nullptr)
    {
        _children["peering"] = peering;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(selective != nullptr)
    {
        _children["selective"] = selective;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "summary-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
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

std::shared_ptr<ydk::Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Native::Router::Bgp::Bgp()
    :
    id{YType::str, "id"}
        ,
    bgp(std::make_shared<Native::Router::Bgp::Bgp_>())
    , peer_group(std::make_shared<Native::Router::Bgp::PeerGroup>())
    , neighbor(this, {"id"})
    , address_family(std::make_shared<Native::Router::Bgp::AddressFamily>())
    , template_(std::make_shared<Native::Router::Bgp::Template>())
    , timers(std::make_shared<Native::Router::Bgp::Timers>())
    , scope(std::make_shared<Native::Router::Bgp::Scope>())
{
    bgp->parent = this;
    peer_group->parent = this;
    address_family->parent = this;
    template_->parent = this;
    timers->parent = this;
    scope->parent = this;

    yang_name = "bgp"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Bgp::~Bgp()
{
}

bool Native::Router::Bgp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return id.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (peer_group !=  nullptr && peer_group->has_data())
	|| (address_family !=  nullptr && address_family->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (scope !=  nullptr && scope->has_data());
}

bool Native::Router::Bgp::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (peer_group !=  nullptr && peer_group->has_operation())
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (template_ !=  nullptr && template_->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Router::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:bgp";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::PeerGroup>();
        }
        return peer_group;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Router::Bgp::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::Router::Bgp::Template>();
        }
        return template_;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Bgp::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Router::Bgp::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(peer_group != nullptr)
    {
        _children["peer-group"] = peer_group;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(address_family != nullptr)
    {
        _children["address-family"] = address_family;
    }

    if(template_ != nullptr)
    {
        _children["template"] = template_;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(scope != nullptr)
    {
        _children["scope"] = scope;
    }

    return _children;
}

void Native::Router::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "peer-group" || name == "neighbor" || name == "address-family" || name == "template" || name == "timers" || name == "scope" || name == "id")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bgp_()
    :
    aigp_rib_metric{YType::empty, "aigp-rib-metric"},
    always_compare_med{YType::empty, "always-compare-med"},
    cluster_id{YType::str, "cluster-id"},
    deterministic_med{YType::empty, "deterministic-med"},
    enforce_first_as{YType::empty, "enforce-first-as"},
    enhanced_error{YType::boolean, "enhanced-error"},
    fast_external_fallover{YType::boolean, "fast-external-fallover"},
    log_neighbor_changes{YType::boolean, "log-neighbor-changes"},
    maxas_limit{YType::uint16, "maxas-limit"},
    maxcommunity_limit{YType::uint16, "maxcommunity-limit"},
    route_map_cache{YType::empty, "route-map-cache"},
    update_delay{YType::uint16, "update-delay"}
        ,
    asnotation(std::make_shared<Native::Router::Bgp::Bgp_::Asnotation>())
    , bestpath(std::make_shared<Native::Router::Bgp::Bgp_::Bestpath>())
    , client_to_client(std::make_shared<Native::Router::Bgp::Bgp_::ClientToClient>())
    , confederation(std::make_shared<Native::Router::Bgp::Bgp_::Confederation>())
    , consistency_checker(std::make_shared<Native::Router::Bgp::Bgp_::ConsistencyChecker>())
    , default_(std::make_shared<Native::Router::Bgp::Bgp_::Default>())
    , dynamic_med_interval(std::make_shared<Native::Router::Bgp::Bgp_::DynamicMedInterval>())
    , graceful_restart(nullptr) // presence node
    , ha_mode(std::make_shared<Native::Router::Bgp::Bgp_::HaMode>())
    , listen(std::make_shared<Native::Router::Bgp::Bgp_::Listen>())
    , maxextcommunity_limit(std::make_shared<Native::Router::Bgp::Bgp_::MaxextcommunityLimit>())
    , nopeerup_delay(std::make_shared<Native::Router::Bgp::Bgp_::NopeerupDelay>())
    , refresh(std::make_shared<Native::Router::Bgp::Bgp_::Refresh>())
    , regexp(std::make_shared<Native::Router::Bgp::Bgp_::Regexp>())
    , router_id(std::make_shared<Native::Router::Bgp::Bgp_::RouterId>())
    , sso(std::make_shared<Native::Router::Bgp::Bgp_::Sso>())
    , transport(std::make_shared<Native::Router::Bgp::Bgp_::Transport>())
{
    asnotation->parent = this;
    bestpath->parent = this;
    client_to_client->parent = this;
    confederation->parent = this;
    consistency_checker->parent = this;
    default_->parent = this;
    dynamic_med_interval->parent = this;
    ha_mode->parent = this;
    listen->parent = this;
    maxextcommunity_limit->parent = this;
    nopeerup_delay->parent = this;
    refresh->parent = this;
    regexp->parent = this;
    router_id->parent = this;
    sso->parent = this;
    transport->parent = this;

    yang_name = "bgp"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::Bgp_::has_data() const
{
    if (is_presence_container) return true;
    return aigp_rib_metric.is_set
	|| always_compare_med.is_set
	|| cluster_id.is_set
	|| deterministic_med.is_set
	|| enforce_first_as.is_set
	|| enhanced_error.is_set
	|| fast_external_fallover.is_set
	|| log_neighbor_changes.is_set
	|| maxas_limit.is_set
	|| maxcommunity_limit.is_set
	|| route_map_cache.is_set
	|| update_delay.is_set
	|| (asnotation !=  nullptr && asnotation->has_data())
	|| (bestpath !=  nullptr && bestpath->has_data())
	|| (client_to_client !=  nullptr && client_to_client->has_data())
	|| (confederation !=  nullptr && confederation->has_data())
	|| (consistency_checker !=  nullptr && consistency_checker->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (dynamic_med_interval !=  nullptr && dynamic_med_interval->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (ha_mode !=  nullptr && ha_mode->has_data())
	|| (listen !=  nullptr && listen->has_data())
	|| (maxextcommunity_limit !=  nullptr && maxextcommunity_limit->has_data())
	|| (nopeerup_delay !=  nullptr && nopeerup_delay->has_data())
	|| (refresh !=  nullptr && refresh->has_data())
	|| (regexp !=  nullptr && regexp->has_data())
	|| (router_id !=  nullptr && router_id->has_data())
	|| (sso !=  nullptr && sso->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Router::Bgp::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aigp_rib_metric.yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(cluster_id.yfilter)
	|| ydk::is_set(deterministic_med.yfilter)
	|| ydk::is_set(enforce_first_as.yfilter)
	|| ydk::is_set(enhanced_error.yfilter)
	|| ydk::is_set(fast_external_fallover.yfilter)
	|| ydk::is_set(log_neighbor_changes.yfilter)
	|| ydk::is_set(maxas_limit.yfilter)
	|| ydk::is_set(maxcommunity_limit.yfilter)
	|| ydk::is_set(route_map_cache.yfilter)
	|| ydk::is_set(update_delay.yfilter)
	|| (asnotation !=  nullptr && asnotation->has_operation())
	|| (bestpath !=  nullptr && bestpath->has_operation())
	|| (client_to_client !=  nullptr && client_to_client->has_operation())
	|| (confederation !=  nullptr && confederation->has_operation())
	|| (consistency_checker !=  nullptr && consistency_checker->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (dynamic_med_interval !=  nullptr && dynamic_med_interval->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (ha_mode !=  nullptr && ha_mode->has_operation())
	|| (listen !=  nullptr && listen->has_operation())
	|| (maxextcommunity_limit !=  nullptr && maxextcommunity_limit->has_operation())
	|| (nopeerup_delay !=  nullptr && nopeerup_delay->has_operation())
	|| (refresh !=  nullptr && refresh->has_operation())
	|| (regexp !=  nullptr && regexp->has_operation())
	|| (router_id !=  nullptr && router_id->has_operation())
	|| (sso !=  nullptr && sso->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Router::Bgp::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aigp_rib_metric.is_set || is_set(aigp_rib_metric.yfilter)) leaf_name_data.push_back(aigp_rib_metric.get_name_leafdata());
    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.yfilter)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (deterministic_med.is_set || is_set(deterministic_med.yfilter)) leaf_name_data.push_back(deterministic_med.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.yfilter)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (enhanced_error.is_set || is_set(enhanced_error.yfilter)) leaf_name_data.push_back(enhanced_error.get_name_leafdata());
    if (fast_external_fallover.is_set || is_set(fast_external_fallover.yfilter)) leaf_name_data.push_back(fast_external_fallover.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.yfilter)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());
    if (maxas_limit.is_set || is_set(maxas_limit.yfilter)) leaf_name_data.push_back(maxas_limit.get_name_leafdata());
    if (maxcommunity_limit.is_set || is_set(maxcommunity_limit.yfilter)) leaf_name_data.push_back(maxcommunity_limit.get_name_leafdata());
    if (route_map_cache.is_set || is_set(route_map_cache.yfilter)) leaf_name_data.push_back(route_map_cache.get_name_leafdata());
    if (update_delay.is_set || is_set(update_delay.yfilter)) leaf_name_data.push_back(update_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asnotation")
    {
        if(asnotation == nullptr)
        {
            asnotation = std::make_shared<Native::Router::Bgp::Bgp_::Asnotation>();
        }
        return asnotation;
    }

    if(child_yang_name == "bestpath")
    {
        if(bestpath == nullptr)
        {
            bestpath = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath>();
        }
        return bestpath;
    }

    if(child_yang_name == "client-to-client")
    {
        if(client_to_client == nullptr)
        {
            client_to_client = std::make_shared<Native::Router::Bgp::Bgp_::ClientToClient>();
        }
        return client_to_client;
    }

    if(child_yang_name == "confederation")
    {
        if(confederation == nullptr)
        {
            confederation = std::make_shared<Native::Router::Bgp::Bgp_::Confederation>();
        }
        return confederation;
    }

    if(child_yang_name == "consistency-checker")
    {
        if(consistency_checker == nullptr)
        {
            consistency_checker = std::make_shared<Native::Router::Bgp::Bgp_::ConsistencyChecker>();
        }
        return consistency_checker;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Bgp::Bgp_::Default>();
        }
        return default_;
    }

    if(child_yang_name == "dynamic-med-interval")
    {
        if(dynamic_med_interval == nullptr)
        {
            dynamic_med_interval = std::make_shared<Native::Router::Bgp::Bgp_::DynamicMedInterval>();
        }
        return dynamic_med_interval;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Bgp::Bgp_::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "ha-mode")
    {
        if(ha_mode == nullptr)
        {
            ha_mode = std::make_shared<Native::Router::Bgp::Bgp_::HaMode>();
        }
        return ha_mode;
    }

    if(child_yang_name == "listen")
    {
        if(listen == nullptr)
        {
            listen = std::make_shared<Native::Router::Bgp::Bgp_::Listen>();
        }
        return listen;
    }

    if(child_yang_name == "maxextcommunity-limit")
    {
        if(maxextcommunity_limit == nullptr)
        {
            maxextcommunity_limit = std::make_shared<Native::Router::Bgp::Bgp_::MaxextcommunityLimit>();
        }
        return maxextcommunity_limit;
    }

    if(child_yang_name == "nopeerup-delay")
    {
        if(nopeerup_delay == nullptr)
        {
            nopeerup_delay = std::make_shared<Native::Router::Bgp::Bgp_::NopeerupDelay>();
        }
        return nopeerup_delay;
    }

    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Router::Bgp::Bgp_::Refresh>();
        }
        return refresh;
    }

    if(child_yang_name == "regexp")
    {
        if(regexp == nullptr)
        {
            regexp = std::make_shared<Native::Router::Bgp::Bgp_::Regexp>();
        }
        return regexp;
    }

    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Native::Router::Bgp::Bgp_::RouterId>();
        }
        return router_id;
    }

    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::Bgp_::Sso>();
        }
        return sso;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Router::Bgp::Bgp_::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(asnotation != nullptr)
    {
        _children["asnotation"] = asnotation;
    }

    if(bestpath != nullptr)
    {
        _children["bestpath"] = bestpath;
    }

    if(client_to_client != nullptr)
    {
        _children["client-to-client"] = client_to_client;
    }

    if(confederation != nullptr)
    {
        _children["confederation"] = confederation;
    }

    if(consistency_checker != nullptr)
    {
        _children["consistency-checker"] = consistency_checker;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(dynamic_med_interval != nullptr)
    {
        _children["dynamic-med-interval"] = dynamic_med_interval;
    }

    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(ha_mode != nullptr)
    {
        _children["ha-mode"] = ha_mode;
    }

    if(listen != nullptr)
    {
        _children["listen"] = listen;
    }

    if(maxextcommunity_limit != nullptr)
    {
        _children["maxextcommunity-limit"] = maxextcommunity_limit;
    }

    if(nopeerup_delay != nullptr)
    {
        _children["nopeerup-delay"] = nopeerup_delay;
    }

    if(refresh != nullptr)
    {
        _children["refresh"] = refresh;
    }

    if(regexp != nullptr)
    {
        _children["regexp"] = regexp;
    }

    if(router_id != nullptr)
    {
        _children["router-id"] = router_id;
    }

    if(sso != nullptr)
    {
        _children["sso"] = sso;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Router::Bgp::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aigp-rib-metric")
    {
        aigp_rib_metric = value;
        aigp_rib_metric.value_namespace = name_space;
        aigp_rib_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
        cluster_id.value_namespace = name_space;
        cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deterministic-med")
    {
        deterministic_med = value;
        deterministic_med.value_namespace = name_space;
        deterministic_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
        enforce_first_as.value_namespace = name_space;
        enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhanced-error")
    {
        enhanced_error = value;
        enhanced_error.value_namespace = name_space;
        enhanced_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-external-fallover")
    {
        fast_external_fallover = value;
        fast_external_fallover.value_namespace = name_space;
        fast_external_fallover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
        log_neighbor_changes.value_namespace = name_space;
        log_neighbor_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxas-limit")
    {
        maxas_limit = value;
        maxas_limit.value_namespace = name_space;
        maxas_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxcommunity-limit")
    {
        maxcommunity_limit = value;
        maxcommunity_limit.value_namespace = name_space;
        maxcommunity_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map-cache")
    {
        route_map_cache = value;
        route_map_cache.value_namespace = name_space;
        route_map_cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-delay")
    {
        update_delay = value;
        update_delay.value_namespace = name_space;
        update_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aigp-rib-metric")
    {
        aigp_rib_metric.yfilter = yfilter;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "cluster-id")
    {
        cluster_id.yfilter = yfilter;
    }
    if(value_path == "deterministic-med")
    {
        deterministic_med.yfilter = yfilter;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "enhanced-error")
    {
        enhanced_error.yfilter = yfilter;
    }
    if(value_path == "fast-external-fallover")
    {
        fast_external_fallover.yfilter = yfilter;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes.yfilter = yfilter;
    }
    if(value_path == "maxas-limit")
    {
        maxas_limit.yfilter = yfilter;
    }
    if(value_path == "maxcommunity-limit")
    {
        maxcommunity_limit.yfilter = yfilter;
    }
    if(value_path == "route-map-cache")
    {
        route_map_cache.yfilter = yfilter;
    }
    if(value_path == "update-delay")
    {
        update_delay.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asnotation" || name == "bestpath" || name == "client-to-client" || name == "confederation" || name == "consistency-checker" || name == "default" || name == "dynamic-med-interval" || name == "graceful-restart" || name == "ha-mode" || name == "listen" || name == "maxextcommunity-limit" || name == "nopeerup-delay" || name == "refresh" || name == "regexp" || name == "router-id" || name == "sso" || name == "transport" || name == "aigp-rib-metric" || name == "always-compare-med" || name == "cluster-id" || name == "deterministic-med" || name == "enforce-first-as" || name == "enhanced-error" || name == "fast-external-fallover" || name == "log-neighbor-changes" || name == "maxas-limit" || name == "maxcommunity-limit" || name == "route-map-cache" || name == "update-delay")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Asnotation::Asnotation()
    :
    dot{YType::empty, "dot"}
{

    yang_name = "asnotation"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::Asnotation::~Asnotation()
{
}

bool Native::Router::Bgp::Bgp_::Asnotation::has_data() const
{
    if (is_presence_container) return true;
    return dot.is_set;
}

bool Native::Router::Bgp::Bgp_::Asnotation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Asnotation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asnotation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Asnotation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot.is_set || is_set(dot.yfilter)) leaf_name_data.push_back(dot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Asnotation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Asnotation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::Asnotation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot")
    {
        dot = value;
        dot.value_namespace = name_space;
        dot.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Asnotation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot")
    {
        dot.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Asnotation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bestpath::Bestpath()
    :
    as_path{YType::enumeration, "as-path"},
    compare_routerid{YType::empty, "compare-routerid"}
        ,
    cost_community(std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::CostCommunity>())
    , igp_metric(std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::IgpMetric>())
    , med(std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::Med>())
{
    cost_community->parent = this;
    igp_metric->parent = this;
    med->parent = this;

    yang_name = "bestpath"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::Bestpath::~Bestpath()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::has_data() const
{
    if (is_presence_container) return true;
    return as_path.is_set
	|| compare_routerid.is_set
	|| (cost_community !=  nullptr && cost_community->has_data())
	|| (igp_metric !=  nullptr && igp_metric->has_data())
	|| (med !=  nullptr && med->has_data());
}

bool Native::Router::Bgp::Bgp_::Bestpath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(compare_routerid.yfilter)
	|| (cost_community !=  nullptr && cost_community->has_operation())
	|| (igp_metric !=  nullptr && igp_metric->has_operation())
	|| (med !=  nullptr && med->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Bestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bestpath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Bestpath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (compare_routerid.is_set || is_set(compare_routerid.yfilter)) leaf_name_data.push_back(compare_routerid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Bestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost-community")
    {
        if(cost_community == nullptr)
        {
            cost_community = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::CostCommunity>();
        }
        return cost_community;
    }

    if(child_yang_name == "igp-metric")
    {
        if(igp_metric == nullptr)
        {
            igp_metric = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::IgpMetric>();
        }
        return igp_metric;
    }

    if(child_yang_name == "med")
    {
        if(med == nullptr)
        {
            med = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::Med>();
        }
        return med;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Bestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cost_community != nullptr)
    {
        _children["cost-community"] = cost_community;
    }

    if(igp_metric != nullptr)
    {
        _children["igp-metric"] = igp_metric;
    }

    if(med != nullptr)
    {
        _children["med"] = med;
    }

    return _children;
}

void Native::Router::Bgp::Bgp_::Bestpath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compare-routerid")
    {
        compare_routerid = value;
        compare_routerid.value_namespace = name_space;
        compare_routerid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Bestpath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "compare-routerid")
    {
        compare_routerid.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Bestpath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost-community" || name == "igp-metric" || name == "med" || name == "as-path" || name == "compare-routerid")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::CostCommunity()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "cost-community"; yang_parent_name = "bestpath"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::~CostCommunity()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set;
}

bool Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::IgpMetric()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "igp-metric"; yang_parent_name = "bestpath"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::~IgpMetric()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set;
}

bool Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bestpath::Med::Med()
    :
    missing_as_worst{YType::empty, "missing-as-worst"}
        ,
    confed(nullptr) // presence node
{

    yang_name = "med"; yang_parent_name = "bestpath"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::Bestpath::Med::~Med()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::has_data() const
{
    if (is_presence_container) return true;
    return missing_as_worst.is_set
	|| (confed !=  nullptr && confed->has_data());
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(missing_as_worst.yfilter)
	|| (confed !=  nullptr && confed->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Bestpath::Med::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "med";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Bestpath::Med::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (missing_as_worst.is_set || is_set(missing_as_worst.yfilter)) leaf_name_data.push_back(missing_as_worst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Bestpath::Med::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "confed")
    {
        if(confed == nullptr)
        {
            confed = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::Med::Confed>();
        }
        return confed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Bestpath::Med::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(confed != nullptr)
    {
        _children["confed"] = confed;
    }

    return _children;
}

void Native::Router::Bgp::Bgp_::Bestpath::Med::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "missing-as-worst")
    {
        missing_as_worst = value;
        missing_as_worst.value_namespace = name_space;
        missing_as_worst.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Bestpath::Med::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "missing-as-worst")
    {
        missing_as_worst.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confed" || name == "missing-as-worst")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::Confed()
    :
    missing_as_worst{YType::empty, "missing-as-worst"}
{

    yang_name = "confed"; yang_parent_name = "med"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::~Confed()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::has_data() const
{
    if (is_presence_container) return true;
    return missing_as_worst.is_set;
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(missing_as_worst.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (missing_as_worst.is_set || is_set(missing_as_worst.yfilter)) leaf_name_data.push_back(missing_as_worst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "missing-as-worst")
    {
        missing_as_worst = value;
        missing_as_worst.value_namespace = name_space;
        missing_as_worst.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "missing-as-worst")
    {
        missing_as_worst.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "missing-as-worst")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::ClientToClient::ClientToClient()
    :
    reflection{YType::boolean, "reflection"}
{

    yang_name = "client-to-client"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::ClientToClient::~ClientToClient()
{
}

bool Native::Router::Bgp::Bgp_::ClientToClient::has_data() const
{
    if (is_presence_container) return true;
    return reflection.is_set;
}

bool Native::Router::Bgp::Bgp_::ClientToClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reflection.yfilter);
}

std::string Native::Router::Bgp::Bgp_::ClientToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::ClientToClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reflection.is_set || is_set(reflection.yfilter)) leaf_name_data.push_back(reflection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::ClientToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::ClientToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::ClientToClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reflection")
    {
        reflection = value;
        reflection.value_namespace = name_space;
        reflection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::ClientToClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reflection")
    {
        reflection.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::ClientToClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reflection")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Confederation::Confederation()
    :
    identifier{YType::uint32, "identifier"}
        ,
    peers(std::make_shared<Native::Router::Bgp::Bgp_::Confederation::Peers>())
{
    peers->parent = this;

    yang_name = "confederation"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::Confederation::~Confederation()
{
}

bool Native::Router::Bgp::Bgp_::Confederation::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set
	|| (peers !=  nullptr && peers->has_data());
}

bool Native::Router::Bgp::Bgp_::Confederation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| (peers !=  nullptr && peers->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Confederation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Confederation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Confederation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<Native::Router::Bgp::Bgp_::Confederation::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Confederation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peers != nullptr)
    {
        _children["peers"] = peers;
    }

    return _children;
}

void Native::Router::Bgp::Bgp_::Confederation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Confederation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Confederation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers" || name == "identifier")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Confederation::Peers::Peers()
    :
    peers_as{YType::uint32, "peers-as"}
{

    yang_name = "peers"; yang_parent_name = "confederation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::Confederation::Peers::~Peers()
{
}

bool Native::Router::Bgp::Bgp_::Confederation::Peers::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : peers_as.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Bgp_::Confederation::Peers::has_operation() const
{
    for (auto const & leaf : peers_as.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peers_as.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Confederation::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Confederation::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto peers_as_name_datas = peers_as.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), peers_as_name_datas.begin(), peers_as_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Confederation::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Confederation::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::Confederation::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peers-as")
    {
        peers_as.append(value);
    }
}

void Native::Router::Bgp::Bgp_::Confederation::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peers-as")
    {
        peers_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Confederation::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers-as")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::ConsistencyChecker()
    :
    auto_repair(nullptr) // presence node
    , error_message(nullptr) // presence node
{

    yang_name = "consistency-checker"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::~ConsistencyChecker()
{
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::has_data() const
{
    if (is_presence_container) return true;
    return (auto_repair !=  nullptr && auto_repair->has_data())
	|| (error_message !=  nullptr && error_message->has_data());
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::has_operation() const
{
    return is_set(yfilter)
	|| (auto_repair !=  nullptr && auto_repair->has_operation())
	|| (error_message !=  nullptr && error_message->has_operation());
}

std::string Native::Router::Bgp::Bgp_::ConsistencyChecker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consistency-checker";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::ConsistencyChecker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::ConsistencyChecker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-repair")
    {
        if(auto_repair == nullptr)
        {
            auto_repair = std::make_shared<Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair>();
        }
        return auto_repair;
    }

    if(child_yang_name == "error-message")
    {
        if(error_message == nullptr)
        {
            error_message = std::make_shared<Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage>();
        }
        return error_message;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::ConsistencyChecker::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_repair != nullptr)
    {
        _children["auto-repair"] = auto_repair;
    }

    if(error_message != nullptr)
    {
        _children["error-message"] = error_message;
    }

    return _children;
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-repair" || name == "error-message")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::AutoRepair()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "auto-repair"; yang_parent_name = "consistency-checker"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::~AutoRepair()
{
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::ErrorMessage()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "error-message"; yang_parent_name = "consistency-checker"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::~ErrorMessage()
{
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-message";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Default::Default()
    :
    ipv4_unicast{YType::boolean, "ipv4-unicast"},
    ipv6_nexthop{YType::boolean, "ipv6-nexthop"},
    local_preference{YType::uint32, "local-preference"},
    route_target{YType::enumeration, "route-target"}
{

    yang_name = "default"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::Default::~Default()
{
}

bool Native::Router::Bgp::Bgp_::Default::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_unicast.is_set
	|| ipv6_nexthop.is_set
	|| local_preference.is_set
	|| route_target.is_set;
}

bool Native::Router::Bgp::Bgp_::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_unicast.yfilter)
	|| ydk::is_set(ipv6_nexthop.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(route_target.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_unicast.is_set || is_set(ipv4_unicast.yfilter)) leaf_name_data.push_back(ipv4_unicast.get_name_leafdata());
    if (ipv6_nexthop.is_set || is_set(ipv6_nexthop.yfilter)) leaf_name_data.push_back(ipv6_nexthop.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-unicast")
    {
        ipv4_unicast = value;
        ipv4_unicast.value_namespace = name_space;
        ipv4_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-nexthop")
    {
        ipv6_nexthop = value;
        ipv6_nexthop.value_namespace = name_space;
        ipv6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-unicast")
    {
        ipv4_unicast.yfilter = yfilter;
    }
    if(value_path == "ipv6-nexthop")
    {
        ipv6_nexthop.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast" || name == "ipv6-nexthop" || name == "local-preference" || name == "route-target")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::DynamicMedInterval::DynamicMedInterval()
    :
    interval{YType::uint32, "interval"}
{

    yang_name = "dynamic-med-interval"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::DynamicMedInterval::~DynamicMedInterval()
{
}

bool Native::Router::Bgp::Bgp_::DynamicMedInterval::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Router::Bgp::Bgp_::DynamicMedInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::Bgp::Bgp_::DynamicMedInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-med-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::DynamicMedInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::DynamicMedInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::DynamicMedInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::DynamicMedInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::DynamicMedInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::DynamicMedInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::GracefulRestart::GracefulRestart()
    :
    extended{YType::empty, "extended"},
    restart_time{YType::uint16, "restart-time"},
    stalepath_time{YType::uint16, "stalepath-time"}
{

    yang_name = "graceful-restart"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Bgp_::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Bgp::Bgp_::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return extended.is_set
	|| restart_time.is_set
	|| stalepath_time.is_set;
}

bool Native::Router::Bgp::Bgp_::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stalepath_time.yfilter);
}

std::string Native::Router::Bgp::Bgp_::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stalepath_time.is_set || is_set(stalepath_time.yfilter)) leaf_name_data.push_back(stalepath_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stalepath-time")
    {
        stalepath_time = value;
        stalepath_time.value_namespace = name_space;
        stalepath_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stalepath-time")
    {
        stalepath_time.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended" || name == "restart-time" || name == "stalepath-time")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::HaMode::HaMode()
    :
    sso(nullptr) // presence node
{

    yang_name = "ha-mode"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::HaMode::~HaMode()
{
}

bool Native::Router::Bgp::Bgp_::HaMode::has_data() const
{
    if (is_presence_container) return true;
    return (sso !=  nullptr && sso->has_data());
}

bool Native::Router::Bgp::Bgp_::HaMode::has_operation() const
{
    return is_set(yfilter)
	|| (sso !=  nullptr && sso->has_operation());
}

std::string Native::Router::Bgp::Bgp_::HaMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::HaMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::HaMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::Bgp_::HaMode::Sso>();
        }
        return sso;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::HaMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sso != nullptr)
    {
        _children["sso"] = sso;
    }

    return _children;
}

void Native::Router::Bgp::Bgp_::HaMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::HaMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::HaMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sso")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::HaMode::Sso::Sso()
    :
    prefer{YType::empty, "prefer"}
{

    yang_name = "sso"; yang_parent_name = "ha-mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Bgp_::HaMode::Sso::~Sso()
{
}

bool Native::Router::Bgp::Bgp_::HaMode::Sso::has_data() const
{
    if (is_presence_container) return true;
    return prefer.is_set;
}

bool Native::Router::Bgp::Bgp_::HaMode::Sso::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefer.yfilter);
}

std::string Native::Router::Bgp::Bgp_::HaMode::Sso::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::HaMode::Sso::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::HaMode::Sso::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::HaMode::Sso::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::HaMode::Sso::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::HaMode::Sso::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::HaMode::Sso::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefer")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Listen::Listen()
    :
    limit{YType::uint16, "limit"}
        ,
    range(this, {"network_range", "peer_group"})
{

    yang_name = "listen"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::Listen::~Listen()
{
}

bool Native::Router::Bgp::Bgp_::Listen::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return limit.is_set;
}

bool Native::Router::Bgp::Bgp_::Listen::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Listen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Listen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Listen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Bgp_::Listen::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Listen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Bgp_::Listen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Listen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Listen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "limit")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Listen::Range::Range()
    :
    network_range{YType::str, "network-range"},
    peer_group{YType::str, "peer-group"}
{

    yang_name = "range"; yang_parent_name = "listen"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::Listen::Range::~Range()
{
}

bool Native::Router::Bgp::Bgp_::Listen::Range::has_data() const
{
    if (is_presence_container) return true;
    return network_range.is_set
	|| peer_group.is_set;
}

bool Native::Router::Bgp::Bgp_::Listen::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(network_range.yfilter)
	|| ydk::is_set(peer_group.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Listen::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    ADD_KEY_TOKEN(network_range, "network-range");
    ADD_KEY_TOKEN(peer_group, "peer-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Listen::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_range.is_set || is_set(network_range.yfilter)) leaf_name_data.push_back(network_range.get_name_leafdata());
    if (peer_group.is_set || is_set(peer_group.yfilter)) leaf_name_data.push_back(peer_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Listen::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Listen::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::Listen::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-range")
    {
        network_range = value;
        network_range.value_namespace = name_space;
        network_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-group")
    {
        peer_group = value;
        peer_group.value_namespace = name_space;
        peer_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Listen::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-range")
    {
        network_range.yfilter = yfilter;
    }
    if(value_path == "peer-group")
    {
        peer_group.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Listen::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-range" || name == "peer-group")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::MaxextcommunityLimit::MaxextcommunityLimit()
    :
    number{YType::uint16, "number"}
{

    yang_name = "maxextcommunity-limit"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::MaxextcommunityLimit::~MaxextcommunityLimit()
{
}

bool Native::Router::Bgp::Bgp_::MaxextcommunityLimit::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set;
}

bool Native::Router::Bgp::Bgp_::MaxextcommunityLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Router::Bgp::Bgp_::MaxextcommunityLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxextcommunity-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::MaxextcommunityLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::MaxextcommunityLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::MaxextcommunityLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::MaxextcommunityLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::MaxextcommunityLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::MaxextcommunityLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::NopeerupDelay::NopeerupDelay()
    :
    cold_boot{YType::uint16, "cold-boot"},
    nsf_switchover{YType::uint16, "nsf-switchover"},
    post_boot{YType::uint16, "post-boot"},
    user_initiated{YType::uint16, "user-initiated"}
{

    yang_name = "nopeerup-delay"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::NopeerupDelay::~NopeerupDelay()
{
}

bool Native::Router::Bgp::Bgp_::NopeerupDelay::has_data() const
{
    if (is_presence_container) return true;
    return cold_boot.is_set
	|| nsf_switchover.is_set
	|| post_boot.is_set
	|| user_initiated.is_set;
}

bool Native::Router::Bgp::Bgp_::NopeerupDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cold_boot.yfilter)
	|| ydk::is_set(nsf_switchover.yfilter)
	|| ydk::is_set(post_boot.yfilter)
	|| ydk::is_set(user_initiated.yfilter);
}

std::string Native::Router::Bgp::Bgp_::NopeerupDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nopeerup-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::NopeerupDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cold_boot.is_set || is_set(cold_boot.yfilter)) leaf_name_data.push_back(cold_boot.get_name_leafdata());
    if (nsf_switchover.is_set || is_set(nsf_switchover.yfilter)) leaf_name_data.push_back(nsf_switchover.get_name_leafdata());
    if (post_boot.is_set || is_set(post_boot.yfilter)) leaf_name_data.push_back(post_boot.get_name_leafdata());
    if (user_initiated.is_set || is_set(user_initiated.yfilter)) leaf_name_data.push_back(user_initiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::NopeerupDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::NopeerupDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::NopeerupDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cold-boot")
    {
        cold_boot = value;
        cold_boot.value_namespace = name_space;
        cold_boot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-switchover")
    {
        nsf_switchover = value;
        nsf_switchover.value_namespace = name_space;
        nsf_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "post-boot")
    {
        post_boot = value;
        post_boot.value_namespace = name_space;
        post_boot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-initiated")
    {
        user_initiated = value;
        user_initiated.value_namespace = name_space;
        user_initiated.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::NopeerupDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cold-boot")
    {
        cold_boot.yfilter = yfilter;
    }
    if(value_path == "nsf-switchover")
    {
        nsf_switchover.yfilter = yfilter;
    }
    if(value_path == "post-boot")
    {
        post_boot.yfilter = yfilter;
    }
    if(value_path == "user-initiated")
    {
        user_initiated.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::NopeerupDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cold-boot" || name == "nsf-switchover" || name == "post-boot" || name == "user-initiated")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Refresh::Refresh()
    :
    max_eor_time(std::make_shared<Native::Router::Bgp::Bgp_::Refresh::MaxEorTime>())
    , stalepath_time(std::make_shared<Native::Router::Bgp::Bgp_::Refresh::StalepathTime>())
{
    max_eor_time->parent = this;
    stalepath_time->parent = this;

    yang_name = "refresh"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::Refresh::~Refresh()
{
}

bool Native::Router::Bgp::Bgp_::Refresh::has_data() const
{
    if (is_presence_container) return true;
    return (max_eor_time !=  nullptr && max_eor_time->has_data())
	|| (stalepath_time !=  nullptr && stalepath_time->has_data());
}

bool Native::Router::Bgp::Bgp_::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| (max_eor_time !=  nullptr && max_eor_time->has_operation())
	|| (stalepath_time !=  nullptr && stalepath_time->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-eor-time")
    {
        if(max_eor_time == nullptr)
        {
            max_eor_time = std::make_shared<Native::Router::Bgp::Bgp_::Refresh::MaxEorTime>();
        }
        return max_eor_time;
    }

    if(child_yang_name == "stalepath-time")
    {
        if(stalepath_time == nullptr)
        {
            stalepath_time = std::make_shared<Native::Router::Bgp::Bgp_::Refresh::StalepathTime>();
        }
        return stalepath_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(max_eor_time != nullptr)
    {
        _children["max-eor-time"] = max_eor_time;
    }

    if(stalepath_time != nullptr)
    {
        _children["stalepath-time"] = stalepath_time;
    }

    return _children;
}

void Native::Router::Bgp::Bgp_::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-eor-time" || name == "stalepath-time")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Refresh::MaxEorTime::MaxEorTime()
    :
    refresh_disable{YType::enumeration, "refresh-disable"},
    timer_interval{YType::uint16, "timer-interval"}
{

    yang_name = "max-eor-time"; yang_parent_name = "refresh"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::Refresh::MaxEorTime::~MaxEorTime()
{
}

bool Native::Router::Bgp::Bgp_::Refresh::MaxEorTime::has_data() const
{
    if (is_presence_container) return true;
    return refresh_disable.is_set
	|| timer_interval.is_set;
}

bool Native::Router::Bgp::Bgp_::Refresh::MaxEorTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(refresh_disable.yfilter)
	|| ydk::is_set(timer_interval.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Refresh::MaxEorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-eor-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Refresh::MaxEorTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refresh_disable.is_set || is_set(refresh_disable.yfilter)) leaf_name_data.push_back(refresh_disable.get_name_leafdata());
    if (timer_interval.is_set || is_set(timer_interval.yfilter)) leaf_name_data.push_back(timer_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Refresh::MaxEorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Refresh::MaxEorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::Refresh::MaxEorTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "refresh-disable")
    {
        refresh_disable = value;
        refresh_disable.value_namespace = name_space;
        refresh_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-interval")
    {
        timer_interval = value;
        timer_interval.value_namespace = name_space;
        timer_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Refresh::MaxEorTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "refresh-disable")
    {
        refresh_disable.yfilter = yfilter;
    }
    if(value_path == "timer-interval")
    {
        timer_interval.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Refresh::MaxEorTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh-disable" || name == "timer-interval")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Refresh::StalepathTime::StalepathTime()
    :
    refresh_disable{YType::enumeration, "refresh-disable"},
    timer_interval{YType::uint16, "timer-interval"}
{

    yang_name = "stalepath-time"; yang_parent_name = "refresh"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::Refresh::StalepathTime::~StalepathTime()
{
}

bool Native::Router::Bgp::Bgp_::Refresh::StalepathTime::has_data() const
{
    if (is_presence_container) return true;
    return refresh_disable.is_set
	|| timer_interval.is_set;
}

bool Native::Router::Bgp::Bgp_::Refresh::StalepathTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(refresh_disable.yfilter)
	|| ydk::is_set(timer_interval.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Refresh::StalepathTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stalepath-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Refresh::StalepathTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refresh_disable.is_set || is_set(refresh_disable.yfilter)) leaf_name_data.push_back(refresh_disable.get_name_leafdata());
    if (timer_interval.is_set || is_set(timer_interval.yfilter)) leaf_name_data.push_back(timer_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Refresh::StalepathTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Refresh::StalepathTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::Refresh::StalepathTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "refresh-disable")
    {
        refresh_disable = value;
        refresh_disable.value_namespace = name_space;
        refresh_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-interval")
    {
        timer_interval = value;
        timer_interval.value_namespace = name_space;
        timer_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Refresh::StalepathTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "refresh-disable")
    {
        refresh_disable.yfilter = yfilter;
    }
    if(value_path == "timer-interval")
    {
        timer_interval.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Refresh::StalepathTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh-disable" || name == "timer-interval")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Regexp::Regexp()
    :
    deterministic{YType::boolean, "deterministic"}
{

    yang_name = "regexp"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::Regexp::~Regexp()
{
}

bool Native::Router::Bgp::Bgp_::Regexp::has_data() const
{
    if (is_presence_container) return true;
    return deterministic.is_set;
}

bool Native::Router::Bgp::Bgp_::Regexp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deterministic.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Regexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regexp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Regexp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deterministic.is_set || is_set(deterministic.yfilter)) leaf_name_data.push_back(deterministic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Regexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Regexp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::Regexp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deterministic")
    {
        deterministic = value;
        deterministic.value_namespace = name_space;
        deterministic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Regexp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deterministic")
    {
        deterministic.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Regexp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deterministic")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::RouterId::RouterId()
    :
    ip_id{YType::str, "ip-id"},
    vrf{YType::enumeration, "vrf"}
        ,
    interface(std::make_shared<Native::Router::Bgp::Bgp_::RouterId::Interface>())
{
    interface->parent = this;

    yang_name = "router-id"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::RouterId::~RouterId()
{
}

bool Native::Router::Bgp::Bgp_::RouterId::has_data() const
{
    if (is_presence_container) return true;
    return ip_id.is_set
	|| vrf.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::Bgp::Bgp_::RouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::Bgp::Bgp_::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::RouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_id.is_set || is_set(ip_id.yfilter)) leaf_name_data.push_back(ip_id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Bgp::Bgp_::RouterId::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::Router::Bgp::Bgp_::RouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-id")
    {
        ip_id = value;
        ip_id.value_namespace = name_space;
        ip_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::RouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-id")
    {
        ip_id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ip-id" || name == "vrf")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::RouterId::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Router::Bgp::Bgp_::RouterId::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Router::Bgp::Bgp_::RouterId::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Router::Bgp::Bgp_::RouterId::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Router::Bgp::Bgp_::RouterId::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::RouterId::Interface::~Interface()
{
}

bool Native::Router::Bgp::Bgp_::RouterId::Interface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::Bgp::Bgp_::RouterId::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Bgp::Bgp_::RouterId::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::RouterId::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::RouterId::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Bgp::Bgp_::RouterId::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Bgp::Bgp_::RouterId::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Bgp::Bgp_::RouterId::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Bgp::Bgp_::RouterId::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::RouterId::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Router::Bgp::Bgp_::RouterId::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
}

void Native::Router::Bgp::Bgp_::RouterId::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::RouterId::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::RouterId::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::RouterId::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::Bgp::Bgp_::RouterId::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Router::Bgp::Bgp_::RouterId::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Bgp::Bgp_::RouterId::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::RouterId::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::RouterId::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::RouterId::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::RouterId::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::RouterId::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::RouterId::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::RouterId::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::RouterId::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::Bgp::Bgp_::RouterId::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Router::Bgp::Bgp_::RouterId::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Bgp::Bgp_::RouterId::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::RouterId::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::RouterId::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::RouterId::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::RouterId::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::RouterId::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::RouterId::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::RouterId::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::RouterId::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::Bgp::Bgp_::RouterId::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Router::Bgp::Bgp_::RouterId::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Bgp::Bgp_::RouterId::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::RouterId::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::RouterId::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::RouterId::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::RouterId::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::RouterId::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::RouterId::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::RouterId::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::RouterId::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Bgp::Bgp_::RouterId::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Router::Bgp::Bgp_::RouterId::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Bgp::Bgp_::RouterId::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::RouterId::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::RouterId::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::RouterId::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::RouterId::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::RouterId::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::RouterId::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Sso::Sso()
    :
    route_refresh_enable{YType::empty, "route-refresh-enable"}
{

    yang_name = "sso"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::Sso::~Sso()
{
}

bool Native::Router::Bgp::Bgp_::Sso::has_data() const
{
    if (is_presence_container) return true;
    return route_refresh_enable.is_set;
}

bool Native::Router::Bgp::Bgp_::Sso::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_refresh_enable.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Sso::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Sso::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_refresh_enable.is_set || is_set(route_refresh_enable.yfilter)) leaf_name_data.push_back(route_refresh_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Sso::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Sso::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::Sso::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-refresh-enable")
    {
        route_refresh_enable = value;
        route_refresh_enable.value_namespace = name_space;
        route_refresh_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Sso::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-refresh-enable")
    {
        route_refresh_enable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Sso::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-refresh-enable")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Transport::Transport()
    :
    path_mtu_discovery{YType::boolean, "path-mtu-discovery"}
{

    yang_name = "transport"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Bgp_::Transport::~Transport()
{
}

bool Native::Router::Bgp::Bgp_::Transport::has_data() const
{
    if (is_presence_container) return true;
    return path_mtu_discovery.is_set;
}

bool Native::Router::Bgp::Bgp_::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_mtu_discovery.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Bgp_::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu_discovery.is_set || is_set(path_mtu_discovery.yfilter)) leaf_name_data.push_back(path_mtu_discovery.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Bgp_::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Bgp_::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Bgp_::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery = value;
        path_mtu_discovery.value_namespace = name_space;
        path_mtu_discovery.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-mtu-discovery")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::PeerGroup()
    :
    neighbor(this, {"id"})
{

    yang_name = "peer-group"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::~PeerGroup()
{
}

bool Native::Router::Bgp::PeerGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::PeerGroup::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::PeerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::PeerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::PeerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    peer_group{YType::empty, "peer-group"},
    cluster_id{YType::str, "cluster-id"},
    description{YType::str, "description"},
    disable_connected_check{YType::empty, "disable-connected-check"},
    remote_as{YType::str, "remote-as"},
    shutdown{YType::empty, "shutdown"},
    version{YType::uint16, "version"}
        ,
    ebgp_multihop(nullptr) // presence node
    , fall_over(nullptr) // presence node
    , ha_mode(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::HaMode>())
    , inherit(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::Inherit>())
    , local_as(nullptr) // presence node
    , log_neighbor_changes(nullptr) // presence node
    , password(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::Password>())
    , path_attribute(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute>())
    , timers(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::Timers>())
    , transport(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::Transport>())
    , ttl_security(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::TtlSecurity>())
    , update_source(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource>())
{
    ha_mode->parent = this;
    inherit->parent = this;
    password->parent = this;
    path_attribute->parent = this;
    timers->parent = this;
    transport->parent = this;
    ttl_security->parent = this;
    update_source->parent = this;

    yang_name = "neighbor"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| peer_group.is_set
	|| cluster_id.is_set
	|| description.is_set
	|| disable_connected_check.is_set
	|| remote_as.is_set
	|| shutdown.is_set
	|| version.is_set
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (fall_over !=  nullptr && fall_over->has_data())
	|| (ha_mode !=  nullptr && ha_mode->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (path_attribute !=  nullptr && path_attribute->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (update_source !=  nullptr && update_source->has_data());
}

bool Native::Router::Bgp::PeerGroup::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(peer_group.yfilter)
	|| ydk::is_set(cluster_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(disable_connected_check.yfilter)
	|| ydk::is_set(remote_as.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (fall_over !=  nullptr && fall_over->has_operation())
	|| (ha_mode !=  nullptr && ha_mode->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (path_attribute !=  nullptr && path_attribute->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (update_source !=  nullptr && update_source->has_operation());
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (peer_group.is_set || is_set(peer_group.yfilter)) leaf_name_data.push_back(peer_group.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.yfilter)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (disable_connected_check.is_set || is_set(disable_connected_check.yfilter)) leaf_name_data.push_back(disable_connected_check.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "fall-over")
    {
        if(fall_over == nullptr)
        {
            fall_over = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::FallOver>();
        }
        return fall_over;
    }

    if(child_yang_name == "ha-mode")
    {
        if(ha_mode == nullptr)
        {
            ha_mode = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::HaMode>();
        }
        return ha_mode;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "log-neighbor-changes")
    {
        if(log_neighbor_changes == nullptr)
        {
            log_neighbor_changes = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::LogNeighborChanges>();
        }
        return log_neighbor_changes;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::Password>();
        }
        return password;
    }

    if(child_yang_name == "path-attribute")
    {
        if(path_attribute == nullptr)
        {
            path_attribute = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute>();
        }
        return path_attribute;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "update-source")
    {
        if(update_source == nullptr)
        {
            update_source = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource>();
        }
        return update_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ebgp_multihop != nullptr)
    {
        _children["ebgp-multihop"] = ebgp_multihop;
    }

    if(fall_over != nullptr)
    {
        _children["fall-over"] = fall_over;
    }

    if(ha_mode != nullptr)
    {
        _children["ha-mode"] = ha_mode;
    }

    if(inherit != nullptr)
    {
        _children["inherit"] = inherit;
    }

    if(local_as != nullptr)
    {
        _children["local-as"] = local_as;
    }

    if(log_neighbor_changes != nullptr)
    {
        _children["log-neighbor-changes"] = log_neighbor_changes;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(path_attribute != nullptr)
    {
        _children["path-attribute"] = path_attribute;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    if(ttl_security != nullptr)
    {
        _children["ttl-security"] = ttl_security;
    }

    if(update_source != nullptr)
    {
        _children["update-source"] = update_source;
    }

    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-group")
    {
        peer_group = value;
        peer_group.value_namespace = name_space;
        peer_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
        cluster_id.value_namespace = name_space;
        cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check = value;
        disable_connected_check.value_namespace = name_space;
        disable_connected_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "peer-group")
    {
        peer_group.yfilter = yfilter;
    }
    if(value_path == "cluster-id")
    {
        cluster_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ebgp-multihop" || name == "fall-over" || name == "ha-mode" || name == "inherit" || name == "local-as" || name == "log-neighbor-changes" || name == "password" || name == "path-attribute" || name == "timers" || name == "transport" || name == "ttl-security" || name == "update-source" || name == "id" || name == "peer-group" || name == "cluster-id" || name == "description" || name == "disable-connected-check" || name == "remote-as" || name == "shutdown" || name == "version")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::EbgpMultihop::EbgpMultihop()
    :
    max_hop{YType::uint8, "max-hop"}
{

    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::PeerGroup::Neighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::EbgpMultihop::has_data() const
{
    if (is_presence_container) return true;
    return max_hop.is_set;
}

bool Native::Router::Bgp::PeerGroup::Neighbor::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_hop.yfilter);
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop.is_set || is_set(max_hop.yfilter)) leaf_name_data.push_back(max_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-hop")
    {
        max_hop = value;
        max_hop.value_namespace = name_space;
        max_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-hop")
    {
        max_hop.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-hop")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::FallOver::FallOver()
    :
    route_map_name{YType::str, "route-map-name"}
        ,
    bfd(nullptr) // presence node
{

    yang_name = "fall-over"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::PeerGroup::Neighbor::FallOver::~FallOver()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::FallOver::has_data() const
{
    if (is_presence_container) return true;
    return route_map_name.is_set
	|| (bfd !=  nullptr && bfd->has_data());
}

bool Native::Router::Bgp::PeerGroup::Neighbor::FallOver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map_name.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::FallOver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fall-over";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::FallOver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::FallOver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::FallOver::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::FallOver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::FallOver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::FallOver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::FallOver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::FallOver::Bfd::Bfd()
    :
    multi_hop{YType::empty, "multi-hop"},
    single_hop{YType::empty, "single-hop"},
    check_control_plane_failure{YType::empty, "check-control-plane-failure"},
    strict_mode{YType::empty, "strict-mode"}
{

    yang_name = "bfd"; yang_parent_name = "fall-over"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::PeerGroup::Neighbor::FallOver::Bfd::~Bfd()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::FallOver::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return multi_hop.is_set
	|| single_hop.is_set
	|| check_control_plane_failure.is_set
	|| strict_mode.is_set;
}

bool Native::Router::Bgp::PeerGroup::Neighbor::FallOver::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_hop.yfilter)
	|| ydk::is_set(single_hop.yfilter)
	|| ydk::is_set(check_control_plane_failure.yfilter)
	|| ydk::is_set(strict_mode.yfilter);
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::FallOver::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::FallOver::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_hop.is_set || is_set(multi_hop.yfilter)) leaf_name_data.push_back(multi_hop.get_name_leafdata());
    if (single_hop.is_set || is_set(single_hop.yfilter)) leaf_name_data.push_back(single_hop.get_name_leafdata());
    if (check_control_plane_failure.is_set || is_set(check_control_plane_failure.yfilter)) leaf_name_data.push_back(check_control_plane_failure.get_name_leafdata());
    if (strict_mode.is_set || is_set(strict_mode.yfilter)) leaf_name_data.push_back(strict_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::FallOver::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::FallOver::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::FallOver::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-hop")
    {
        multi_hop = value;
        multi_hop.value_namespace = name_space;
        multi_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single-hop")
    {
        single_hop = value;
        single_hop.value_namespace = name_space;
        single_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "check-control-plane-failure")
    {
        check_control_plane_failure = value;
        check_control_plane_failure.value_namespace = name_space;
        check_control_plane_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-mode")
    {
        strict_mode = value;
        strict_mode.value_namespace = name_space;
        strict_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::FallOver::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-hop")
    {
        multi_hop.yfilter = yfilter;
    }
    if(value_path == "single-hop")
    {
        single_hop.yfilter = yfilter;
    }
    if(value_path == "check-control-plane-failure")
    {
        check_control_plane_failure.yfilter = yfilter;
    }
    if(value_path == "strict-mode")
    {
        strict_mode.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::FallOver::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-hop" || name == "single-hop" || name == "check-control-plane-failure" || name == "strict-mode")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::HaMode::HaMode()
    :
    graceful_restart(nullptr) // presence node
    , sso(nullptr) // presence node
{

    yang_name = "ha-mode"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::Neighbor::HaMode::~HaMode()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::HaMode::has_data() const
{
    if (is_presence_container) return true;
    return (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (sso !=  nullptr && sso->has_data());
}

bool Native::Router::Bgp::PeerGroup::Neighbor::HaMode::has_operation() const
{
    return is_set(yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (sso !=  nullptr && sso->has_operation());
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::HaMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::HaMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::HaMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::HaMode::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::HaMode::Sso>();
        }
        return sso;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::HaMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(sso != nullptr)
    {
        _children["sso"] = sso;
    }

    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::HaMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::PeerGroup::Neighbor::HaMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::HaMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "sso")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::HaMode::GracefulRestart::GracefulRestart()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "graceful-restart"; yang_parent_name = "ha-mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::PeerGroup::Neighbor::HaMode::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::HaMode::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::PeerGroup::Neighbor::HaMode::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::HaMode::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::HaMode::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::HaMode::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::HaMode::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::HaMode::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::HaMode::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::HaMode::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::HaMode::Sso::Sso()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "sso"; yang_parent_name = "ha-mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::PeerGroup::Neighbor::HaMode::Sso::~Sso()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::HaMode::Sso::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::PeerGroup::Neighbor::HaMode::Sso::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::HaMode::Sso::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::HaMode::Sso::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::HaMode::Sso::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::HaMode::Sso::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::HaMode::Sso::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::HaMode::Sso::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::HaMode::Sso::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{

    yang_name = "inherit"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::PeerGroup::Neighbor::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_policy.yfilter)
	|| ydk::is_set(peer_session.yfilter);
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.yfilter)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.yfilter)) leaf_name_data.push_back(peer_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-policy")
    {
        peer_policy = value;
        peer_policy.value_namespace = name_space;
        peer_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-session")
    {
        peer_session = value;
        peer_session.value_namespace = name_space;
        peer_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-policy")
    {
        peer_policy.yfilter = yfilter;
    }
    if(value_path == "peer-session")
    {
        peer_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy" || name == "peer-session")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::LocalAs::LocalAs()
    :
    as_no{YType::str, "as-no"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"},
    dual_as{YType::empty, "dual-as"}
{

    yang_name = "local-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::PeerGroup::Neighbor::LocalAs::~LocalAs()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::LocalAs::has_data() const
{
    if (is_presence_container) return true;
    return as_no.is_set
	|| no_prepend.is_set
	|| replace_as.is_set
	|| dual_as.is_set;
}

bool Native::Router::Bgp::PeerGroup::Neighbor::LocalAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_no.yfilter)
	|| ydk::is_set(no_prepend.yfilter)
	|| ydk::is_set(replace_as.yfilter)
	|| ydk::is_set(dual_as.yfilter);
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::LocalAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_no.is_set || is_set(as_no.yfilter)) leaf_name_data.push_back(as_no.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.yfilter)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.yfilter)) leaf_name_data.push_back(dual_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::LocalAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-no")
    {
        as_no = value;
        as_no.value_namespace = name_space;
        as_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
        no_prepend.value_namespace = name_space;
        no_prepend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
        dual_as.value_namespace = name_space;
        dual_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::LocalAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-no")
    {
        as_no.yfilter = yfilter;
    }
    if(value_path == "no-prepend")
    {
        no_prepend.yfilter = yfilter;
    }
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
    if(value_path == "dual-as")
    {
        dual_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::LocalAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-no" || name == "no-prepend" || name == "replace-as" || name == "dual-as")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::LogNeighborChanges::LogNeighborChanges()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "log-neighbor-changes"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::PeerGroup::Neighbor::LogNeighborChanges::~LogNeighborChanges()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::LogNeighborChanges::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::PeerGroup::Neighbor::LogNeighborChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::LogNeighborChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-neighbor-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::LogNeighborChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::LogNeighborChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::LogNeighborChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::LogNeighborChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::LogNeighborChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::LogNeighborChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::Password::Password()
    :
    enctype{YType::uint8, "enctype"},
    text{YType::str, "text"}
{

    yang_name = "password"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::Neighbor::Password::~Password()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::Password::has_data() const
{
    if (is_presence_container) return true;
    return enctype.is_set
	|| text.is_set;
}

bool Native::Router::Bgp::PeerGroup::Neighbor::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enctype.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enctype.is_set || is_set(enctype.yfilter)) leaf_name_data.push_back(enctype.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enctype")
    {
        enctype = value;
        enctype.value_namespace = name_space;
        enctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enctype")
    {
        enctype.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enctype" || name == "text")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::PathAttribute()
    :
    discard(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard>())
    , treat_as_withdraw(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw>())
{
    discard->parent = this;
    treat_as_withdraw->parent = this;

    yang_name = "path-attribute"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::~PathAttribute()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::has_data() const
{
    if (is_presence_container) return true;
    return (discard !=  nullptr && discard->has_data())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_data());
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::has_operation() const
{
    return is_set(yfilter)
	|| (discard !=  nullptr && discard->has_operation())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_operation());
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discard")
    {
        if(discard == nullptr)
        {
            discard = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard>();
        }
        return discard;
    }

    if(child_yang_name == "treat-as-withdraw")
    {
        if(treat_as_withdraw == nullptr)
        {
            treat_as_withdraw = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw>();
        }
        return treat_as_withdraw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(discard != nullptr)
    {
        _children["discard"] = discard;
    }

    if(treat_as_withdraw != nullptr)
    {
        _children["treat-as-withdraw"] = treat_as_withdraw;
    }

    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard" || name == "treat-as-withdraw")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::Discard()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType>())
    , range(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::Range>())
{
    attibute_type->parent = this;
    range->parent = this;

    yang_name = "discard"; yang_parent_name = "path-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::~Discard()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::has_data() const
{
    if (is_presence_container) return true;
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::has_operation() const
{
    return is_set(yfilter)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attibute_type != nullptr)
    {
        _children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attibute_type" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::AttibuteType()
    :
    type{YType::uint8, "type"},
    in{YType::empty, "in"}
{

    yang_name = "attibute_type"; yang_parent_name = "discard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::~AttibuteType()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::Range::Range()
    :
    start_value{YType::uint8, "start_value"},
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"}
{

    yang_name = "range"; yang_parent_name = "discard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::Range::~Range()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_value.is_set
	|| end_value.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_value.yfilter)
	|| ydk::is_set(end_value.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_value.is_set || is_set(start_value.yfilter)) leaf_name_data.push_back(start_value.get_name_leafdata());
    if (end_value.is_set || is_set(end_value.yfilter)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_value")
    {
        start_value = value;
        start_value.value_namespace = name_space;
        start_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_value")
    {
        end_value = value;
        end_value.value_namespace = name_space;
        end_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_value")
    {
        start_value.yfilter = yfilter;
    }
    if(value_path == "end_value")
    {
        end_value.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::Discard::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start_value" || name == "end_value" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::TreatAsWithdraw()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType>())
    , range(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range>())
{
    attibute_type->parent = this;
    range->parent = this;

    yang_name = "treat-as-withdraw"; yang_parent_name = "path-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::~TreatAsWithdraw()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::has_data() const
{
    if (is_presence_container) return true;
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::has_operation() const
{
    return is_set(yfilter)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "treat-as-withdraw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attibute_type != nullptr)
    {
        _children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attibute_type" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::AttibuteType()
    :
    type{YType::uint8, "type"},
    in{YType::empty, "in"}
{

    yang_name = "attibute_type"; yang_parent_name = "treat-as-withdraw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::~AttibuteType()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::Range()
    :
    start_value{YType::uint8, "start_value"},
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"}
{

    yang_name = "range"; yang_parent_name = "treat-as-withdraw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::~Range()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_value.is_set
	|| end_value.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_value.yfilter)
	|| ydk::is_set(end_value.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_value.is_set || is_set(start_value.yfilter)) leaf_name_data.push_back(start_value.get_name_leafdata());
    if (end_value.is_set || is_set(end_value.yfilter)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_value")
    {
        start_value = value;
        start_value.value_namespace = name_space;
        start_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_value")
    {
        end_value = value;
        end_value.value_namespace = name_space;
        end_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_value")
    {
        start_value.yfilter = yfilter;
    }
    if(value_path == "end_value")
    {
        end_value.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start_value" || name == "end_value" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::Timers::Timers()
    :
    keepalive_interval{YType::uint16, "keepalive-interval"},
    holdtime{YType::uint16, "holdtime"},
    minimum_neighbor_hold{YType::uint16, "minimum-neighbor-hold"}
{

    yang_name = "timers"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::Neighbor::Timers::~Timers()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::Timers::has_data() const
{
    if (is_presence_container) return true;
    return keepalive_interval.is_set
	|| holdtime.is_set
	|| minimum_neighbor_hold.is_set;
}

bool Native::Router::Bgp::PeerGroup::Neighbor::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(minimum_neighbor_hold.yfilter);
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (minimum_neighbor_hold.is_set || is_set(minimum_neighbor_hold.yfilter)) leaf_name_data.push_back(minimum_neighbor_hold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-neighbor-hold")
    {
        minimum_neighbor_hold = value;
        minimum_neighbor_hold.value_namespace = name_space;
        minimum_neighbor_hold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "minimum-neighbor-hold")
    {
        minimum_neighbor_hold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive-interval" || name == "holdtime" || name == "minimum-neighbor-hold")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::Transport::Transport()
    :
    connection_mode{YType::enumeration, "connection-mode"},
    multi_session{YType::empty, "multi-session"}
        ,
    path_mtu_discovery(nullptr) // presence node
{

    yang_name = "transport"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::Neighbor::Transport::~Transport()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::Transport::has_data() const
{
    if (is_presence_container) return true;
    return connection_mode.is_set
	|| multi_session.is_set
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data());
}

bool Native::Router::Bgp::PeerGroup::Neighbor::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_mode.yfilter)
	|| ydk::is_set(multi_session.yfilter)
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation());
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_mode.is_set || is_set(connection_mode.yfilter)) leaf_name_data.push_back(connection_mode.get_name_leafdata());
    if (multi_session.is_set || is_set(multi_session.yfilter)) leaf_name_data.push_back(multi_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::Transport::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_mtu_discovery != nullptr)
    {
        _children["path-mtu-discovery"] = path_mtu_discovery;
    }

    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection-mode")
    {
        connection_mode = value;
        connection_mode.value_namespace = name_space;
        connection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-session")
    {
        multi_session = value;
        multi_session.value_namespace = name_space;
        multi_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection-mode")
    {
        connection_mode.yfilter = yfilter;
    }
    if(value_path == "multi-session")
    {
        multi_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-mtu-discovery" || name == "connection-mode" || name == "multi-session")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::Transport::PathMtuDiscovery::PathMtuDiscovery()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "path-mtu-discovery"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::PeerGroup::Neighbor::Transport::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::Transport::PathMtuDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::PeerGroup::Neighbor::Transport::PathMtuDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::Transport::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::Transport::PathMtuDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::Transport::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::Transport::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::Transport::PathMtuDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::Transport::PathMtuDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::Transport::PathMtuDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::TtlSecurity::TtlSecurity()
    :
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::Neighbor::TtlSecurity::~TtlSecurity()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::TtlSecurity::has_data() const
{
    if (is_presence_container) return true;
    return hops.is_set;
}

bool Native::Router::Bgp::PeerGroup::Neighbor::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::UpdateSource()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "update-source"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::~UpdateSource()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
}

void Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "update-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::MetricType::Y_2 {1, "2"};

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

const Enum::YLeaf Native::Router::Bgp::Bgp_::Bestpath::AsPath::ignore {0, "ignore"};

const Enum::YLeaf Native::Router::Bgp::Bgp_::Default::RouteTarget::filter {0, "filter"};

const Enum::YLeaf Native::Router::Bgp::Bgp_::Refresh::MaxEorTime::RefreshDisable::Y_0 {0, "0"};

const Enum::YLeaf Native::Router::Bgp::Bgp_::Refresh::StalepathTime::RefreshDisable::Y_0 {0, "0"};

const Enum::YLeaf Native::Router::Bgp::Bgp_::RouterId::Vrf::auto_assign {0, "auto-assign"};

const Enum::YLeaf Native::Router::Bgp::PeerGroup::Neighbor::Transport::ConnectionMode::active {0, "active"};
const Enum::YLeaf Native::Router::Bgp::PeerGroup::Neighbor::Transport::ConnectionMode::passive {1, "passive"};


}
}

