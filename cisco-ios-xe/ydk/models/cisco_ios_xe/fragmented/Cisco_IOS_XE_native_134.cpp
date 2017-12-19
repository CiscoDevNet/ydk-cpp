
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_134.hpp"
#include "Cisco_IOS_XE_native_135.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Isis::Redistribute::Isis_::Isis_()
{

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Isis_::~Isis_()
{
}

bool Native::Router::Isis::Redistribute::Isis_::has_data() const
{
    for (std::size_t index=0; index<isis_redistribute.size(); index++)
    {
        if(isis_redistribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::Redistribute::Isis_::has_operation() const
{
    for (std::size_t index=0; index<isis_redistribute.size(); index++)
    {
        if(isis_redistribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::Redistribute::Isis_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Isis_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-redistribute")
    {
        for(auto const & c : isis_redistribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Isis_::IsisRedistribute>();
        c->parent = this;
        isis_redistribute.push_back(c);
        return c;
    }

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
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Isis_::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Isis_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_redistribute)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Isis_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Redistribute::Isis_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Redistribute::Isis_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-redistribute" || name == "ip")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::IsisRedistribute()
    :
    area_tag{YType::str, "area-tag"}
    	,
    ip(nullptr) // presence node
{

    yang_name = "isis-redistribute"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::~IsisRedistribute()
{
}

bool Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::has_data() const
{
    return area_tag.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-redistribute" <<"[area-tag='" <<area_tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "area-tag")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "isis-redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Isis_::Ip::Ip()
    :
    isis_redist_levels1{YType::enumeration, "isis-redist-levels1"},
    isis_redist_levels2{YType::enumeration, "isis-redist-levels2"},
    into{YType::empty, "into"},
    distribute_list{YType::uint32, "distribute-list"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Isis_::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Isis_::Ip::has_data() const
{
    return isis_redist_levels1.is_set
	|| isis_redist_levels2.is_set
	|| into.is_set
	|| distribute_list.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Isis_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_redist_levels1.yfilter)
	|| ydk::is_set(isis_redist_levels2.yfilter)
	|| ydk::is_set(into.yfilter)
	|| ydk::is_set(distribute_list.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Isis_::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[isis-redist-levels1='" <<isis_redist_levels1 <<"']" <<"[isis-redist-levels2='" <<isis_redist_levels2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Isis_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_redist_levels1.is_set || is_set(isis_redist_levels1.yfilter)) leaf_name_data.push_back(isis_redist_levels1.get_name_leafdata());
    if (isis_redist_levels2.is_set || is_set(isis_redist_levels2.yfilter)) leaf_name_data.push_back(isis_redist_levels2.get_name_leafdata());
    if (into.is_set || is_set(into.yfilter)) leaf_name_data.push_back(into.get_name_leafdata());
    if (distribute_list.is_set || is_set(distribute_list.yfilter)) leaf_name_data.push_back(distribute_list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Isis_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-redist-levels1")
    {
        isis_redist_levels1 = value;
        isis_redist_levels1.value_namespace = name_space;
        isis_redist_levels1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-redist-levels2")
    {
        isis_redist_levels2 = value;
        isis_redist_levels2.value_namespace = name_space;
        isis_redist_levels2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "into")
    {
        into = value;
        into.value_namespace = name_space;
        into.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distribute-list")
    {
        distribute_list = value;
        distribute_list.value_namespace = name_space;
        distribute_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Isis_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-redist-levels1")
    {
        isis_redist_levels1.yfilter = yfilter;
    }
    if(value_path == "isis-redist-levels2")
    {
        isis_redist_levels2.yfilter = yfilter;
    }
    if(value_path == "into")
    {
        into.yfilter = yfilter;
    }
    if(value_path == "distribute-list")
    {
        distribute_list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Isis_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-redist-levels1" || name == "isis-redist-levels2" || name == "into" || name == "distribute-list" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"}
    	,
    area_tag_route_map_container(std::make_shared<Native::Router::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer>())
{
    area_tag_route_map_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Isis::Redistribute::IsoIgrp::has_data() const
{
    return route_map.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data());
}

bool Native::Router::Isis::Redistribute::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation());
}

std::string Native::Router::Isis::Redistribute::IsoIgrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    return children;
}

void Native::Router::Isis::Redistribute::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
}

void Native::Router::Isis::Redistribute::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "route-map" || name == "levels" || name == "metric" || name == "metric-type")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{

    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/iso-igrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Lisp::Lisp()
    :
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "lisp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::Isis::Redistribute::Lisp::has_data() const
{
    return include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Lisp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-connected" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    threshold_value{YType::uint32, "threshold-value"},
    warning_only{YType::empty, "warning-only"},
    withdraw{YType::empty, "withdraw"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Isis::Redistribute::MaximumPrefix::has_data() const
{
    return number.is_set
	|| threshold_value.is_set
	|| warning_only.is_set
	|| withdraw.is_set;
}

bool Native::Router::Isis::Redistribute::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(withdraw.yfilter);
}

std::string Native::Router::Isis::Redistribute::MaximumPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (withdraw.is_set || is_set(withdraw.yfilter)) leaf_name_data.push_back(withdraw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "withdraw")
    {
        withdraw = value;
        withdraw.value_namespace = name_space;
        withdraw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "withdraw")
    {
        withdraw.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "threshold-value" || name == "warning-only" || name == "withdraw")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Isis::Redistribute::Mobile::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Mobile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Odr::Odr()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "odr"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Isis::Redistribute::Odr::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Odr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Ospf::Ospf()
    :
    process_id{YType::uint32, "process-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::Isis::Redistribute::Ospf::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::Isis::Redistribute::Ospf::has_data() const
{
    return process_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Isis::Redistribute::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Isis::Redistribute::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[process-id='" <<process_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Isis::Redistribute::Ospf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "process-id" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map" || name == "vrf")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Ospf::Match::Match()
    :
    internal(nullptr) // presence node
	,external(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Ospf::Match::~Match()
{
}

bool Native::Router::Isis::Redistribute::Ospf::Match::has_data() const
{
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Isis::Redistribute::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Isis::Redistribute::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Isis::Redistribute::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Isis::Redistribute::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Isis::Redistribute::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Ospf::Match::get_children() const
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

void Native::Router::Isis::Redistribute::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Redistribute::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Redistribute::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Ospf::Match::Internal::Internal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Isis::Redistribute::Ospf::Match::Internal::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Ospf::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Ospf::Match::External::~External()
{
}

bool Native::Router::Isis::Redistribute::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Isis::Redistribute::Ospf::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Ospfv3::Ospfv3()
    :
    process_id{YType::uint32, "process-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::Isis::Redistribute::Ospfv3::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Isis::Redistribute::Ospfv3::has_data() const
{
    return process_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Isis::Redistribute::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Isis::Redistribute::Ospfv3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[process-id='" <<process_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Isis::Redistribute::Ospfv3::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "process-id" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map" || name == "vrf")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Ospfv3::Match::Match()
    :
    internal(nullptr) // presence node
	,external(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Ospfv3::Match::~Match()
{
}

bool Native::Router::Isis::Redistribute::Ospfv3::Match::has_data() const
{
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Isis::Redistribute::Ospfv3::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Isis::Redistribute::Ospfv3::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Ospfv3::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Ospfv3::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Isis::Redistribute::Ospfv3::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Isis::Redistribute::Ospfv3::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Isis::Redistribute::Ospfv3::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Ospfv3::Match::get_children() const
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

void Native::Router::Isis::Redistribute::Ospfv3::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Redistribute::Ospfv3::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Redistribute::Ospfv3::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Ospfv3::Match::Internal::Internal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Ospfv3::Match::Internal::~Internal()
{
}

bool Native::Router::Isis::Redistribute::Ospfv3::Match::Internal::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Ospfv3::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Ospfv3::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Ospfv3::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Ospfv3::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Ospfv3::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Ospfv3::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Ospfv3::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Ospfv3::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Ospfv3::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Ospfv3::Match::External::~External()
{
}

bool Native::Router::Isis::Redistribute::Ospfv3::Match::External::has_data() const
{
    return external_routes.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Ospfv3::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Ospfv3::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Ospfv3::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Ospfv3::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Ospfv3::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Ospfv3::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Ospfv3::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Ospfv3::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Ospfv3::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Ospfv3::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Isis::Redistribute::Ospfv3::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Ospfv3::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Ospfv3::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Ospfv3::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Ospfv3::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Ospfv3::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Ospfv3::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Ospfv3::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Ospfv3::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Isis::Redistribute::Rip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Rip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Static_::Static_()
    :
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Static_::~Static_()
{
}

bool Native::Router::Isis::Redistribute::Static_::has_data() const
{
    return (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::Redistribute::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::Redistribute::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::Redistribute::Static_::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Redistribute::Static_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Redistribute::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Redistribute::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Static_::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "clns"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Static_::Clns::~Clns()
{
}

bool Native::Router::Isis::Redistribute::Static_::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Static_::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Static_::Clns::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Static_::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Static_::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Static_::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Static_::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Static_::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Static_::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Static_::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Static_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Static_::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Static_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Static_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Static_::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Static_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Static_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Static_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Static_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Static_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Static_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Static_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Vrf()
    :
    global(std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global>())
{
    global->parent = this;

    yang_name = "vrf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::~Vrf()
{
}

bool Native::Router::Isis::Redistribute::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrf_nm.size(); index++)
    {
        if(vrf_nm[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf_nm.size(); index++)
    {
        if(vrf_nm[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-nm")
    {
        for(auto const & c : vrf_nm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm>();
        c->parent = this;
        vrf_nm.push_back(c);
        return c;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_nm)
    {
        children[c->get_segment_path()] = c;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Redistribute::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Redistribute::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-nm" || name == "global")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::VrfNm()
    :
    vrf_nm{YType::str, "vrf-nm"},
    ospf{YType::uint16, "ospf"}
    	,
    application(std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Application>())
	,bgp(std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp>())
	,connected(nullptr) // presence node
	,eigrp(std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp>())
	,isis(std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_>())
	,iso_igrp(nullptr) // presence node
	,lisp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,ospfv3(std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3>())
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
{
    application->parent = this;
    bgp->parent = this;
    eigrp->parent = this;
    isis->parent = this;
    ospfv3->parent = this;

    yang_name = "vrf-nm"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::~VrfNm()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::has_data() const
{
    return vrf_nm.is_set
	|| ospf.is_set
	|| (application !=  nullptr && application->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_nm.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-nm" <<"[vrf-nm='" <<vrf_nm <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_nm.is_set || is_set(vrf_nm.yfilter)) leaf_name_data.push_back(vrf_nm.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
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

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
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

void Native::Router::Isis::Redistribute::Vrf::VrfNm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-nm")
    {
        vrf_nm = value;
        vrf_nm.value_namespace = name_space;
        vrf_nm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-nm")
    {
        vrf_nm.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "ospfv3" || name == "rip" || name == "static" || name == "vrf-nm" || name == "ospf")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Application()
{

    yang_name = "application"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::~Application()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::has_data() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::has_operation() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "appname")
    {
        for(auto const & c : appname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Appname>();
        c->parent = this;
        appname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : appname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appname")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Appname::Appname()
    :
    appname{YType::str, "appname"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "appname"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Appname::~Appname()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Appname::has_data() const
{
    return appname.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Appname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appname.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Appname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appname" <<"[appname='" <<appname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Appname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appname.is_set || is_set(appname.yfilter)) leaf_name_data.push_back(appname.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Appname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Appname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Appname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "appname")
    {
        appname = value;
        appname.value_namespace = name_space;
        appname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Appname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "appname")
    {
        appname.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Appname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appname" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::Bgp()
    :
    a_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"}
{

    yang_name = "bgp"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::~Bgp()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::has_data() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_data())
            return true;
    }
    return a_lesser_1_period_0_xx_period_yy_greater_.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::has_operation() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(a_lesser_1_period_0_xx_period_yy_greater_.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(a_lesser_1_period_0_xx_period_yy_greater_.yfilter)) leaf_name_data.push_back(a_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bp-as-num")
    {
        for(auto const & c : bp_as_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum>();
        c->parent = this;
        bp_as_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bp_as_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_ = value;
        a_lesser_1_period_0_xx_period_yy_greater_.value_namespace = name_space;
        a_lesser_1_period_0_xx_period_yy_greater_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bp-as-num" || name == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::BpAsNum()
    :
    bp_as_num{YType::str, "bp-as-num"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{

    yang_name = "bp-as-num"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::~BpAsNum()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::has_data() const
{
    return bp_as_num.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bp_as_num.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp-as-num" <<"[bp-as-num='" <<bp_as_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bp_as_num.is_set || is_set(bp_as_num.yfilter)) leaf_name_data.push_back(bp_as_num.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num = value;
        bp_as_num.value_namespace = name_space;
        bp_as_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "bp-as-num" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "clns"; yang_parent_name = "bp-as-num"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::~Clns()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "bp-as-num"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "connected"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Connected::~Connected()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Connected::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::Eigrp()
{

    yang_name = "eigrp"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::~Eigrp()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::has_data() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp-as")
    {
        for(auto const & c : eigrp_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs>();
        c->parent = this;
        eigrp_as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp_as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-as")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::EigrpAs()
    :
    eigrp_as{YType::uint16, "eigrp-as"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "eigrp-as"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::~EigrpAs()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::has_data() const
{
    return eigrp_as.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp_as.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-as" <<"[eigrp-as='" <<eigrp_as <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp_as.is_set || is_set(eigrp_as.yfilter)) leaf_name_data.push_back(eigrp_as.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as = value;
        eigrp_as.value_namespace = name_space;
        eigrp_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-as" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Isis_()
    :
    ip(nullptr) // presence node
{

    yang_name = "isis"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::~Isis_()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::has_data() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_data())
            return true;
    }
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::has_operation() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-atag")
    {
        for(auto const & c : isis_atag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag>();
        c->parent = this;
        isis_atag.push_back(c);
        return c;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_atag)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-atag" || name == "ip")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::IsisAtag()
    :
    isis_atag{YType::str, "isis-atag"}
    	,
    ip(std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip>())
{
    ip->parent = this;

    yang_name = "isis-atag"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::~IsisAtag()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::has_data() const
{
    return isis_atag.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_atag.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-atag" <<"[isis-atag='" <<isis_atag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_atag.is_set || is_set(isis_atag.yfilter)) leaf_name_data.push_back(isis_atag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-atag")
    {
        isis_atag = value;
        isis_atag.value_namespace = name_space;
        isis_atag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-atag")
    {
        isis_atag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "isis-atag")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "isis-atag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoIgrp()
    :
    route_map(nullptr) // presence node
{

    yang_name = "iso-igrp"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_data())
            return true;
    }
    return (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iso-atag")
    {
        for(auto const & c : iso_atag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag>();
        c->parent = this;
        iso_atag.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iso_atag)
    {
        children[c->get_segment_path()] = c;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-atag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::IsoAtag()
    :
    iso_atag{YType::str, "iso-atag"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "iso-atag"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::~IsoAtag()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::has_data() const
{
    return iso_atag.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iso_atag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-atag" <<"[iso-atag='" <<iso_atag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_atag.is_set || is_set(iso_atag.yfilter)) leaf_name_data.push_back(iso_atag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iso-atag")
    {
        iso_atag = value;
        iso_atag.value_namespace = name_space;
        iso_atag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iso-atag")
    {
        iso_atag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-atag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::RouteMap()
    :
    rm_point{YType::str, "rm-point"}
{

    yang_name = "route-map"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::~RouteMap()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::has_data() const
{
    return rm_point.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rm_point.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rm_point.is_set || is_set(rm_point.yfilter)) leaf_name_data.push_back(rm_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rm-point")
    {
        rm_point = value;
        rm_point.value_namespace = name_space;
        rm_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rm-point")
    {
        rm_point.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rm-point")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::Lisp()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "lisp"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::~Lisp()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "mobile"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::~Mobile()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Ospfv3()
{

    yang_name = "ospfv3"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::has_data() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "os3-id")
    {
        for(auto const & c : os3_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id>();
        c->parent = this;
        os3_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : os3_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os3-id")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::Os3Id()
    :
    os3_id{YType::uint16, "os3-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "os3-id"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::~Os3Id()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::has_data() const
{
    return os3_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(os3_id.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os3-id" <<"[os3-id='" <<os3_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (os3_id.is_set || is_set(os3_id.yfilter)) leaf_name_data.push_back(os3_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "os3-id")
    {
        os3_id = value;
        os3_id.value_namespace = name_space;
        os3_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "os3-id")
    {
        os3_id.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os3-id" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "rip"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::~Rip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Static_()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{

    yang_name = "static"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::~Static_()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "clns"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::~Clns()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Global()
    :
    ospf{YType::uint16, "ospf"}
    	,
    application(std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Application>())
	,bgp(std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Bgp>())
	,connected(nullptr) // presence node
	,eigrp(std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Eigrp>())
	,isis(std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Isis_>())
	,iso_igrp(nullptr) // presence node
	,lisp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,ospfv3(std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3>())
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
{
    application->parent = this;
    bgp->parent = this;
    eigrp->parent = this;
    isis->parent = this;
    ospfv3->parent = this;

    yang_name = "global"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::~Global()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::has_data() const
{
    return ospf.is_set
	|| (application !=  nullptr && application->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
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

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
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

void Native::Router::Isis::Redistribute::Vrf::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "ospfv3" || name == "rip" || name == "static" || name == "ospf")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Application::Application()
{

    yang_name = "application"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Application::~Application()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Application::has_data() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Application::has_operation() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Application::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "appname")
    {
        for(auto const & c : appname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname>();
        c->parent = this;
        appname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : appname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Redistribute::Vrf::Global::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appname")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::Appname()
    :
    appname{YType::str, "appname"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "appname"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::~Appname()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::has_data() const
{
    return appname.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appname.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/application/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appname" <<"[appname='" <<appname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appname.is_set || is_set(appname.yfilter)) leaf_name_data.push_back(appname.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "appname")
    {
        appname = value;
        appname.value_namespace = name_space;
        appname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "appname")
    {
        appname.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appname" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Bgp::Bgp()
    :
    a_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"}
{

    yang_name = "bgp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Bgp::~Bgp()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::has_data() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_data())
            return true;
    }
    return a_lesser_1_period_0_xx_period_yy_greater_.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::has_operation() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(a_lesser_1_period_0_xx_period_yy_greater_.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(a_lesser_1_period_0_xx_period_yy_greater_.yfilter)) leaf_name_data.push_back(a_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bp-as-num")
    {
        for(auto const & c : bp_as_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum>();
        c->parent = this;
        bp_as_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bp_as_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_ = value;
        a_lesser_1_period_0_xx_period_yy_greater_.value_namespace = name_space;
        a_lesser_1_period_0_xx_period_yy_greater_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bp-as-num" || name == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::BpAsNum()
    :
    bp_as_num{YType::str, "bp-as-num"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{

    yang_name = "bp-as-num"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::~BpAsNum()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::has_data() const
{
    return bp_as_num.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bp_as_num.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp-as-num" <<"[bp-as-num='" <<bp_as_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bp_as_num.is_set || is_set(bp_as_num.yfilter)) leaf_name_data.push_back(bp_as_num.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num = value;
        bp_as_num.value_namespace = name_space;
        bp_as_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "bp-as-num" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "clns"; yang_parent_name = "bp-as-num"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::~Clns()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "bp-as-num"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "connected"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Connected::~Connected()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Connected::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Connected::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::Eigrp()
{

    yang_name = "eigrp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::~Eigrp()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::has_data() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp-as")
    {
        for(auto const & c : eigrp_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs>();
        c->parent = this;
        eigrp_as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp_as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-as")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::EigrpAs()
    :
    eigrp_as{YType::uint16, "eigrp-as"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "eigrp-as"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::~EigrpAs()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::has_data() const
{
    return eigrp_as.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp_as.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/eigrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-as" <<"[eigrp-as='" <<eigrp_as <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp_as.is_set || is_set(eigrp_as.yfilter)) leaf_name_data.push_back(eigrp_as.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as = value;
        eigrp_as.value_namespace = name_space;
        eigrp_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-as" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Isis_()
    :
    ip(nullptr) // presence node
{

    yang_name = "isis"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Isis_::~Isis_()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::has_data() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_data())
            return true;
    }
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::has_operation() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Isis_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Isis_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-atag")
    {
        for(auto const & c : isis_atag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag>();
        c->parent = this;
        isis_atag.push_back(c);
        return c;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Isis_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_atag)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Isis_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Redistribute::Vrf::Global::Isis_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-atag" || name == "ip")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::IsisAtag()
    :
    isis_atag{YType::str, "isis-atag"}
    	,
    ip(std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip>())
{
    ip->parent = this;

    yang_name = "isis-atag"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::~IsisAtag()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::has_data() const
{
    return isis_atag.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_atag.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-atag" <<"[isis-atag='" <<isis_atag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_atag.is_set || is_set(isis_atag.yfilter)) leaf_name_data.push_back(isis_atag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-atag")
    {
        isis_atag = value;
        isis_atag.value_namespace = name_space;
        isis_atag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-atag")
    {
        isis_atag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "isis-atag")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "isis-atag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoIgrp()
    :
    route_map(nullptr) // presence node
{

    yang_name = "iso-igrp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_data())
            return true;
    }
    return (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iso-atag")
    {
        for(auto const & c : iso_atag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag>();
        c->parent = this;
        iso_atag.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iso_atag)
    {
        children[c->get_segment_path()] = c;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-atag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::IsoAtag()
    :
    iso_atag{YType::str, "iso-atag"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "iso-atag"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::~IsoAtag()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::has_data() const
{
    return iso_atag.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iso_atag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/iso-igrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-atag" <<"[iso-atag='" <<iso_atag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_atag.is_set || is_set(iso_atag.yfilter)) leaf_name_data.push_back(iso_atag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iso-atag")
    {
        iso_atag = value;
        iso_atag.value_namespace = name_space;
        iso_atag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iso-atag")
    {
        iso_atag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-atag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::RouteMap()
    :
    rm_point{YType::str, "rm-point"}
{

    yang_name = "route-map"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::~RouteMap()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::has_data() const
{
    return rm_point.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rm_point.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/iso-igrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rm_point.is_set || is_set(rm_point.yfilter)) leaf_name_data.push_back(rm_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rm-point")
    {
        rm_point = value;
        rm_point.value_namespace = name_space;
        rm_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rm-point")
    {
        rm_point.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rm-point")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Lisp::Lisp()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "lisp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Lisp::~Lisp()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Lisp::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Lisp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "mobile"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Mobile::~Mobile()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Mobile::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Mobile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Ospfv3()
{

    yang_name = "ospfv3"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::has_data() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "os3-id")
    {
        for(auto const & c : os3_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id>();
        c->parent = this;
        os3_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : os3_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os3-id")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::Os3Id()
    :
    os3_id{YType::uint16, "os3-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "os3-id"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::~Os3Id()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::has_data() const
{
    return os3_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(os3_id.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/ospfv3/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os3-id" <<"[os3-id='" <<os3_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (os3_id.is_set || is_set(os3_id.yfilter)) leaf_name_data.push_back(os3_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "os3-id")
    {
        os3_id = value;
        os3_id.value_namespace = name_space;
        os3_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "os3-id")
    {
        os3_id.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os3-id" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "rip"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Rip::~Rip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Rip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Rip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Static_::Static_()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{

    yang_name = "static"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Static_::~Static_()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Static_::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "clns"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::~Clns()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::SetAttachedBit::SetAttachedBit()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "set-attached-bit"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::SetAttachedBit::~SetAttachedBit()
{
}

bool Native::Router::Isis::SetAttachedBit::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Isis::SetAttachedBit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::SetAttachedBit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::SetAttachedBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-attached-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::SetAttachedBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::SetAttachedBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SetAttachedBit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SetAttachedBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::SetAttachedBit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::SetAttachedBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Snmp::Snmp()
{

    yang_name = "snmp"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Snmp::~Snmp()
{
}

bool Native::Router::Isis::Snmp::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::Snmp::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::Snmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Isis::Snmp::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::Isis::Snmp::Context::Context()
    :
    name{YType::str, "name"}
    	,
    community(std::make_shared<Native::Router::Isis::Snmp::Context::Community>())
	,user(std::make_shared<Native::Router::Isis::Snmp::Context::User>())
{
    community->parent = this;
    user->parent = this;

    yang_name = "context"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Snmp::Context::~Context()
{
}

bool Native::Router::Isis::Snmp::Context::has_data() const
{
    return name.is_set
	|| (community !=  nullptr && community->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Router::Isis::Snmp::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (community !=  nullptr && community->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Router::Isis::Snmp::Context::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Snmp::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::Router::Isis::Snmp::Context::Community>();
        }
        return community;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Router::Isis::Snmp::Context::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(community != nullptr)
    {
        children["community"] = community;
    }

    if(user != nullptr)
    {
        children["user"] = user;
    }

    return children;
}

void Native::Router::Isis::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "user" || name == "name")
        return true;
    return false;
}

Native::Router::Isis::Snmp::Context::Community::Community()
    :
    community_string{YType::str, "community-string"}
    	,
    access(std::make_shared<Native::Router::Isis::Snmp::Context::Community::Access>())
{
    access->parent = this;

    yang_name = "community"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Snmp::Context::Community::~Community()
{
}

bool Native::Router::Isis::Snmp::Context::Community::has_data() const
{
    return community_string.is_set
	|| (access !=  nullptr && access->has_data());
}

bool Native::Router::Isis::Snmp::Context::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_string.yfilter)
	|| (access !=  nullptr && access->has_operation());
}

std::string Native::Router::Isis::Snmp::Context::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Snmp::Context::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_string.is_set || is_set(community_string.yfilter)) leaf_name_data.push_back(community_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Snmp::Context::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Isis::Snmp::Context::Community::Access>();
        }
        return access;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Snmp::Context::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    return children;
}

void Native::Router::Isis::Snmp::Context::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-string")
    {
        community_string = value;
        community_string.value_namespace = name_space;
        community_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Snmp::Context::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-string")
    {
        community_string.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Snmp::Context::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "community-string")
        return true;
    return false;
}

Native::Router::Isis::Snmp::Context::Community::Access::Access()
    :
    standard_acl{YType::uint32, "standard-acl"},
    expanded_acl{YType::uint32, "expanded-acl"},
    acl_name{YType::str, "acl-name"},
    ipv6{YType::str, "ipv6"},
    ro{YType::empty, "ro"},
    rw{YType::empty, "rw"}
{

    yang_name = "access"; yang_parent_name = "community"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Snmp::Context::Community::Access::~Access()
{
}

bool Native::Router::Isis::Snmp::Context::Community::Access::has_data() const
{
    return standard_acl.is_set
	|| expanded_acl.is_set
	|| acl_name.is_set
	|| ipv6.is_set
	|| ro.is_set
	|| rw.is_set;
}

bool Native::Router::Isis::Snmp::Context::Community::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standard_acl.yfilter)
	|| ydk::is_set(expanded_acl.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(ro.yfilter)
	|| ydk::is_set(rw.yfilter);
}

std::string Native::Router::Isis::Snmp::Context::Community::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Snmp::Context::Community::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());
    if (expanded_acl.is_set || is_set(expanded_acl.yfilter)) leaf_name_data.push_back(expanded_acl.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (ro.is_set || is_set(ro.yfilter)) leaf_name_data.push_back(ro.get_name_leafdata());
    if (rw.is_set || is_set(rw.yfilter)) leaf_name_data.push_back(rw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Snmp::Context::Community::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Snmp::Context::Community::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Snmp::Context::Community::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "standard-acl")
    {
        standard_acl = value;
        standard_acl.value_namespace = name_space;
        standard_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-acl")
    {
        expanded_acl = value;
        expanded_acl.value_namespace = name_space;
        expanded_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ro")
    {
        ro = value;
        ro.value_namespace = name_space;
        ro.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rw")
    {
        rw = value;
        rw.value_namespace = name_space;
        rw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Snmp::Context::Community::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "standard-acl")
    {
        standard_acl.yfilter = yfilter;
    }
    if(value_path == "expanded-acl")
    {
        expanded_acl.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "ro")
    {
        ro.yfilter = yfilter;
    }
    if(value_path == "rw")
    {
        rw.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Snmp::Context::Community::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard-acl" || name == "expanded-acl" || name == "acl-name" || name == "ipv6" || name == "ro" || name == "rw")
        return true;
    return false;
}

Native::Router::Isis::Snmp::Context::User::User()
    :
    name{YType::str, "name"}
    	,
    permisssion(std::make_shared<Native::Router::Isis::Snmp::Context::User::Permisssion>())
{
    permisssion->parent = this;

    yang_name = "user"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Snmp::Context::User::~User()
{
}

bool Native::Router::Isis::Snmp::Context::User::has_data() const
{
    return name.is_set
	|| (permisssion !=  nullptr && permisssion->has_data());
}

bool Native::Router::Isis::Snmp::Context::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (permisssion !=  nullptr && permisssion->has_operation());
}

std::string Native::Router::Isis::Snmp::Context::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Snmp::Context::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Snmp::Context::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permisssion")
    {
        if(permisssion == nullptr)
        {
            permisssion = std::make_shared<Native::Router::Isis::Snmp::Context::User::Permisssion>();
        }
        return permisssion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Snmp::Context::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permisssion != nullptr)
    {
        children["permisssion"] = permisssion;
    }

    return children;
}

void Native::Router::Isis::Snmp::Context::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Snmp::Context::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Snmp::Context::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permisssion" || name == "name")
        return true;
    return false;
}

Native::Router::Isis::Snmp::Context::User::Permisssion::Permisssion()
    :
    credential{YType::empty, "credential"},
    encrypted{YType::empty, "encrypted"}
    	,
    access(std::make_shared<Native::Router::Isis::Snmp::Context::User::Permisssion::Access>())
	,auth(std::make_shared<Native::Router::Isis::Snmp::Context::User::Permisssion::Auth>())
{
    access->parent = this;
    auth->parent = this;

    yang_name = "permisssion"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Snmp::Context::User::Permisssion::~Permisssion()
{
}

bool Native::Router::Isis::Snmp::Context::User::Permisssion::has_data() const
{
    return credential.is_set
	|| encrypted.is_set
	|| (access !=  nullptr && access->has_data())
	|| (auth !=  nullptr && auth->has_data());
}

bool Native::Router::Isis::Snmp::Context::User::Permisssion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(credential.yfilter)
	|| ydk::is_set(encrypted.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::Router::Isis::Snmp::Context::User::Permisssion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permisssion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Snmp::Context::User::Permisssion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credential.is_set || is_set(credential.yfilter)) leaf_name_data.push_back(credential.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Snmp::Context::User::Permisssion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Isis::Snmp::Context::User::Permisssion::Access>();
        }
        return access;
    }

    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::Router::Isis::Snmp::Context::User::Permisssion::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Snmp::Context::User::Permisssion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(auth != nullptr)
    {
        children["auth"] = auth;
    }

    return children;
}

void Native::Router::Isis::Snmp::Context::User::Permisssion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "credential")
    {
        credential = value;
        credential.value_namespace = name_space;
        credential.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
        encrypted.value_namespace = name_space;
        encrypted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Snmp::Context::User::Permisssion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "credential")
    {
        credential.yfilter = yfilter;
    }
    if(value_path == "encrypted")
    {
        encrypted.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Snmp::Context::User::Permisssion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "auth" || name == "credential" || name == "encrypted")
        return true;
    return false;
}

Native::Router::Isis::Snmp::Context::User::Permisssion::Access::Access()
    :
    standard_acl{YType::uint32, "standard-acl"},
    acl_name{YType::str, "acl-name"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "access"; yang_parent_name = "permisssion"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Snmp::Context::User::Permisssion::Access::~Access()
{
}

bool Native::Router::Isis::Snmp::Context::User::Permisssion::Access::has_data() const
{
    return standard_acl.is_set
	|| acl_name.is_set
	|| ipv6.is_set;
}

bool Native::Router::Isis::Snmp::Context::User::Permisssion::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standard_acl.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Isis::Snmp::Context::User::Permisssion::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Snmp::Context::User::Permisssion::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Snmp::Context::User::Permisssion::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Snmp::Context::User::Permisssion::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Snmp::Context::User::Permisssion::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "standard-acl")
    {
        standard_acl = value;
        standard_acl.value_namespace = name_space;
        standard_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Snmp::Context::User::Permisssion::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "standard-acl")
    {
        standard_acl.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Snmp::Context::User::Permisssion::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard-acl" || name == "acl-name" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::Auth()
    :
    md5{YType::str, "md5"},
    sha{YType::str, "sha"}
{

    yang_name = "auth"; yang_parent_name = "permisssion"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::~Auth()
{
}

bool Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::has_data() const
{
    return md5.is_set
	|| sha.is_set;
}

bool Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha.yfilter);
}

std::string Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha.is_set || is_set(sha.yfilter)) leaf_name_data.push_back(sha.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha")
    {
        sha = value;
        sha.value_namespace = name_space;
        sha.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha")
    {
        sha.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha")
        return true;
    return false;
}

Native::Router::Isis::SummaryAddress::SummaryAddress()
    :
    ip{YType::str, "ip"},
    mask{YType::str, "mask"}
    	,
    level_1(nullptr) // presence node
	,level_1_2(nullptr) // presence node
	,level_2(nullptr) // presence node
	,metric_tag_container(std::make_shared<Native::Router::Isis::SummaryAddress::MetricTagContainer>())
{
    metric_tag_container->parent = this;

    yang_name = "summary-address"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::SummaryAddress::~SummaryAddress()
{
}

bool Native::Router::Isis::SummaryAddress::has_data() const
{
    return ip.is_set
	|| mask.is_set
	|| (level_1 !=  nullptr && level_1->has_data())
	|| (level_1_2 !=  nullptr && level_1_2->has_data())
	|| (level_2 !=  nullptr && level_2->has_data())
	|| (metric_tag_container !=  nullptr && metric_tag_container->has_data());
}

bool Native::Router::Isis::SummaryAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_1_2 !=  nullptr && level_1_2->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation())
	|| (metric_tag_container !=  nullptr && metric_tag_container->has_operation());
}

std::string Native::Router::Isis::SummaryAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address" <<"[ip='" <<ip <<"']" <<"[mask='" <<mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::Isis::SummaryAddress::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-1-2")
    {
        if(level_1_2 == nullptr)
        {
            level_1_2 = std::make_shared<Native::Router::Isis::SummaryAddress::Level12>();
        }
        return level_1_2;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::Isis::SummaryAddress::Level2>();
        }
        return level_2;
    }

    if(child_yang_name == "metric-tag-container")
    {
        if(metric_tag_container == nullptr)
        {
            metric_tag_container = std::make_shared<Native::Router::Isis::SummaryAddress::MetricTagContainer>();
        }
        return metric_tag_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_1_2 != nullptr)
    {
        children["level-1-2"] = level_1_2;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    if(metric_tag_container != nullptr)
    {
        children["metric-tag-container"] = metric_tag_container;
    }

    return children;
}

void Native::Router::Isis::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Router::Isis::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Router::Isis::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-1-2" || name == "level-2" || name == "metric-tag-container" || name == "ip" || name == "mask")
        return true;
    return false;
}

Native::Router::Isis::SummaryAddress::Level1::Level1()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{

    yang_name = "level-1"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::SummaryAddress::Level1::~Level1()
{
}

bool Native::Router::Isis::SummaryAddress::Level1::has_data() const
{
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::Isis::SummaryAddress::Level1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Isis::SummaryAddress::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::SummaryAddress::Level1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::SummaryAddress::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SummaryAddress::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SummaryAddress::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::SummaryAddress::Level1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::SummaryAddress::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Router::Isis::SummaryAddress::Level12::Level12()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{

    yang_name = "level-1-2"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::SummaryAddress::Level12::~Level12()
{
}

bool Native::Router::Isis::SummaryAddress::Level12::has_data() const
{
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::Isis::SummaryAddress::Level12::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Isis::SummaryAddress::Level12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::SummaryAddress::Level12::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::SummaryAddress::Level12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SummaryAddress::Level12::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SummaryAddress::Level12::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::SummaryAddress::Level12::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::SummaryAddress::Level12::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Router::Isis::SummaryAddress::Level2::Level2()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{

    yang_name = "level-2"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::SummaryAddress::Level2::~Level2()
{
}

bool Native::Router::Isis::SummaryAddress::Level2::has_data() const
{
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::Isis::SummaryAddress::Level2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Isis::SummaryAddress::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::SummaryAddress::Level2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::SummaryAddress::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SummaryAddress::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SummaryAddress::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::SummaryAddress::Level2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::SummaryAddress::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Router::Isis::SummaryAddress::MetricTagContainer::MetricTagContainer()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{

    yang_name = "metric-tag-container"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Isis::SummaryAddress::MetricTagContainer::~MetricTagContainer()
{
}

bool Native::Router::Isis::SummaryAddress::MetricTagContainer::has_data() const
{
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::Isis::SummaryAddress::MetricTagContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Isis::SummaryAddress::MetricTagContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-tag-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::SummaryAddress::MetricTagContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::SummaryAddress::MetricTagContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SummaryAddress::MetricTagContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SummaryAddress::MetricTagContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::SummaryAddress::MetricTagContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::SummaryAddress::MetricTagContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Router::Isis::TrafficShare::TrafficShare()
    :
    min(std::make_shared<Native::Router::Isis::TrafficShare::Min>())
{
    min->parent = this;

    yang_name = "traffic-share"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Isis::TrafficShare::has_data() const
{
    return (min !=  nullptr && min->has_data());
}

bool Native::Router::Isis::TrafficShare::has_operation() const
{
    return is_set(yfilter)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Router::Isis::TrafficShare::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::TrafficShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Router::Isis::TrafficShare::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min != nullptr)
    {
        children["min"] = min;
    }

    return children;
}

void Native::Router::Isis::TrafficShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::TrafficShare::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::TrafficShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min")
        return true;
    return false;
}

Native::Router::Isis::TrafficShare::Min::Min()
    :
    across_interfaces{YType::empty, "across-interfaces"}
{

    yang_name = "min"; yang_parent_name = "traffic-share"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::TrafficShare::Min::~Min()
{
}

bool Native::Router::Isis::TrafficShare::Min::has_data() const
{
    return across_interfaces.is_set;
}

bool Native::Router::Isis::TrafficShare::Min::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(across_interfaces.yfilter);
}

std::string Native::Router::Isis::TrafficShare::Min::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/traffic-share/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::TrafficShare::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::TrafficShare::Min::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.yfilter)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::TrafficShare::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::TrafficShare::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::TrafficShare::Min::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
        across_interfaces.value_namespace = name_space;
        across_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::TrafficShare::Min::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Isis::TrafficShare::Min::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "across-interfaces")
        return true;
    return false;
}

Native::Router::Isis::Advertise::Advertise()
    :
    passive_only{YType::empty, "passive-only"}
{

    yang_name = "advertise"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Advertise::~Advertise()
{
}

bool Native::Router::Isis::Advertise::has_data() const
{
    return passive_only.is_set;
}

bool Native::Router::Isis::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive_only.yfilter);
}

std::string Native::Router::Isis::Advertise::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive_only.is_set || is_set(passive_only.yfilter)) leaf_name_data.push_back(passive_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive-only")
    {
        passive_only = value;
        passive_only.value_namespace = name_space;
        passive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive-only")
    {
        passive_only.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-only")
        return true;
    return false;
}

Native::Router::Isis::DefaultInformation::DefaultInformation()
    :
    originate(nullptr) // presence node
{

    yang_name = "default-information"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Isis::DefaultInformation::has_data() const
{
    return (originate !=  nullptr && originate->has_data());
}

bool Native::Router::Isis::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (originate !=  nullptr && originate->has_operation());
}

std::string Native::Router::Isis::DefaultInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "originate")
    {
        if(originate == nullptr)
        {
            originate = std::make_shared<Native::Router::Isis::DefaultInformation::Originate>();
        }
        return originate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(originate != nullptr)
    {
        children["originate"] = originate;
    }

    return children;
}

void Native::Router::Isis::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Isis::DefaultInformation::Originate::Originate()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "originate"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::DefaultInformation::Originate::~Originate()
{
}

bool Native::Router::Isis::DefaultInformation::Originate::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Isis::DefaultInformation::Originate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::DefaultInformation::Originate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/default-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::DefaultInformation::Originate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::DefaultInformation::Originate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::DefaultInformation::Originate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::DefaultInformation::Originate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::DefaultInformation::Originate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::DefaultInformation::Originate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::Metric::Metric()
    :
    metric{YType::uint32, "metric"}
{

    yang_name = "metric"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Metric::~Metric()
{
}

bool Native::Router::Isis::Metric::has_data() const
{
    for (std::size_t index=0; index<metrics.size(); index++)
    {
        if(metrics[index]->has_data())
            return true;
    }
    return metric.is_set;
}

bool Native::Router::Isis::Metric::has_operation() const
{
    for (std::size_t index=0; index<metrics.size(); index++)
    {
        if(metrics[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Isis::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metrics")
    {
        for(auto const & c : metrics)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Metric::Metrics>();
        c->parent = this;
        metrics.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metrics)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metrics" || name == "metric")
        return true;
    return false;
}

Native::Router::Isis::Metric::Metrics::Metrics()
    :
    level{YType::enumeration, "level"},
    metric{YType::uint32, "metric"}
{

    yang_name = "metrics"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Metric::Metrics::~Metrics()
{
}

bool Native::Router::Isis::Metric::Metrics::has_data() const
{
    return level.is_set
	|| metric.is_set;
}

bool Native::Router::Isis::Metric::Metrics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Isis::Metric::Metrics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/metric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Metric::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Metric::Metrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Metric::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Metric::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Metric::Metrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Metric::Metrics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Metric::Metrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "metric")
        return true;
    return false;
}

Native::Router::Isis::PrcInterval::PrcInterval()
    :
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    minimum_wait{YType::uint32, "minimum-wait"}
{

    yang_name = "prc-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::PrcInterval::~PrcInterval()
{
}

bool Native::Router::Isis::PrcInterval::has_data() const
{
    return interval.is_set
	|| initial_wait.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::Isis::PrcInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(minimum_wait.yfilter);
}

std::string Native::Router::Isis::PrcInterval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::PrcInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::PrcInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.yfilter)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::PrcInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::PrcInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::PrcInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
        minimum_wait.value_namespace = name_space;
        minimum_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::PrcInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::PrcInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "initial-wait" || name == "minimum-wait")
        return true;
    return false;
}

Native::Router::Isis::SetOverloadBit::SetOverloadBit()
    :
    on_startup(std::make_shared<Native::Router::Isis::SetOverloadBit::OnStartup>())
	,suppress(std::make_shared<Native::Router::Isis::SetOverloadBit::Suppress>())
{
    on_startup->parent = this;
    suppress->parent = this;

    yang_name = "set-overload-bit"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::SetOverloadBit::~SetOverloadBit()
{
}

bool Native::Router::Isis::SetOverloadBit::has_data() const
{
    return (on_startup !=  nullptr && on_startup->has_data())
	|| (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::Isis::SetOverloadBit::has_operation() const
{
    return is_set(yfilter)
	|| (on_startup !=  nullptr && on_startup->has_operation())
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::Isis::SetOverloadBit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::SetOverloadBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-overload-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::SetOverloadBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::SetOverloadBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Native::Router::Isis::SetOverloadBit::OnStartup>();
        }
        return on_startup;
    }

    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::Isis::SetOverloadBit::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SetOverloadBit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
}

void Native::Router::Isis::SetOverloadBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::SetOverloadBit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::SetOverloadBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-startup" || name == "suppress")
        return true;
    return false;
}

Native::Router::Isis::SetOverloadBit::OnStartup::OnStartup()
    :
    time(std::make_shared<Native::Router::Isis::SetOverloadBit::OnStartup::Time>())
	,wait_for_bgp(nullptr) // presence node
{
    time->parent = this;

    yang_name = "on-startup"; yang_parent_name = "set-overload-bit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::SetOverloadBit::OnStartup::~OnStartup()
{
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::has_data() const
{
    return (time !=  nullptr && time->has_data())
	|| (wait_for_bgp !=  nullptr && wait_for_bgp->has_data());
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation())
	|| (wait_for_bgp !=  nullptr && wait_for_bgp->has_operation());
}

std::string Native::Router::Isis::SetOverloadBit::OnStartup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/set-overload-bit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::SetOverloadBit::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::SetOverloadBit::OnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::SetOverloadBit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Router::Isis::SetOverloadBit::OnStartup::Time>();
        }
        return time;
    }

    if(child_yang_name == "wait-for-bgp")
    {
        if(wait_for_bgp == nullptr)
        {
            wait_for_bgp = std::make_shared<Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp>();
        }
        return wait_for_bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SetOverloadBit::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    if(wait_for_bgp != nullptr)
    {
        children["wait-for-bgp"] = wait_for_bgp;
    }

    return children;
}

void Native::Router::Isis::SetOverloadBit::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::SetOverloadBit::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "wait-for-bgp")
        return true;
    return false;
}

Native::Router::Isis::SetOverloadBit::OnStartup::Time::Time()
    :
    time{YType::uint32, "time"},
    suppress{YType::empty, "suppress"},
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{

    yang_name = "time"; yang_parent_name = "on-startup"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::SetOverloadBit::OnStartup::Time::~Time()
{
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::Time::has_data() const
{
    return time.is_set
	|| suppress.is_set
	|| external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(suppress.yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::Isis::SetOverloadBit::OnStartup::Time::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/set-overload-bit/on-startup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::SetOverloadBit::OnStartup::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::SetOverloadBit::OnStartup::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (suppress.is_set || is_set(suppress.yfilter)) leaf_name_data.push_back(suppress.get_name_leafdata());
    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::SetOverloadBit::OnStartup::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SetOverloadBit::OnStartup::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SetOverloadBit::OnStartup::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress")
    {
        suppress = value;
        suppress.value_namespace = name_space;
        suppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::SetOverloadBit::OnStartup::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "suppress")
    {
        suppress.yfilter = yfilter;
    }
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "suppress" || name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::WaitForBgp()
    :
    suppress(std::make_shared<Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress>())
{
    suppress->parent = this;

    yang_name = "wait-for-bgp"; yang_parent_name = "on-startup"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::~WaitForBgp()
{
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::has_data() const
{
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::has_operation() const
{
    return is_set(yfilter)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/set-overload-bit/on-startup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wait-for-bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
}

void Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
}

Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::Suppress()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{

    yang_name = "suppress"; yang_parent_name = "wait-for-bgp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::~Suppress()
{
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_data() const
{
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/set-overload-bit/on-startup/wait-for-bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::Isis::SetOverloadBit::Suppress::Suppress()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{

    yang_name = "suppress"; yang_parent_name = "set-overload-bit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::SetOverloadBit::Suppress::~Suppress()
{
}

bool Native::Router::Isis::SetOverloadBit::Suppress::has_data() const
{
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::SetOverloadBit::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::Isis::SetOverloadBit::Suppress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/set-overload-bit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::SetOverloadBit::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::SetOverloadBit::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::SetOverloadBit::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SetOverloadBit::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SetOverloadBit::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::SetOverloadBit::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::SetOverloadBit::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::Isis::SpfInterval::SpfInterval()
    :
    intervals(std::make_shared<Native::Router::Isis::SpfInterval::Intervals>())
{
    intervals->parent = this;

    yang_name = "spf-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::SpfInterval::~SpfInterval()
{
}

bool Native::Router::Isis::SpfInterval::has_data() const
{
    for (std::size_t index=0; index<level_1_2.size(); index++)
    {
        if(level_1_2[index]->has_data())
            return true;
    }
    return (intervals !=  nullptr && intervals->has_data());
}

bool Native::Router::Isis::SpfInterval::has_operation() const
{
    for (std::size_t index=0; index<level_1_2.size(); index++)
    {
        if(level_1_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (intervals !=  nullptr && intervals->has_operation());
}

std::string Native::Router::Isis::SpfInterval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::SpfInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::SpfInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1-2")
    {
        for(auto const & c : level_1_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::SpfInterval::Level12>();
        c->parent = this;
        level_1_2.push_back(c);
        return c;
    }

    if(child_yang_name == "intervals")
    {
        if(intervals == nullptr)
        {
            intervals = std::make_shared<Native::Router::Isis::SpfInterval::Intervals>();
        }
        return intervals;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SpfInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : level_1_2)
    {
        children[c->get_segment_path()] = c;
    }

    if(intervals != nullptr)
    {
        children["intervals"] = intervals;
    }

    return children;
}

void Native::Router::Isis::SpfInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::SpfInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::SpfInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1-2" || name == "intervals")
        return true;
    return false;
}

Native::Router::Isis::SpfInterval::Level12::Level12()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    minimum_wait{YType::uint32, "minimum-wait"}
{

    yang_name = "level-1-2"; yang_parent_name = "spf-interval"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::SpfInterval::Level12::~Level12()
{
}

bool Native::Router::Isis::SpfInterval::Level12::has_data() const
{
    return level.is_set
	|| interval.is_set
	|| initial_wait.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::Isis::SpfInterval::Level12::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(minimum_wait.yfilter);
}

std::string Native::Router::Isis::SpfInterval::Level12::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/spf-interval/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::SpfInterval::Level12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1-2" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::SpfInterval::Level12::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.yfilter)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::SpfInterval::Level12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SpfInterval::Level12::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SpfInterval::Level12::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
        minimum_wait.value_namespace = name_space;
        minimum_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::SpfInterval::Level12::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::SpfInterval::Level12::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interval" || name == "initial-wait" || name == "minimum-wait")
        return true;
    return false;
}

Native::Router::Isis::SpfInterval::Intervals::Intervals()
    :
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    minimum_wait{YType::uint32, "minimum-wait"}
{

    yang_name = "intervals"; yang_parent_name = "spf-interval"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::SpfInterval::Intervals::~Intervals()
{
}

bool Native::Router::Isis::SpfInterval::Intervals::has_data() const
{
    return interval.is_set
	|| initial_wait.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::Isis::SpfInterval::Intervals::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(minimum_wait.yfilter);
}

std::string Native::Router::Isis::SpfInterval::Intervals::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/spf-interval/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::SpfInterval::Intervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::SpfInterval::Intervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.yfilter)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::SpfInterval::Intervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SpfInterval::Intervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SpfInterval::Intervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
        minimum_wait.value_namespace = name_space;
        minimum_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::SpfInterval::Intervals::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::SpfInterval::Intervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "initial-wait" || name == "minimum-wait")
        return true;
    return false;
}

Native::Router::Isis::AreaPassword::AreaPassword()
    :
    name{YType::str, "name"},
    authenticate{YType::empty, "authenticate"},
    snp{YType::enumeration, "snp"}
{

    yang_name = "area-password"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::AreaPassword::~AreaPassword()
{
}

bool Native::Router::Isis::AreaPassword::has_data() const
{
    return name.is_set
	|| authenticate.is_set
	|| snp.is_set;
}

bool Native::Router::Isis::AreaPassword::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(authenticate.yfilter)
	|| ydk::is_set(snp.yfilter);
}

std::string Native::Router::Isis::AreaPassword::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AreaPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AreaPassword::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (authenticate.is_set || is_set(authenticate.yfilter)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (snp.is_set || is_set(snp.yfilter)) leaf_name_data.push_back(snp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::AreaPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AreaPassword::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AreaPassword::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authenticate")
    {
        authenticate = value;
        authenticate.value_namespace = name_space;
        authenticate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snp")
    {
        snp = value;
        snp.value_namespace = name_space;
        snp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AreaPassword::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "authenticate")
    {
        authenticate.yfilter = yfilter;
    }
    if(value_path == "snp")
    {
        snp.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AreaPassword::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "authenticate" || name == "snp")
        return true;
    return false;
}

Native::Router::Isis::Authentication::Authentication()
    :
    mode(std::make_shared<Native::Router::Isis::Authentication::Mode>())
	,key_chain(std::make_shared<Native::Router::Isis::Authentication::KeyChain>())
	,send_only(nullptr) // presence node
{
    mode->parent = this;
    key_chain->parent = this;

    yang_name = "authentication"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Authentication::~Authentication()
{
}

bool Native::Router::Isis::Authentication::has_data() const
{
    return (mode !=  nullptr && mode->has_data())
	|| (key_chain !=  nullptr && key_chain->has_data())
	|| (send_only !=  nullptr && send_only->has_data());
}

bool Native::Router::Isis::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (send_only !=  nullptr && send_only->has_operation());
}

std::string Native::Router::Isis::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Router::Isis::Authentication::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Router::Isis::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "send-only")
    {
        if(send_only == nullptr)
        {
            send_only = std::make_shared<Native::Router::Isis::Authentication::SendOnly>();
        }
        return send_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    if(send_only != nullptr)
    {
        children["send-only"] = send_only;
    }

    return children;
}

void Native::Router::Isis::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain" || name == "send-only")
        return true;
    return false;
}

Native::Router::Isis::Authentication::Mode::Mode()
    :
    md5(nullptr) // presence node
	,text(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Authentication::Mode::~Mode()
{
}

bool Native::Router::Isis::Authentication::Mode::has_data() const
{
    return (md5 !=  nullptr && md5->has_data())
	|| (text !=  nullptr && text->has_data());
}

bool Native::Router::Isis::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (text !=  nullptr && text->has_operation());
}

std::string Native::Router::Isis::Authentication::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Router::Isis::Authentication::Mode::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "text")
    {
        if(text == nullptr)
        {
            text = std::make_shared<Native::Router::Isis::Authentication::Mode::Text>();
        }
        return text;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(text != nullptr)
    {
        children["text"] = text;
    }

    return children;
}

void Native::Router::Isis::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text")
        return true;
    return false;
}

Native::Router::Isis::Authentication::Mode::Md5::Md5()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "md5"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Authentication::Mode::Md5::~Md5()
{
}

bool Native::Router::Isis::Authentication::Mode::Md5::has_data() const
{
    return levels.is_set;
}

bool Native::Router::Isis::Authentication::Mode::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Router::Isis::Authentication::Mode::Md5::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/authentication/mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Authentication::Mode::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Authentication::Mode::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Authentication::Mode::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Authentication::Mode::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Authentication::Mode::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Authentication::Mode::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Authentication::Mode::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Router::Isis::Authentication::Mode::Text::Text()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "text"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Authentication::Mode::Text::~Text()
{
}

bool Native::Router::Isis::Authentication::Mode::Text::has_data() const
{
    return levels.is_set;
}

bool Native::Router::Isis::Authentication::Mode::Text::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Router::Isis::Authentication::Mode::Text::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/authentication/mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Authentication::Mode::Text::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Authentication::Mode::Text::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Authentication::Mode::Text::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Authentication::Mode::Text::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Authentication::Mode::Text::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Authentication::Mode::Text::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Authentication::Mode::Text::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Router::Isis::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Router::Isis::Authentication::KeyChain::has_data() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Router::Isis::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Router::Isis::Authentication::KeyChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain-list")
    {
        for(auto const & c : key_chain_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Authentication::KeyChain::KeyChainList>();
        c->parent = this;
        key_chain_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_chain_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain-list" || name == "name")
        return true;
    return false;
}

Native::Router::Isis::Authentication::KeyChain::KeyChainList::KeyChainList()
    :
    levels{YType::enumeration, "levels"},
    name{YType::str, "name"}
{

    yang_name = "key-chain-list"; yang_parent_name = "key-chain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Authentication::KeyChain::KeyChainList::~KeyChainList()
{
}

bool Native::Router::Isis::Authentication::KeyChain::KeyChainList::has_data() const
{
    return levels.is_set
	|| name.is_set;
}

bool Native::Router::Isis::Authentication::KeyChain::KeyChainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Router::Isis::Authentication::KeyChain::KeyChainList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/authentication/key-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Authentication::KeyChain::KeyChainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Authentication::KeyChain::KeyChainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Authentication::KeyChain::KeyChainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Authentication::KeyChain::KeyChainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Authentication::KeyChain::KeyChainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Authentication::KeyChain::KeyChainList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Authentication::KeyChain::KeyChainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "name")
        return true;
    return false;
}

Native::Router::Isis::Authentication::SendOnly::SendOnly()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "send-only"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Authentication::SendOnly::~SendOnly()
{
}

bool Native::Router::Isis::Authentication::SendOnly::has_data() const
{
    return levels.is_set;
}

bool Native::Router::Isis::Authentication::SendOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Router::Isis::Authentication::SendOnly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Authentication::SendOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Authentication::SendOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Authentication::SendOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Authentication::SendOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Authentication::SendOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Authentication::SendOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Authentication::SendOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Router::Isis::DistributeList::DistributeList()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::str, "in"},
    gateway{YType::str, "gateway"},
    prefix{YType::str, "prefix"},
    gateway_prefix_in{YType::str, "gateway-prefix-in"},
    route_map{YType::str, "route-map"},
    route_map_in{YType::empty, "route-map-in"}
{

    yang_name = "distribute-list"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::DistributeList::~DistributeList()
{
}

bool Native::Router::Isis::DistributeList::has_data() const
{
    return acl_name.is_set
	|| in.is_set
	|| gateway.is_set
	|| prefix.is_set
	|| gateway_prefix_in.is_set
	|| route_map.is_set
	|| route_map_in.is_set;
}

bool Native::Router::Isis::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(gateway.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(gateway_prefix_in.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(route_map_in.yfilter);
}

std::string Native::Router::Isis::DistributeList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (gateway_prefix_in.is_set || is_set(gateway_prefix_in.yfilter)) leaf_name_data.push_back(gateway_prefix_in.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (route_map_in.is_set || is_set(route_map_in.yfilter)) leaf_name_data.push_back(route_map_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway-prefix-in")
    {
        gateway_prefix_in = value;
        gateway_prefix_in.value_namespace = name_space;
        gateway_prefix_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map-in")
    {
        route_map_in = value;
        route_map_in.value_namespace = name_space;
        route_map_in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "gateway-prefix-in")
    {
        gateway_prefix_in.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "route-map-in")
    {
        route_map_in.yfilter = yfilter;
    }
}

bool Native::Router::Isis::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in" || name == "gateway" || name == "prefix" || name == "gateway-prefix-in" || name == "route-map" || name == "route-map-in")
        return true;
    return false;
}

Native::Router::Isis::DomainPassword::DomainPassword()
    :
    name{YType::str, "name"},
    authenticate{YType::empty, "authenticate"},
    snp{YType::enumeration, "snp"}
{

    yang_name = "domain-password"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::DomainPassword::~DomainPassword()
{
}

bool Native::Router::Isis::DomainPassword::has_data() const
{
    return name.is_set
	|| authenticate.is_set
	|| snp.is_set;
}

bool Native::Router::Isis::DomainPassword::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(authenticate.yfilter)
	|| ydk::is_set(snp.yfilter);
}

std::string Native::Router::Isis::DomainPassword::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::DomainPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::DomainPassword::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (authenticate.is_set || is_set(authenticate.yfilter)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (snp.is_set || is_set(snp.yfilter)) leaf_name_data.push_back(snp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::DomainPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::DomainPassword::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::DomainPassword::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authenticate")
    {
        authenticate = value;
        authenticate.value_namespace = name_space;
        authenticate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snp")
    {
        snp = value;
        snp.value_namespace = name_space;
        snp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::DomainPassword::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "authenticate")
    {
        authenticate.yfilter = yfilter;
    }
    if(value_path == "snp")
    {
        snp.yfilter = yfilter;
    }
}

bool Native::Router::Isis::DomainPassword::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "authenticate" || name == "snp")
        return true;
    return false;
}

Native::Router::Isis::FastFlood::FastFlood()
    :
    number{YType::uint32, "number"}
{

    yang_name = "fast-flood"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastFlood::~FastFlood()
{
}

bool Native::Router::Isis::FastFlood::has_data() const
{
    return number.is_set;
}

bool Native::Router::Isis::FastFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Router::Isis::FastFlood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::FastFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Router::Isis::FastFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::FastReroute()
    :
    load_sharing(std::make_shared<Native::Router::Isis::FastReroute::LoadSharing>())
	,per_prefix(std::make_shared<Native::Router::Isis::FastReroute::PerPrefix>())
	,remote_lfa(std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa>())
	,tie_break(std::make_shared<Native::Router::Isis::FastReroute::TieBreak>())
{
    load_sharing->parent = this;
    per_prefix->parent = this;
    remote_lfa->parent = this;
    tie_break->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::~FastReroute()
{
}

bool Native::Router::Isis::FastReroute::has_data() const
{
    return (load_sharing !=  nullptr && load_sharing->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tie_break !=  nullptr && tie_break->has_data());
}

bool Native::Router::Isis::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (load_sharing !=  nullptr && load_sharing->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tie_break !=  nullptr && tie_break->has_operation());
}

std::string Native::Router::Isis::FastReroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-sharing")
    {
        if(load_sharing == nullptr)
        {
            load_sharing = std::make_shared<Native::Router::Isis::FastReroute::LoadSharing>();
        }
        return load_sharing;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Native::Router::Isis::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa>();
        }
        return remote_lfa;
    }

    if(child_yang_name == "tie-break")
    {
        if(tie_break == nullptr)
        {
            tie_break = std::make_shared<Native::Router::Isis::FastReroute::TieBreak>();
        }
        return tie_break;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_sharing != nullptr)
    {
        children["load-sharing"] = load_sharing;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    if(remote_lfa != nullptr)
    {
        children["remote-lfa"] = remote_lfa;
    }

    if(tie_break != nullptr)
    {
        children["tie-break"] = tie_break;
    }

    return children;
}

void Native::Router::Isis::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-sharing" || name == "per-prefix" || name == "remote-lfa" || name == "tie-break")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::LoadSharing::LoadSharing()
    :
    level_1(nullptr) // presence node
	,level_2(nullptr) // presence node
{

    yang_name = "load-sharing"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::LoadSharing::~LoadSharing()
{
}

bool Native::Router::Isis::FastReroute::LoadSharing::has_data() const
{
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::Isis::FastReroute::LoadSharing::has_operation() const
{
    return is_set(yfilter)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::Isis::FastReroute::LoadSharing::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::LoadSharing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-sharing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::LoadSharing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::LoadSharing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::Isis::FastReroute::LoadSharing::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::Isis::FastReroute::LoadSharing::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::LoadSharing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    return children;
}

void Native::Router::Isis::FastReroute::LoadSharing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::FastReroute::LoadSharing::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::FastReroute::LoadSharing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-2")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::LoadSharing::Level1::Level1()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "level-1"; yang_parent_name = "load-sharing"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::LoadSharing::Level1::~Level1()
{
}

bool Native::Router::Isis::FastReroute::LoadSharing::Level1::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Isis::FastReroute::LoadSharing::Level1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Isis::FastReroute::LoadSharing::Level1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/load-sharing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::LoadSharing::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::LoadSharing::Level1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::LoadSharing::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::LoadSharing::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastReroute::LoadSharing::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::FastReroute::LoadSharing::Level1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Isis::FastReroute::LoadSharing::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::LoadSharing::Level2::Level2()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "level-2"; yang_parent_name = "load-sharing"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::LoadSharing::Level2::~Level2()
{
}

bool Native::Router::Isis::FastReroute::LoadSharing::Level2::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Isis::FastReroute::LoadSharing::Level2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Isis::FastReroute::LoadSharing::Level2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/load-sharing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::LoadSharing::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::LoadSharing::Level2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::LoadSharing::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::LoadSharing::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastReroute::LoadSharing::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::FastReroute::LoadSharing::Level2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Isis::FastReroute::LoadSharing::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::PerPrefix::PerPrefix()
    :
    level_1(std::make_shared<Native::Router::Isis::FastReroute::PerPrefix::Level1>())
	,level_2(std::make_shared<Native::Router::Isis::FastReroute::PerPrefix::Level2>())
{
    level_1->parent = this;
    level_2->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Native::Router::Isis::FastReroute::PerPrefix::has_data() const
{
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::Isis::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::Isis::FastReroute::PerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::Isis::FastReroute::PerPrefix::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::Isis::FastReroute::PerPrefix::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    return children;
}

void Native::Router::Isis::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-2")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::PerPrefix::Level1::Level1()
    :
    all{YType::empty, "all"},
    route_map{YType::str, "route-map"}
{

    yang_name = "level-1"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::PerPrefix::Level1::~Level1()
{
}

bool Native::Router::Isis::FastReroute::PerPrefix::Level1::has_data() const
{
    return all.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::FastReroute::PerPrefix::Level1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::FastReroute::PerPrefix::Level1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/per-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::PerPrefix::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::PerPrefix::Level1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::PerPrefix::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::PerPrefix::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastReroute::PerPrefix::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::FastReroute::PerPrefix::Level1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::FastReroute::PerPrefix::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::PerPrefix::Level2::Level2()
    :
    all{YType::empty, "all"},
    route_map{YType::str, "route-map"}
{

    yang_name = "level-2"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::PerPrefix::Level2::~Level2()
{
}

bool Native::Router::Isis::FastReroute::PerPrefix::Level2::has_data() const
{
    return all.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::FastReroute::PerPrefix::Level2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::FastReroute::PerPrefix::Level2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/per-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::PerPrefix::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::PerPrefix::Level2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::PerPrefix::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::PerPrefix::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastReroute::PerPrefix::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::FastReroute::PerPrefix::Level2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::FastReroute::PerPrefix::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::RemoteLfa::RemoteLfa()
    :
    level_1(std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa::Level1>())
	,level_2(std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa::Level2>())
{
    level_1->parent = this;
    level_2->parent = this;

    yang_name = "remote-lfa"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::RemoteLfa::~RemoteLfa()
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::has_data() const
{
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::Isis::FastReroute::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::RemoteLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    return children;
}

void Native::Router::Isis::FastReroute::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::FastReroute::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-2")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::RemoteLfa::Level1::Level1()
    :
    mpls_ldp(nullptr) // presence node
{

    yang_name = "level-1"; yang_parent_name = "remote-lfa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::RemoteLfa::Level1::~Level1()
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::has_data() const
{
    return (mpls_ldp !=  nullptr && mpls_ldp->has_data());
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::has_operation() const
{
    return is_set(yfilter)
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation());
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/remote-lfa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::RemoteLfa::Level1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::RemoteLfa::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp == nullptr)
        {
            mpls_ldp = std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp>();
        }
        return mpls_ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::RemoteLfa::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_ldp != nullptr)
    {
        children["mpls-ldp"] = mpls_ldp;
    }

    return children;
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-ldp")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MplsLdp()
    :
    maximum_metric(nullptr) // presence node
{

    yang_name = "mpls-ldp"; yang_parent_name = "level-1"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::~MplsLdp()
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::has_data() const
{
    return (maximum_metric !=  nullptr && maximum_metric->has_data());
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::has_operation() const
{
    return is_set(yfilter)
	|| (maximum_metric !=  nullptr && maximum_metric->has_operation());
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/remote-lfa/level-1/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric")
    {
        if(maximum_metric == nullptr)
        {
            maximum_metric = std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric>();
        }
        return maximum_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric != nullptr)
    {
        children["maximum-metric"] = maximum_metric;
    }

    return children;
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-metric")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::MaximumMetric()
    :
    max_met{YType::uint32, "max-met"}
{

    yang_name = "maximum-metric"; yang_parent_name = "mpls-ldp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::has_data() const
{
    return max_met.is_set;
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_met.yfilter);
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/remote-lfa/level-1/mpls-ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_met.is_set || is_set(max_met.yfilter)) leaf_name_data.push_back(max_met.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-met")
    {
        max_met = value;
        max_met.value_namespace = name_space;
        max_met.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-met")
    {
        max_met.yfilter = yfilter;
    }
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-met")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::RemoteLfa::Level2::Level2()
    :
    mpls_ldp(nullptr) // presence node
{

    yang_name = "level-2"; yang_parent_name = "remote-lfa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::RemoteLfa::Level2::~Level2()
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::has_data() const
{
    return (mpls_ldp !=  nullptr && mpls_ldp->has_data());
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::has_operation() const
{
    return is_set(yfilter)
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation());
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/remote-lfa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::RemoteLfa::Level2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::RemoteLfa::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp == nullptr)
        {
            mpls_ldp = std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp>();
        }
        return mpls_ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::RemoteLfa::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_ldp != nullptr)
    {
        children["mpls-ldp"] = mpls_ldp;
    }

    return children;
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-ldp")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MplsLdp()
    :
    maximum_metric(nullptr) // presence node
{

    yang_name = "mpls-ldp"; yang_parent_name = "level-2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::~MplsLdp()
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::has_data() const
{
    return (maximum_metric !=  nullptr && maximum_metric->has_data());
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::has_operation() const
{
    return is_set(yfilter)
	|| (maximum_metric !=  nullptr && maximum_metric->has_operation());
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/remote-lfa/level-2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric")
    {
        if(maximum_metric == nullptr)
        {
            maximum_metric = std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric>();
        }
        return maximum_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric != nullptr)
    {
        children["maximum-metric"] = maximum_metric;
    }

    return children;
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-metric")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::MaximumMetric()
    :
    max_met{YType::uint32, "max-met"}
{

    yang_name = "maximum-metric"; yang_parent_name = "mpls-ldp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::has_data() const
{
    return max_met.is_set;
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_met.yfilter);
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/remote-lfa/level-2/mpls-ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_met.is_set || is_set(max_met.yfilter)) leaf_name_data.push_back(max_met.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-met")
    {
        max_met = value;
        max_met.value_namespace = name_space;
        max_met.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-met")
    {
        max_met.yfilter = yfilter;
    }
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-met")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::TieBreak::TieBreak()
    :
    level_1(std::make_shared<Native::Router::Isis::FastReroute::TieBreak::Level1>())
	,level_2(std::make_shared<Native::Router::Isis::FastReroute::TieBreak::Level2>())
{
    level_1->parent = this;
    level_2->parent = this;

    yang_name = "tie-break"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::TieBreak::~TieBreak()
{
}

bool Native::Router::Isis::FastReroute::TieBreak::has_data() const
{
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::Isis::FastReroute::TieBreak::has_operation() const
{
    return is_set(yfilter)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::Isis::FastReroute::TieBreak::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::TieBreak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tie-break";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::TieBreak::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::TieBreak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::Isis::FastReroute::TieBreak::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::Isis::FastReroute::TieBreak::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::TieBreak::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    return children;
}

void Native::Router::Isis::FastReroute::TieBreak::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::FastReroute::TieBreak::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::FastReroute::TieBreak::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-2")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::TieBreak::Level1::Level1()
    :
    downstream{YType::uint8, "downstream"},
    linecard_disjoint{YType::uint8, "linecard-disjoint"},
    lowest_backup_path_metric{YType::uint8, "lowest-backup-path-metric"},
    node_protecting{YType::uint8, "node-protecting"},
    primary_path{YType::uint8, "primary-path"},
    secondary_path{YType::uint8, "secondary-path"},
    srlg_disjoint{YType::uint8, "srlg-disjoint"}
{

    yang_name = "level-1"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::TieBreak::Level1::~Level1()
{
}

bool Native::Router::Isis::FastReroute::TieBreak::Level1::has_data() const
{
    return downstream.is_set
	|| linecard_disjoint.is_set
	|| lowest_backup_path_metric.is_set
	|| node_protecting.is_set
	|| primary_path.is_set
	|| secondary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Native::Router::Isis::FastReroute::TieBreak::Level1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(linecard_disjoint.yfilter)
	|| ydk::is_set(lowest_backup_path_metric.yfilter)
	|| ydk::is_set(node_protecting.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(secondary_path.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter);
}

std::string Native::Router::Isis::FastReroute::TieBreak::Level1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/tie-break/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::TieBreak::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::TieBreak::Level1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (linecard_disjoint.is_set || is_set(linecard_disjoint.yfilter)) leaf_name_data.push_back(linecard_disjoint.get_name_leafdata());
    if (lowest_backup_path_metric.is_set || is_set(lowest_backup_path_metric.yfilter)) leaf_name_data.push_back(lowest_backup_path_metric.get_name_leafdata());
    if (node_protecting.is_set || is_set(node_protecting.yfilter)) leaf_name_data.push_back(node_protecting.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (secondary_path.is_set || is_set(secondary_path.yfilter)) leaf_name_data.push_back(secondary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::TieBreak::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::TieBreak::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastReroute::TieBreak::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linecard-disjoint")
    {
        linecard_disjoint = value;
        linecard_disjoint.value_namespace = name_space;
        linecard_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowest-backup-path-metric")
    {
        lowest_backup_path_metric = value;
        lowest_backup_path_metric.value_namespace = name_space;
        lowest_backup_path_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protecting")
    {
        node_protecting = value;
        node_protecting.value_namespace = name_space;
        node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-path")
    {
        secondary_path = value;
        secondary_path.value_namespace = name_space;
        secondary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::FastReroute::TieBreak::Level1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "linecard-disjoint")
    {
        linecard_disjoint.yfilter = yfilter;
    }
    if(value_path == "lowest-backup-path-metric")
    {
        lowest_backup_path_metric.yfilter = yfilter;
    }
    if(value_path == "node-protecting")
    {
        node_protecting.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "secondary-path")
    {
        secondary_path.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
}

bool Native::Router::Isis::FastReroute::TieBreak::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "downstream" || name == "linecard-disjoint" || name == "lowest-backup-path-metric" || name == "node-protecting" || name == "primary-path" || name == "secondary-path" || name == "srlg-disjoint")
        return true;
    return false;
}

Native::Router::Isis::FastReroute::TieBreak::Level2::Level2()
    :
    downstream{YType::uint8, "downstream"},
    linecard_disjoint{YType::uint8, "linecard-disjoint"},
    lowest_backup_path_metric{YType::uint8, "lowest-backup-path-metric"},
    node_protecting{YType::uint8, "node-protecting"},
    primary_path{YType::uint8, "primary-path"},
    secondary_path{YType::uint8, "secondary-path"},
    srlg_disjoint{YType::uint8, "srlg-disjoint"}
{

    yang_name = "level-2"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::FastReroute::TieBreak::Level2::~Level2()
{
}

bool Native::Router::Isis::FastReroute::TieBreak::Level2::has_data() const
{
    return downstream.is_set
	|| linecard_disjoint.is_set
	|| lowest_backup_path_metric.is_set
	|| node_protecting.is_set
	|| primary_path.is_set
	|| secondary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Native::Router::Isis::FastReroute::TieBreak::Level2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(linecard_disjoint.yfilter)
	|| ydk::is_set(lowest_backup_path_metric.yfilter)
	|| ydk::is_set(node_protecting.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(secondary_path.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter);
}

std::string Native::Router::Isis::FastReroute::TieBreak::Level2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/tie-break/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::FastReroute::TieBreak::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::FastReroute::TieBreak::Level2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (linecard_disjoint.is_set || is_set(linecard_disjoint.yfilter)) leaf_name_data.push_back(linecard_disjoint.get_name_leafdata());
    if (lowest_backup_path_metric.is_set || is_set(lowest_backup_path_metric.yfilter)) leaf_name_data.push_back(lowest_backup_path_metric.get_name_leafdata());
    if (node_protecting.is_set || is_set(node_protecting.yfilter)) leaf_name_data.push_back(node_protecting.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (secondary_path.is_set || is_set(secondary_path.yfilter)) leaf_name_data.push_back(secondary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::TieBreak::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::TieBreak::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastReroute::TieBreak::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linecard-disjoint")
    {
        linecard_disjoint = value;
        linecard_disjoint.value_namespace = name_space;
        linecard_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowest-backup-path-metric")
    {
        lowest_backup_path_metric = value;
        lowest_backup_path_metric.value_namespace = name_space;
        lowest_backup_path_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protecting")
    {
        node_protecting = value;
        node_protecting.value_namespace = name_space;
        node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-path")
    {
        secondary_path = value;
        secondary_path.value_namespace = name_space;
        secondary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::FastReroute::TieBreak::Level2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "linecard-disjoint")
    {
        linecard_disjoint.yfilter = yfilter;
    }
    if(value_path == "lowest-backup-path-metric")
    {
        lowest_backup_path_metric.yfilter = yfilter;
    }
    if(value_path == "node-protecting")
    {
        node_protecting.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "secondary-path")
    {
        secondary_path.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
}

bool Native::Router::Isis::FastReroute::TieBreak::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "downstream" || name == "linecard-disjoint" || name == "lowest-backup-path-metric" || name == "node-protecting" || name == "primary-path" || name == "secondary-path" || name == "srlg-disjoint")
        return true;
    return false;
}

Native::Router::Isis::TiLfa::TiLfa()
    :
    level_1(std::make_shared<Native::Router::Isis::TiLfa::Level1>())
	,level_2(nullptr) // presence node
{
    level_1->parent = this;

    yang_name = "ti-lfa"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::TiLfa::~TiLfa()
{
}

bool Native::Router::Isis::TiLfa::has_data() const
{
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::Isis::TiLfa::has_operation() const
{
    return is_set(yfilter)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::Isis::TiLfa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::TiLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ti-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::TiLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::TiLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::Isis::TiLfa::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::Isis::TiLfa::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::TiLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    return children;
}

void Native::Router::Isis::TiLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::TiLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::TiLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-2")
        return true;
    return false;
}

Native::Router::Isis::TiLfa::Level1::Level1()
    :
    maximum_metric(std::make_shared<Native::Router::Isis::TiLfa::Level1::MaximumMetric>())
{
    maximum_metric->parent = this;

    yang_name = "level-1"; yang_parent_name = "ti-lfa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::TiLfa::Level1::~Level1()
{
}

bool Native::Router::Isis::TiLfa::Level1::has_data() const
{
    return (maximum_metric !=  nullptr && maximum_metric->has_data());
}

bool Native::Router::Isis::TiLfa::Level1::has_operation() const
{
    return is_set(yfilter)
	|| (maximum_metric !=  nullptr && maximum_metric->has_operation());
}

std::string Native::Router::Isis::TiLfa::Level1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/ti-lfa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::TiLfa::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::TiLfa::Level1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::TiLfa::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric")
    {
        if(maximum_metric == nullptr)
        {
            maximum_metric = std::make_shared<Native::Router::Isis::TiLfa::Level1::MaximumMetric>();
        }
        return maximum_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::TiLfa::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric != nullptr)
    {
        children["maximum-metric"] = maximum_metric;
    }

    return children;
}

void Native::Router::Isis::TiLfa::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::TiLfa::Level1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::TiLfa::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-metric")
        return true;
    return false;
}

Native::Router::Isis::TiLfa::Level1::MaximumMetric::MaximumMetric()
    :
    max_met{YType::uint32, "max-met"}
{

    yang_name = "maximum-metric"; yang_parent_name = "level-1"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::TiLfa::Level1::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::Isis::TiLfa::Level1::MaximumMetric::has_data() const
{
    return max_met.is_set;
}

bool Native::Router::Isis::TiLfa::Level1::MaximumMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_met.yfilter);
}

std::string Native::Router::Isis::TiLfa::Level1::MaximumMetric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/ti-lfa/level-1/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::TiLfa::Level1::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::TiLfa::Level1::MaximumMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_met.is_set || is_set(max_met.yfilter)) leaf_name_data.push_back(max_met.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::TiLfa::Level1::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::TiLfa::Level1::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::TiLfa::Level1::MaximumMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-met")
    {
        max_met = value;
        max_met.value_namespace = name_space;
        max_met.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::TiLfa::Level1::MaximumMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-met")
    {
        max_met.yfilter = yfilter;
    }
}

bool Native::Router::Isis::TiLfa::Level1::MaximumMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-met")
        return true;
    return false;
}

Native::Router::Isis::TiLfa::Level2::Level2()
    :
    maximum_metric(std::make_shared<Native::Router::Isis::TiLfa::Level2::MaximumMetric>())
{
    maximum_metric->parent = this;

    yang_name = "level-2"; yang_parent_name = "ti-lfa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::TiLfa::Level2::~Level2()
{
}

bool Native::Router::Isis::TiLfa::Level2::has_data() const
{
    return (maximum_metric !=  nullptr && maximum_metric->has_data());
}

bool Native::Router::Isis::TiLfa::Level2::has_operation() const
{
    return is_set(yfilter)
	|| (maximum_metric !=  nullptr && maximum_metric->has_operation());
}

std::string Native::Router::Isis::TiLfa::Level2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/ti-lfa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::TiLfa::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::TiLfa::Level2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::TiLfa::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric")
    {
        if(maximum_metric == nullptr)
        {
            maximum_metric = std::make_shared<Native::Router::Isis::TiLfa::Level2::MaximumMetric>();
        }
        return maximum_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::TiLfa::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric != nullptr)
    {
        children["maximum-metric"] = maximum_metric;
    }

    return children;
}

void Native::Router::Isis::TiLfa::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::TiLfa::Level2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::TiLfa::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-metric")
        return true;
    return false;
}

Native::Router::Isis::TiLfa::Level2::MaximumMetric::MaximumMetric()
    :
    max_met{YType::uint32, "max-met"}
{

    yang_name = "maximum-metric"; yang_parent_name = "level-2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::TiLfa::Level2::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::Isis::TiLfa::Level2::MaximumMetric::has_data() const
{
    return max_met.is_set;
}

bool Native::Router::Isis::TiLfa::Level2::MaximumMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_met.yfilter);
}

std::string Native::Router::Isis::TiLfa::Level2::MaximumMetric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/ti-lfa/level-2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::TiLfa::Level2::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::TiLfa::Level2::MaximumMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_met.is_set || is_set(max_met.yfilter)) leaf_name_data.push_back(max_met.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::TiLfa::Level2::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::TiLfa::Level2::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::TiLfa::Level2::MaximumMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-met")
    {
        max_met = value;
        max_met.value_namespace = name_space;
        max_met.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::TiLfa::Level2::MaximumMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-met")
    {
        max_met.yfilter = yfilter;
    }
}

bool Native::Router::Isis::TiLfa::Level2::MaximumMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-met")
        return true;
    return false;
}

Native::Router::Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{

    yang_name = "hello"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Hello::~Hello()
{
}

bool Native::Router::Isis::Hello::has_data() const
{
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Router::Isis::Hello::has_operation() const
{
    return is_set(yfilter)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Router::Isis::Hello::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Router::Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    return children;
}

void Native::Router::Isis::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padding")
        return true;
    return false;
}

Native::Router::Isis::Hello::Padding::Padding()
    :
    pad_type{YType::enumeration, "pad-type"}
{

    yang_name = "padding"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Hello::Padding::~Padding()
{
}

bool Native::Router::Isis::Hello::Padding::has_data() const
{
    return pad_type.is_set;
}

bool Native::Router::Isis::Hello::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pad_type.yfilter);
}

std::string Native::Router::Isis::Hello::Padding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/hello/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Hello::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pad_type.is_set || is_set(pad_type.yfilter)) leaf_name_data.push_back(pad_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Hello::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pad-type")
    {
        pad_type = value;
        pad_type.value_namespace = name_space;
        pad_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Hello::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pad-type")
    {
        pad_type.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Hello::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pad-type")
        return true;
    return false;
}

Native::Router::Isis::Hostname::Hostname()
    :
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "hostname"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Hostname::~Hostname()
{
}

bool Native::Router::Isis::Hostname::has_data() const
{
    return dynamic.is_set;
}

bool Native::Router::Isis::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Router::Isis::Hostname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Isis::Ispf::Ispf()
    :
    level{YType::enumeration, "level"},
    number{YType::uint32, "number"}
{

    yang_name = "ispf"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::Ispf::~Ispf()
{
}

bool Native::Router::Isis::Ispf::has_data() const
{
    return level.is_set
	|| number.is_set;
}

bool Native::Router::Isis::Ispf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Router::Isis::Ispf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::Ispf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ispf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::Ispf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::Ispf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Ispf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Ispf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Ispf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Ispf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "number")
        return true;
    return false;
}

Native::Router::Isis::LogAdjacencyChanges::LogAdjacencyChanges()
    :
    all{YType::empty, "all"}
{

    yang_name = "log-adjacency-changes"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::LogAdjacencyChanges::~LogAdjacencyChanges()
{
}

bool Native::Router::Isis::LogAdjacencyChanges::has_data() const
{
    return all.is_set;
}

bool Native::Router::Isis::LogAdjacencyChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Isis::LogAdjacencyChanges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::LogAdjacencyChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-adjacency-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::LogAdjacencyChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::LogAdjacencyChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::LogAdjacencyChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::LogAdjacencyChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::LogAdjacencyChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Isis::LogAdjacencyChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Isis::LspFull::LspFull()
    :
    suppress(std::make_shared<Native::Router::Isis::LspFull::Suppress>())
{
    suppress->parent = this;

    yang_name = "lsp-full"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::LspFull::~LspFull()
{
}

bool Native::Router::Isis::LspFull::has_data() const
{
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::Isis::LspFull::has_operation() const
{
    return is_set(yfilter)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::Isis::LspFull::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::LspFull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-full";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::LspFull::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::LspFull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::Isis::LspFull::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::LspFull::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
}

void Native::Router::Isis::LspFull::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::LspFull::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::LspFull::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
}

Native::Router::Isis::LspFull::Suppress::Suppress()
    :
    none{YType::empty, "none"}
    	,
    external_interlevel_container(std::make_shared<Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer>())
{
    external_interlevel_container->parent = this;

    yang_name = "suppress"; yang_parent_name = "lsp-full"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::LspFull::Suppress::~Suppress()
{
}

bool Native::Router::Isis::LspFull::Suppress::has_data() const
{
    return none.is_set
	|| (external_interlevel_container !=  nullptr && external_interlevel_container->has_data());
}

bool Native::Router::Isis::LspFull::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| (external_interlevel_container !=  nullptr && external_interlevel_container->has_operation());
}

std::string Native::Router::Isis::LspFull::Suppress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/lsp-full/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::LspFull::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::LspFull::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::LspFull::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-interlevel-container")
    {
        if(external_interlevel_container == nullptr)
        {
            external_interlevel_container = std::make_shared<Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer>();
        }
        return external_interlevel_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::LspFull::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_interlevel_container != nullptr)
    {
        children["external-interlevel-container"] = external_interlevel_container;
    }

    return children;
}

void Native::Router::Isis::LspFull::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::LspFull::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Router::Isis::LspFull::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-interlevel-container" || name == "none")
        return true;
    return false;
}

Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::ExternalInterlevelContainer()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{

    yang_name = "external-interlevel-container"; yang_parent_name = "suppress"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::~ExternalInterlevelContainer()
{
}

bool Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::has_data() const
{
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/lsp-full/suppress/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-interlevel-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::Isis::LspGenInterval::LspGenInterval()
    :
    intervals(std::make_shared<Native::Router::Isis::LspGenInterval::Intervals>())
	,intervals_levels(std::make_shared<Native::Router::Isis::LspGenInterval::IntervalsLevels>())
{
    intervals->parent = this;
    intervals_levels->parent = this;

    yang_name = "lsp-gen-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::LspGenInterval::~LspGenInterval()
{
}

bool Native::Router::Isis::LspGenInterval::has_data() const
{
    return (intervals !=  nullptr && intervals->has_data())
	|| (intervals_levels !=  nullptr && intervals_levels->has_data());
}

bool Native::Router::Isis::LspGenInterval::has_operation() const
{
    return is_set(yfilter)
	|| (intervals !=  nullptr && intervals->has_operation())
	|| (intervals_levels !=  nullptr && intervals_levels->has_operation());
}

std::string Native::Router::Isis::LspGenInterval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::LspGenInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-gen-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::LspGenInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::LspGenInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intervals")
    {
        if(intervals == nullptr)
        {
            intervals = std::make_shared<Native::Router::Isis::LspGenInterval::Intervals>();
        }
        return intervals;
    }

    if(child_yang_name == "intervals-levels")
    {
        if(intervals_levels == nullptr)
        {
            intervals_levels = std::make_shared<Native::Router::Isis::LspGenInterval::IntervalsLevels>();
        }
        return intervals_levels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::LspGenInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(intervals != nullptr)
    {
        children["intervals"] = intervals;
    }

    if(intervals_levels != nullptr)
    {
        children["intervals-levels"] = intervals_levels;
    }

    return children;
}

void Native::Router::Isis::LspGenInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::LspGenInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::LspGenInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intervals" || name == "intervals-levels")
        return true;
    return false;
}

Native::Router::Isis::LspGenInterval::Intervals::Intervals()
    :
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    wait{YType::uint32, "wait"}
{

    yang_name = "intervals"; yang_parent_name = "lsp-gen-interval"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::LspGenInterval::Intervals::~Intervals()
{
}

bool Native::Router::Isis::LspGenInterval::Intervals::has_data() const
{
    return interval.is_set
	|| initial_wait.is_set
	|| wait.is_set;
}

bool Native::Router::Isis::LspGenInterval::Intervals::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Router::Isis::LspGenInterval::Intervals::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/lsp-gen-interval/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::LspGenInterval::Intervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::LspGenInterval::Intervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::LspGenInterval::Intervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::LspGenInterval::Intervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::LspGenInterval::Intervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::LspGenInterval::Intervals::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::LspGenInterval::Intervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "initial-wait" || name == "wait")
        return true;
    return false;
}

Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevels()
    :
    intervals_level_1(std::make_shared<Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1>())
	,intervals_level_2(std::make_shared<Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2>())
{
    intervals_level_1->parent = this;
    intervals_level_2->parent = this;

    yang_name = "intervals-levels"; yang_parent_name = "lsp-gen-interval"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Isis::LspGenInterval::IntervalsLevels::~IntervalsLevels()
{
}

bool Native::Router::Isis::LspGenInterval::IntervalsLevels::has_data() const
{
    return (intervals_level_1 !=  nullptr && intervals_level_1->has_data())
	|| (intervals_level_2 !=  nullptr && intervals_level_2->has_data());
}

bool Native::Router::Isis::LspGenInterval::IntervalsLevels::has_operation() const
{
    return is_set(yfilter)
	|| (intervals_level_1 !=  nullptr && intervals_level_1->has_operation())
	|| (intervals_level_2 !=  nullptr && intervals_level_2->has_operation());
}

std::string Native::Router::Isis::LspGenInterval::IntervalsLevels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/lsp-gen-interval/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::LspGenInterval::IntervalsLevels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals-levels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::LspGenInterval::IntervalsLevels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Isis::LspGenInterval::IntervalsLevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intervals-level-1")
    {
        if(intervals_level_1 == nullptr)
        {
            intervals_level_1 = std::make_shared<Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1>();
        }
        return intervals_level_1;
    }

    if(child_yang_name == "intervals-level-2")
    {
        if(intervals_level_2 == nullptr)
        {
            intervals_level_2 = std::make_shared<Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2>();
        }
        return intervals_level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::LspGenInterval::IntervalsLevels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(intervals_level_1 != nullptr)
    {
        children["intervals-level-1"] = intervals_level_1;
    }

    if(intervals_level_2 != nullptr)
    {
        children["intervals-level-2"] = intervals_level_2;
    }

    return children;
}

void Native::Router::Isis::LspGenInterval::IntervalsLevels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::LspGenInterval::IntervalsLevels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::LspGenInterval::IntervalsLevels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intervals-level-1" || name == "intervals-level-2")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Isis_::IsisRedistribute::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Isis_::Ip::IsisRedistLevels1::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Isis_::Ip::IsisRedistLevels1::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Isis_::Ip::IsisRedistLevels2::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Isis_::Ip::IsisRedistLevels2::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::Isis::Redistribute::IsoIgrp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::IsoIgrp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::IsoIgrp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::IsoIgrp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Lisp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Lisp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Lisp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Lisp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Mobile::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Mobile::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Mobile::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Mobile::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Odr::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Odr::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Odr::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Odr::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Ospf::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospf::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospf::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospf::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Ospf::Match::Internal::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospf::Match::Internal::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospf::Match::Internal::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospf::Match::Internal::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Ospf::Match::External::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospf::Match::External::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospf::Match::External::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospf::Match::External::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Ospf::Match::NssaExternal::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospf::Match::NssaExternal::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospf::Match::NssaExternal::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospf::Match::NssaExternal::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Ospfv3::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospfv3::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospfv3::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospfv3::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Ospfv3::Match::Internal::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospfv3::Match::Internal::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospfv3::Match::Internal::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospfv3::Match::Internal::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Ospfv3::Match::External::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospfv3::Match::External::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospfv3::Match::External::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospfv3::Match::External::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Ospfv3::Match::NssaExternal::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospfv3::Match::NssaExternal::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospfv3::Match::NssaExternal::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Ospfv3::Match::NssaExternal::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Rip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Rip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Rip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Rip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Static_::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Static_::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Static_::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Static_::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Static_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Static_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Static_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Static_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Appname::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Appname::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Appname::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Application::Appname::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Connected::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Connected::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Connected::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Connected::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Connected::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Connected::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Connected::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Connected::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Lisp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Lisp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Lisp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Lisp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Mobile::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Mobile::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Mobile::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Mobile::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Rip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Rip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Rip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Rip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Metric::Metrics::Level::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::Metric::Metrics::Level::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::Isis::SpfInterval::Level12::Level::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::SpfInterval::Level12::Level::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::Isis::AreaPassword::Snp::send_only {0, "send-only"};
const Enum::YLeaf Native::Router::Isis::AreaPassword::Snp::validate {1, "validate"};

const Enum::YLeaf Native::Router::Isis::DomainPassword::Snp::send_only {0, "send-only"};
const Enum::YLeaf Native::Router::Isis::DomainPassword::Snp::validate {1, "validate"};

const Enum::YLeaf Native::Router::Isis::Hello::Padding::PadType::multi_point {0, "multi-point"};
const Enum::YLeaf Native::Router::Isis::Hello::Padding::PadType::point_to_point {1, "point-to-point"};

const Enum::YLeaf Native::Router::Isis::Ispf::Level::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::Ispf::Level::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Router::Isis::Ispf::Level::level_2 {2, "level-2"};


}
}

