
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_159.hpp"
#include "Cisco_IOS_XE_native_160.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"}
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
	|| tag.is_set
	|| subnets.is_set;
}

bool Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());

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
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Lisp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Lisp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Mobile::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Mobile::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Odr::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Odr::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospf_::Ospf_()
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
	|| subnets.is_set
	|| route_map.is_set
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
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
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
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
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

bool Native::Router::Ospf::Redistribute::Ospf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospf_::Match::Match()
    :
    internal(nullptr) // presence node
	,external(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Ospf_::Match::~Match()
{
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::has_data() const
{
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
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
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospf::Redistribute::Ospf_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospf::Redistribute::Ospf_::Match::External>();
        }
        return external;
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

void Native::Router::Ospf::Redistribute::Ospf_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Ospf_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::Internal()
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

Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
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
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
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

bool Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospf_::Match::External::External()
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

Native::Router::Ospf::Redistribute::Ospf_::Match::External::~External()
{
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::External::has_operation() const
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
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
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

bool Native::Router::Ospf::Redistribute::Ospf_::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::NssaExternal()
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

Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::has_operation() const
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

std::string Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::get_name_leaf_data() const
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

void Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospfv3::Ospfv3()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
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
	|| subnets.is_set
	|| route_map.is_set
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
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
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
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
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

bool Native::Router::Ospf::Redistribute::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::Match()
    :
    internal(nullptr) // presence node
	,external(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::~Match()
{
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::has_data() const
{
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
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
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospf::Redistribute::Ospfv3::Match::External>();
        }
        return external;
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

void Native::Router::Ospf::Redistribute::Ospfv3::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Ospfv3::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::Internal()
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

Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::~Internal()
{
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
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
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
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

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::External::External()
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

Native::Router::Ospf::Redistribute::Ospfv3::Match::External::~External()
{
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::External::has_operation() const
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
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
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

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::NssaExternal()
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

Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::has_operation() const
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

std::string Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::get_name_leaf_data() const
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

void Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Rip::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Rip::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Static_::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Static_::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : non_global_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    if(global != nullptr)
    {
        children["global"] = global;
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
    if(name == "non-global-vrf" || name == "global")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::RedistOptions()
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

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"}
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
	|| tag.is_set
	|| subnets.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());

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
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets")
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

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::RedistOptions()
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

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::Mobile()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "mobile"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::~Mobile()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::RedistOptions()
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

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::Odr()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "odr"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::~Odr()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::RedistOptions()
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

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Ospf_()
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
    match(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::~Ospf_()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::has_data() const
{
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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::has_operation() const
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

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Match()
    :
    internal(nullptr) // presence node
	,external(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::~Match()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::has_data() const
{
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::get_children() const
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

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::Internal()
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

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::External()
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

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::~External()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::has_operation() const
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

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::NssaExternal()
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

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::has_operation() const
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

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Ospfv3()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
    	,
    match(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::has_data() const
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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::has_operation() const
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

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Match()
    :
    internal(nullptr) // presence node
	,external(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::~Match()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::has_data() const
{
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::get_children() const
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

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::Internal()
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

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::~Internal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::External()
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

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::~External()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::has_operation() const
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

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::NssaExternal()
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

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::has_operation() const
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

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::~Rip()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::has_data() const
{
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "id")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::RedistOptions()
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

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::Static_()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::~Static_()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::RedistOptions()
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

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::RedistOptions()
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

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"}
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
	|| tag.is_set
	|| subnets.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());

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
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Ospf_()
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
	|| subnets.is_set
	|| route_map.is_set
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
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
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
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Match()
    :
    internal(nullptr) // presence node
	,external(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::~Match()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::has_data() const
{
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
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
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External>();
        }
        return external;
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

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::Internal()
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

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
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
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::External()
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

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::~External()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::has_operation() const
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
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::NssaExternal()
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

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::has_operation() const
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

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::get_name_leaf_data() const
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

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Ospfv3()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
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
	|| subnets.is_set
	|| route_map.is_set
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
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
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
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Match()
    :
    internal(nullptr) // presence node
	,external(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::~Match()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::has_data() const
{
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
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
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External>();
        }
        return external;
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

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::Internal()
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

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::~Internal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
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
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::External()
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

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::~External()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::has_operation() const
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
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::NssaExternal()
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

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::has_operation() const
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

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::get_name_leaf_data() const
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

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
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
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
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
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
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
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospf::DistributeList::DistributeList()
{

    yang_name = "distribute-list"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::DistributeList::~DistributeList()
{
}

bool Native::Router::Ospf::DistributeList::has_data() const
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

bool Native::Router::Ospf::DistributeList::has_operation() const
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

std::string Native::Router::Ospf::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Ospf::DistributeList::Accesslist>();
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
        auto c = std::make_shared<Native::Router::Ospf::DistributeList::AccesslistIfname>();
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
        auto c = std::make_shared<Native::Router::Ospf::DistributeList::AccesslistPrefixGateway>();
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
        auto c = std::make_shared<Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname>();
        c->parent = this;
        accesslist_prefix_gateway_ifname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::DistributeList::get_children() const
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

void Native::Router::Ospf::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accesslist" || name == "accesslist-ifname" || name == "accesslist-prefix-gateway" || name == "accesslist-prefix-gateway-ifname")
        return true;
    return false;
}

Native::Router::Ospf::DistributeList::Accesslist::Accesslist()
    :
    in_out{YType::enumeration, "in-out"}
{

    yang_name = "accesslist"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::DistributeList::Accesslist::~Accesslist()
{
}

bool Native::Router::Ospf::DistributeList::Accesslist::has_data() const
{
    return in_out.is_set;
}

bool Native::Router::Ospf::DistributeList::Accesslist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter);
}

std::string Native::Router::Ospf::DistributeList::Accesslist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist" <<"[in-out='" <<in_out <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::DistributeList::Accesslist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::DistributeList::Accesslist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::DistributeList::Accesslist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::DistributeList::Accesslist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::DistributeList::Accesslist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::DistributeList::Accesslist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out")
        return true;
    return false;
}

Native::Router::Ospf::DistributeList::AccesslistIfname::AccesslistIfname()
    :
    in_out{YType::enumeration, "in-out"},
    interface{YType::str, "interface"},
    interface_routing_id{YType::uint8, "interface-routing-id"},
    isis_tag{YType::str, "isis-tag"},
    vrf{YType::str, "vrf"}
{

    yang_name = "accesslist-ifname"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::DistributeList::AccesslistIfname::~AccesslistIfname()
{
}

bool Native::Router::Ospf::DistributeList::AccesslistIfname::has_data() const
{
    return in_out.is_set
	|| interface.is_set
	|| interface_routing_id.is_set
	|| isis_tag.is_set
	|| vrf.is_set;
}

bool Native::Router::Ospf::DistributeList::AccesslistIfname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_routing_id.yfilter)
	|| ydk::is_set(isis_tag.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Router::Ospf::DistributeList::AccesslistIfname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-ifname" <<"[in-out='" <<in_out <<"']" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::DistributeList::AccesslistIfname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_routing_id.is_set || is_set(interface_routing_id.yfilter)) leaf_name_data.push_back(interface_routing_id.get_name_leafdata());
    if (isis_tag.is_set || is_set(isis_tag.yfilter)) leaf_name_data.push_back(isis_tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::DistributeList::AccesslistIfname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::DistributeList::AccesslistIfname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::DistributeList::AccesslistIfname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::DistributeList::AccesslistIfname::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::DistributeList::AccesslistIfname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "interface" || name == "interface-routing-id" || name == "isis-tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::AccesslistPrefixGateway()
    :
    in_out{YType::enumeration, "in-out"},
    prefix_gateway{YType::enumeration, "prefix-gateway"},
    name{YType::str, "name"}
{

    yang_name = "accesslist-prefix-gateway"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::~AccesslistPrefixGateway()
{
}

bool Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::has_data() const
{
    return in_out.is_set
	|| prefix_gateway.is_set
	|| name.is_set;
}

bool Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(prefix_gateway.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-prefix-gateway" <<"[in-out='" <<in_out <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (prefix_gateway.is_set || is_set(prefix_gateway.yfilter)) leaf_name_data.push_back(prefix_gateway.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "prefix-gateway" || name == "name")
        return true;
    return false;
}

Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::AccesslistPrefixGatewayIfname()
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

Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::~AccesslistPrefixGatewayIfname()
{
}

bool Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::has_data() const
{
    return in_out.is_set
	|| interface.is_set
	|| prefix_gateway.is_set
	|| name.is_set
	|| interface_routing_id.is_set
	|| isis_tag.is_set
	|| vrf.is_set;
}

bool Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::has_operation() const
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

std::string Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-prefix-gateway-ifname" <<"[in-out='" <<in_out <<"']" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "interface" || name == "prefix-gateway" || name == "name" || name == "interface-routing-id" || name == "isis-tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospf::DomainId::DomainId()
    :
    ip_format{YType::str, "ip-format"},
    null{YType::empty, "Null"}
    	,
    ip_format_secondary(std::make_shared<Native::Router::Ospf::DomainId::IpFormatSecondary>())
	,type(std::make_shared<Native::Router::Ospf::DomainId::Type>())
{
    ip_format_secondary->parent = this;
    type->parent = this;

    yang_name = "domain-id"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::DomainId::~DomainId()
{
}

bool Native::Router::Ospf::DomainId::has_data() const
{
    return ip_format.is_set
	|| null.is_set
	|| (ip_format_secondary !=  nullptr && ip_format_secondary->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Native::Router::Ospf::DomainId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_format.yfilter)
	|| ydk::is_set(null.yfilter)
	|| (ip_format_secondary !=  nullptr && ip_format_secondary->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Router::Ospf::DomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::DomainId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_format.is_set || is_set(ip_format.yfilter)) leaf_name_data.push_back(ip_format.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::DomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-format-secondary")
    {
        if(ip_format_secondary == nullptr)
        {
            ip_format_secondary = std::make_shared<Native::Router::Ospf::DomainId::IpFormatSecondary>();
        }
        return ip_format_secondary;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Router::Ospf::DomainId::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::DomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_format_secondary != nullptr)
    {
        children["ip-format-secondary"] = ip_format_secondary;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Router::Ospf::DomainId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-format")
    {
        ip_format = value;
        ip_format.value_namespace = name_space;
        ip_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::DomainId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-format")
    {
        ip_format.yfilter = yfilter;
    }
    if(value_path == "Null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::DomainId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-format-secondary" || name == "type" || name == "ip-format" || name == "Null")
        return true;
    return false;
}

Native::Router::Ospf::DomainId::IpFormatSecondary::IpFormatSecondary()
    :
    ip{YType::str, "ip"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "ip-format-secondary"; yang_parent_name = "domain-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::DomainId::IpFormatSecondary::~IpFormatSecondary()
{
}

bool Native::Router::Ospf::DomainId::IpFormatSecondary::has_data() const
{
    return ip.is_set
	|| secondary.is_set;
}

bool Native::Router::Ospf::DomainId::IpFormatSecondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Router::Ospf::DomainId::IpFormatSecondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-format-secondary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::DomainId::IpFormatSecondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::DomainId::IpFormatSecondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::DomainId::IpFormatSecondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::DomainId::IpFormatSecondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::DomainId::IpFormatSecondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::DomainId::IpFormatSecondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "secondary")
        return true;
    return false;
}

Native::Router::Ospf::DomainId::Type::Type()
    :
    type_leaf{YType::enumeration, "type-leaf"},
    value_{YType::str, "value"}
{

    yang_name = "type"; yang_parent_name = "domain-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::DomainId::Type::~Type()
{
}

bool Native::Router::Ospf::DomainId::Type::has_data() const
{
    return type_leaf.is_set
	|| value_.is_set;
}

bool Native::Router::Ospf::DomainId::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type_leaf.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Router::Ospf::DomainId::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::DomainId::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type_leaf.is_set || is_set(type_leaf.yfilter)) leaf_name_data.push_back(type_leaf.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::DomainId::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::DomainId::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::DomainId::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type-leaf")
    {
        type_leaf = value;
        type_leaf.value_namespace = name_space;
        type_leaf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::DomainId::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type-leaf")
    {
        type_leaf.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::DomainId::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type-leaf" || name == "value")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::FastReroute()
    :
    keep_all_paths{YType::empty, "keep-all-paths"}
    	,
    per_prefix(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix>())
{
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::~FastReroute()
{
}

bool Native::Router::Ospf::FastReroute::has_data() const
{
    return keep_all_paths.is_set
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Native::Router::Ospf::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keep_all_paths.yfilter)
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Native::Router::Ospf::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keep_all_paths.is_set || is_set(keep_all_paths.yfilter)) leaf_name_data.push_back(keep_all_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Native::Router::Ospf::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keep-all-paths")
    {
        keep_all_paths = value;
        keep_all_paths.value_namespace = name_space;
        keep_all_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keep-all-paths")
    {
        keep_all_paths.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-prefix" || name == "keep-all-paths")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::PerPrefix()
    :
    enable(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::Enable>())
	,remote_lfa(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa>())
	,tie_break(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak>())
{
    enable->parent = this;
    remote_lfa->parent = this;
    tie_break->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::has_data() const
{
    return (enable !=  nullptr && enable->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tie_break !=  nullptr && tie_break->has_data());
}

bool Native::Router::Ospf::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (enable !=  nullptr && enable->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tie_break !=  nullptr && tie_break->has_operation());
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa>();
        }
        return remote_lfa;
    }

    if(child_yang_name == "tie-break")
    {
        if(tie_break == nullptr)
        {
            tie_break = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak>();
        }
        return tie_break;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable != nullptr)
    {
        children["enable"] = enable;
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

void Native::Router::Ospf::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "remote-lfa" || name == "tie-break")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::Enable::Enable()
    :
    area{YType::str, "area"},
    prefix_priority{YType::enumeration, "prefix-priority"}
{

    yang_name = "enable"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::Enable::~Enable()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::Enable::has_data() const
{
    return area.is_set
	|| prefix_priority.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix_priority.yfilter);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::FastReroute::PerPrefix::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix_priority.is_set || is_set(prefix_priority.yfilter)) leaf_name_data.push_back(prefix_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-priority")
    {
        prefix_priority = value;
        prefix_priority.value_namespace = name_space;
        prefix_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix-priority")
    {
        prefix_priority.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "prefix-priority")
        return true;
    return false;
}

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
    required{YType::empty, "required"},
    index_{YType::uint8, "index"}
{

    yang_name = "broadcast-interface-disjoint"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::~BroadcastInterfaceDisjoint()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::has_data() const
{
    return required.is_set
	|| index_.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(required.yfilter)
	|| ydk::is_set(index_.yfilter);
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

    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

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
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "required" || name == "index")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::Downstream()
    :
    required{YType::empty, "required"},
    index_{YType::uint8, "index"}
{

    yang_name = "downstream"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::~Downstream()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::has_data() const
{
    return required.is_set
	|| index_.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(required.yfilter)
	|| ydk::is_set(index_.yfilter);
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

    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

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
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "required" || name == "index")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::LinecardDisjoint()
    :
    required{YType::empty, "required"},
    index_{YType::uint8, "index"}
{

    yang_name = "linecard-disjoint"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::~LinecardDisjoint()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::has_data() const
{
    return required.is_set
	|| index_.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(required.yfilter)
	|| ydk::is_set(index_.yfilter);
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

    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

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
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "required" || name == "index")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::LowestMetric()
    :
    required{YType::empty, "required"},
    index_{YType::uint8, "index"}
{

    yang_name = "lowest-metric"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::~LowestMetric()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::has_data() const
{
    return required.is_set
	|| index_.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(required.yfilter)
	|| ydk::is_set(index_.yfilter);
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

    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

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
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "required" || name == "index")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::NodeProtecting()
    :
    required{YType::empty, "required"},
    index_{YType::uint8, "index"}
{

    yang_name = "node-protecting"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::~NodeProtecting()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::has_data() const
{
    return required.is_set
	|| index_.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(required.yfilter)
	|| ydk::is_set(index_.yfilter);
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

    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

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
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "required" || name == "index")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::PrimaryPath()
    :
    required{YType::empty, "required"},
    index_{YType::uint8, "index"}
{

    yang_name = "primary-path"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::~PrimaryPath()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::has_data() const
{
    return required.is_set
	|| index_.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(required.yfilter)
	|| ydk::is_set(index_.yfilter);
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

    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

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
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "required" || name == "index")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::SecondaryPath()
    :
    required{YType::empty, "required"},
    index_{YType::uint8, "index"}
{

    yang_name = "secondary-path"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::~SecondaryPath()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::has_data() const
{
    return required.is_set
	|| index_.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(required.yfilter)
	|| ydk::is_set(index_.yfilter);
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

    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

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
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "required" || name == "index")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::Srlg()
    :
    required{YType::empty, "required"},
    index_{YType::uint8, "index"}
{

    yang_name = "srlg"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::~Srlg()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::has_data() const
{
    return required.is_set
	|| index_.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(required.yfilter)
	|| ydk::is_set(index_.yfilter);
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

    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

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
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "required" || name == "index")
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
    non_dc{YType::str, "non-dc"},
    dc{YType::str, "dc"}
{

    yang_name = "retransmissions"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Limit::Retransmissions::~Retransmissions()
{
}

bool Native::Router::Ospf::Limit::Retransmissions::has_data() const
{
    return non_dc.is_set
	|| dc.is_set;
}

bool Native::Router::Ospf::Limit::Retransmissions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_dc.yfilter)
	|| ydk::is_set(dc.yfilter);
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

    if (non_dc.is_set || is_set(non_dc.yfilter)) leaf_name_data.push_back(non_dc.get_name_leafdata());
    if (dc.is_set || is_set(dc.yfilter)) leaf_name_data.push_back(dc.get_name_leafdata());

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
    if(value_path == "non-dc")
    {
        non_dc = value;
        non_dc.value_namespace = name_space;
        non_dc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dc")
    {
        dc = value;
        dc.value_namespace = name_space;
        dc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Limit::Retransmissions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-dc")
    {
        non_dc.yfilter = yfilter;
    }
    if(value_path == "dc")
    {
        dc.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Limit::Retransmissions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-dc" || name == "dc")
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
    atm_subinterface(std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
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

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::has_operation() const
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
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
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

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
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
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
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

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
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

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Static_::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Static_::RedistOptions::MetricType::Y_2 {1, "2"};

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

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::MetricType::Y_2 {1, "2"};

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

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::PrefixGateway::prefix {0, "prefix"};
const Enum::YLeaf Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::PrefixGateway::gateway {1, "gateway"};
const Enum::YLeaf Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::PrefixGateway::route_map {2, "route-map"};

const Enum::YLeaf Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::PrefixGateway::prefix {0, "prefix"};
const Enum::YLeaf Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::PrefixGateway::gateway {1, "gateway"};
const Enum::YLeaf Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::PrefixGateway::route_map {2, "route-map"};

const Enum::YLeaf Native::Router::Ospf::DomainId::Type::TypeLeaf::Y_0005 {0, "0005"};
const Enum::YLeaf Native::Router::Ospf::DomainId::Type::TypeLeaf::Y_0105 {1, "0105"};
const Enum::YLeaf Native::Router::Ospf::DomainId::Type::TypeLeaf::Y_0205 {2, "0205"};
const Enum::YLeaf Native::Router::Ospf::DomainId::Type::TypeLeaf::Y_8005 {3, "8005"};

const Enum::YLeaf Native::Router::Ospf::FastReroute::PerPrefix::Enable::PrefixPriority::high {0, "high"};
const Enum::YLeaf Native::Router::Ospf::FastReroute::PerPrefix::Enable::PrefixPriority::low {1, "low"};

const Enum::YLeaf Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::Tunnel::mpls_ldp {0, "mpls-ldp"};

const Enum::YLeaf Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel::Tunnel::mpls_ldp {0, "mpls-ldp"};


}
}

