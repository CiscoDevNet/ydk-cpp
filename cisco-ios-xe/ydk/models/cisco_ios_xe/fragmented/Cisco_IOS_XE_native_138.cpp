
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_138.hpp"
#include "Cisco_IOS_XE_native_140.hpp"
#include "Cisco_IOS_XE_native_139.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoIgrp()
    :
    iso_atag(this, {"iso_atag"})
    , route_map(nullptr) // presence node
{

    yang_name = "iso-igrp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iso_atag.len(); index++)
    {
        if(iso_atag[index]->has_data())
            return true;
    }
    return (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<iso_atag.len(); index++)
    {
        if(iso_atag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iso-atag")
    {
        auto ent_ = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag>();
        ent_->parent = this;
        iso_atag.append(ent_);
        return ent_;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iso_atag.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(route_map != nullptr)
    {
        _children["route-map"] = route_map;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-atag" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::IsoAtag()
    :
    iso_atag{YType::str, "iso-atag"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "iso-atag"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::~IsoAtag()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::has_data() const
{
    if (is_presence_container) return true;
    return iso_atag.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iso_atag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-atag";
    ADD_KEY_TOKEN(iso_atag, "iso-atag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_atag.is_set || is_set(iso_atag.yfilter)) leaf_name_data.push_back(iso_atag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-atag" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::RouteMap()
    :
    rm_point{YType::str, "rm-point"}
{

    yang_name = "route-map"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::~RouteMap()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return rm_point.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rm_point.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rm_point.is_set || is_set(rm_point.yfilter)) leaf_name_data.push_back(rm_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rm-point")
    {
        rm_point = value;
        rm_point.value_namespace = name_space;
        rm_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rm-point")
    {
        rm_point.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rm-point")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::Lisp()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "lisp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::~Lisp()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "mobile"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::~Mobile()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Ospfv3()
    :
    os3_id(this, {"os3_id"})
{

    yang_name = "ospfv3"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::~Ospfv3()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<os3_id.len(); index++)
    {
        if(os3_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<os3_id.len(); index++)
    {
        if(os3_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "os3-id")
    {
        auto ent_ = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id>();
        ent_->parent = this;
        os3_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : os3_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os3-id")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::Os3Id()
    :
    os3_id{YType::uint16, "os3-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "os3-id"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::~Os3Id()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::has_data() const
{
    if (is_presence_container) return true;
    return os3_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(os3_id.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os3-id";
    ADD_KEY_TOKEN(os3_id, "os3-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (os3_id.is_set || is_set(os3_id.yfilter)) leaf_name_data.push_back(os3_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os3-id" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "rip"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::~Rip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Static()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
        ,
    clns(nullptr) // presence node
    , ip(nullptr) // presence node
{

    yang_name = "static"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::~Static()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clns != nullptr)
    {
        _children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "clns"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns::~Clns()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SetAttachedBit::SetAttachedBit()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "set-attached-bit"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::SetAttachedBit::~SetAttachedBit()
{
}

bool Native::Router::IsisContainer::Isis::SetAttachedBit::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::SetAttachedBit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::SetAttachedBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-attached-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SetAttachedBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SetAttachedBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SetAttachedBit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::SetAttachedBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::SetAttachedBit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::SetAttachedBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Snmp::Snmp()
    :
    context(this, {"name"})
{

    yang_name = "snmp"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Snmp::~Snmp()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::Snmp::has_operation() const
{
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::IsisContainer::Isis::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        auto ent_ = std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context>();
        ent_->parent = this;
        context.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Snmp::Context::Context()
    :
    name{YType::str, "name"}
        ,
    community(std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::Community>())
    , user(std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User>())
{
    community->parent = this;
    user->parent = this;

    yang_name = "context"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Snmp::Context::~Context()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (community !=  nullptr && community->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (community !=  nullptr && community->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Snmp::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::Community>();
        }
        return community;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(community != nullptr)
    {
        _children["community"] = community;
    }

    if(user != nullptr)
    {
        _children["user"] = user;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "user" || name == "name")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Snmp::Context::Community::Community()
    :
    community_string{YType::str, "community-string"}
        ,
    access(std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access>())
{
    access->parent = this;

    yang_name = "community"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Snmp::Context::Community::~Community()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::Community::has_data() const
{
    if (is_presence_container) return true;
    return community_string.is_set
	|| (access !=  nullptr && access->has_data());
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_string.yfilter)
	|| (access !=  nullptr && access->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Snmp::Context::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Snmp::Context::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_string.is_set || is_set(community_string.yfilter)) leaf_name_data.push_back(community_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Snmp::Context::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access>();
        }
        return access;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Snmp::Context::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-string")
    {
        community_string = value;
        community_string.value_namespace = name_space;
        community_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Snmp::Context::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-string")
    {
        community_string.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "community-string")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::Access()
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

Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::~Access()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::has_data() const
{
    if (is_presence_container) return true;
    return standard_acl.is_set
	|| expanded_acl.is_set
	|| acl_name.is_set
	|| ipv6.is_set
	|| ro.is_set
	|| rw.is_set;
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standard_acl.yfilter)
	|| ydk::is_set(expanded_acl.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(ro.yfilter)
	|| ydk::is_set(rw.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard-acl" || name == "expanded-acl" || name == "acl-name" || name == "ipv6" || name == "ro" || name == "rw")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Snmp::Context::User::User()
    :
    name{YType::str, "name"}
        ,
    permisssion(std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion>())
{
    permisssion->parent = this;

    yang_name = "user"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Snmp::Context::User::~User()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (permisssion !=  nullptr && permisssion->has_data());
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (permisssion !=  nullptr && permisssion->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Snmp::Context::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Snmp::Context::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Snmp::Context::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permisssion")
    {
        if(permisssion == nullptr)
        {
            permisssion = std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion>();
        }
        return permisssion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::User::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(permisssion != nullptr)
    {
        _children["permisssion"] = permisssion;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Snmp::Context::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Snmp::Context::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permisssion" || name == "name")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Permisssion()
    :
    credential{YType::empty, "credential"},
    encrypted{YType::empty, "encrypted"}
        ,
    access(std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access>())
    , auth(std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth>())
{
    access->parent = this;
    auth->parent = this;

    yang_name = "permisssion"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::~Permisssion()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::has_data() const
{
    if (is_presence_container) return true;
    return credential.is_set
	|| encrypted.is_set
	|| (access !=  nullptr && access->has_data())
	|| (auth !=  nullptr && auth->has_data());
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(credential.yfilter)
	|| ydk::is_set(encrypted.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permisssion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credential.is_set || is_set(credential.yfilter)) leaf_name_data.push_back(credential.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access>();
        }
        return access;
    }

    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(auth != nullptr)
    {
        _children["auth"] = auth;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "auth" || name == "credential" || name == "encrypted")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::Access()
    :
    standard_acl{YType::uint32, "standard-acl"},
    acl_name{YType::str, "acl-name"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "access"; yang_parent_name = "permisssion"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::~Access()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::has_data() const
{
    if (is_presence_container) return true;
    return standard_acl.is_set
	|| acl_name.is_set
	|| ipv6.is_set;
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standard_acl.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard-acl" || name == "acl-name" || name == "ipv6")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::Auth()
    :
    md5{YType::str, "md5"},
    sha{YType::str, "sha"}
{

    yang_name = "auth"; yang_parent_name = "permisssion"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::~Auth()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::has_data() const
{
    if (is_presence_container) return true;
    return md5.is_set
	|| sha.is_set;
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha.is_set || is_set(sha.yfilter)) leaf_name_data.push_back(sha.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SummaryAddress::SummaryAddress()
    :
    ip{YType::str, "ip"},
    mask{YType::str, "mask"}
        ,
    level_1(nullptr) // presence node
    , level_1_2(nullptr) // presence node
    , level_2(nullptr) // presence node
    , metric_tag_container(std::make_shared<Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer>())
{
    metric_tag_container->parent = this;

    yang_name = "summary-address"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::SummaryAddress::~SummaryAddress()
{
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| mask.is_set
	|| (level_1 !=  nullptr && level_1->has_data())
	|| (level_1_2 !=  nullptr && level_1_2->has_data())
	|| (level_2 !=  nullptr && level_2->has_data())
	|| (metric_tag_container !=  nullptr && metric_tag_container->has_data());
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_1_2 !=  nullptr && level_1_2->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation())
	|| (metric_tag_container !=  nullptr && metric_tag_container->has_operation());
}

std::string Native::Router::IsisContainer::Isis::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";
    ADD_KEY_TOKEN(ip, "ip");
    ADD_KEY_TOKEN(mask, "mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::IsisContainer::Isis::SummaryAddress::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-1-2")
    {
        if(level_1_2 == nullptr)
        {
            level_1_2 = std::make_shared<Native::Router::IsisContainer::Isis::SummaryAddress::Level12>();
        }
        return level_1_2;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::IsisContainer::Isis::SummaryAddress::Level2>();
        }
        return level_2;
    }

    if(child_yang_name == "metric-tag-container")
    {
        if(metric_tag_container == nullptr)
        {
            metric_tag_container = std::make_shared<Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer>();
        }
        return metric_tag_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level_1 != nullptr)
    {
        _children["level-1"] = level_1;
    }

    if(level_1_2 != nullptr)
    {
        _children["level-1-2"] = level_1_2;
    }

    if(level_2 != nullptr)
    {
        _children["level-2"] = level_2;
    }

    if(metric_tag_container != nullptr)
    {
        _children["metric-tag-container"] = metric_tag_container;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-1-2" || name == "level-2" || name == "metric-tag-container" || name == "ip" || name == "mask")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SummaryAddress::Level1::Level1()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{

    yang_name = "level-1"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::SummaryAddress::Level1::~Level1()
{
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level1::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::IsisContainer::Isis::SummaryAddress::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SummaryAddress::Level1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SummaryAddress::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SummaryAddress::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::SummaryAddress::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::SummaryAddress::Level1::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SummaryAddress::Level12::Level12()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{

    yang_name = "level-1-2"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::SummaryAddress::Level12::~Level12()
{
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level12::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level12::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::IsisContainer::Isis::SummaryAddress::Level12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SummaryAddress::Level12::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SummaryAddress::Level12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SummaryAddress::Level12::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::SummaryAddress::Level12::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::SummaryAddress::Level12::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level12::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SummaryAddress::Level2::Level2()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{

    yang_name = "level-2"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::SummaryAddress::Level2::~Level2()
{
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level2::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::IsisContainer::Isis::SummaryAddress::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SummaryAddress::Level2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SummaryAddress::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SummaryAddress::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::SummaryAddress::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::SummaryAddress::Level2::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::MetricTagContainer()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{

    yang_name = "metric-tag-container"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::~MetricTagContainer()
{
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-tag-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::TrafficShare::TrafficShare()
    :
    min(std::make_shared<Native::Router::IsisContainer::Isis::TrafficShare::Min>())
{
    min->parent = this;

    yang_name = "traffic-share"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::TrafficShare::~TrafficShare()
{
}

bool Native::Router::IsisContainer::Isis::TrafficShare::has_data() const
{
    if (is_presence_container) return true;
    return (min !=  nullptr && min->has_data());
}

bool Native::Router::IsisContainer::Isis::TrafficShare::has_operation() const
{
    return is_set(yfilter)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Router::IsisContainer::Isis::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::TrafficShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Router::IsisContainer::Isis::TrafficShare::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(min != nullptr)
    {
        _children["min"] = min;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::TrafficShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::TrafficShare::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::TrafficShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::TrafficShare::Min::Min()
    :
    across_interfaces{YType::empty, "across-interfaces"}
{

    yang_name = "min"; yang_parent_name = "traffic-share"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::TrafficShare::Min::~Min()
{
}

bool Native::Router::IsisContainer::Isis::TrafficShare::Min::has_data() const
{
    if (is_presence_container) return true;
    return across_interfaces.is_set;
}

bool Native::Router::IsisContainer::Isis::TrafficShare::Min::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(across_interfaces.yfilter);
}

std::string Native::Router::IsisContainer::Isis::TrafficShare::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::TrafficShare::Min::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.yfilter)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::TrafficShare::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::TrafficShare::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::TrafficShare::Min::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
        across_interfaces.value_namespace = name_space;
        across_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::TrafficShare::Min::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::TrafficShare::Min::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "across-interfaces")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Advertise::Advertise()
    :
    passive_only{YType::empty, "passive-only"}
{

    yang_name = "advertise"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Advertise::~Advertise()
{
}

bool Native::Router::IsisContainer::Isis::Advertise::has_data() const
{
    if (is_presence_container) return true;
    return passive_only.is_set;
}

bool Native::Router::IsisContainer::Isis::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive_only.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive_only.is_set || is_set(passive_only.yfilter)) leaf_name_data.push_back(passive_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive-only")
    {
        passive_only = value;
        passive_only.value_namespace = name_space;
        passive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive-only")
    {
        passive_only.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-only")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::DefaultInformation::DefaultInformation()
    :
    originate(nullptr) // presence node
{

    yang_name = "default-information"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::IsisContainer::Isis::DefaultInformation::has_data() const
{
    if (is_presence_container) return true;
    return (originate !=  nullptr && originate->has_data());
}

bool Native::Router::IsisContainer::Isis::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (originate !=  nullptr && originate->has_operation());
}

std::string Native::Router::IsisContainer::Isis::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "originate")
    {
        if(originate == nullptr)
        {
            originate = std::make_shared<Native::Router::IsisContainer::Isis::DefaultInformation::Originate>();
        }
        return originate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(originate != nullptr)
    {
        _children["originate"] = originate;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::DefaultInformation::Originate::Originate()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "originate"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::DefaultInformation::Originate::~Originate()
{
}

bool Native::Router::IsisContainer::Isis::DefaultInformation::Originate::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::DefaultInformation::Originate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::DefaultInformation::Originate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::DefaultInformation::Originate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::DefaultInformation::Originate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::DefaultInformation::Originate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::DefaultInformation::Originate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::DefaultInformation::Originate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Metric::Metric()
    :
    metric{YType::uint32, "metric"}
        ,
    metrics(this, {"level"})
{

    yang_name = "metric"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Metric::~Metric()
{
}

bool Native::Router::IsisContainer::Isis::Metric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metrics.len(); index++)
    {
        if(metrics[index]->has_data())
            return true;
    }
    return metric.is_set;
}

bool Native::Router::IsisContainer::Isis::Metric::has_operation() const
{
    for (std::size_t index=0; index<metrics.len(); index++)
    {
        if(metrics[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metrics")
    {
        auto ent_ = std::make_shared<Native::Router::IsisContainer::Isis::Metric::Metrics>();
        ent_->parent = this;
        metrics.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : metrics.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metrics" || name == "metric")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Metric::Metrics::Metrics()
    :
    level{YType::enumeration, "level"},
    metric{YType::uint32, "metric"}
{

    yang_name = "metrics"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Metric::Metrics::~Metrics()
{
}

bool Native::Router::IsisContainer::Isis::Metric::Metrics::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| metric.is_set;
}

bool Native::Router::IsisContainer::Isis::Metric::Metrics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Metric::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Metric::Metrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Metric::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Metric::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Metric::Metrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Metric::Metrics::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Metric::Metrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "metric")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::PrcInterval::PrcInterval()
    :
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    minimum_wait{YType::uint32, "minimum-wait"}
{

    yang_name = "prc-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::PrcInterval::~PrcInterval()
{
}

bool Native::Router::IsisContainer::Isis::PrcInterval::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| initial_wait.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::IsisContainer::Isis::PrcInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(minimum_wait.yfilter);
}

std::string Native::Router::IsisContainer::Isis::PrcInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::PrcInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.yfilter)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::PrcInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::PrcInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::PrcInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::PrcInterval::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::PrcInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "initial-wait" || name == "minimum-wait")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SetOverloadBit::SetOverloadBit()
    :
    on_startup(std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup>())
    , suppress(std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress>())
{
    on_startup->parent = this;
    suppress->parent = this;

    yang_name = "set-overload-bit"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::SetOverloadBit::~SetOverloadBit()
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::has_data() const
{
    if (is_presence_container) return true;
    return (on_startup !=  nullptr && on_startup->has_data())
	|| (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::has_operation() const
{
    return is_set(yfilter)
	|| (on_startup !=  nullptr && on_startup->has_operation())
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::IsisContainer::Isis::SetOverloadBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-overload-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SetOverloadBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup>();
        }
        return on_startup;
    }

    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(on_startup != nullptr)
    {
        _children["on-startup"] = on_startup;
    }

    if(suppress != nullptr)
    {
        _children["suppress"] = suppress;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::SetOverloadBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::SetOverloadBit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-startup" || name == "suppress")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::OnStartup()
    :
    time(std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time>())
    , wait_for_bgp(nullptr) // presence node
{
    time->parent = this;

    yang_name = "on-startup"; yang_parent_name = "set-overload-bit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::~OnStartup()
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::has_data() const
{
    if (is_presence_container) return true;
    return (time !=  nullptr && time->has_data())
	|| (wait_for_bgp !=  nullptr && wait_for_bgp->has_data());
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation())
	|| (wait_for_bgp !=  nullptr && wait_for_bgp->has_operation());
}

std::string Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time>();
        }
        return time;
    }

    if(child_yang_name == "wait-for-bgp")
    {
        if(wait_for_bgp == nullptr)
        {
            wait_for_bgp = std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp>();
        }
        return wait_for_bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(time != nullptr)
    {
        _children["time"] = time;
    }

    if(wait_for_bgp != nullptr)
    {
        _children["wait-for-bgp"] = wait_for_bgp;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "wait-for-bgp")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::Time()
    :
    time{YType::uint32, "time"},
    suppress{YType::empty, "suppress"},
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{

    yang_name = "time"; yang_parent_name = "on-startup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::~Time()
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::has_data() const
{
    if (is_presence_container) return true;
    return time.is_set
	|| suppress.is_set
	|| external.is_set
	|| interlevel.is_set;
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(suppress.yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (suppress.is_set || is_set(suppress.yfilter)) leaf_name_data.push_back(suppress.get_name_leafdata());
    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "suppress" || name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::WaitForBgp()
    :
    suppress(std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress>())
{
    suppress->parent = this;

    yang_name = "wait-for-bgp"; yang_parent_name = "on-startup"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::~WaitForBgp()
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::has_data() const
{
    if (is_presence_container) return true;
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::has_operation() const
{
    return is_set(yfilter)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wait-for-bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(suppress != nullptr)
    {
        _children["suppress"] = suppress;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::Suppress()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{

    yang_name = "suppress"; yang_parent_name = "wait-for-bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::~Suppress()
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_data() const
{
    if (is_presence_container) return true;
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::Suppress()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{

    yang_name = "suppress"; yang_parent_name = "set-overload-bit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::~Suppress()
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::has_data() const
{
    if (is_presence_container) return true;
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SpfInterval::SpfInterval()
    :
    level_1_2(this, {"level"})
    , intervals(std::make_shared<Native::Router::IsisContainer::Isis::SpfInterval::Intervals>())
{
    intervals->parent = this;

    yang_name = "spf-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::SpfInterval::~SpfInterval()
{
}

bool Native::Router::IsisContainer::Isis::SpfInterval::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<level_1_2.len(); index++)
    {
        if(level_1_2[index]->has_data())
            return true;
    }
    return (intervals !=  nullptr && intervals->has_data());
}

bool Native::Router::IsisContainer::Isis::SpfInterval::has_operation() const
{
    for (std::size_t index=0; index<level_1_2.len(); index++)
    {
        if(level_1_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (intervals !=  nullptr && intervals->has_operation());
}

std::string Native::Router::IsisContainer::Isis::SpfInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SpfInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1-2")
    {
        auto ent_ = std::make_shared<Native::Router::IsisContainer::Isis::SpfInterval::Level12>();
        ent_->parent = this;
        level_1_2.append(ent_);
        return ent_;
    }

    if(child_yang_name == "intervals")
    {
        if(intervals == nullptr)
        {
            intervals = std::make_shared<Native::Router::IsisContainer::Isis::SpfInterval::Intervals>();
        }
        return intervals;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SpfInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : level_1_2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(intervals != nullptr)
    {
        _children["intervals"] = intervals;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::SpfInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::SpfInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::SpfInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1-2" || name == "intervals")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SpfInterval::Level12::Level12()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    minimum_wait{YType::uint32, "minimum-wait"}
{

    yang_name = "level-1-2"; yang_parent_name = "spf-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::SpfInterval::Level12::~Level12()
{
}

bool Native::Router::IsisContainer::Isis::SpfInterval::Level12::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| interval.is_set
	|| initial_wait.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::IsisContainer::Isis::SpfInterval::Level12::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(minimum_wait.yfilter);
}

std::string Native::Router::IsisContainer::Isis::SpfInterval::Level12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1-2";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SpfInterval::Level12::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.yfilter)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SpfInterval::Level12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SpfInterval::Level12::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::SpfInterval::Level12::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::SpfInterval::Level12::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::SpfInterval::Level12::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interval" || name == "initial-wait" || name == "minimum-wait")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SpfInterval::Intervals::Intervals()
    :
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    minimum_wait{YType::uint32, "minimum-wait"}
{

    yang_name = "intervals"; yang_parent_name = "spf-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::SpfInterval::Intervals::~Intervals()
{
}

bool Native::Router::IsisContainer::Isis::SpfInterval::Intervals::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| initial_wait.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::IsisContainer::Isis::SpfInterval::Intervals::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(minimum_wait.yfilter);
}

std::string Native::Router::IsisContainer::Isis::SpfInterval::Intervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SpfInterval::Intervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.yfilter)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SpfInterval::Intervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SpfInterval::Intervals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::SpfInterval::Intervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::SpfInterval::Intervals::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::SpfInterval::Intervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "initial-wait" || name == "minimum-wait")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AreaPassword::AreaPassword()
    :
    name{YType::str, "name"},
    authenticate{YType::empty, "authenticate"},
    snp{YType::enumeration, "snp"}
{

    yang_name = "area-password"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::AreaPassword::~AreaPassword()
{
}

bool Native::Router::IsisContainer::Isis::AreaPassword::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| authenticate.is_set
	|| snp.is_set;
}

bool Native::Router::IsisContainer::Isis::AreaPassword::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(authenticate.yfilter)
	|| ydk::is_set(snp.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AreaPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::AreaPassword::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (authenticate.is_set || is_set(authenticate.yfilter)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (snp.is_set || is_set(snp.yfilter)) leaf_name_data.push_back(snp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::AreaPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::AreaPassword::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::AreaPassword::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::AreaPassword::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::AreaPassword::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "authenticate" || name == "snp")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Authentication::Authentication()
    :
    mode(std::make_shared<Native::Router::IsisContainer::Isis::Authentication::Mode>())
    , key_chain(std::make_shared<Native::Router::IsisContainer::Isis::Authentication::KeyChain>())
    , send_only(nullptr) // presence node
{
    mode->parent = this;
    key_chain->parent = this;

    yang_name = "authentication"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Authentication::~Authentication()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (mode !=  nullptr && mode->has_data())
	|| (key_chain !=  nullptr && key_chain->has_data())
	|| (send_only !=  nullptr && send_only->has_data());
}

bool Native::Router::IsisContainer::Isis::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (send_only !=  nullptr && send_only->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Router::IsisContainer::Isis::Authentication::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Router::IsisContainer::Isis::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "send-only")
    {
        if(send_only == nullptr)
        {
            send_only = std::make_shared<Native::Router::IsisContainer::Isis::Authentication::SendOnly>();
        }
        return send_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    if(send_only != nullptr)
    {
        _children["send-only"] = send_only;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain" || name == "send-only")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Authentication::Mode::Mode()
    :
    md5(nullptr) // presence node
    , text(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Authentication::Mode::~Mode()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::has_data() const
{
    if (is_presence_container) return true;
    return (md5 !=  nullptr && md5->has_data())
	|| (text !=  nullptr && text->has_data());
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (text !=  nullptr && text->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Router::IsisContainer::Isis::Authentication::Mode::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "text")
    {
        if(text == nullptr)
        {
            text = std::make_shared<Native::Router::IsisContainer::Isis::Authentication::Mode::Text>();
        }
        return text;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(md5 != nullptr)
    {
        _children["md5"] = md5;
    }

    if(text != nullptr)
    {
        _children["text"] = text;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::Md5()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "md5"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::~Md5()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set;
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Authentication::Mode::Text::Text()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "text"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::Authentication::Mode::Text::~Text()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::Text::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set;
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::Text::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Authentication::Mode::Text::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Authentication::Mode::Text::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Authentication::Mode::Text::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Authentication::Mode::Text::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Authentication::Mode::Text::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Authentication::Mode::Text::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::Text::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
        ,
    key_chain_list(this, {"levels"})
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<key_chain_list.len(); index++)
    {
        if(key_chain_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Router::IsisContainer::Isis::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<key_chain_list.len(); index++)
    {
        if(key_chain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain-list")
    {
        auto ent_ = std::make_shared<Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList>();
        ent_->parent = this;
        key_chain_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : key_chain_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain-list" || name == "name")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::KeyChainList()
    :
    levels{YType::enumeration, "levels"},
    name{YType::str, "name"}
{

    yang_name = "key-chain-list"; yang_parent_name = "key-chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::~KeyChainList()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| name.is_set;
}

bool Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "name")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Authentication::SendOnly::SendOnly()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "send-only"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::Authentication::SendOnly::~SendOnly()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::SendOnly::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set;
}

bool Native::Router::IsisContainer::Isis::Authentication::SendOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Authentication::SendOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Authentication::SendOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Authentication::SendOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Authentication::SendOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Authentication::SendOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Authentication::SendOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Authentication::SendOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::DistributeList::DistributeList()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::str, "in"},
    gateway{YType::str, "gateway"},
    prefix{YType::str, "prefix"},
    gateway_prefix_in{YType::str, "gateway-prefix-in"},
    route_map{YType::str, "route-map"},
    route_map_in{YType::empty, "route-map-in"}
{

    yang_name = "distribute-list"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::DistributeList::~DistributeList()
{
}

bool Native::Router::IsisContainer::Isis::DistributeList::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| in.is_set
	|| gateway.is_set
	|| prefix.is_set
	|| gateway_prefix_in.is_set
	|| route_map.is_set
	|| route_map_in.is_set;
}

bool Native::Router::IsisContainer::Isis::DistributeList::has_operation() const
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

std::string Native::Router::IsisContainer::Isis::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::DistributeList::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in" || name == "gateway" || name == "prefix" || name == "gateway-prefix-in" || name == "route-map" || name == "route-map-in")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::DomainPassword::DomainPassword()
    :
    name{YType::str, "name"},
    authenticate{YType::empty, "authenticate"},
    snp{YType::enumeration, "snp"}
{

    yang_name = "domain-password"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::DomainPassword::~DomainPassword()
{
}

bool Native::Router::IsisContainer::Isis::DomainPassword::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| authenticate.is_set
	|| snp.is_set;
}

bool Native::Router::IsisContainer::Isis::DomainPassword::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(authenticate.yfilter)
	|| ydk::is_set(snp.yfilter);
}

std::string Native::Router::IsisContainer::Isis::DomainPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::DomainPassword::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (authenticate.is_set || is_set(authenticate.yfilter)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (snp.is_set || is_set(snp.yfilter)) leaf_name_data.push_back(snp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::DomainPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::DomainPassword::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::DomainPassword::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::DomainPassword::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::DomainPassword::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "authenticate" || name == "snp")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastFlood::FastFlood()
    :
    number{YType::uint32, "number"}
{

    yang_name = "fast-flood"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::FastFlood::~FastFlood()
{
}

bool Native::Router::IsisContainer::Isis::FastFlood::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set;
}

bool Native::Router::IsisContainer::Isis::FastFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Router::IsisContainer::Isis::FastFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::FastFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::FastFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::FastFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::FastReroute()
    :
    load_sharing(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::LoadSharing>())
    , per_prefix(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::PerPrefix>())
    , remote_lfa(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa>())
    , tie_break(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::TieBreak>())
{
    load_sharing->parent = this;
    per_prefix->parent = this;
    remote_lfa->parent = this;
    tie_break->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::FastReroute::~FastReroute()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::has_data() const
{
    if (is_presence_container) return true;
    return (load_sharing !=  nullptr && load_sharing->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tie_break !=  nullptr && tie_break->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (load_sharing !=  nullptr && load_sharing->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tie_break !=  nullptr && tie_break->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-sharing")
    {
        if(load_sharing == nullptr)
        {
            load_sharing = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::LoadSharing>();
        }
        return load_sharing;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa>();
        }
        return remote_lfa;
    }

    if(child_yang_name == "tie-break")
    {
        if(tie_break == nullptr)
        {
            tie_break = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::TieBreak>();
        }
        return tie_break;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(load_sharing != nullptr)
    {
        _children["load-sharing"] = load_sharing;
    }

    if(per_prefix != nullptr)
    {
        _children["per-prefix"] = per_prefix;
    }

    if(remote_lfa != nullptr)
    {
        _children["remote-lfa"] = remote_lfa;
    }

    if(tie_break != nullptr)
    {
        _children["tie-break"] = tie_break;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-sharing" || name == "per-prefix" || name == "remote-lfa" || name == "tie-break")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::LoadSharing()
    :
    level_1(nullptr) // presence node
    , level_2(nullptr) // presence node
{

    yang_name = "load-sharing"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::~LoadSharing()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::has_data() const
{
    if (is_presence_container) return true;
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::has_operation() const
{
    return is_set(yfilter)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-sharing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level_1 != nullptr)
    {
        _children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        _children["level-2"] = level_2;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-2")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::Level1()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "level-1"; yang_parent_name = "load-sharing"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::~Level1()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::Level2()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "level-2"; yang_parent_name = "load-sharing"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::~Level2()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::PerPrefix()
    :
    level_1(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1>())
    , level_2(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2>())
{
    level_1->parent = this;
    level_2->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::has_data() const
{
    if (is_presence_container) return true;
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level_1 != nullptr)
    {
        _children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        _children["level-2"] = level_2;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-2")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::Level1()
    :
    all{YType::empty, "all"},
    route_map{YType::str, "route-map"}
{

    yang_name = "level-1"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::~Level1()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::Level2()
    :
    all{YType::empty, "all"},
    route_map{YType::str, "route-map"}
{

    yang_name = "level-2"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::~Level2()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::RemoteLfa()
    :
    level_1(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1>())
    , level_2(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2>())
{
    level_1->parent = this;
    level_2->parent = this;

    yang_name = "remote-lfa"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::~RemoteLfa()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::has_data() const
{
    if (is_presence_container) return true;
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level_1 != nullptr)
    {
        _children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        _children["level-2"] = level_2;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-2")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::Level1()
    :
    mpls_ldp(nullptr) // presence node
{

    yang_name = "level-1"; yang_parent_name = "remote-lfa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::~Level1()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::has_data() const
{
    if (is_presence_container) return true;
    return (mpls_ldp !=  nullptr && mpls_ldp->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::has_operation() const
{
    return is_set(yfilter)
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp == nullptr)
        {
            mpls_ldp = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp>();
        }
        return mpls_ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls_ldp != nullptr)
    {
        _children["mpls-ldp"] = mpls_ldp;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-ldp")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MplsLdp()
    :
    maximum_metric(nullptr) // presence node
{

    yang_name = "mpls-ldp"; yang_parent_name = "level-1"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::~MplsLdp()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::has_data() const
{
    if (is_presence_container) return true;
    return (maximum_metric !=  nullptr && maximum_metric->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::has_operation() const
{
    return is_set(yfilter)
	|| (maximum_metric !=  nullptr && maximum_metric->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric")
    {
        if(maximum_metric == nullptr)
        {
            maximum_metric = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric>();
        }
        return maximum_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(maximum_metric != nullptr)
    {
        _children["maximum-metric"] = maximum_metric;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-metric")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::MaximumMetric()
    :
    max_met{YType::uint32, "max-met"}
{

    yang_name = "maximum-metric"; yang_parent_name = "mpls-ldp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::has_data() const
{
    if (is_presence_container) return true;
    return max_met.is_set;
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_met.yfilter);
}

std::string Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_met.is_set || is_set(max_met.yfilter)) leaf_name_data.push_back(max_met.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-met")
    {
        max_met = value;
        max_met.value_namespace = name_space;
        max_met.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-met")
    {
        max_met.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-met")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::Level2()
    :
    mpls_ldp(nullptr) // presence node
{

    yang_name = "level-2"; yang_parent_name = "remote-lfa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::~Level2()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::has_data() const
{
    if (is_presence_container) return true;
    return (mpls_ldp !=  nullptr && mpls_ldp->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::has_operation() const
{
    return is_set(yfilter)
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp == nullptr)
        {
            mpls_ldp = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp>();
        }
        return mpls_ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls_ldp != nullptr)
    {
        _children["mpls-ldp"] = mpls_ldp;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-ldp")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MplsLdp()
    :
    maximum_metric(nullptr) // presence node
{

    yang_name = "mpls-ldp"; yang_parent_name = "level-2"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::~MplsLdp()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::has_data() const
{
    if (is_presence_container) return true;
    return (maximum_metric !=  nullptr && maximum_metric->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::has_operation() const
{
    return is_set(yfilter)
	|| (maximum_metric !=  nullptr && maximum_metric->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric")
    {
        if(maximum_metric == nullptr)
        {
            maximum_metric = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric>();
        }
        return maximum_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(maximum_metric != nullptr)
    {
        _children["maximum-metric"] = maximum_metric;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-metric")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::MaximumMetric()
    :
    max_met{YType::uint32, "max-met"}
{

    yang_name = "maximum-metric"; yang_parent_name = "mpls-ldp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::has_data() const
{
    if (is_presence_container) return true;
    return max_met.is_set;
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_met.yfilter);
}

std::string Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_met.is_set || is_set(max_met.yfilter)) leaf_name_data.push_back(max_met.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-met")
    {
        max_met = value;
        max_met.value_namespace = name_space;
        max_met.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-met")
    {
        max_met.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-met")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::TieBreak::TieBreak()
    :
    level_1(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1>())
    , level_2(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2>())
{
    level_1->parent = this;
    level_2->parent = this;

    yang_name = "tie-break"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::FastReroute::TieBreak::~TieBreak()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::TieBreak::has_data() const
{
    if (is_presence_container) return true;
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::TieBreak::has_operation() const
{
    return is_set(yfilter)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::TieBreak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tie-break";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::TieBreak::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level_1 != nullptr)
    {
        _children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        _children["level-2"] = level_2;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::TieBreak::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::FastReroute::TieBreak::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::TieBreak::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-2")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::Level1()
    :
    downstream{YType::uint8, "downstream"},
    linecard_disjoint{YType::uint8, "linecard-disjoint"},
    lowest_backup_path_metric{YType::uint8, "lowest-backup-path-metric"},
    node_protecting{YType::uint8, "node-protecting"},
    primary_path{YType::uint8, "primary-path"},
    secondary_path{YType::uint8, "secondary-path"},
    srlg_disjoint{YType::uint8, "srlg-disjoint"}
{

    yang_name = "level-1"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::~Level1()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::has_data() const
{
    if (is_presence_container) return true;
    return downstream.is_set
	|| linecard_disjoint.is_set
	|| lowest_backup_path_metric.is_set
	|| node_protecting.is_set
	|| primary_path.is_set
	|| secondary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::has_operation() const
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

std::string Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "downstream" || name == "linecard-disjoint" || name == "lowest-backup-path-metric" || name == "node-protecting" || name == "primary-path" || name == "secondary-path" || name == "srlg-disjoint")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::Level2()
    :
    downstream{YType::uint8, "downstream"},
    linecard_disjoint{YType::uint8, "linecard-disjoint"},
    lowest_backup_path_metric{YType::uint8, "lowest-backup-path-metric"},
    node_protecting{YType::uint8, "node-protecting"},
    primary_path{YType::uint8, "primary-path"},
    secondary_path{YType::uint8, "secondary-path"},
    srlg_disjoint{YType::uint8, "srlg-disjoint"}
{

    yang_name = "level-2"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::~Level2()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::has_data() const
{
    if (is_presence_container) return true;
    return downstream.is_set
	|| linecard_disjoint.is_set
	|| lowest_backup_path_metric.is_set
	|| node_protecting.is_set
	|| primary_path.is_set
	|| secondary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::has_operation() const
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

std::string Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "downstream" || name == "linecard-disjoint" || name == "lowest-backup-path-metric" || name == "node-protecting" || name == "primary-path" || name == "secondary-path" || name == "srlg-disjoint")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::TiLfa::TiLfa()
    :
    level_1(std::make_shared<Native::Router::IsisContainer::Isis::TiLfa::Level1>())
    , level_2(nullptr) // presence node
{
    level_1->parent = this;

    yang_name = "ti-lfa"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::TiLfa::~TiLfa()
{
}

bool Native::Router::IsisContainer::Isis::TiLfa::has_data() const
{
    if (is_presence_container) return true;
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::IsisContainer::Isis::TiLfa::has_operation() const
{
    return is_set(yfilter)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::IsisContainer::Isis::TiLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ti-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::TiLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::TiLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::IsisContainer::Isis::TiLfa::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::IsisContainer::Isis::TiLfa::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::TiLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level_1 != nullptr)
    {
        _children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        _children["level-2"] = level_2;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::TiLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::TiLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::TiLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-2")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::TiLfa::Level1::Level1()
    :
    maximum_metric(std::make_shared<Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric>())
{
    maximum_metric->parent = this;

    yang_name = "level-1"; yang_parent_name = "ti-lfa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::TiLfa::Level1::~Level1()
{
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level1::has_data() const
{
    if (is_presence_container) return true;
    return (maximum_metric !=  nullptr && maximum_metric->has_data());
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level1::has_operation() const
{
    return is_set(yfilter)
	|| (maximum_metric !=  nullptr && maximum_metric->has_operation());
}

std::string Native::Router::IsisContainer::Isis::TiLfa::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::TiLfa::Level1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::TiLfa::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric")
    {
        if(maximum_metric == nullptr)
        {
            maximum_metric = std::make_shared<Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric>();
        }
        return maximum_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::TiLfa::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(maximum_metric != nullptr)
    {
        _children["maximum-metric"] = maximum_metric;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::TiLfa::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::TiLfa::Level1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-metric")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::MaximumMetric()
    :
    max_met{YType::uint32, "max-met"}
{

    yang_name = "maximum-metric"; yang_parent_name = "level-1"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::has_data() const
{
    if (is_presence_container) return true;
    return max_met.is_set;
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_met.yfilter);
}

std::string Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_met.is_set || is_set(max_met.yfilter)) leaf_name_data.push_back(max_met.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-met")
    {
        max_met = value;
        max_met.value_namespace = name_space;
        max_met.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-met")
    {
        max_met.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-met")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::TiLfa::Level2::Level2()
    :
    maximum_metric(std::make_shared<Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric>())
{
    maximum_metric->parent = this;

    yang_name = "level-2"; yang_parent_name = "ti-lfa"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::TiLfa::Level2::~Level2()
{
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level2::has_data() const
{
    if (is_presence_container) return true;
    return (maximum_metric !=  nullptr && maximum_metric->has_data());
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level2::has_operation() const
{
    return is_set(yfilter)
	|| (maximum_metric !=  nullptr && maximum_metric->has_operation());
}

std::string Native::Router::IsisContainer::Isis::TiLfa::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::TiLfa::Level2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::TiLfa::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric")
    {
        if(maximum_metric == nullptr)
        {
            maximum_metric = std::make_shared<Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric>();
        }
        return maximum_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::TiLfa::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(maximum_metric != nullptr)
    {
        _children["maximum-metric"] = maximum_metric;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::TiLfa::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::TiLfa::Level2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-metric")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::MaximumMetric()
    :
    max_met{YType::uint32, "max-met"}
{

    yang_name = "maximum-metric"; yang_parent_name = "level-2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::has_data() const
{
    if (is_presence_container) return true;
    return max_met.is_set;
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_met.yfilter);
}

std::string Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_met.is_set || is_set(max_met.yfilter)) leaf_name_data.push_back(max_met.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-met")
    {
        max_met = value;
        max_met.value_namespace = name_space;
        max_met.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-met")
    {
        max_met.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-met")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{

    yang_name = "hello"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Hello::~Hello()
{
}

bool Native::Router::IsisContainer::Isis::Hello::has_data() const
{
    if (is_presence_container) return true;
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Router::IsisContainer::Isis::Hello::has_operation() const
{
    return is_set(yfilter)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Router::IsisContainer::Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(padding != nullptr)
    {
        _children["padding"] = padding;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padding")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Hello::Padding::Padding()
    :
    pad_type{YType::enumeration, "pad-type"}
{

    yang_name = "padding"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::Hello::Padding::~Padding()
{
}

bool Native::Router::IsisContainer::Isis::Hello::Padding::has_data() const
{
    if (is_presence_container) return true;
    return pad_type.is_set;
}

bool Native::Router::IsisContainer::Isis::Hello::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pad_type.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Hello::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pad_type.is_set || is_set(pad_type.yfilter)) leaf_name_data.push_back(pad_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Hello::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pad-type")
    {
        pad_type = value;
        pad_type.value_namespace = name_space;
        pad_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Hello::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pad-type")
    {
        pad_type.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Hello::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pad-type")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Hostname::Hostname()
    :
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "hostname"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Hostname::~Hostname()
{
}

bool Native::Router::IsisContainer::Isis::Hostname::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set;
}

bool Native::Router::IsisContainer::Isis::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Ispf::Ispf()
    :
    level{YType::enumeration, "level"},
    number{YType::uint32, "number"}
{

    yang_name = "ispf"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Ispf::~Ispf()
{
}

bool Native::Router::IsisContainer::Isis::Ispf::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| number.is_set;
}

bool Native::Router::IsisContainer::Isis::Ispf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Ispf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ispf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Ispf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Ispf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Ispf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Ispf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Ispf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Ispf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "number")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::LogAdjacencyChanges::LogAdjacencyChanges()
    :
    all{YType::empty, "all"}
{

    yang_name = "log-adjacency-changes"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::LogAdjacencyChanges::~LogAdjacencyChanges()
{
}

bool Native::Router::IsisContainer::Isis::LogAdjacencyChanges::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::IsisContainer::Isis::LogAdjacencyChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::IsisContainer::Isis::LogAdjacencyChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-adjacency-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::LogAdjacencyChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::LogAdjacencyChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::LogAdjacencyChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::LogAdjacencyChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::LogAdjacencyChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::LogAdjacencyChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::LspFull::LspFull()
    :
    suppress(std::make_shared<Native::Router::IsisContainer::Isis::LspFull::Suppress>())
{
    suppress->parent = this;

    yang_name = "lsp-full"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::LspFull::~LspFull()
{
}

bool Native::Router::IsisContainer::Isis::LspFull::has_data() const
{
    if (is_presence_container) return true;
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::IsisContainer::Isis::LspFull::has_operation() const
{
    return is_set(yfilter)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::IsisContainer::Isis::LspFull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-full";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::LspFull::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::LspFull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::IsisContainer::Isis::LspFull::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::LspFull::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(suppress != nullptr)
    {
        _children["suppress"] = suppress;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::LspFull::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::LspFull::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::LspFull::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::LspFull::Suppress::Suppress()
    :
    none{YType::empty, "none"}
        ,
    external_interlevel_container(std::make_shared<Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer>())
{
    external_interlevel_container->parent = this;

    yang_name = "suppress"; yang_parent_name = "lsp-full"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::LspFull::Suppress::~Suppress()
{
}

bool Native::Router::IsisContainer::Isis::LspFull::Suppress::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| (external_interlevel_container !=  nullptr && external_interlevel_container->has_data());
}

bool Native::Router::IsisContainer::Isis::LspFull::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| (external_interlevel_container !=  nullptr && external_interlevel_container->has_operation());
}

std::string Native::Router::IsisContainer::Isis::LspFull::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::LspFull::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::LspFull::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-interlevel-container")
    {
        if(external_interlevel_container == nullptr)
        {
            external_interlevel_container = std::make_shared<Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer>();
        }
        return external_interlevel_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::LspFull::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(external_interlevel_container != nullptr)
    {
        _children["external-interlevel-container"] = external_interlevel_container;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::LspFull::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::LspFull::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::LspFull::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-interlevel-container" || name == "none")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::ExternalInterlevelContainer()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{

    yang_name = "external-interlevel-container"; yang_parent_name = "suppress"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::~ExternalInterlevelContainer()
{
}

bool Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::has_data() const
{
    if (is_presence_container) return true;
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-interlevel-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::LspGenInterval::LspGenInterval()
    :
    intervals(std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::Intervals>())
    , intervals_levels(std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels>())
{
    intervals->parent = this;
    intervals_levels->parent = this;

    yang_name = "lsp-gen-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::LspGenInterval::~LspGenInterval()
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::has_data() const
{
    if (is_presence_container) return true;
    return (intervals !=  nullptr && intervals->has_data())
	|| (intervals_levels !=  nullptr && intervals_levels->has_data());
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::has_operation() const
{
    return is_set(yfilter)
	|| (intervals !=  nullptr && intervals->has_operation())
	|| (intervals_levels !=  nullptr && intervals_levels->has_operation());
}

std::string Native::Router::IsisContainer::Isis::LspGenInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-gen-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::LspGenInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::LspGenInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intervals")
    {
        if(intervals == nullptr)
        {
            intervals = std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::Intervals>();
        }
        return intervals;
    }

    if(child_yang_name == "intervals-levels")
    {
        if(intervals_levels == nullptr)
        {
            intervals_levels = std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels>();
        }
        return intervals_levels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intervals != nullptr)
    {
        _children["intervals"] = intervals;
    }

    if(intervals_levels != nullptr)
    {
        _children["intervals-levels"] = intervals_levels;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::LspGenInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::LspGenInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intervals" || name == "intervals-levels")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::Intervals()
    :
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    wait{YType::uint32, "wait"}
{

    yang_name = "intervals"; yang_parent_name = "lsp-gen-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::~Intervals()
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| initial_wait.is_set
	|| wait.is_set;
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "initial-wait" || name == "wait")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevels()
    :
    intervals_level_1(std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1>())
    , intervals_level_2(std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2>())
{
    intervals_level_1->parent = this;
    intervals_level_2->parent = this;

    yang_name = "intervals-levels"; yang_parent_name = "lsp-gen-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::~IntervalsLevels()
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::has_data() const
{
    if (is_presence_container) return true;
    return (intervals_level_1 !=  nullptr && intervals_level_1->has_data())
	|| (intervals_level_2 !=  nullptr && intervals_level_2->has_data());
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::has_operation() const
{
    return is_set(yfilter)
	|| (intervals_level_1 !=  nullptr && intervals_level_1->has_operation())
	|| (intervals_level_2 !=  nullptr && intervals_level_2->has_operation());
}

std::string Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals-levels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intervals-level-1")
    {
        if(intervals_level_1 == nullptr)
        {
            intervals_level_1 = std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1>();
        }
        return intervals_level_1;
    }

    if(child_yang_name == "intervals-level-2")
    {
        if(intervals_level_2 == nullptr)
        {
            intervals_level_2 = std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2>();
        }
        return intervals_level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intervals_level_1 != nullptr)
    {
        _children["intervals-level-1"] = intervals_level_1;
    }

    if(intervals_level_2 != nullptr)
    {
        _children["intervals-level-2"] = intervals_level_2;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intervals-level-1" || name == "intervals-level-2")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::IntervalsLevel1()
    :
    level_1{YType::empty, "level-1"},
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    wait{YType::uint32, "wait"}
{

    yang_name = "intervals-level-1"; yang_parent_name = "intervals-levels"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::~IntervalsLevel1()
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::has_data() const
{
    if (is_presence_container) return true;
    return level_1.is_set
	|| interval.is_set
	|| initial_wait.is_set
	|| wait.is_set;
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals-level-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-1")
    {
        level_1 = value;
        level_1.value_namespace = name_space;
        level_1.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
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

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "interval" || name == "initial-wait" || name == "wait")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::IntervalsLevel2()
    :
    level_2{YType::empty, "level-2"},
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    wait{YType::uint32, "wait"}
{

    yang_name = "intervals-level-2"; yang_parent_name = "intervals-levels"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::~IntervalsLevel2()
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::has_data() const
{
    if (is_presence_container) return true;
    return level_2.is_set
	|| interval.is_set
	|| initial_wait.is_set
	|| wait.is_set;
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level_2.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals-level-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-2")
    {
        level_2 = value;
        level_2.value_namespace = name_space;
        level_2.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
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

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-2" || name == "interval" || name == "initial-wait" || name == "wait")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Microloop::Microloop()
    :
    avoidance(nullptr) // presence node
{

    yang_name = "microloop"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Microloop::~Microloop()
{
}

bool Native::Router::IsisContainer::Isis::Microloop::has_data() const
{
    if (is_presence_container) return true;
    return (avoidance !=  nullptr && avoidance->has_data());
}

bool Native::Router::IsisContainer::Isis::Microloop::has_operation() const
{
    return is_set(yfilter)
	|| (avoidance !=  nullptr && avoidance->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Microloop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Microloop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Microloop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "avoidance")
    {
        if(avoidance == nullptr)
        {
            avoidance = std::make_shared<Native::Router::IsisContainer::Isis::Microloop::Avoidance>();
        }
        return avoidance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Microloop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(avoidance != nullptr)
    {
        _children["avoidance"] = avoidance;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Microloop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::Microloop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::Microloop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avoidance")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Microloop::Avoidance::Avoidance()
    :
    disable{YType::empty, "disable"},
    protected_{YType::empty, "protected"},
    rib_update_delay{YType::uint32, "rib-update-delay"}
{

    yang_name = "avoidance"; yang_parent_name = "microloop"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::Microloop::Avoidance::~Avoidance()
{
}

bool Native::Router::IsisContainer::Isis::Microloop::Avoidance::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| protected_.is_set
	|| rib_update_delay.is_set;
}

bool Native::Router::IsisContainer::Isis::Microloop::Avoidance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(protected_.yfilter)
	|| ydk::is_set(rib_update_delay.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Microloop::Avoidance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avoidance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Microloop::Avoidance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.yfilter)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Microloop::Avoidance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Microloop::Avoidance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Microloop::Avoidance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Microloop::Avoidance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Microloop::Avoidance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "protected" || name == "rib-update-delay")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::Mpls()
    :
    ldp(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::Ldp>())
    , traffic_eng(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng>())
{
    ldp->parent = this;
    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Mpls::~Mpls()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (ldp !=  nullptr && ldp->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Router::IsisContainer::Isis::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ldp != nullptr)
    {
        _children["ldp"] = ldp;
    }

    if(traffic_eng != nullptr)
    {
        _children["traffic-eng"] = traffic_eng;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp" || name == "traffic-eng")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::Ldp::Ldp()
    :
    sync{YType::empty, "sync"},
    sync_igp_shortcuts{YType::empty, "sync-igp-shortcuts"}
        ,
    autoconfig(nullptr) // presence node
{

    yang_name = "ldp"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Mpls::Ldp::~Ldp()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::has_data() const
{
    if (is_presence_container) return true;
    return sync.is_set
	|| sync_igp_shortcuts.is_set
	|| (autoconfig !=  nullptr && autoconfig->has_data());
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync.yfilter)
	|| ydk::is_set(sync_igp_shortcuts.yfilter)
	|| (autoconfig !=  nullptr && autoconfig->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());
    if (sync_igp_shortcuts.is_set || is_set(sync_igp_shortcuts.yfilter)) leaf_name_data.push_back(sync_igp_shortcuts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig>();
        }
        return autoconfig;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(autoconfig != nullptr)
    {
        _children["autoconfig"] = autoconfig;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Mpls::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync")
    {
        sync = value;
        sync.value_namespace = name_space;
        sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-igp-shortcuts")
    {
        sync_igp_shortcuts = value;
        sync_igp_shortcuts.value_namespace = name_space;
        sync_igp_shortcuts.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync")
    {
        sync.yfilter = yfilter;
    }
    if(value_path == "sync-igp-shortcuts")
    {
        sync_igp_shortcuts.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoconfig" || name == "sync" || name == "sync-igp-shortcuts")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::Autoconfig()
    :
    level_1{YType::empty, "level-1"},
    level_2{YType::empty, "level-2"}
{

    yang_name = "autoconfig"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::~Autoconfig()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::has_data() const
{
    if (is_presence_container) return true;
    return level_1.is_set
	|| level_2.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(level_2.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-1")
    {
        level_1 = value;
        level_1.value_namespace = name_space;
        level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
        level_2.value_namespace = name_space;
        level_2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-2")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::TrafficEng()
    :
    level_1{YType::empty, "level-1"},
    level_2{YType::empty, "level-2"},
    multicast_intact{YType::empty, "multicast-intact"}
        ,
    router_id(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId>())
    , scanner(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner>())
{
    router_id->parent = this;
    scanner->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::has_data() const
{
    if (is_presence_container) return true;
    return level_1.is_set
	|| level_2.is_set
	|| multicast_intact.is_set
	|| (router_id !=  nullptr && router_id->has_data())
	|| (scanner !=  nullptr && scanner->has_data());
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(level_2.yfilter)
	|| ydk::is_set(multicast_intact.yfilter)
	|| (router_id !=  nullptr && router_id->has_operation())
	|| (scanner !=  nullptr && scanner->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (multicast_intact.is_set || is_set(multicast_intact.yfilter)) leaf_name_data.push_back(multicast_intact.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId>();
        }
        return router_id;
    }

    if(child_yang_name == "scanner")
    {
        if(scanner == nullptr)
        {
            scanner = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner>();
        }
        return scanner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(router_id != nullptr)
    {
        _children["router-id"] = router_id;
    }

    if(scanner != nullptr)
    {
        _children["scanner"] = scanner;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-1")
    {
        level_1 = value;
        level_1.value_namespace = name_space;
        level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
        level_2.value_namespace = name_space;
        level_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-intact")
    {
        multicast_intact = value;
        multicast_intact.value_namespace = name_space;
        multicast_intact.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
    if(value_path == "multicast-intact")
    {
        multicast_intact.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "scanner" || name == "level-1" || name == "level-2" || name == "multicast-intact")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::RouterId()
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
    atm_subinterface(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "router-id"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::~RouterId()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::has_data() const
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

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::has_operation() const
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

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::get_children() const
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

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::Scanner()
    :
    interval{YType::uint32, "interval"},
    max_flash{YType::uint32, "max-flash"}
{

    yang_name = "scanner"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::~Scanner()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| max_flash.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(max_flash.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scanner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (max_flash.is_set || is_set(max_flash.yfilter)) leaf_name_data.push_back(max_flash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flash")
    {
        max_flash = value;
        max_flash.value_namespace = name_space;
        max_flash.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "max-flash")
    {
        max_flash.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "max-flash")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Net::Net()
    :
    tag{YType::str, "tag"}
{

    yang_name = "net"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Net::~Net()
{
}

bool Native::Router::IsisContainer::Isis::Net::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::Router::IsisContainer::Isis::Net::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Net::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net";
    ADD_KEY_TOKEN(tag, "tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Net::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Net::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Net::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Net::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Net::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Net::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Nsf::Nsf()
    :
    cisco{YType::empty, "cisco"},
    ietf{YType::empty, "ietf"},
    interval{YType::uint16, "interval"}
        ,
    interface(std::make_shared<Native::Router::IsisContainer::Isis::Nsf::Interface>())
{
    interface->parent = this;

    yang_name = "nsf"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Nsf::~Nsf()
{
}

bool Native::Router::IsisContainer::Isis::Nsf::has_data() const
{
    if (is_presence_container) return true;
    return cisco.is_set
	|| ietf.is_set
	|| interval.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::IsisContainer::Isis::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(ietf.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::IsisContainer::Isis::Nsf::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "cisco" || name == "ietf" || name == "interval")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Nsf::Interface::Interface()
    :
    wait{YType::uint8, "wait"}
{

    yang_name = "interface"; yang_parent_name = "nsf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Nsf::Interface::~Interface()
{
}

bool Native::Router::IsisContainer::Isis::Nsf::Interface::has_data() const
{
    if (is_presence_container) return true;
    return wait.is_set;
}

bool Native::Router::IsisContainer::Isis::Nsf::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Nsf::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Nsf::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Nsf::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Nsf::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Nsf::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Nsf::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Nsf::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Partition::Partition()
    :
    avoidance{YType::empty, "avoidance"}
{

    yang_name = "partition"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Partition::~Partition()
{
}

bool Native::Router::IsisContainer::Isis::Partition::has_data() const
{
    if (is_presence_container) return true;
    return avoidance.is_set;
}

bool Native::Router::IsisContainer::Isis::Partition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(avoidance.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Partition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partition";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Partition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avoidance.is_set || is_set(avoidance.yfilter)) leaf_name_data.push_back(avoidance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Partition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Partition::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Partition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avoidance")
    {
        avoidance = value;
        avoidance.value_namespace = name_space;
        avoidance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Partition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avoidance")
    {
        avoidance.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Partition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avoidance")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::PassiveInterface::PassiveInterface()
    :
    default_{YType::empty, "default"},
    interface{YType::str, "interface"}
{

    yang_name = "passive-interface"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::IsisContainer::Isis::PassiveInterface::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| interface.is_set;
}

bool Native::Router::IsisContainer::Isis::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::IsisContainer::Isis::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "interface")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Disable::Disable()
    :
    passive_interface(this, {"interface"})
{

    yang_name = "disable"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Disable::~Disable()
{
}

bool Native::Router::IsisContainer::Isis::Disable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<passive_interface.len(); index++)
    {
        if(passive_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::Disable::has_operation() const
{
    for (std::size_t index=0; index<passive_interface.len(); index++)
    {
        if(passive_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::IsisContainer::Isis::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "passive-interface")
    {
        auto ent_ = std::make_shared<Native::Router::IsisContainer::Isis::Disable::PassiveInterface>();
        ent_->parent = this;
        passive_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : passive_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-interface")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Disable::PassiveInterface::PassiveInterface()
    :
    interface{YType::str, "interface"}
{

    yang_name = "passive-interface"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Disable::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::IsisContainer::Isis::Disable::PassiveInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set;
}

bool Native::Router::IsisContainer::Isis::Disable::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Disable::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Disable::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Disable::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Disable::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Disable::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Disable::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Disable::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Protocol::Protocol()
    :
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "protocol"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Protocol::~Protocol()
{
}

bool Native::Router::IsisContainer::Isis::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return shutdown.is_set;
}

bool Native::Router::IsisContainer::Isis::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SegmentRouting::SegmentRouting()
    :
    mpls{YType::empty, "mpls"}
        ,
    prefix_sid_map(std::make_shared<Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap>())
{
    prefix_sid_map->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::SegmentRouting::~SegmentRouting()
{
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return mpls.is_set
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_data());
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter)
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_operation());
}

std::string Native::Router::IsisContainer::Isis::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-map")
    {
        if(prefix_sid_map == nullptr)
        {
            prefix_sid_map = std::make_shared<Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap>();
        }
        return prefix_sid_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_sid_map != nullptr)
    {
        _children["prefix-sid-map"] = prefix_sid_map;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-map" || name == "mpls")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::PrefixSidMap()
    :
    advertise_local{YType::empty, "advertise-local"}
        ,
    receive(nullptr) // presence node
{

    yang_name = "prefix-sid-map"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::~PrefixSidMap()
{
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::has_data() const
{
    if (is_presence_container) return true;
    return advertise_local.is_set
	|| (receive !=  nullptr && receive->has_data());
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise_local.yfilter)
	|| (receive !=  nullptr && receive->has_operation());
}

std::string Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_local.is_set || is_set(advertise_local.yfilter)) leaf_name_data.push_back(advertise_local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(receive != nullptr)
    {
        _children["receive"] = receive;
    }

    return _children;
}

void Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-local")
    {
        advertise_local = value;
        advertise_local.value_namespace = name_space;
        advertise_local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-local")
    {
        advertise_local.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "advertise-local")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::Receive()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "receive"; yang_parent_name = "prefix-sid-map"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::~Receive()
{
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Skeptical::Skeptical()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "skeptical"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Skeptical::~Skeptical()
{
}

bool Native::Router::IsisContainer::Isis::Skeptical::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Router::IsisContainer::Isis::Skeptical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Skeptical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Skeptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Skeptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Skeptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Use::Use()
    :
    external_metrics{YType::empty, "external-metrics"}
{

    yang_name = "use"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Use::~Use()
{
}

bool Native::Router::IsisContainer::Isis::Use::has_data() const
{
    if (is_presence_container) return true;
    return external_metrics.is_set;
}

bool Native::Router::IsisContainer::Isis::Use::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_metrics.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Use::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Use::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_metrics.is_set || is_set(external_metrics.yfilter)) leaf_name_data.push_back(external_metrics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Use::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Use::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Use::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-metrics")
    {
        external_metrics = value;
        external_metrics.value_namespace = name_space;
        external_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Use::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-metrics")
    {
        external_metrics.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Use::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-metrics")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Bfd::Bfd()
    :
    all_interfaces{YType::empty, "all-interfaces"},
    check_ctrl_plane_failure{YType::empty, "check-ctrl-plane-failure"}
{

    yang_name = "bfd"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::IsisContainer::Isis::Bfd::~Bfd()
{
}

bool Native::Router::IsisContainer::Isis::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return all_interfaces.is_set
	|| check_ctrl_plane_failure.is_set;
}

bool Native::Router::IsisContainer::Isis::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter)
	|| ydk::is_set(check_ctrl_plane_failure.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());
    if (check_ctrl_plane_failure.is_set || is_set(check_ctrl_plane_failure.yfilter)) leaf_name_data.push_back(check_ctrl_plane_failure.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::IsisContainer::Isis::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::IsisContainer::Isis::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::IsisContainer::Isis::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "check-ctrl-plane-failure")
    {
        check_ctrl_plane_failure = value;
        check_ctrl_plane_failure.value_namespace = name_space;
        check_ctrl_plane_failure.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
    if(value_path == "check-ctrl-plane-failure")
    {
        check_ctrl_plane_failure.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-interfaces" || name == "check-ctrl-plane-failure")
        return true;
    return false;
}

Native::Router::Ospf::Ospf()
    :
    id{YType::uint16, "id"},
    vrf{YType::str, "vrf"},
    router_id{YType::str, "router-id"},
    nsr{YType::empty, "nsr"},
    default_metric{YType::uint32, "default-metric"},
    maximum_paths{YType::uint32, "maximum-paths"},
    domain_tag{YType::uint32, "domain-tag"},
    ispf{YType::empty, "ispf"},
    prefix_suppression{YType::empty, "prefix-suppression"},
    priority{YType::uint8, "priority"},
    shutdown{YType::boolean, "shutdown"}
        ,
    address_family(std::make_shared<Native::Router::Ospf::AddressFamily>())
    , area(this, {"id"})
    , auto_cost(nullptr) // presence node
    , event_log(nullptr) // presence node
    , bfd(std::make_shared<Native::Router::Ospf::Bfd>())
    , interface_id(std::make_shared<Native::Router::Ospf::InterfaceId>())
    , log_adjacency_changes(nullptr) // presence node
    , max_lsa(std::make_shared<Native::Router::Ospf::MaxLsa>())
    , max_metric(std::make_shared<Native::Router::Ospf::MaxMetric>())
    , passive_interface(std::make_shared<Native::Router::Ospf::PassiveInterface>())
    , disable(std::make_shared<Native::Router::Ospf::Disable>())
    , queue_depth(std::make_shared<Native::Router::Ospf::QueueDepth>())
    , timers(std::make_shared<Native::Router::Ospf::Timers>())
    , traffic_share(std::make_shared<Native::Router::Ospf::TrafficShare>())
    , ttl_security(std::make_shared<Native::Router::Ospf::TtlSecurity>())
    , capability(std::make_shared<Native::Router::Ospf::Capability>())
    , compatible(std::make_shared<Native::Router::Ospf::Compatible>())
    , default_information(std::make_shared<Native::Router::Ospf::DefaultInformation>())
    , discard_route(nullptr) // presence node
    , distance(std::make_shared<Native::Router::Ospf::Distance>())
    , redistribute(std::make_shared<Native::Router::Ospf::Redistribute>())
    , distribute_list(std::make_shared<Native::Router::Ospf::DistributeList>())
    , domain_id(std::make_shared<Native::Router::Ospf::DomainId>())
    , fast_reroute(std::make_shared<Native::Router::Ospf::FastReroute>())
    , graceful_restart(nullptr) // presence node
    , ignore(std::make_shared<Native::Router::Ospf::Ignore>())
    , limit(std::make_shared<Native::Router::Ospf::Limit>())
    , local_rib_criteria(std::make_shared<Native::Router::Ospf::LocalRibCriteria>())
    , microloop(std::make_shared<Native::Router::Ospf::Microloop>())
    , mpls(std::make_shared<Native::Router::Ospf::Mpls>())
    , neighbor(this, {"ip"})
    , network(this, {"ip", "mask"})
    , nsf(nullptr) // presence node
    , prefix_priority(std::make_shared<Native::Router::Ospf::PrefixPriority>())
    , process_min_time(std::make_shared<Native::Router::Ospf::ProcessMinTime>())
    , snmp(std::make_shared<Native::Router::Ospf::Snmp>())
    , summary_address(this, {"ip", "wildcard"})
{
    address_family->parent = this;
    bfd->parent = this;
    interface_id->parent = this;
    max_lsa->parent = this;
    max_metric->parent = this;
    passive_interface->parent = this;
    disable->parent = this;
    queue_depth->parent = this;
    timers->parent = this;
    traffic_share->parent = this;
    ttl_security->parent = this;
    capability->parent = this;
    compatible->parent = this;
    default_information->parent = this;
    distance->parent = this;
    redistribute->parent = this;
    distribute_list->parent = this;
    domain_id->parent = this;
    fast_reroute->parent = this;
    ignore->parent = this;
    limit->parent = this;
    local_rib_criteria->parent = this;
    microloop->parent = this;
    mpls->parent = this;
    prefix_priority->parent = this;
    process_min_time->parent = this;
    snmp->parent = this;

    yang_name = "ospf"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Ospf::~Ospf()
{
}

bool Native::Router::Ospf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<summary_address.len(); index++)
    {
        if(summary_address[index]->has_data())
            return true;
    }
    return id.is_set
	|| vrf.is_set
	|| router_id.is_set
	|| nsr.is_set
	|| default_metric.is_set
	|| maximum_paths.is_set
	|| domain_tag.is_set
	|| ispf.is_set
	|| prefix_suppression.is_set
	|| priority.is_set
	|| shutdown.is_set
	|| (address_family !=  nullptr && address_family->has_data())
	|| (auto_cost !=  nullptr && auto_cost->has_data())
	|| (event_log !=  nullptr && event_log->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (interface_id !=  nullptr && interface_id->has_data())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_data())
	|| (max_lsa !=  nullptr && max_lsa->has_data())
	|| (max_metric !=  nullptr && max_metric->has_data())
	|| (passive_interface !=  nullptr && passive_interface->has_data())
	|| (disable !=  nullptr && disable->has_data())
	|| (queue_depth !=  nullptr && queue_depth->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (compatible !=  nullptr && compatible->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (discard_route !=  nullptr && discard_route->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (domain_id !=  nullptr && domain_id->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (ignore !=  nullptr && ignore->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (local_rib_criteria !=  nullptr && local_rib_criteria->has_data())
	|| (microloop !=  nullptr && microloop->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (prefix_priority !=  nullptr && prefix_priority->has_data())
	|| (process_min_time !=  nullptr && process_min_time->has_data())
	|| (snmp !=  nullptr && snmp->has_data());
}

bool Native::Router::Ospf::has_operation() const
{
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<summary_address.len(); index++)
    {
        if(summary_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(domain_tag.yfilter)
	|| ydk::is_set(ispf.yfilter)
	|| ydk::is_set(prefix_suppression.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (auto_cost !=  nullptr && auto_cost->has_operation())
	|| (event_log !=  nullptr && event_log->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (interface_id !=  nullptr && interface_id->has_operation())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_operation())
	|| (max_lsa !=  nullptr && max_lsa->has_operation())
	|| (max_metric !=  nullptr && max_metric->has_operation())
	|| (passive_interface !=  nullptr && passive_interface->has_operation())
	|| (disable !=  nullptr && disable->has_operation())
	|| (queue_depth !=  nullptr && queue_depth->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (compatible !=  nullptr && compatible->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (discard_route !=  nullptr && discard_route->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (domain_id !=  nullptr && domain_id->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (local_rib_criteria !=  nullptr && local_rib_criteria->has_operation())
	|| (microloop !=  nullptr && microloop->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (prefix_priority !=  nullptr && prefix_priority->has_operation())
	|| (process_min_time !=  nullptr && process_min_time->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation());
}

std::string Native::Router::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospf:ospf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (domain_tag.is_set || is_set(domain_tag.yfilter)) leaf_name_data.push_back(domain_tag.get_name_leafdata());
    if (ispf.is_set || is_set(ispf.yfilter)) leaf_name_data.push_back(ispf.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.yfilter)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Router::Ospf::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "area")
    {
        auto ent_ = std::make_shared<Native::Router::Ospf::Area>();
        ent_->parent = this;
        area.append(ent_);
        return ent_;
    }

    if(child_yang_name == "auto-cost")
    {
        if(auto_cost == nullptr)
        {
            auto_cost = std::make_shared<Native::Router::Ospf::AutoCost>();
        }
        return auto_cost;
    }

    if(child_yang_name == "event-log")
    {
        if(event_log == nullptr)
        {
            event_log = std::make_shared<Native::Router::Ospf::EventLog>();
        }
        return event_log;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Ospf::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "interface-id")
    {
        if(interface_id == nullptr)
        {
            interface_id = std::make_shared<Native::Router::Ospf::InterfaceId>();
        }
        return interface_id;
    }

    if(child_yang_name == "log-adjacency-changes")
    {
        if(log_adjacency_changes == nullptr)
        {
            log_adjacency_changes = std::make_shared<Native::Router::Ospf::LogAdjacencyChanges>();
        }
        return log_adjacency_changes;
    }

    if(child_yang_name == "max-lsa")
    {
        if(max_lsa == nullptr)
        {
            max_lsa = std::make_shared<Native::Router::Ospf::MaxLsa>();
        }
        return max_lsa;
    }

    if(child_yang_name == "max-metric")
    {
        if(max_metric == nullptr)
        {
            max_metric = std::make_shared<Native::Router::Ospf::MaxMetric>();
        }
        return max_metric;
    }

    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Router::Ospf::PassiveInterface>();
        }
        return passive_interface;
    }

    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Native::Router::Ospf::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "queue-depth")
    {
        if(queue_depth == nullptr)
        {
            queue_depth = std::make_shared<Native::Router::Ospf::QueueDepth>();
        }
        return queue_depth;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Ospf::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Ospf::TrafficShare>();
        }
        return traffic_share;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Ospf::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Ospf::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "compatible")
    {
        if(compatible == nullptr)
        {
            compatible = std::make_shared<Native::Router::Ospf::Compatible>();
        }
        return compatible;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Ospf::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "discard-route")
    {
        if(discard_route == nullptr)
        {
            discard_route = std::make_shared<Native::Router::Ospf::DiscardRoute>();
        }
        return discard_route;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Ospf::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Ospf::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Ospf::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "domain-id")
    {
        if(domain_id == nullptr)
        {
            domain_id = std::make_shared<Native::Router::Ospf::DomainId>();
        }
        return domain_id;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Router::Ospf::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Ospf::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Router::Ospf::Ignore>();
        }
        return ignore;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Ospf::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "local-rib-criteria")
    {
        if(local_rib_criteria == nullptr)
        {
            local_rib_criteria = std::make_shared<Native::Router::Ospf::LocalRibCriteria>();
        }
        return local_rib_criteria;
    }

    if(child_yang_name == "microloop")
    {
        if(microloop == nullptr)
        {
            microloop = std::make_shared<Native::Router::Ospf::Microloop>();
        }
        return microloop;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Router::Ospf::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Router::Ospf::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "network")
    {
        auto ent_ = std::make_shared<Native::Router::Ospf::Network>();
        ent_->parent = this;
        network.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Native::Router::Ospf::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "prefix-priority")
    {
        if(prefix_priority == nullptr)
        {
            prefix_priority = std::make_shared<Native::Router::Ospf::PrefixPriority>();
        }
        return prefix_priority;
    }

    if(child_yang_name == "process-min-time")
    {
        if(process_min_time == nullptr)
        {
            process_min_time = std::make_shared<Native::Router::Ospf::ProcessMinTime>();
        }
        return process_min_time;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Ospf::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "summary-address")
    {
        auto ent_ = std::make_shared<Native::Router::Ospf::SummaryAddress>();
        ent_->parent = this;
        summary_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_family != nullptr)
    {
        _children["address-family"] = address_family;
    }

    count_ = 0;
    for (auto ent_ : area.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(auto_cost != nullptr)
    {
        _children["auto-cost"] = auto_cost;
    }

    if(event_log != nullptr)
    {
        _children["event-log"] = event_log;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(interface_id != nullptr)
    {
        _children["interface-id"] = interface_id;
    }

    if(log_adjacency_changes != nullptr)
    {
        _children["log-adjacency-changes"] = log_adjacency_changes;
    }

    if(max_lsa != nullptr)
    {
        _children["max-lsa"] = max_lsa;
    }

    if(max_metric != nullptr)
    {
        _children["max-metric"] = max_metric;
    }

    if(passive_interface != nullptr)
    {
        _children["passive-interface"] = passive_interface;
    }

    if(disable != nullptr)
    {
        _children["disable"] = disable;
    }

    if(queue_depth != nullptr)
    {
        _children["queue-depth"] = queue_depth;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(traffic_share != nullptr)
    {
        _children["traffic-share"] = traffic_share;
    }

    if(ttl_security != nullptr)
    {
        _children["ttl-security"] = ttl_security;
    }

    if(capability != nullptr)
    {
        _children["capability"] = capability;
    }

    if(compatible != nullptr)
    {
        _children["compatible"] = compatible;
    }

    if(default_information != nullptr)
    {
        _children["default-information"] = default_information;
    }

    if(discard_route != nullptr)
    {
        _children["discard-route"] = discard_route;
    }

    if(distance != nullptr)
    {
        _children["distance"] = distance;
    }

    if(redistribute != nullptr)
    {
        _children["redistribute"] = redistribute;
    }

    if(distribute_list != nullptr)
    {
        _children["distribute-list"] = distribute_list;
    }

    if(domain_id != nullptr)
    {
        _children["domain-id"] = domain_id;
    }

    if(fast_reroute != nullptr)
    {
        _children["fast-reroute"] = fast_reroute;
    }

    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    if(local_rib_criteria != nullptr)
    {
        _children["local-rib-criteria"] = local_rib_criteria;
    }

    if(microloop != nullptr)
    {
        _children["microloop"] = microloop;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : network.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(nsf != nullptr)
    {
        _children["nsf"] = nsf;
    }

    if(prefix_priority != nullptr)
    {
        _children["prefix-priority"] = prefix_priority;
    }

    if(process_min_time != nullptr)
    {
        _children["process-min-time"] = process_min_time;
    }

    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    count_ = 0;
    for (auto ent_ : summary_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr")
    {
        nsr = value;
        nsr.value_namespace = name_space;
        nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-tag")
    {
        domain_tag = value;
        domain_tag.value_namespace = name_space;
        domain_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ispf")
    {
        ispf = value;
        ispf.value_namespace = name_space;
        ispf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
        prefix_suppression.value_namespace = name_space;
        prefix_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "domain-tag")
    {
        domain_tag.yfilter = yfilter;
    }
    if(value_path == "ispf")
    {
        ispf.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "area" || name == "auto-cost" || name == "event-log" || name == "bfd" || name == "interface-id" || name == "log-adjacency-changes" || name == "max-lsa" || name == "max-metric" || name == "passive-interface" || name == "disable" || name == "queue-depth" || name == "timers" || name == "traffic-share" || name == "ttl-security" || name == "capability" || name == "compatible" || name == "default-information" || name == "discard-route" || name == "distance" || name == "redistribute" || name == "distribute-list" || name == "domain-id" || name == "fast-reroute" || name == "graceful-restart" || name == "ignore" || name == "limit" || name == "local-rib-criteria" || name == "microloop" || name == "mpls" || name == "neighbor" || name == "network" || name == "nsf" || name == "prefix-priority" || name == "process-min-time" || name == "snmp" || name == "summary-address" || name == "id" || name == "vrf" || name == "router-id" || name == "nsr" || name == "default-metric" || name == "maximum-paths" || name == "domain-tag" || name == "ispf" || name == "prefix-suppression" || name == "priority" || name == "shutdown")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::AddressFamily()
    :
    ipv4_1(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41>())
    , ipv4(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4>())
{
    ipv4_1->parent = this;
    ipv4->parent = this;

    yang_name = "address-family"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::~AddressFamily()
{
}

bool Native::Router::Ospf::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4_1 !=  nullptr && ipv4_1->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Router::Ospf::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_1 !=  nullptr && ipv4_1->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4_1")
    {
        if(ipv4_1 == nullptr)
        {
            ipv4_1 = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41>();
        }
        return ipv4_1;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_1 != nullptr)
    {
        _children["ipv4_1"] = ipv4_1;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4_1" || name == "ipv4")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv41()
    :
    ipv4(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "ipv4_1"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv41::~Ipv41()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv41::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv41::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv41::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4_1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv41::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv41::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv41::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv41::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::AddressFamily::Ipv41::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::AddressFamily::Ipv41::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Ipv4()
    :
    snmp(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp>())
    , topology(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Topology>())
{
    snmp->parent = this;
    topology->parent = this;

    yang_name = "ipv4"; yang_parent_name = "ipv4_1"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::~Ipv4()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (snmp !=  nullptr && snmp->has_data())
	|| (topology !=  nullptr && topology->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (topology !=  nullptr && topology->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Topology>();
        }
        return topology;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    if(topology != nullptr)
    {
        _children["topology"] = topology;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp" || name == "topology")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Snmp()
    :
    context(this, {"name"})
{

    yang_name = "snmp"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::~Snmp()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::has_operation() const
{
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        auto ent_ = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context>();
        ent_->parent = this;
        context.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Context()
    :
    name{YType::str, "name"}
        ,
    community(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community>())
    , user(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User>())
{
    community->parent = this;
    user->parent = this;

    yang_name = "context"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::~Context()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (community !=  nullptr && community->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (community !=  nullptr && community->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community>();
        }
        return community;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(community != nullptr)
    {
        _children["community"] = community;
    }

    if(user != nullptr)
    {
        _children["user"] = user;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "user" || name == "name")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::Community()
    :
    community_string{YType::str, "community-string"}
        ,
    access(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::Access>())
{
    access->parent = this;

    yang_name = "community"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::~Community()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::has_data() const
{
    if (is_presence_container) return true;
    return community_string.is_set
	|| (access !=  nullptr && access->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_string.yfilter)
	|| (access !=  nullptr && access->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_string.is_set || is_set(community_string.yfilter)) leaf_name_data.push_back(community_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::Access>();
        }
        return access;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-string")
    {
        community_string = value;
        community_string.value_namespace = name_space;
        community_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-string")
    {
        community_string.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "community-string")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::Access::Access()
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

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::Access::~Access()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::Access::has_data() const
{
    if (is_presence_container) return true;
    return standard_acl.is_set
	|| expanded_acl.is_set
	|| acl_name.is_set
	|| ipv6.is_set
	|| ro.is_set
	|| rw.is_set;
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standard_acl.yfilter)
	|| ydk::is_set(expanded_acl.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(ro.yfilter)
	|| ydk::is_set(rw.yfilter);
}

std::string Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::Access::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::Access::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::Community::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard-acl" || name == "expanded-acl" || name == "acl-name" || name == "ipv6" || name == "ro" || name == "rw")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::User()
    :
    name{YType::str, "name"}
        ,
    permisssion(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion>())
{
    permisssion->parent = this;

    yang_name = "user"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::~User()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (permisssion !=  nullptr && permisssion->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (permisssion !=  nullptr && permisssion->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permisssion")
    {
        if(permisssion == nullptr)
        {
            permisssion = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion>();
        }
        return permisssion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(permisssion != nullptr)
    {
        _children["permisssion"] = permisssion;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permisssion" || name == "name")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Permisssion()
    :
    credential{YType::empty, "credential"},
    encrypted{YType::empty, "encrypted"}
        ,
    access(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Access>())
    , auth(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Auth>())
{
    access->parent = this;
    auth->parent = this;

    yang_name = "permisssion"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::~Permisssion()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::has_data() const
{
    if (is_presence_container) return true;
    return credential.is_set
	|| encrypted.is_set
	|| (access !=  nullptr && access->has_data())
	|| (auth !=  nullptr && auth->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(credential.yfilter)
	|| ydk::is_set(encrypted.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permisssion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credential.is_set || is_set(credential.yfilter)) leaf_name_data.push_back(credential.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Access>();
        }
        return access;
    }

    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(auth != nullptr)
    {
        _children["auth"] = auth;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "auth" || name == "credential" || name == "encrypted")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Access::Access()
    :
    standard_acl{YType::uint32, "standard-acl"},
    acl_name{YType::str, "acl-name"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "access"; yang_parent_name = "permisssion"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Access::~Access()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Access::has_data() const
{
    if (is_presence_container) return true;
    return standard_acl.is_set
	|| acl_name.is_set
	|| ipv6.is_set;
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standard_acl.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Access::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard-acl" || name == "acl-name" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Auth::Auth()
    :
    md5{YType::str, "md5"},
    sha{YType::str, "sha"}
{

    yang_name = "auth"; yang_parent_name = "permisssion"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Auth::~Auth()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Auth::has_data() const
{
    if (is_presence_container) return true;
    return md5.is_set
	|| sha.is_set;
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Auth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha.yfilter);
}

std::string Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Auth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha.is_set || is_set(sha.yfilter)) leaf_name_data.push_back(sha.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Auth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Auth::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Snmp::Context::User::Permisssion::Auth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Topology::Topology()
    :
    name{YType::str, "name"},
    tid{YType::uint32, "tid"}
{

    yang_name = "topology"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Topology::~Topology()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Topology::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| tid.is_set;
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(tid.yfilter);
}

std::string Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (tid.is_set || is_set(tid.yfilter)) leaf_name_data.push_back(tid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tid")
    {
        tid = value;
        tid.value_namespace = name_space;
        tid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "tid")
    {
        tid.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::AddressFamily::Ipv41::Ipv4::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "tid")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Ipv4()
    :
    unicast(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast>())
    , multicast(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast>())
{
    unicast->parent = this;
    multicast->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (unicast !=  nullptr && unicast->has_data())
	|| (multicast !=  nullptr && multicast->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (unicast !=  nullptr && unicast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast>();
        }
        return unicast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast>();
        }
        return multicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(unicast != nullptr)
    {
        _children["unicast"] = unicast;
    }

    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast" || name == "multicast")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Unicast()
    :
    snmp(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp>())
    , topology(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology>())
{
    snmp->parent = this;
    topology->parent = this;

    yang_name = "unicast"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::~Unicast()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (snmp !=  nullptr && snmp->has_data())
	|| (topology !=  nullptr && topology->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (topology !=  nullptr && topology->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology>();
        }
        return topology;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    if(topology != nullptr)
    {
        _children["topology"] = topology;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp" || name == "topology")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Snmp()
    :
    context(this, {"name"})
{

    yang_name = "snmp"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::~Snmp()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::has_operation() const
{
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        auto ent_ = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context>();
        ent_->parent = this;
        context.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Context()
    :
    name{YType::str, "name"}
        ,
    community(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community>())
    , user(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User>())
{
    community->parent = this;
    user->parent = this;

    yang_name = "context"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::~Context()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (community !=  nullptr && community->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (community !=  nullptr && community->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community>();
        }
        return community;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(community != nullptr)
    {
        _children["community"] = community;
    }

    if(user != nullptr)
    {
        _children["user"] = user;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "user" || name == "name")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Community()
    :
    community_string{YType::str, "community-string"}
        ,
    access(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access>())
{
    access->parent = this;

    yang_name = "community"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::~Community()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::has_data() const
{
    if (is_presence_container) return true;
    return community_string.is_set
	|| (access !=  nullptr && access->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_string.yfilter)
	|| (access !=  nullptr && access->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_string.is_set || is_set(community_string.yfilter)) leaf_name_data.push_back(community_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access>();
        }
        return access;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-string")
    {
        community_string = value;
        community_string.value_namespace = name_space;
        community_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-string")
    {
        community_string.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "community-string")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access::Access()
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

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access::~Access()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access::has_data() const
{
    if (is_presence_container) return true;
    return standard_acl.is_set
	|| expanded_acl.is_set
	|| acl_name.is_set
	|| ipv6.is_set
	|| ro.is_set
	|| rw.is_set;
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standard_acl.yfilter)
	|| ydk::is_set(expanded_acl.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(ro.yfilter)
	|| ydk::is_set(rw.yfilter);
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard-acl" || name == "expanded-acl" || name == "acl-name" || name == "ipv6" || name == "ro" || name == "rw")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::User()
    :
    name{YType::str, "name"}
        ,
    permisssion(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion>())
{
    permisssion->parent = this;

    yang_name = "user"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::~User()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (permisssion !=  nullptr && permisssion->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (permisssion !=  nullptr && permisssion->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permisssion")
    {
        if(permisssion == nullptr)
        {
            permisssion = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion>();
        }
        return permisssion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(permisssion != nullptr)
    {
        _children["permisssion"] = permisssion;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permisssion" || name == "name")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Permisssion()
    :
    credential{YType::empty, "credential"},
    encrypted{YType::empty, "encrypted"}
        ,
    access(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access>())
    , auth(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth>())
{
    access->parent = this;
    auth->parent = this;

    yang_name = "permisssion"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::~Permisssion()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::has_data() const
{
    if (is_presence_container) return true;
    return credential.is_set
	|| encrypted.is_set
	|| (access !=  nullptr && access->has_data())
	|| (auth !=  nullptr && auth->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(credential.yfilter)
	|| ydk::is_set(encrypted.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permisssion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credential.is_set || is_set(credential.yfilter)) leaf_name_data.push_back(credential.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access>();
        }
        return access;
    }

    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(auth != nullptr)
    {
        _children["auth"] = auth;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "auth" || name == "credential" || name == "encrypted")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access::Access()
    :
    standard_acl{YType::uint32, "standard-acl"},
    acl_name{YType::str, "acl-name"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "access"; yang_parent_name = "permisssion"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access::~Access()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access::has_data() const
{
    if (is_presence_container) return true;
    return standard_acl.is_set
	|| acl_name.is_set
	|| ipv6.is_set;
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standard_acl.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard-acl" || name == "acl-name" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth::Auth()
    :
    md5{YType::str, "md5"},
    sha{YType::str, "sha"}
{

    yang_name = "auth"; yang_parent_name = "permisssion"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth::~Auth()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth::has_data() const
{
    if (is_presence_container) return true;
    return md5.is_set
	|| sha.is_set;
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha.yfilter);
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha.is_set || is_set(sha.yfilter)) leaf_name_data.push_back(sha.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology::Topology()
    :
    name{YType::str, "name"},
    tid{YType::uint32, "tid"}
{

    yang_name = "topology"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology::~Topology()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| tid.is_set;
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(tid.yfilter);
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (tid.is_set || is_set(tid.yfilter)) leaf_name_data.push_back(tid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tid")
    {
        tid = value;
        tid.value_namespace = name_space;
        tid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "tid")
    {
        tid.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "tid")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Multicast()
    :
    snmp(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp>())
    , topology(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology>())
{
    snmp->parent = this;
    topology->parent = this;

    yang_name = "multicast"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::~Multicast()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return (snmp !=  nullptr && snmp->has_data())
	|| (topology !=  nullptr && topology->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (topology !=  nullptr && topology->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology>();
        }
        return topology;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    if(topology != nullptr)
    {
        _children["topology"] = topology;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp" || name == "topology")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Snmp()
    :
    context(this, {"name"})
{

    yang_name = "snmp"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::~Snmp()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::has_operation() const
{
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        auto ent_ = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context>();
        ent_->parent = this;
        context.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Context()
    :
    name{YType::str, "name"}
        ,
    community(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community>())
    , user(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User>())
{
    community->parent = this;
    user->parent = this;

    yang_name = "context"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::~Context()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (community !=  nullptr && community->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (community !=  nullptr && community->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community>();
        }
        return community;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(community != nullptr)
    {
        _children["community"] = community;
    }

    if(user != nullptr)
    {
        _children["user"] = user;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "user" || name == "name")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Community()
    :
    community_string{YType::str, "community-string"}
        ,
    access(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access>())
{
    access->parent = this;

    yang_name = "community"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::~Community()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::has_data() const
{
    if (is_presence_container) return true;
    return community_string.is_set
	|| (access !=  nullptr && access->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_string.yfilter)
	|| (access !=  nullptr && access->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_string.is_set || is_set(community_string.yfilter)) leaf_name_data.push_back(community_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access>();
        }
        return access;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-string")
    {
        community_string = value;
        community_string.value_namespace = name_space;
        community_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-string")
    {
        community_string.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "community-string")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access::Access()
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

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access::~Access()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access::has_data() const
{
    if (is_presence_container) return true;
    return standard_acl.is_set
	|| expanded_acl.is_set
	|| acl_name.is_set
	|| ipv6.is_set
	|| ro.is_set
	|| rw.is_set;
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standard_acl.yfilter)
	|| ydk::is_set(expanded_acl.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(ro.yfilter)
	|| ydk::is_set(rw.yfilter);
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard-acl" || name == "expanded-acl" || name == "acl-name" || name == "ipv6" || name == "ro" || name == "rw")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::User()
    :
    name{YType::str, "name"}
        ,
    permisssion(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion>())
{
    permisssion->parent = this;

    yang_name = "user"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::~User()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (permisssion !=  nullptr && permisssion->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (permisssion !=  nullptr && permisssion->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permisssion")
    {
        if(permisssion == nullptr)
        {
            permisssion = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion>();
        }
        return permisssion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(permisssion != nullptr)
    {
        _children["permisssion"] = permisssion;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permisssion" || name == "name")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Permisssion()
    :
    credential{YType::empty, "credential"},
    encrypted{YType::empty, "encrypted"}
        ,
    access(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access>())
    , auth(std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth>())
{
    access->parent = this;
    auth->parent = this;

    yang_name = "permisssion"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::~Permisssion()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::has_data() const
{
    if (is_presence_container) return true;
    return credential.is_set
	|| encrypted.is_set
	|| (access !=  nullptr && access->has_data())
	|| (auth !=  nullptr && auth->has_data());
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(credential.yfilter)
	|| ydk::is_set(encrypted.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permisssion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credential.is_set || is_set(credential.yfilter)) leaf_name_data.push_back(credential.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access>();
        }
        return access;
    }

    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(auth != nullptr)
    {
        _children["auth"] = auth;
    }

    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "auth" || name == "credential" || name == "encrypted")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access::Access()
    :
    standard_acl{YType::uint32, "standard-acl"},
    acl_name{YType::str, "acl-name"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "access"; yang_parent_name = "permisssion"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access::~Access()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access::has_data() const
{
    if (is_presence_container) return true;
    return standard_acl.is_set
	|| acl_name.is_set
	|| ipv6.is_set;
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standard_acl.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard-acl" || name == "acl-name" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth::Auth()
    :
    md5{YType::str, "md5"},
    sha{YType::str, "sha"}
{

    yang_name = "auth"; yang_parent_name = "permisssion"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth::~Auth()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth::has_data() const
{
    if (is_presence_container) return true;
    return md5.is_set
	|| sha.is_set;
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha.yfilter);
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha.is_set || is_set(sha.yfilter)) leaf_name_data.push_back(sha.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha")
        return true;
    return false;
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology::Topology()
    :
    name{YType::str, "name"},
    tid{YType::uint32, "tid"}
{

    yang_name = "topology"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology::~Topology()
{
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| tid.is_set;
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(tid.yfilter);
}

std::string Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (tid.is_set || is_set(tid.yfilter)) leaf_name_data.push_back(tid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tid")
    {
        tid = value;
        tid.value_namespace = name_space;
        tid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "tid")
    {
        tid.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "tid")
        return true;
    return false;
}

Native::Router::Ospf::Area::Area()
    :
    id{YType::str, "id"},
    default_cost{YType::uint32, "default-cost"}
        ,
    authentication(nullptr) // presence node
    , capability(std::make_shared<Native::Router::Ospf::Area::Capability>())
    , filter_list(this, {"in_out"})
    , nssa(nullptr) // presence node
    , ipv4_range(std::make_shared<Native::Router::Ospf::Area::Ipv4Range>())
    , ipv6_range(std::make_shared<Native::Router::Ospf::Area::Ipv6Range>())
    , sham_link(this, {"source", "dest"})
    , stub(nullptr) // presence node
    , virtual_link(this, {"id"})
{
    capability->parent = this;
    ipv4_range->parent = this;
    ipv6_range->parent = this;

    yang_name = "area"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospf::Area::~Area()
{
}

bool Native::Router::Ospf::Area::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filter_list.len(); index++)
    {
        if(filter_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sham_link.len(); index++)
    {
        if(sham_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<virtual_link.len(); index++)
    {
        if(virtual_link[index]->has_data())
            return true;
    }
    return id.is_set
	|| default_cost.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (ipv4_range !=  nullptr && ipv4_range->has_data())
	|| (ipv6_range !=  nullptr && ipv6_range->has_data())
	|| (stub !=  nullptr && stub->has_data());
}

bool Native::Router::Ospf::Area::has_operation() const
{
    for (std::size_t index=0; index<filter_list.len(); index++)
    {
        if(filter_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sham_link.len(); index++)
    {
        if(sham_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<virtual_link.len(); index++)
    {
        if(virtual_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(default_cost.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (ipv4_range !=  nullptr && ipv4_range->has_operation())
	|| (ipv6_range !=  nullptr && ipv6_range->has_operation())
	|| (stub !=  nullptr && stub->has_operation());
}

std::string Native::Router::Ospf::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.yfilter)) leaf_name_data.push_back(default_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Ospf::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Ospf::Area::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Ospf::Area::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "filter-list")
    {
        auto ent_ = std::make_shared<Native::Router::Ospf::Area::FilterList>();
        ent_->parent = this;
        filter_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<Native::Router::Ospf::Area::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "ipv4-range")
    {
        if(ipv4_range == nullptr)
        {
            ipv4_range = std::make_shared<Native::Router::Ospf::Area::Ipv4Range>();
        }
        return ipv4_range;
    }

    if(child_yang_name == "ipv6-range")
    {
        if(ipv6_range == nullptr)
        {
            ipv6_range = std::make_shared<Native::Router::Ospf::Area::Ipv6Range>();
        }
        return ipv6_range;
    }

    if(child_yang_name == "sham-link")
    {
        auto ent_ = std::make_shared<Native::Router::Ospf::Area::ShamLink>();
        ent_->parent = this;
        sham_link.append(ent_);
        return ent_;
    }

    if(child_yang_name == "stub")
    {
        if(stub == nullptr)
        {
            stub = std::make_shared<Native::Router::Ospf::Area::Stub>();
        }
        return stub;
    }

    if(child_yang_name == "virtual-link")
    {
        auto ent_ = std::make_shared<Native::Router::Ospf::Area::VirtualLink>();
        ent_->parent = this;
        virtual_link.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Ospf::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(capability != nullptr)
    {
        _children["capability"] = capability;
    }

    count_ = 0;
    for (auto ent_ : filter_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(nssa != nullptr)
    {
        _children["nssa"] = nssa;
    }

    if(ipv4_range != nullptr)
    {
        _children["ipv4-range"] = ipv4_range;
    }

    if(ipv6_range != nullptr)
    {
        _children["ipv6-range"] = ipv6_range;
    }

    count_ = 0;
    for (auto ent_ : sham_link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(stub != nullptr)
    {
        _children["stub"] = stub;
    }

    count_ = 0;
    for (auto ent_ : virtual_link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Ospf::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-cost")
    {
        default_cost = value;
        default_cost.value_namespace = name_space;
        default_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "default-cost")
    {
        default_cost.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "capability" || name == "filter-list" || name == "nssa" || name == "ipv4-range" || name == "ipv6-range" || name == "sham-link" || name == "stub" || name == "virtual-link" || name == "id" || name == "default-cost")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Metric::Metrics::Level::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Metric::Metrics::Level::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::SpfInterval::Level12::Level::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::SpfInterval::Level12::Level::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AreaPassword::Snp::send_only {0, "send-only"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AreaPassword::Snp::validate {1, "validate"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::DomainPassword::Snp::send_only {0, "send-only"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::DomainPassword::Snp::validate {1, "validate"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Hello::Padding::PadType::multi_point {0, "multi-point"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Hello::Padding::PadType::point_to_point {1, "point-to-point"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Ispf::Level::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Ispf::Level::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Ispf::Level::level_2 {2, "level-2"};


}
}

