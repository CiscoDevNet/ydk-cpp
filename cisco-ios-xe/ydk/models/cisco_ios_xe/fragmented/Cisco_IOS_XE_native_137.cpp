
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_137.hpp"
#include "Cisco_IOS_XE_native_138.hpp"
#include "Cisco_IOS_XE_native_139.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "rip"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::~Rip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Static_()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{

    yang_name = "static"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::~Static_()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::get_children() const
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

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "clns"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::~Clns()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::has_leaf_or_child_of_name(const std::string & name) const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SetAttachedBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SetAttachedBit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
{

    yang_name = "snmp"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Snmp::~Snmp()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::Snmp::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
	,user(std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User>())
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
    path_buffer << "context" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Snmp::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::get_children() const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Snmp::Context::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Snmp::Context::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permisssion != nullptr)
    {
        children["permisssion"] = permisssion;
    }

    return children;
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
	,auth(std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth>())
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::get_children() const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,level_1_2(nullptr) // presence node
	,level_2(nullptr) // presence node
	,metric_tag_container(std::make_shared<Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer>())
{
    metric_tag_container->parent = this;

    yang_name = "summary-address"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::SummaryAddress::~SummaryAddress()
{
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::has_data() const
{
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
    path_buffer << "summary-address" <<"[ip='" <<ip <<"']" <<"[mask='" <<mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SummaryAddress::get_children() const
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

    yang_name = "level-1"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::SummaryAddress::Level1::~Level1()
{
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level1::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SummaryAddress::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SummaryAddress::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

    yang_name = "level-1-2"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::SummaryAddress::Level12::~Level12()
{
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level12::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SummaryAddress::Level12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SummaryAddress::Level12::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

    yang_name = "level-2"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::SummaryAddress::Level2::~Level2()
{
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level2::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SummaryAddress::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SummaryAddress::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min != nullptr)
    {
        children["min"] = min;
    }

    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::TrafficShare::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::TrafficShare::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(originate != nullptr)
    {
        children["originate"] = originate;
    }

    return children;
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

    yang_name = "originate"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::DefaultInformation::Originate::~Originate()
{
}

bool Native::Router::IsisContainer::Isis::DefaultInformation::Originate::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::DefaultInformation::Originate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
{

    yang_name = "metric"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Metric::~Metric()
{
}

bool Native::Router::IsisContainer::Isis::Metric::has_data() const
{
    for (std::size_t index=0; index<metrics.size(); index++)
    {
        if(metrics[index]->has_data())
            return true;
    }
    return metric.is_set;
}

bool Native::Router::IsisContainer::Isis::Metric::has_operation() const
{
    for (std::size_t index=0; index<metrics.size(); index++)
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Metric::Metrics>();
        c->parent = this;
        metrics.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metrics)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    path_buffer << "metrics" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Metric::Metrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Metric::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Metric::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::PrcInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::PrcInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,suppress(std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress>())
{
    on_startup->parent = this;
    suppress->parent = this;

    yang_name = "set-overload-bit"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::SetOverloadBit::~SetOverloadBit()
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::get_children() const
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
	,wait_for_bgp(nullptr) // presence node
{
    time->parent = this;

    yang_name = "on-startup"; yang_parent_name = "set-overload-bit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::~OnStartup()
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::get_children() const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

    yang_name = "wait-for-bgp"; yang_parent_name = "on-startup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::~WaitForBgp()
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    intervals(std::make_shared<Native::Router::IsisContainer::Isis::SpfInterval::Intervals>())
{
    intervals->parent = this;

    yang_name = "spf-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::SpfInterval::~SpfInterval()
{
}

bool Native::Router::IsisContainer::Isis::SpfInterval::has_data() const
{
    for (std::size_t index=0; index<level_1_2.size(); index++)
    {
        if(level_1_2[index]->has_data())
            return true;
    }
    return (intervals !=  nullptr && intervals->has_data());
}

bool Native::Router::IsisContainer::Isis::SpfInterval::has_operation() const
{
    for (std::size_t index=0; index<level_1_2.size(); index++)
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::SpfInterval::Level12>();
        c->parent = this;
        level_1_2.push_back(c);
        return c;
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SpfInterval::get_children() const
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
    path_buffer << "level-1-2" <<"[level='" <<level <<"']";
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SpfInterval::Level12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SpfInterval::Level12::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SpfInterval::Intervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SpfInterval::Intervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AreaPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AreaPassword::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,key_chain(std::make_shared<Native::Router::IsisContainer::Isis::Authentication::KeyChain>())
	,send_only(nullptr) // presence node
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Authentication::get_children() const
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
	,text(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Authentication::Mode::~Mode()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Authentication::Mode::get_children() const
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

    yang_name = "md5"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::~Md5()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

    yang_name = "text"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Authentication::Mode::Text::~Text()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::Text::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Authentication::Mode::Text::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Authentication::Mode::Text::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::KeyChain::has_data() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Router::IsisContainer::Isis::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList>();
        c->parent = this;
        key_chain_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_chain_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    path_buffer << "key-chain-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

    yang_name = "send-only"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Authentication::SendOnly::~SendOnly()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::SendOnly::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Authentication::SendOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Authentication::SendOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::DomainPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::DomainPassword::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

    yang_name = "fast-flood"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::FastFlood::~FastFlood()
{
}

bool Native::Router::IsisContainer::Isis::FastFlood::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,per_prefix(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::PerPrefix>())
	,remote_lfa(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa>())
	,tie_break(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::TieBreak>())
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::get_children() const
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
	,level_2(nullptr) // presence node
{

    yang_name = "load-sharing"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::~LoadSharing()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::get_children() const
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

    yang_name = "level-1"; yang_parent_name = "load-sharing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::~Level1()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

    yang_name = "level-2"; yang_parent_name = "load-sharing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::~Level2()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,level_2(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2>())
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::get_children() const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,level_2(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2>())
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::get_children() const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_ldp != nullptr)
    {
        children["mpls-ldp"] = mpls_ldp;
    }

    return children;
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

    yang_name = "mpls-ldp"; yang_parent_name = "level-1"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::~MplsLdp()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric != nullptr)
    {
        children["maximum-metric"] = maximum_metric;
    }

    return children;
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

    yang_name = "maximum-metric"; yang_parent_name = "mpls-ldp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_ldp != nullptr)
    {
        children["mpls-ldp"] = mpls_ldp;
    }

    return children;
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

    yang_name = "mpls-ldp"; yang_parent_name = "level-2"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::~MplsLdp()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric != nullptr)
    {
        children["maximum-metric"] = maximum_metric;
    }

    return children;
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

    yang_name = "maximum-metric"; yang_parent_name = "mpls-ldp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,level_2(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2>())
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::get_children() const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,level_2(nullptr) // presence node
{
    level_1->parent = this;

    yang_name = "ti-lfa"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::TiLfa::~TiLfa()
{
}

bool Native::Router::IsisContainer::Isis::TiLfa::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::TiLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::TiLfa::get_children() const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::TiLfa::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::TiLfa::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric != nullptr)
    {
        children["maximum-metric"] = maximum_metric;
    }

    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

    yang_name = "level-2"; yang_parent_name = "ti-lfa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::TiLfa::Level2::~Level2()
{
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level2::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::TiLfa::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::TiLfa::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric != nullptr)
    {
        children["maximum-metric"] = maximum_metric;
    }

    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    return children;
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

    yang_name = "padding"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Hello::Padding::~Padding()
{
}

bool Native::Router::IsisContainer::Isis::Hello::Padding::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Ispf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Ispf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

    yang_name = "log-adjacency-changes"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::LogAdjacencyChanges::~LogAdjacencyChanges()
{
}

bool Native::Router::IsisContainer::Isis::LogAdjacencyChanges::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LogAdjacencyChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LogAdjacencyChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspFull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspFull::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspFull::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspFull::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_interlevel_container != nullptr)
    {
        children["external-interlevel-container"] = external_interlevel_container;
    }

    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,intervals_levels(std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels>())
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspGenInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::get_children() const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,intervals_level_2(std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2>())
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::get_children() const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Microloop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Microloop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(avoidance != nullptr)
    {
        children["avoidance"] = avoidance;
    }

    return children;
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

    yang_name = "avoidance"; yang_parent_name = "microloop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Microloop::Avoidance::~Avoidance()
{
}

bool Native::Router::IsisContainer::Isis::Microloop::Avoidance::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Microloop::Avoidance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Microloop::Avoidance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,traffic_eng(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng>())
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::get_children() const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoconfig != nullptr)
    {
        children["autoconfig"] = autoconfig;
    }

    return children;
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

    yang_name = "autoconfig"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::~Autoconfig()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,scanner(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner>())
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(router_id != nullptr)
    {
        children["router-id"] = router_id;
    }

    if(scanner != nullptr)
    {
        children["scanner"] = scanner;
    }

    return children;
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
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
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
	,atm_acrsubinterface(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface>())
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
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
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
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
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
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::get_children() const
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
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    path_buffer << "net" <<"[tag='" <<tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Net::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Net::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Net::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Nsf::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Nsf::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Partition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Partition::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
{

    yang_name = "disable"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Disable::~Disable()
{
}

bool Native::Router::IsisContainer::Isis::Disable::has_data() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::Disable::has_operation() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Disable::PassiveInterface>();
        c->parent = this;
        passive_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : passive_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    path_buffer << "passive-interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Disable::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Disable::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Disable::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_sid_map != nullptr)
    {
        children["prefix-sid-map"] = prefix_sid_map;
    }

    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    return children;
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

    yang_name = "receive"; yang_parent_name = "prefix-sid-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::~Receive()
{
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::has_data() const
{
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Use::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Use::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Router::Eigrp::Eigrp()
    :
    id{YType::str, "id"},
    auto_summary{YType::empty, "auto-summary"},
    maximum_paths{YType::uint8, "maximum-paths"},
    nsf{YType::empty, "nsf"},
    shutdown{YType::empty, "shutdown"},
    variance{YType::uint8, "variance"}
    	,
    passive_interface(std::make_shared<Native::Router::Eigrp::PassiveInterface>())
	,set_as_in_submode(std::make_shared<Native::Router::Eigrp::SetAsInSubmode>())
	,bfd(std::make_shared<Native::Router::Eigrp::Bfd>())
	,default_information(std::make_shared<Native::Router::Eigrp::DefaultInformation>())
	,default_metric(std::make_shared<Native::Router::Eigrp::DefaultMetric>())
	,distance(std::make_shared<Native::Router::Eigrp::Distance>())
	,distribute_list(std::make_shared<Native::Router::Eigrp::DistributeList>())
	,eigrp(std::make_shared<Native::Router::Eigrp::Eigrp_>())
	,metric(std::make_shared<Native::Router::Eigrp::Metric>())
	,neighbor(std::make_shared<Native::Router::Eigrp::Neighbor>())
	,offset_list(std::make_shared<Native::Router::Eigrp::OffsetList>())
	,redistribute(std::make_shared<Native::Router::Eigrp::Redistribute>())
	,summary_metric(std::make_shared<Native::Router::Eigrp::SummaryMetric>())
	,timers(std::make_shared<Native::Router::Eigrp::Timers>())
	,traffic_share(std::make_shared<Native::Router::Eigrp::TrafficShare>())
{
    passive_interface->parent = this;
    set_as_in_submode->parent = this;
    bfd->parent = this;
    default_information->parent = this;
    default_metric->parent = this;
    distance->parent = this;
    distribute_list->parent = this;
    eigrp->parent = this;
    metric->parent = this;
    neighbor->parent = this;
    offset_list->parent = this;
    redistribute->parent = this;
    summary_metric->parent = this;
    timers->parent = this;
    traffic_share->parent = this;

    yang_name = "eigrp"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Eigrp::~Eigrp()
{
}

bool Native::Router::Eigrp::has_data() const
{
    for (std::size_t index=0; index<address_family.size(); index++)
    {
        if(address_family[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<af_interface.size(); index++)
    {
        if(af_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return id.is_set
	|| auto_summary.is_set
	|| maximum_paths.is_set
	|| nsf.is_set
	|| shutdown.is_set
	|| variance.is_set
	|| (passive_interface !=  nullptr && passive_interface->has_data())
	|| (set_as_in_submode !=  nullptr && set_as_in_submode->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (offset_list !=  nullptr && offset_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (summary_metric !=  nullptr && summary_metric->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data());
}

bool Native::Router::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<address_family.size(); index++)
    {
        if(address_family[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<af_interface.size(); index++)
    {
        if(af_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(variance.yfilter)
	|| (passive_interface !=  nullptr && passive_interface->has_operation())
	|| (set_as_in_submode !=  nullptr && set_as_in_submode->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (offset_list !=  nullptr && offset_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (summary_metric !=  nullptr && summary_metric->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation());
}

std::string Native::Router::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:eigrp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Router::Eigrp::PassiveInterface>();
        }
        return passive_interface;
    }

    if(child_yang_name == "address-family")
    {
        for(auto const & c : address_family)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily>();
        c->parent = this;
        address_family.push_back(c);
        return c;
    }

    if(child_yang_name == "af-interface")
    {
        for(auto const & c : af_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AfInterface>();
        c->parent = this;
        af_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "set-as-in-submode")
    {
        if(set_as_in_submode == nullptr)
        {
            set_as_in_submode = std::make_shared<Native::Router::Eigrp::SetAsInSubmode>();
        }
        return set_as_in_submode;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Eigrp::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Eigrp::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<Native::Router::Eigrp::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Eigrp::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Eigrp::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::Eigrp_>();
        }
        return eigrp;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Eigrp::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Router::Eigrp::Neighbor>();
        }
        return neighbor;
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
        auto c = std::make_shared<Native::Router::Eigrp::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "offset-list")
    {
        if(offset_list == nullptr)
        {
            offset_list = std::make_shared<Native::Router::Eigrp::OffsetList>();
        }
        return offset_list;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Eigrp::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "summary-metric")
    {
        if(summary_metric == nullptr)
        {
            summary_metric = std::make_shared<Native::Router::Eigrp::SummaryMetric>();
        }
        return summary_metric;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Eigrp::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Eigrp::TrafficShare>();
        }
        return traffic_share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(passive_interface != nullptr)
    {
        children["passive-interface"] = passive_interface;
    }

    for (auto const & c : address_family)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : af_interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(set_as_in_submode != nullptr)
    {
        children["set-as-in-submode"] = set_as_in_submode;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(default_metric != nullptr)
    {
        children["default-metric"] = default_metric;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(offset_list != nullptr)
    {
        children["offset-list"] = offset_list;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(summary_metric != nullptr)
    {
        children["summary-metric"] = summary_metric;
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

void Native::Router::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-interface" || name == "address-family" || name == "af-interface" || name == "set-as-in-submode" || name == "bfd" || name == "default-information" || name == "default-metric" || name == "distance" || name == "distribute-list" || name == "eigrp" || name == "metric" || name == "neighbor" || name == "network" || name == "offset-list" || name == "redistribute" || name == "summary-metric" || name == "timers" || name == "traffic-share" || name == "id" || name == "auto-summary" || name == "maximum-paths" || name == "nsf" || name == "shutdown" || name == "variance")
        return true;
    return false;
}

Native::Router::Eigrp::PassiveInterface::PassiveInterface()
    :
    interface{YType::str, "interface"},
    tunnel{YType::uint32, "Tunnel"},
    vlan{YType::uint16, "Vlan"},
    default_{YType::empty, "default"}
{

    yang_name = "passive-interface"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Eigrp::PassiveInterface::has_data() const
{
    return interface.is_set
	|| tunnel.is_set
	|| vlan.is_set
	|| default_.is_set;
}

bool Native::Router::Eigrp::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Router::Eigrp::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "Tunnel" || name == "Vlan" || name == "default")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AddressFamily()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "address-family"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::~AddressFamily()
{
}

bool Native::Router::Eigrp::AddressFamily::has_data() const
{
    for (std::size_t index=0; index<af_ip_list.size(); index++)
    {
        if(af_ip_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<af_ip_vrf_list.size(); index++)
    {
        if(af_ip_vrf_list[index]->has_data())
            return true;
    }
    return type.is_set;
}

bool Native::Router::Eigrp::AddressFamily::has_operation() const
{
    for (std::size_t index=0; index<af_ip_list.size(); index++)
    {
        if(af_ip_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<af_ip_vrf_list.size(); index++)
    {
        if(af_ip_vrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-ip-list")
    {
        for(auto const & c : af_ip_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList>();
        c->parent = this;
        af_ip_list.push_back(c);
        return c;
    }

    if(child_yang_name == "af-ip-vrf-list")
    {
        for(auto const & c : af_ip_vrf_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList>();
        c->parent = this;
        af_ip_vrf_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af_ip_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : af_ip_vrf_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-ip-list" || name == "af-ip-vrf-list" || name == "type")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfIpList()
    :
    unicast_multicast{YType::enumeration, "unicast-multicast"},
    autonomous_system{YType::uint16, "autonomous-system"},
    auto_summary{YType::empty, "auto-summary"},
    maximum_paths{YType::uint8, "maximum-paths"},
    nsf{YType::empty, "nsf"},
    shutdown{YType::empty, "shutdown"},
    variance{YType::uint8, "variance"}
    	,
    set_as_in_submode(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode>())
	,bfd(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd>())
	,default_information(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation>())
	,default_metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric>())
	,distance(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance>())
	,distribute_list(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList>())
	,eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_>())
	,metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Metric>())
	,neighbor(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor>())
	,offset_list(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList>())
	,redistribute(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute>())
	,summary_metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric>())
	,timers(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers>())
	,traffic_share(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare>())
	,topology(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology>())
{
    set_as_in_submode->parent = this;
    bfd->parent = this;
    default_information->parent = this;
    default_metric->parent = this;
    distance->parent = this;
    distribute_list->parent = this;
    eigrp->parent = this;
    metric->parent = this;
    neighbor->parent = this;
    offset_list->parent = this;
    redistribute->parent = this;
    summary_metric->parent = this;
    timers->parent = this;
    traffic_share->parent = this;
    topology->parent = this;

    yang_name = "af-ip-list"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::~AfIpList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::has_data() const
{
    for (std::size_t index=0; index<af_interface.size(); index++)
    {
        if(af_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return unicast_multicast.is_set
	|| autonomous_system.is_set
	|| auto_summary.is_set
	|| maximum_paths.is_set
	|| nsf.is_set
	|| shutdown.is_set
	|| variance.is_set
	|| (set_as_in_submode !=  nullptr && set_as_in_submode->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (offset_list !=  nullptr && offset_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (summary_metric !=  nullptr && summary_metric->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data())
	|| (topology !=  nullptr && topology->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::has_operation() const
{
    for (std::size_t index=0; index<af_interface.size(); index++)
    {
        if(af_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(unicast_multicast.yfilter)
	|| ydk::is_set(autonomous_system.yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(variance.yfilter)
	|| (set_as_in_submode !=  nullptr && set_as_in_submode->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (offset_list !=  nullptr && offset_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (summary_metric !=  nullptr && summary_metric->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation())
	|| (topology !=  nullptr && topology->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-ip-list" <<"[unicast-multicast='" <<unicast_multicast <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast_multicast.is_set || is_set(unicast_multicast.yfilter)) leaf_name_data.push_back(unicast_multicast.get_name_leafdata());
    if (autonomous_system.is_set || is_set(autonomous_system.yfilter)) leaf_name_data.push_back(autonomous_system.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-interface")
    {
        for(auto const & c : af_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface>();
        c->parent = this;
        af_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "set-as-in-submode")
    {
        if(set_as_in_submode == nullptr)
        {
            set_as_in_submode = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode>();
        }
        return set_as_in_submode;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_>();
        }
        return eigrp;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor>();
        }
        return neighbor;
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
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "offset-list")
    {
        if(offset_list == nullptr)
        {
            offset_list = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList>();
        }
        return offset_list;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "summary-metric")
    {
        if(summary_metric == nullptr)
        {
            summary_metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric>();
        }
        return summary_metric;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare>();
        }
        return traffic_share;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology>();
        }
        return topology;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af_interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(set_as_in_submode != nullptr)
    {
        children["set-as-in-submode"] = set_as_in_submode;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(default_metric != nullptr)
    {
        children["default-metric"] = default_metric;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(offset_list != nullptr)
    {
        children["offset-list"] = offset_list;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(summary_metric != nullptr)
    {
        children["summary-metric"] = summary_metric;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(traffic_share != nullptr)
    {
        children["traffic-share"] = traffic_share;
    }

    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast-multicast")
    {
        unicast_multicast = value;
        unicast_multicast.value_namespace = name_space;
        unicast_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous-system")
    {
        autonomous_system = value;
        autonomous_system.value_namespace = name_space;
        autonomous_system.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast-multicast")
    {
        unicast_multicast.yfilter = yfilter;
    }
    if(value_path == "autonomous-system")
    {
        autonomous_system.yfilter = yfilter;
    }
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-interface" || name == "set-as-in-submode" || name == "bfd" || name == "default-information" || name == "default-metric" || name == "distance" || name == "distribute-list" || name == "eigrp" || name == "metric" || name == "neighbor" || name == "network" || name == "offset-list" || name == "redistribute" || name == "summary-metric" || name == "timers" || name == "traffic-share" || name == "topology" || name == "unicast-multicast" || name == "autonomous-system" || name == "auto-summary" || name == "maximum-paths" || name == "nsf" || name == "shutdown" || name == "variance")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::AfInterface()
    :
    name{YType::str, "name"},
    bandwidth_percent{YType::uint32, "bandwidth-percent"},
    hello_interval{YType::uint16, "hello-interval"},
    hold_time{YType::uint16, "hold-time"},
    passive_interface{YType::boolean, "passive-interface"},
    split_horizon{YType::boolean, "split-horizon"}
    	,
    stub_site(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite>())
	,authentication(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication>())
	,summary_address(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress>())
{
    stub_site->parent = this;
    authentication->parent = this;
    summary_address->parent = this;

    yang_name = "af-interface"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::~AfInterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::has_data() const
{
    return name.is_set
	|| bandwidth_percent.is_set
	|| hello_interval.is_set
	|| hold_time.is_set
	|| passive_interface.is_set
	|| split_horizon.is_set
	|| (stub_site !=  nullptr && stub_site->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(bandwidth_percent.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(split_horizon.yfilter)
	|| (stub_site !=  nullptr && stub_site->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (bandwidth_percent.is_set || is_set(bandwidth_percent.yfilter)) leaf_name_data.push_back(bandwidth_percent.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stub-site")
    {
        if(stub_site == nullptr)
        {
            stub_site = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite>();
        }
        return stub_site;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress>();
        }
        return summary_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stub_site != nullptr)
    {
        children["stub-site"] = stub_site;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(summary_address != nullptr)
    {
        children["summary-address"] = summary_address;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent = value;
        bandwidth_percent.value_namespace = name_space;
        bandwidth_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stub-site" || name == "authentication" || name == "summary-address" || name == "name" || name == "bandwidth-percent" || name == "hello-interval" || name == "hold-time" || name == "passive-interface" || name == "split-horizon")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::StubSite()
    :
    wan_interface{YType::empty, "wan-interface"}
{

    yang_name = "stub-site"; yang_parent_name = "af-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::~StubSite()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::has_data() const
{
    return wan_interface.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wan_interface.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-site";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wan_interface.is_set || is_set(wan_interface.yfilter)) leaf_name_data.push_back(wan_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wan-interface")
    {
        wan_interface = value;
        wan_interface.value_namespace = name_space;
        wan_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wan-interface")
    {
        wan_interface.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wan-interface")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
    	,
    mode(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode>())
{
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "af-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::~Authentication()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::has_data() const
{
    return key_chain.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::Mode()
    :
    md5{YType::empty, "md5"}
    	,
    hmac_sha_256(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256>())
{
    hmac_sha_256->parent = this;

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::~Mode()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::has_data() const
{
    return md5.is_set
	|| (hmac_sha_256 !=  nullptr && hmac_sha_256->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| (hmac_sha_256 !=  nullptr && hmac_sha_256->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hmac-sha-256")
    {
        if(hmac_sha_256 == nullptr)
        {
            hmac_sha_256 = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256>();
        }
        return hmac_sha_256;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hmac_sha_256 != nullptr)
    {
        children["hmac-sha-256"] = hmac_sha_256;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hmac-sha-256" || name == "md5")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::HmacSha256()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "hmac-sha-256"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::~HmacSha256()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::has_data() const
{
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hmac-sha-256";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::SummaryAddress()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "summary-address"; yang_parent_name = "af-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::~SummaryAddress()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::SetAsInSubmode()
    :
    autonomous_system{YType::uint16, "autonomous-system"}
{

    yang_name = "set-as-in-submode"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::~SetAsInSubmode()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::has_data() const
{
    return autonomous_system.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-as-in-submode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system.is_set || is_set(autonomous_system.yfilter)) leaf_name_data.push_back(autonomous_system.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system")
    {
        autonomous_system = value;
        autonomous_system.value_namespace = name_space;
        autonomous_system.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system")
    {
        autonomous_system.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autonomous-system")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Bfd()
    :
    all_interfaces{YType::empty, "all-interfaces"}
    	,
    interface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface>())
{
    interface->parent = this;

    yang_name = "bfd"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::~Bfd()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::has_data() const
{
    return all_interfaces.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "all-interfaces")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::Interface()
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
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
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
    atm_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::~Interface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::has_data() const
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
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
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

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::has_operation() const
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
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
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

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::get_name_leaf_data() const
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
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
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

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::get_children() const
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

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::DefaultInformation()
    :
    in(nullptr) // presence node
	,out(nullptr) // presence node
{

    yang_name = "default-information"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::In()
    :
    sa_num{YType::uint16, "sa-num"},
    sa_name{YType::str, "sa-name"}
{

    yang_name = "in"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::~In()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::has_data() const
{
    return sa_num.is_set
	|| sa_name.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_num.yfilter)
	|| ydk::is_set(sa_name.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_num.is_set || is_set(sa_num.yfilter)) leaf_name_data.push_back(sa_num.get_name_leafdata());
    if (sa_name.is_set || is_set(sa_name.yfilter)) leaf_name_data.push_back(sa_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-num")
    {
        sa_num = value;
        sa_num.value_namespace = name_space;
        sa_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-name")
    {
        sa_name = value;
        sa_name.value_namespace = name_space;
        sa_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-num")
    {
        sa_num.yfilter = yfilter;
    }
    if(value_path == "sa-name")
    {
        sa_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-num" || name == "sa-name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::Out()
    :
    sa_out_num{YType::uint16, "sa-out-num"},
    sa_out_name{YType::str, "sa-out-name"}
{

    yang_name = "out"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::~Out()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::has_data() const
{
    return sa_out_num.is_set
	|| sa_out_name.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_out_num.yfilter)
	|| ydk::is_set(sa_out_name.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_out_num.is_set || is_set(sa_out_num.yfilter)) leaf_name_data.push_back(sa_out_num.get_name_leafdata());
    if (sa_out_name.is_set || is_set(sa_out_name.yfilter)) leaf_name_data.push_back(sa_out_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-out-num")
    {
        sa_out_num = value;
        sa_out_num.value_namespace = name_space;
        sa_out_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-out-name")
    {
        sa_out_name = value;
        sa_out_name.value_namespace = name_space;
        sa_out_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-out-num")
    {
        sa_out_num.yfilter = yfilter;
    }
    if(value_path == "sa-out-name")
    {
        sa_out_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-out-num" || name == "sa-out-name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DefaultMetric()
{

    yang_name = "default-metric"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::~DefaultMetric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::has_data() const
{
    for (std::size_t index=0; index<dm_rdr.size(); index++)
    {
        if(dm_rdr[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::has_operation() const
{
    for (std::size_t index=0; index<dm_rdr.size(); index++)
    {
        if(dm_rdr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dm-rdr")
    {
        for(auto const & c : dm_rdr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr>();
        c->parent = this;
        dm_rdr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dm_rdr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-rdr")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr()
    :
    dm_rdr{YType::uint32, "dm-rdr"}
{

    yang_name = "dm-rdr"; yang_parent_name = "default-metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::~DmRdr()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::has_data() const
{
    for (std::size_t index=0; index<dm_rdr0.size(); index++)
    {
        if(dm_rdr0[index]->has_data())
            return true;
    }
    return dm_rdr.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::has_operation() const
{
    for (std::size_t index=0; index<dm_rdr0.size(); index++)
    {
        if(dm_rdr0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dm_rdr.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dm-rdr" <<"[dm-rdr='" <<dm_rdr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dm_rdr.is_set || is_set(dm_rdr.yfilter)) leaf_name_data.push_back(dm_rdr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dm-rdr0")
    {
        for(auto const & c : dm_rdr0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0>();
        c->parent = this;
        dm_rdr0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dm_rdr0)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dm-rdr")
    {
        dm_rdr = value;
        dm_rdr.value_namespace = name_space;
        dm_rdr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dm-rdr")
    {
        dm_rdr.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-rdr0" || name == "dm-rdr")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::DmRdr0()
    :
    dm_rdr0{YType::uint32, "dm-rdr0"},
    dm_rdr_pct{YType::uint8, "dm-rdr-pct"}
{

    yang_name = "dm-rdr0"; yang_parent_name = "dm-rdr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::~DmRdr0()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::has_data() const
{
    return dm_rdr0.is_set
	|| dm_rdr_pct.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dm_rdr0.yfilter)
	|| ydk::is_set(dm_rdr_pct.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dm-rdr0" <<"[dm-rdr0='" <<dm_rdr0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dm_rdr0.is_set || is_set(dm_rdr0.yfilter)) leaf_name_data.push_back(dm_rdr0.get_name_leafdata());
    if (dm_rdr_pct.is_set || is_set(dm_rdr_pct.yfilter)) leaf_name_data.push_back(dm_rdr_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dm-rdr0")
    {
        dm_rdr0 = value;
        dm_rdr0.value_namespace = name_space;
        dm_rdr0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dm-rdr-pct")
    {
        dm_rdr_pct = value;
        dm_rdr_pct.value_namespace = name_space;
        dm_rdr_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dm-rdr0")
    {
        dm_rdr0.yfilter = yfilter;
    }
    if(value_path == "dm-rdr-pct")
    {
        dm_rdr_pct.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-rdr0" || name == "dm-rdr-pct")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Distance()
    :
    eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_>())
{
    eigrp->parent = this;

    yang_name = "distance"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::~Distance()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::has_data() const
{
    for (std::size_t index=0; index<rad_dis.size(); index++)
    {
        if(rad_dis[index]->has_data())
            return true;
    }
    return (eigrp !=  nullptr && eigrp->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::has_operation() const
{
    for (std::size_t index=0; index<rad_dis.size(); index++)
    {
        if(rad_dis[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (eigrp !=  nullptr && eigrp->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rad-dis")
    {
        for(auto const & c : rad_dis)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis>();
        c->parent = this;
        rad_dis.push_back(c);
        return c;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_>();
        }
        return eigrp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rad_dis)
    {
        children[c->get_segment_path()] = c;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rad-dis" || name == "eigrp")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::RadDis()
    :
    rad_dis{YType::uint8, "rad-dis"}
{

    yang_name = "rad-dis"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::~RadDis()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return rad_dis.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rad_dis.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rad-dis" <<"[rad-dis='" <<rad_dis <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rad_dis.is_set || is_set(rad_dis.yfilter)) leaf_name_data.push_back(rad_dis.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rad-dis")
    {
        rad_dis = value;
        rad_dis.value_namespace = name_space;
        rad_dis.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rad-dis")
    {
        rad_dis.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "rad-dis")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    ipv40{YType::str, "ipv40"}
{

    yang_name = "ipv4"; yang_parent_name = "rad-dis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::has_data() const
{
    return ipv4.is_set
	|| ipv40.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv40.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv40.is_set || is_set(ipv40.yfilter)) leaf_name_data.push_back(ipv40.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv40")
    {
        ipv40 = value;
        ipv40.value_namespace = name_space;
        ipv40.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv40")
    {
        ipv40.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv40")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::Eigrp_()
{

    yang_name = "eigrp"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::has_data() const
{
    for (std::size_t index=0; index<di_rt.size(); index++)
    {
        if(di_rt[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::has_operation() const
{
    for (std::size_t index=0; index<di_rt.size(); index++)
    {
        if(di_rt[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "di-rt")
    {
        for(auto const & c : di_rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt>();
        c->parent = this;
        di_rt.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : di_rt)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "di-rt")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::DiRt()
    :
    di_rt{YType::uint8, "di-rt"},
    di_rt0{YType::uint8, "di-rt0"}
{

    yang_name = "di-rt"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::~DiRt()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::has_data() const
{
    return di_rt.is_set
	|| di_rt0.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(di_rt.yfilter)
	|| ydk::is_set(di_rt0.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "di-rt" <<"[di-rt='" <<di_rt <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (di_rt.is_set || is_set(di_rt.yfilter)) leaf_name_data.push_back(di_rt.get_name_leafdata());
    if (di_rt0.is_set || is_set(di_rt0.yfilter)) leaf_name_data.push_back(di_rt0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "di-rt")
    {
        di_rt = value;
        di_rt.value_namespace = name_space;
        di_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "di-rt0")
    {
        di_rt0 = value;
        di_rt0.value_namespace = name_space;
        di_rt0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "di-rt")
    {
        di_rt.yfilter = yfilter;
    }
    if(value_path == "di-rt0")
    {
        di_rt0.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "di-rt" || name == "di-rt0")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::DistributeList()
    :
    gateway(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway>())
	,prefix(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix>())
	,route_map(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap>())
{
    gateway->parent = this;
    prefix->parent = this;
    route_map->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::~DistributeList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::has_data() const
{
    for (std::size_t index=0; index<eig_filt.size(); index++)
    {
        if(eig_filt[index]->has_data())
            return true;
    }
    return (gateway !=  nullptr && gateway->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<eig_filt.size(); index++)
    {
        if(eig_filt[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (gateway !=  nullptr && gateway->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eig-filt")
    {
        for(auto const & c : eig_filt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt>();
        c->parent = this;
        eig_filt.push_back(c);
        return c;
    }

    if(child_yang_name == "gateway")
    {
        if(gateway == nullptr)
        {
            gateway = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway>();
        }
        return gateway;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eig_filt)
    {
        children[c->get_segment_path()] = c;
    }

    if(gateway != nullptr)
    {
        children["gateway"] = gateway;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eig-filt" || name == "gateway" || name == "prefix" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::EigFilt()
    :
    eig_filt{YType::str, "eig-filt"}
    	,
    in(nullptr) // presence node
	,out(nullptr) // presence node
{

    yang_name = "eig-filt"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::~EigFilt()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::has_data() const
{
    return eig_filt.is_set
	|| (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eig_filt.yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eig-filt" <<"[eig-filt='" <<eig_filt <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eig_filt.is_set || is_set(eig_filt.yfilter)) leaf_name_data.push_back(eig_filt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eig-filt")
    {
        eig_filt = value;
        eig_filt.value_namespace = name_space;
        eig_filt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eig-filt")
    {
        eig_filt.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out" || name == "eig-filt")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::In()
    :
    interface_name{YType::str, "interface_name"}
{

    yang_name = "in"; yang_parent_name = "eig-filt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::~In()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface_name")
    {
        interface_name.append(value);
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface_name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::Out()
    :
    interface_name{YType::str, "interface_name"}
{

    yang_name = "out"; yang_parent_name = "eig-filt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::~Out()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface_name")
    {
        interface_name.append(value);
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface_name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::Gateway()
{

    yang_name = "gateway"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::~Gateway()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::has_data() const
{
    for (std::size_t index=0; index<gw_list.size(); index++)
    {
        if(gw_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::has_operation() const
{
    for (std::size_t index=0; index<gw_list.size(); index++)
    {
        if(gw_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gw-list")
    {
        for(auto const & c : gw_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList>();
        c->parent = this;
        gw_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : gw_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gw-list")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::GwList()
    :
    gw_list{YType::str, "gw-list"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "gw-list"; yang_parent_name = "gateway"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::~GwList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::has_data() const
{
    return gw_list.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gw_list.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gw-list" <<"[gw-list='" <<gw_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gw_list.is_set || is_set(gw_list.yfilter)) leaf_name_data.push_back(gw_list.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gw-list")
    {
        gw_list = value;
        gw_list.value_namespace = name_space;
        gw_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gw-list")
    {
        gw_list.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gw-list" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::Prefix()
{

    yang_name = "prefix"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::~Prefix()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::has_data() const
{
    for (std::size_t index=0; index<pl_name.size(); index++)
    {
        if(pl_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::has_operation() const
{
    for (std::size_t index=0; index<pl_name.size(); index++)
    {
        if(pl_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pl-name")
    {
        for(auto const & c : pl_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName>();
        c->parent = this;
        pl_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pl_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pl-name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::PlName()
    :
    pl_name{YType::str, "pl-name"},
    gateway{YType::empty, "gateway"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "pl-name"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::~PlName()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::has_data() const
{
    return pl_name.is_set
	|| gateway.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pl_name.yfilter)
	|| ydk::is_set(gateway.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pl-name" <<"[pl-name='" <<pl_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pl_name.is_set || is_set(pl_name.yfilter)) leaf_name_data.push_back(pl_name.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pl-name")
    {
        pl_name = value;
        pl_name.value_namespace = name_space;
        pl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pl-name")
    {
        pl_name.yfilter = yfilter;
    }
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pl-name" || name == "gateway" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RouteMap()
{

    yang_name = "route-map"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::~RouteMap()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::has_data() const
{
    for (std::size_t index=0; index<rmap_name.size(); index++)
    {
        if(rmap_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::has_operation() const
{
    for (std::size_t index=0; index<rmap_name.size(); index++)
    {
        if(rmap_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rmap-name")
    {
        for(auto const & c : rmap_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName>();
        c->parent = this;
        rmap_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rmap_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rmap-name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::RmapName()
    :
    rmap_name{YType::str, "rmap-name"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "rmap-name"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::~RmapName()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::has_data() const
{
    return rmap_name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rmap_name.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rmap-name" <<"[rmap-name='" <<rmap_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rmap_name.is_set || is_set(rmap_name.yfilter)) leaf_name_data.push_back(rmap_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rmap-name")
    {
        rmap_name = value;
        rmap_name.value_namespace = name_space;
        rmap_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rmap-name")
    {
        rmap_name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rmap-name" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Eigrp_()
    :
    router_id{YType::str, "router-id"},
    stub_site{YType::str, "stub-site"}
    	,
    stub(nullptr) // presence node
{

    yang_name = "eigrp"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::has_data() const
{
    return router_id.is_set
	|| stub_site.is_set
	|| (stub !=  nullptr && stub->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(stub_site.yfilter)
	|| (stub !=  nullptr && stub->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (stub_site.is_set || is_set(stub_site.yfilter)) leaf_name_data.push_back(stub_site.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stub")
    {
        if(stub == nullptr)
        {
            stub = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub>();
        }
        return stub;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stub != nullptr)
    {
        children["stub"] = stub;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-site")
    {
        stub_site = value;
        stub_site.value_namespace = name_space;
        stub_site.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "stub-site")
    {
        stub_site.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stub" || name == "router-id" || name == "stub-site")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::Stub()
    :
    connected{YType::empty, "connected"},
    summary{YType::empty, "summary"},
    redistributed{YType::empty, "redistributed"},
    leak_map{YType::str, "leak-map"},
    receive_only{YType::empty, "receive-only"},
    static_{YType::empty, "static"}
{

    yang_name = "stub"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::~Stub()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::has_data() const
{
    return connected.is_set
	|| summary.is_set
	|| redistributed.is_set
	|| leak_map.is_set
	|| receive_only.is_set
	|| static_.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(summary.yfilter)
	|| ydk::is_set(redistributed.yfilter)
	|| ydk::is_set(leak_map.yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (summary.is_set || is_set(summary.yfilter)) leaf_name_data.push_back(summary.get_name_leafdata());
    if (redistributed.is_set || is_set(redistributed.yfilter)) leaf_name_data.push_back(redistributed.get_name_leafdata());
    if (leak_map.is_set || is_set(leak_map.yfilter)) leaf_name_data.push_back(leak_map.get_name_leafdata());
    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary")
    {
        summary = value;
        summary.value_namespace = name_space;
        summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistributed")
    {
        redistributed = value;
        redistributed.value_namespace = name_space;
        redistributed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leak-map")
    {
        leak_map = value;
        leak_map.value_namespace = name_space;
        leak_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "summary")
    {
        summary.yfilter = yfilter;
    }
    if(value_path == "redistributed")
    {
        redistributed.yfilter = yfilter;
    }
    if(value_path == "leak-map")
    {
        leak_map.yfilter = yfilter;
    }
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected" || name == "summary" || name == "redistributed" || name == "leak-map" || name == "receive-only" || name == "static")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Metric::Metric()
    :
    maximum_hops{YType::uint8, "maximum-hops"},
    weights{YType::uint8, "weights"}
{

    yang_name = "metric"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Metric::~Metric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Metric::has_data() const
{
    return maximum_hops.is_set
	|| weights.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_hops.yfilter)
	|| ydk::is_set(weights.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_hops.is_set || is_set(maximum_hops.yfilter)) leaf_name_data.push_back(maximum_hops.get_name_leafdata());
    if (weights.is_set || is_set(weights.yfilter)) leaf_name_data.push_back(weights.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-hops")
    {
        maximum_hops = value;
        maximum_hops.value_namespace = name_space;
        maximum_hops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weights")
    {
        weights = value;
        weights.value_namespace = name_space;
        weights.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-hops")
    {
        maximum_hops.yfilter = yfilter;
    }
    if(value_path == "weights")
    {
        weights.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-hops" || name == "weights")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Neighbor()
{

    yang_name = "neighbor"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::~Neighbor()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"}
    	,
    interface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface>())
{
    interface->parent = this;

    yang_name = "ipv4"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::has_data() const
{
    return ipv4.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ipv4")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

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

const Enum::YLeaf Native::Router::Eigrp::AddressFamily::Type::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Router::Eigrp::AddressFamily::Type::ipv6 {1, "ipv6"};

const Enum::YLeaf Native::Router::Eigrp::AddressFamily::AfIpList::UnicastMulticast::unicast {0, "unicast"};
const Enum::YLeaf Native::Router::Eigrp::AddressFamily::AfIpList::UnicastMulticast::multicast {1, "multicast"};


}
}

