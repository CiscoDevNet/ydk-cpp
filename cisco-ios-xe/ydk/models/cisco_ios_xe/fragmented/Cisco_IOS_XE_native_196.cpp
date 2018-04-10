
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_196.hpp"
#include "Cisco_IOS_XE_native_197.hpp"
#include "Cisco_IOS_XE_native_199.hpp"
#include "Cisco_IOS_XE_native_198.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

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
    char count=0;
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
    char count=0;
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

Native::Router::Ospf::Redistribute::Vrf::Global::Static::Static()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Static::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Static::~Static()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Static::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Static::RedistOptions::RedistOptions()
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

Native::Router::Ospf::Redistribute::Vrf::Global::Static::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Static::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Static::RedistOptions::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Static::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Static::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Static::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Redistribute::Vrf::Global::Static::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
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
        auto c = std::make_shared<Native::Router::Ospf::DistributeList::Accesslist>();
        c->parent = this;
        accesslist.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-ifname")
    {
        auto c = std::make_shared<Native::Router::Ospf::DistributeList::AccesslistIfname>();
        c->parent = this;
        accesslist_ifname.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-prefix-gateway")
    {
        auto c = std::make_shared<Native::Router::Ospf::DistributeList::AccesslistPrefixGateway>();
        c->parent = this;
        accesslist_prefix_gateway.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-prefix-gateway-ifname")
    {
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
        auto c = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "mesh-group")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(autoroute_exclude != nullptr)
    {
        children["autoroute-exclude"] = autoroute_exclude;
    }

    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : mesh_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
	,ietf(nullptr) // presence node
{

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
    char count=0;
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
    enforce(std::make_shared<Native::Router::Ospf::Nsf::Cisco::Enforce>())
	,helper(nullptr) // presence node
{
    enforce->parent = this;

    yang_name = "cisco"; yang_parent_name = "nsf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Nsf::Cisco::~Cisco()
{
}

bool Native::Router::Ospf::Nsf::Cisco::has_data() const
{
    return (enforce !=  nullptr && enforce->has_data())
	|| (helper !=  nullptr && helper->has_data());
}

bool Native::Router::Ospf::Nsf::Cisco::has_operation() const
{
    return is_set(yfilter)
	|| (enforce !=  nullptr && enforce->has_operation())
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
    if(child_yang_name == "enforce")
    {
        if(enforce == nullptr)
        {
            enforce = std::make_shared<Native::Router::Ospf::Nsf::Cisco::Enforce>();
        }
        return enforce;
    }

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
    char count=0;
    if(enforce != nullptr)
    {
        children["enforce"] = enforce;
    }

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
    if(name == "enforce" || name == "helper")
        return true;
    return false;
}

Native::Router::Ospf::Nsf::Cisco::Enforce::Enforce()
    :
    global{YType::empty, "global"}
{

    yang_name = "enforce"; yang_parent_name = "cisco"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Nsf::Cisco::Enforce::~Enforce()
{
}

bool Native::Router::Ospf::Nsf::Cisco::Enforce::has_data() const
{
    return global.is_set;
}

bool Native::Router::Ospf::Nsf::Cisco::Enforce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global.yfilter);
}

std::string Native::Router::Ospf::Nsf::Cisco::Enforce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enforce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Nsf::Cisco::Enforce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Nsf::Cisco::Enforce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Nsf::Cisco::Enforce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospf::Nsf::Cisco::Enforce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Nsf::Cisco::Enforce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Nsf::Cisco::Enforce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

Native::Router::Ospf::Nsf::Cisco::Helper::Helper()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "helper"; yang_parent_name = "cisco"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Nsf::Cisco::Helper::~Helper()
{
}

bool Native::Router::Ospf::Nsf::Cisco::Helper::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Ospf::Nsf::Cisco::Helper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Ospf::Nsf::Cisco::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Nsf::Cisco::Helper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Nsf::Cisco::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Nsf::Cisco::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospf::Nsf::Cisco::Helper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Nsf::Cisco::Helper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Nsf::Cisco::Helper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Ospf::Nsf::Ietf::Ietf()
    :
    restart_interval{YType::uint16, "restart-interval"}
    	,
    helper(nullptr) // presence node
{

    yang_name = "ietf"; yang_parent_name = "nsf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Nsf::Ietf::~Ietf()
{
}

bool Native::Router::Ospf::Nsf::Ietf::has_data() const
{
    return restart_interval.is_set
	|| (helper !=  nullptr && helper->has_data());
}

bool Native::Router::Ospf::Nsf::Ietf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart_interval.yfilter)
	|| (helper !=  nullptr && helper->has_operation());
}

std::string Native::Router::Ospf::Nsf::Ietf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Nsf::Ietf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart_interval.is_set || is_set(restart_interval.yfilter)) leaf_name_data.push_back(restart_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Nsf::Ietf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper")
    {
        if(helper == nullptr)
        {
            helper = std::make_shared<Native::Router::Ospf::Nsf::Ietf::Helper>();
        }
        return helper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Nsf::Ietf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(helper != nullptr)
    {
        children["helper"] = helper;
    }

    return children;
}

void Native::Router::Ospf::Nsf::Ietf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restart-interval")
    {
        restart_interval = value;
        restart_interval.value_namespace = name_space;
        restart_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Nsf::Ietf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restart-interval")
    {
        restart_interval.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Nsf::Ietf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper" || name == "restart-interval")
        return true;
    return false;
}

Native::Router::Ospf::Nsf::Ietf::Helper::Helper()
    :
    disable{YType::empty, "disable"},
    strict_lsa_checking{YType::empty, "strict-lsa-checking"}
{

    yang_name = "helper"; yang_parent_name = "ietf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Nsf::Ietf::Helper::~Helper()
{
}

bool Native::Router::Ospf::Nsf::Ietf::Helper::has_data() const
{
    return disable.is_set
	|| strict_lsa_checking.is_set;
}

bool Native::Router::Ospf::Nsf::Ietf::Helper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(strict_lsa_checking.yfilter);
}

std::string Native::Router::Ospf::Nsf::Ietf::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Nsf::Ietf::Helper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (strict_lsa_checking.is_set || is_set(strict_lsa_checking.yfilter)) leaf_name_data.push_back(strict_lsa_checking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Nsf::Ietf::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Nsf::Ietf::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospf::Nsf::Ietf::Helper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Nsf::Ietf::Helper::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Nsf::Ietf::Helper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "strict-lsa-checking")
        return true;
    return false;
}

Native::Router::Ospf::PrefixPriority::PrefixPriority()
    :
    high{YType::empty, "high"},
    route_map{YType::str, "route-map"}
{

    yang_name = "prefix-priority"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::PrefixPriority::~PrefixPriority()
{
}

bool Native::Router::Ospf::PrefixPriority::has_data() const
{
    return high.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospf::PrefixPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospf::PrefixPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::PrefixPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::PrefixPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::PrefixPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospf::PrefixPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::PrefixPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::PrefixPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospf::ProcessMinTime::ProcessMinTime()
    :
    percent{YType::uint32, "percent"}
{

    yang_name = "process-min-time"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::ProcessMinTime::~ProcessMinTime()
{
}

bool Native::Router::Ospf::ProcessMinTime::has_data() const
{
    return percent.is_set;
}

bool Native::Router::Ospf::ProcessMinTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Router::Ospf::ProcessMinTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-min-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::ProcessMinTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::ProcessMinTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::ProcessMinTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospf::ProcessMinTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::ProcessMinTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::ProcessMinTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent")
        return true;
    return false;
}

Native::Router::Ospf::Snmp::Snmp()
{

    yang_name = "snmp"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Snmp::~Snmp()
{
}

bool Native::Router::Ospf::Snmp::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Ospf::Snmp::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Ospf::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        auto c = std::make_shared<Native::Router::Ospf::Snmp::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : context)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Ospf::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::Ospf::Snmp::Context::Context()
    :
    name{YType::str, "name"}
    	,
    community(std::make_shared<Native::Router::Ospf::Snmp::Context::Community>())
	,user(std::make_shared<Native::Router::Ospf::Snmp::Context::User>())
{
    community->parent = this;
    user->parent = this;

    yang_name = "context"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Snmp::Context::~Context()
{
}

bool Native::Router::Ospf::Snmp::Context::has_data() const
{
    return name.is_set
	|| (community !=  nullptr && community->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Router::Ospf::Snmp::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (community !=  nullptr && community->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Router::Ospf::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Snmp::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::Router::Ospf::Snmp::Context::Community>();
        }
        return community;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Router::Ospf::Snmp::Context::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Router::Ospf::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "user" || name == "name")
        return true;
    return false;
}

Native::Router::Ospf::Snmp::Context::Community::Community()
    :
    community_string{YType::str, "community-string"}
    	,
    access(std::make_shared<Native::Router::Ospf::Snmp::Context::Community::Access>())
{
    access->parent = this;

    yang_name = "community"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Snmp::Context::Community::~Community()
{
}

bool Native::Router::Ospf::Snmp::Context::Community::has_data() const
{
    return community_string.is_set
	|| (access !=  nullptr && access->has_data());
}

bool Native::Router::Ospf::Snmp::Context::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_string.yfilter)
	|| (access !=  nullptr && access->has_operation());
}

std::string Native::Router::Ospf::Snmp::Context::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Snmp::Context::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_string.is_set || is_set(community_string.yfilter)) leaf_name_data.push_back(community_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Snmp::Context::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Ospf::Snmp::Context::Community::Access>();
        }
        return access;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Snmp::Context::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(access != nullptr)
    {
        children["access"] = access;
    }

    return children;
}

void Native::Router::Ospf::Snmp::Context::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-string")
    {
        community_string = value;
        community_string.value_namespace = name_space;
        community_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Snmp::Context::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-string")
    {
        community_string.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Snmp::Context::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "community-string")
        return true;
    return false;
}

Native::Router::Ospf::Snmp::Context::Community::Access::Access()
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

Native::Router::Ospf::Snmp::Context::Community::Access::~Access()
{
}

bool Native::Router::Ospf::Snmp::Context::Community::Access::has_data() const
{
    return standard_acl.is_set
	|| expanded_acl.is_set
	|| acl_name.is_set
	|| ipv6.is_set
	|| ro.is_set
	|| rw.is_set;
}

bool Native::Router::Ospf::Snmp::Context::Community::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standard_acl.yfilter)
	|| ydk::is_set(expanded_acl.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(ro.yfilter)
	|| ydk::is_set(rw.yfilter);
}

std::string Native::Router::Ospf::Snmp::Context::Community::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Snmp::Context::Community::Access::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Ospf::Snmp::Context::Community::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Snmp::Context::Community::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospf::Snmp::Context::Community::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Snmp::Context::Community::Access::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Snmp::Context::Community::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard-acl" || name == "expanded-acl" || name == "acl-name" || name == "ipv6" || name == "ro" || name == "rw")
        return true;
    return false;
}

Native::Router::Ospf::Snmp::Context::User::User()
    :
    name{YType::str, "name"}
    	,
    permisssion(std::make_shared<Native::Router::Ospf::Snmp::Context::User::Permisssion>())
{
    permisssion->parent = this;

    yang_name = "user"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Snmp::Context::User::~User()
{
}

bool Native::Router::Ospf::Snmp::Context::User::has_data() const
{
    return name.is_set
	|| (permisssion !=  nullptr && permisssion->has_data());
}

bool Native::Router::Ospf::Snmp::Context::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (permisssion !=  nullptr && permisssion->has_operation());
}

std::string Native::Router::Ospf::Snmp::Context::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Snmp::Context::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Snmp::Context::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permisssion")
    {
        if(permisssion == nullptr)
        {
            permisssion = std::make_shared<Native::Router::Ospf::Snmp::Context::User::Permisssion>();
        }
        return permisssion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Snmp::Context::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(permisssion != nullptr)
    {
        children["permisssion"] = permisssion;
    }

    return children;
}

void Native::Router::Ospf::Snmp::Context::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Snmp::Context::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Snmp::Context::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permisssion" || name == "name")
        return true;
    return false;
}

Native::Router::Ospf::Snmp::Context::User::Permisssion::Permisssion()
    :
    credential{YType::empty, "credential"},
    encrypted{YType::empty, "encrypted"}
    	,
    access(std::make_shared<Native::Router::Ospf::Snmp::Context::User::Permisssion::Access>())
	,auth(std::make_shared<Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth>())
{
    access->parent = this;
    auth->parent = this;

    yang_name = "permisssion"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Snmp::Context::User::Permisssion::~Permisssion()
{
}

bool Native::Router::Ospf::Snmp::Context::User::Permisssion::has_data() const
{
    return credential.is_set
	|| encrypted.is_set
	|| (access !=  nullptr && access->has_data())
	|| (auth !=  nullptr && auth->has_data());
}

bool Native::Router::Ospf::Snmp::Context::User::Permisssion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(credential.yfilter)
	|| ydk::is_set(encrypted.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::Router::Ospf::Snmp::Context::User::Permisssion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permisssion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Snmp::Context::User::Permisssion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credential.is_set || is_set(credential.yfilter)) leaf_name_data.push_back(credential.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Snmp::Context::User::Permisssion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Ospf::Snmp::Context::User::Permisssion::Access>();
        }
        return access;
    }

    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Snmp::Context::User::Permisssion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Router::Ospf::Snmp::Context::User::Permisssion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Snmp::Context::User::Permisssion::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Snmp::Context::User::Permisssion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "auth" || name == "credential" || name == "encrypted")
        return true;
    return false;
}

Native::Router::Ospf::Snmp::Context::User::Permisssion::Access::Access()
    :
    standard_acl{YType::uint32, "standard-acl"},
    acl_name{YType::str, "acl-name"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "access"; yang_parent_name = "permisssion"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Snmp::Context::User::Permisssion::Access::~Access()
{
}

bool Native::Router::Ospf::Snmp::Context::User::Permisssion::Access::has_data() const
{
    return standard_acl.is_set
	|| acl_name.is_set
	|| ipv6.is_set;
}

bool Native::Router::Ospf::Snmp::Context::User::Permisssion::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standard_acl.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Ospf::Snmp::Context::User::Permisssion::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Snmp::Context::User::Permisssion::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Snmp::Context::User::Permisssion::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Snmp::Context::User::Permisssion::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospf::Snmp::Context::User::Permisssion::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Snmp::Context::User::Permisssion::Access::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Snmp::Context::User::Permisssion::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard-acl" || name == "acl-name" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth::Auth()
    :
    md5{YType::str, "md5"},
    sha{YType::str, "sha"}
{

    yang_name = "auth"; yang_parent_name = "permisssion"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth::~Auth()
{
}

bool Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth::has_data() const
{
    return md5.is_set
	|| sha.is_set;
}

bool Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha.yfilter);
}

std::string Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha.is_set || is_set(sha.yfilter)) leaf_name_data.push_back(sha.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha")
        return true;
    return false;
}

Native::Router::Ospf::SummaryAddress::SummaryAddress()
    :
    ip{YType::str, "ip"},
    wildcard{YType::str, "wildcard"},
    nssa_only{YType::empty, "nssa-only"},
    tag{YType::uint32, "tag"},
    not_advertise{YType::empty, "not-advertise"}
{

    yang_name = "summary-address"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::SummaryAddress::~SummaryAddress()
{
}

bool Native::Router::Ospf::SummaryAddress::has_data() const
{
    return ip.is_set
	|| wildcard.is_set
	|| nssa_only.is_set
	|| tag.is_set
	|| not_advertise.is_set;
}

bool Native::Router::Ospf::SummaryAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(wildcard.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(not_advertise.yfilter);
}

std::string Native::Router::Ospf::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address" <<"[ip='" <<ip <<"']" <<"[wildcard='" <<wildcard <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (wildcard.is_set || is_set(wildcard.yfilter)) leaf_name_data.push_back(wildcard.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospf::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildcard")
    {
        wildcard = value;
        wildcard.value_namespace = name_space;
        wildcard.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Ospf::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "wildcard")
    {
        wildcard.yfilter = yfilter;
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

bool Native::Router::Ospf::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "wildcard" || name == "nssa-only" || name == "tag" || name == "not-advertise")
        return true;
    return false;
}

Native::Router::Ospfv3::Ospfv3()
    :
    id{YType::uint16, "id"},
    router_id{YType::str, "router-id"},
    nsr{YType::empty, "nsr"}
    	,
    auto_cost(nullptr) // presence node
	,event_log(nullptr) // presence node
	,bfd(std::make_shared<Native::Router::Ospfv3::Bfd>())
	,interface_id(std::make_shared<Native::Router::Ospfv3::InterfaceId>())
	,log_adjacency_changes(nullptr) // presence node
	,max_lsa(std::make_shared<Native::Router::Ospfv3::MaxLsa>())
	,max_metric(std::make_shared<Native::Router::Ospfv3::MaxMetric>())
	,passive_interface(std::make_shared<Native::Router::Ospfv3::PassiveInterface>())
	,disable(std::make_shared<Native::Router::Ospfv3::Disable>())
	,queue_depth(std::make_shared<Native::Router::Ospfv3::QueueDepth>())
	,timers(std::make_shared<Native::Router::Ospfv3::Timers>())
	,traffic_share(std::make_shared<Native::Router::Ospfv3::TrafficShare>())
	,ttl_security(std::make_shared<Native::Router::Ospfv3::TtlSecurity>())
	,authentication(std::make_shared<Native::Router::Ospfv3::Authentication>())
	,graceful_restart(nullptr) // presence node
	,manet(std::make_shared<Native::Router::Ospfv3::Manet>())
	,address_family(std::make_shared<Native::Router::Ospfv3::AddressFamily>())
{
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
    authentication->parent = this;
    manet->parent = this;
    address_family->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Ospfv3::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    return id.is_set
	|| router_id.is_set
	|| nsr.is_set
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
	|| (authentication !=  nullptr && authentication->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (address_family !=  nullptr && address_family->has_data());
}

bool Native::Router::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(nsr.yfilter)
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
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::Router::Ospfv3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospfv3:ospfv3" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "auto-cost")
    {
        if(auto_cost == nullptr)
        {
            auto_cost = std::make_shared<Native::Router::Ospfv3::AutoCost>();
        }
        return auto_cost;
    }

    if(child_yang_name == "event-log")
    {
        if(event_log == nullptr)
        {
            event_log = std::make_shared<Native::Router::Ospfv3::EventLog>();
        }
        return event_log;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Ospfv3::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "interface-id")
    {
        if(interface_id == nullptr)
        {
            interface_id = std::make_shared<Native::Router::Ospfv3::InterfaceId>();
        }
        return interface_id;
    }

    if(child_yang_name == "log-adjacency-changes")
    {
        if(log_adjacency_changes == nullptr)
        {
            log_adjacency_changes = std::make_shared<Native::Router::Ospfv3::LogAdjacencyChanges>();
        }
        return log_adjacency_changes;
    }

    if(child_yang_name == "max-lsa")
    {
        if(max_lsa == nullptr)
        {
            max_lsa = std::make_shared<Native::Router::Ospfv3::MaxLsa>();
        }
        return max_lsa;
    }

    if(child_yang_name == "max-metric")
    {
        if(max_metric == nullptr)
        {
            max_metric = std::make_shared<Native::Router::Ospfv3::MaxMetric>();
        }
        return max_metric;
    }

    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Router::Ospfv3::PassiveInterface>();
        }
        return passive_interface;
    }

    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Native::Router::Ospfv3::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "queue-depth")
    {
        if(queue_depth == nullptr)
        {
            queue_depth = std::make_shared<Native::Router::Ospfv3::QueueDepth>();
        }
        return queue_depth;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Ospfv3::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Ospfv3::TrafficShare>();
        }
        return traffic_share;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Ospfv3::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Ospfv3::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Ospfv3::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Router::Ospfv3::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Router::Ospfv3::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(auto_cost != nullptr)
    {
        children["auto-cost"] = auto_cost;
    }

    if(event_log != nullptr)
    {
        children["event-log"] = event_log;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(interface_id != nullptr)
    {
        children["interface-id"] = interface_id;
    }

    if(log_adjacency_changes != nullptr)
    {
        children["log-adjacency-changes"] = log_adjacency_changes;
    }

    if(max_lsa != nullptr)
    {
        children["max-lsa"] = max_lsa;
    }

    if(max_metric != nullptr)
    {
        children["max-metric"] = max_metric;
    }

    if(passive_interface != nullptr)
    {
        children["passive-interface"] = passive_interface;
    }

    if(disable != nullptr)
    {
        children["disable"] = disable;
    }

    if(queue_depth != nullptr)
    {
        children["queue-depth"] = queue_depth;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(traffic_share != nullptr)
    {
        children["traffic-share"] = traffic_share;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    return children;
}

void Native::Router::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
}

void Native::Router::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "auto-cost" || name == "event-log" || name == "bfd" || name == "interface-id" || name == "log-adjacency-changes" || name == "max-lsa" || name == "max-metric" || name == "passive-interface" || name == "disable" || name == "queue-depth" || name == "timers" || name == "traffic-share" || name == "ttl-security" || name == "authentication" || name == "graceful-restart" || name == "manet" || name == "address-family" || name == "id" || name == "router-id" || name == "nsr")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::Area()
    :
    id{YType::str, "id"},
    default_cost{YType::uint32, "default-cost"}
    	,
    authentication(nullptr) // presence node
	,capability(std::make_shared<Native::Router::Ospfv3::Area::Capability>())
	,nssa(nullptr) // presence node
	,ipv4_range(std::make_shared<Native::Router::Ospfv3::Area::Ipv4Range>())
	,ipv6_range(std::make_shared<Native::Router::Ospfv3::Area::Ipv6Range>())
	,stub(nullptr) // presence node
{
    capability->parent = this;
    ipv4_range->parent = this;
    ipv6_range->parent = this;

    yang_name = "area"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::~Area()
{
}

bool Native::Router::Ospfv3::Area::has_data() const
{
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<virtual_link.size(); index++)
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

bool Native::Router::Ospfv3::Area::has_operation() const
{
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<virtual_link.size(); index++)
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

std::string Native::Router::Ospfv3::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.yfilter)) leaf_name_data.push_back(default_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Ospfv3::Area::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Ospfv3::Area::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "filter-list")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::Area::FilterList>();
        c->parent = this;
        filter_list.push_back(c);
        return c;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<Native::Router::Ospfv3::Area::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "ipv4-range")
    {
        if(ipv4_range == nullptr)
        {
            ipv4_range = std::make_shared<Native::Router::Ospfv3::Area::Ipv4Range>();
        }
        return ipv4_range;
    }

    if(child_yang_name == "ipv6-range")
    {
        if(ipv6_range == nullptr)
        {
            ipv6_range = std::make_shared<Native::Router::Ospfv3::Area::Ipv6Range>();
        }
        return ipv6_range;
    }

    if(child_yang_name == "sham-link")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::Area::ShamLink>();
        c->parent = this;
        sham_link.push_back(c);
        return c;
    }

    if(child_yang_name == "stub")
    {
        if(stub == nullptr)
        {
            stub = std::make_shared<Native::Router::Ospfv3::Area::Stub>();
        }
        return stub;
    }

    if(child_yang_name == "virtual-link")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink>();
        c->parent = this;
        virtual_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(capability != nullptr)
    {
        children["capability"] = capability;
    }

    count = 0;
    for (auto const & c : filter_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(ipv4_range != nullptr)
    {
        children["ipv4-range"] = ipv4_range;
    }

    if(ipv6_range != nullptr)
    {
        children["ipv6-range"] = ipv6_range;
    }

    count = 0;
    for (auto const & c : sham_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(stub != nullptr)
    {
        children["stub"] = stub;
    }

    count = 0;
    for (auto const & c : virtual_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Ospfv3::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::Area::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "capability" || name == "filter-list" || name == "nssa" || name == "ipv4-range" || name == "ipv6-range" || name == "sham-link" || name == "stub" || name == "virtual-link" || name == "id" || name == "default-cost")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::Authentication::Authentication()
    :
    message_digest{YType::empty, "message-digest"}
{

    yang_name = "authentication"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::Authentication::~Authentication()
{
}

bool Native::Router::Ospfv3::Area::Authentication::has_data() const
{
    return message_digest.is_set;
}

bool Native::Router::Ospfv3::Area::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_digest.yfilter);
}

std::string Native::Router::Ospfv3::Area::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_digest.is_set || is_set(message_digest.yfilter)) leaf_name_data.push_back(message_digest.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-digest")
    {
        message_digest = value;
        message_digest.value_namespace = name_space;
        message_digest.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-digest")
    {
        message_digest.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::Capability::Capability()
    :
    default_exclusion{YType::empty, "default-exclusion"}
{

    yang_name = "capability"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::Capability::~Capability()
{
}

bool Native::Router::Ospfv3::Area::Capability::has_data() const
{
    return default_exclusion.is_set;
}

bool Native::Router::Ospfv3::Area::Capability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_exclusion.yfilter);
}

std::string Native::Router::Ospfv3::Area::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_exclusion.is_set || is_set(default_exclusion.yfilter)) leaf_name_data.push_back(default_exclusion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-exclusion")
    {
        default_exclusion = value;
        default_exclusion.value_namespace = name_space;
        default_exclusion.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-exclusion")
    {
        default_exclusion.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-exclusion")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::FilterList::FilterList()
    :
    in_out{YType::enumeration, "in-out"},
    prefix{YType::str, "prefix"}
{

    yang_name = "filter-list"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::FilterList::~FilterList()
{
}

bool Native::Router::Ospfv3::Area::FilterList::has_data() const
{
    return in_out.is_set
	|| prefix.is_set;
}

bool Native::Router::Ospfv3::Area::FilterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Router::Ospfv3::Area::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list" <<"[in-out='" <<in_out <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::FilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::FilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::FilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::FilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "prefix")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::Nssa::Nssa()
    :
    no_ext_capability{YType::empty, "no-ext-capability"},
    no_redistribution{YType::empty, "no-redistribution"},
    no_summary{YType::empty, "no-summary"},
    nssa_only{YType::empty, "nssa-only"}
    	,
    default_information_originate(nullptr) // presence node
	,translate(std::make_shared<Native::Router::Ospfv3::Area::Nssa::Translate>())
{
    translate->parent = this;

    yang_name = "nssa"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::Nssa::~Nssa()
{
}

bool Native::Router::Ospfv3::Area::Nssa::has_data() const
{
    return no_ext_capability.is_set
	|| no_redistribution.is_set
	|| no_summary.is_set
	|| nssa_only.is_set
	|| (default_information_originate !=  nullptr && default_information_originate->has_data())
	|| (translate !=  nullptr && translate->has_data());
}

bool Native::Router::Ospfv3::Area::Nssa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_ext_capability.yfilter)
	|| ydk::is_set(no_redistribution.yfilter)
	|| ydk::is_set(no_summary.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| (default_information_originate !=  nullptr && default_information_originate->has_operation())
	|| (translate !=  nullptr && translate->has_operation());
}

std::string Native::Router::Ospfv3::Area::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_ext_capability.is_set || is_set(no_ext_capability.yfilter)) leaf_name_data.push_back(no_ext_capability.get_name_leafdata());
    if (no_redistribution.is_set || is_set(no_redistribution.yfilter)) leaf_name_data.push_back(no_redistribution.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.yfilter)) leaf_name_data.push_back(no_summary.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-information-originate")
    {
        if(default_information_originate == nullptr)
        {
            default_information_originate = std::make_shared<Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate>();
        }
        return default_information_originate;
    }

    if(child_yang_name == "translate")
    {
        if(translate == nullptr)
        {
            translate = std::make_shared<Native::Router::Ospfv3::Area::Nssa::Translate>();
        }
        return translate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_information_originate != nullptr)
    {
        children["default-information-originate"] = default_information_originate;
    }

    if(translate != nullptr)
    {
        children["translate"] = translate;
    }

    return children;
}

void Native::Router::Ospfv3::Area::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-ext-capability")
    {
        no_ext_capability = value;
        no_ext_capability.value_namespace = name_space;
        no_ext_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution = value;
        no_redistribution.value_namespace = name_space;
        no_redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-summary")
    {
        no_summary = value;
        no_summary.value_namespace = name_space;
        no_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-ext-capability")
    {
        no_ext_capability.yfilter = yfilter;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution.yfilter = yfilter;
    }
    if(value_path == "no-summary")
    {
        no_summary.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-information-originate" || name == "translate" || name == "no-ext-capability" || name == "no-redistribution" || name == "no-summary" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::DefaultInformationOriginate()
    :
    metric{YType::int32, "metric"},
    metric_type{YType::uint32, "metric-type"},
    no_ext_capability{YType::empty, "no-ext-capability"},
    no_redistribution{YType::empty, "no-redistribution"},
    no_summary{YType::empty, "no-summary"},
    nssa_only{YType::empty, "nssa-only"}
    	,
    translate(std::make_shared<Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate>())
{
    translate->parent = this;

    yang_name = "default-information-originate"; yang_parent_name = "nssa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::~DefaultInformationOriginate()
{
}

bool Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| no_ext_capability.is_set
	|| no_redistribution.is_set
	|| no_summary.is_set
	|| nssa_only.is_set
	|| (translate !=  nullptr && translate->has_data());
}

bool Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(no_ext_capability.yfilter)
	|| ydk::is_set(no_redistribution.yfilter)
	|| ydk::is_set(no_summary.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| (translate !=  nullptr && translate->has_operation());
}

std::string Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (no_ext_capability.is_set || is_set(no_ext_capability.yfilter)) leaf_name_data.push_back(no_ext_capability.get_name_leafdata());
    if (no_redistribution.is_set || is_set(no_redistribution.yfilter)) leaf_name_data.push_back(no_redistribution.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.yfilter)) leaf_name_data.push_back(no_summary.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "translate")
    {
        if(translate == nullptr)
        {
            translate = std::make_shared<Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate>();
        }
        return translate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(translate != nullptr)
    {
        children["translate"] = translate;
    }

    return children;
}

void Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "no-ext-capability")
    {
        no_ext_capability = value;
        no_ext_capability.value_namespace = name_space;
        no_ext_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution = value;
        no_redistribution.value_namespace = name_space;
        no_redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-summary")
    {
        no_summary = value;
        no_summary.value_namespace = name_space;
        no_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "no-ext-capability")
    {
        no_ext_capability.yfilter = yfilter;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution.yfilter = yfilter;
    }
    if(value_path == "no-summary")
    {
        no_summary.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "translate" || name == "metric" || name == "metric-type" || name == "no-ext-capability" || name == "no-redistribution" || name == "no-summary" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Translate()
    :
    type7(std::make_shared<Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7>())
{
    type7->parent = this;

    yang_name = "translate"; yang_parent_name = "default-information-originate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::~Translate()
{
}

bool Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::has_data() const
{
    return (type7 !=  nullptr && type7->has_data());
}

bool Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::has_operation() const
{
    return is_set(yfilter)
	|| (type7 !=  nullptr && type7->has_operation());
}

std::string Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type7")
    {
        if(type7 == nullptr)
        {
            type7 = std::make_shared<Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7>();
        }
        return type7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(type7 != nullptr)
    {
        children["type7"] = type7;
    }

    return children;
}

void Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type7")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7::Type7()
    :
    always{YType::empty, "always"},
    suppress_fa{YType::empty, "suppress-fa"}
{

    yang_name = "type7"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7::~Type7()
{
}

bool Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7::has_data() const
{
    return always.is_set
	|| suppress_fa.is_set;
}

bool Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(suppress_fa.yfilter);
}

std::string Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (suppress_fa.is_set || is_set(suppress_fa.yfilter)) leaf_name_data.push_back(suppress_fa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-fa")
    {
        suppress_fa = value;
        suppress_fa.value_namespace = name_space;
        suppress_fa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "suppress-fa")
    {
        suppress_fa.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always" || name == "suppress-fa")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::Nssa::Translate::Translate()
    :
    type7(std::make_shared<Native::Router::Ospfv3::Area::Nssa::Translate::Type7>())
{
    type7->parent = this;

    yang_name = "translate"; yang_parent_name = "nssa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::Nssa::Translate::~Translate()
{
}

bool Native::Router::Ospfv3::Area::Nssa::Translate::has_data() const
{
    return (type7 !=  nullptr && type7->has_data());
}

bool Native::Router::Ospfv3::Area::Nssa::Translate::has_operation() const
{
    return is_set(yfilter)
	|| (type7 !=  nullptr && type7->has_operation());
}

std::string Native::Router::Ospfv3::Area::Nssa::Translate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::Nssa::Translate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::Nssa::Translate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type7")
    {
        if(type7 == nullptr)
        {
            type7 = std::make_shared<Native::Router::Ospfv3::Area::Nssa::Translate::Type7>();
        }
        return type7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::Nssa::Translate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(type7 != nullptr)
    {
        children["type7"] = type7;
    }

    return children;
}

void Native::Router::Ospfv3::Area::Nssa::Translate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::Area::Nssa::Translate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::Area::Nssa::Translate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type7")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::Nssa::Translate::Type7::Type7()
    :
    always{YType::empty, "always"},
    suppress_fa{YType::empty, "suppress-fa"}
{

    yang_name = "type7"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::Nssa::Translate::Type7::~Type7()
{
}

bool Native::Router::Ospfv3::Area::Nssa::Translate::Type7::has_data() const
{
    return always.is_set
	|| suppress_fa.is_set;
}

bool Native::Router::Ospfv3::Area::Nssa::Translate::Type7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(suppress_fa.yfilter);
}

std::string Native::Router::Ospfv3::Area::Nssa::Translate::Type7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::Nssa::Translate::Type7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (suppress_fa.is_set || is_set(suppress_fa.yfilter)) leaf_name_data.push_back(suppress_fa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::Nssa::Translate::Type7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::Nssa::Translate::Type7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::Nssa::Translate::Type7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-fa")
    {
        suppress_fa = value;
        suppress_fa.value_namespace = name_space;
        suppress_fa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::Nssa::Translate::Type7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "suppress-fa")
    {
        suppress_fa.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::Nssa::Translate::Type7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always" || name == "suppress-fa")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::Ipv4Range::Ipv4Range()
{

    yang_name = "ipv4-range"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::Ipv4Range::~Ipv4Range()
{
}

bool Native::Router::Ospfv3::Area::Ipv4Range::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Ospfv3::Area::Ipv4Range::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Ospfv3::Area::Ipv4Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::Ipv4Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::Ipv4Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::Area::Ipv4Range::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::Ipv4Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Ospfv3::Area::Ipv4Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::Area::Ipv4Range::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::Area::Ipv4Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::Ipv4Range::Range::Range()
    :
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    advertise{YType::empty, "advertise"},
    not_advertise{YType::empty, "not-advertise"},
    cost{YType::uint32, "cost"}
{

    yang_name = "range"; yang_parent_name = "ipv4-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::Ipv4Range::Range::~Range()
{
}

bool Native::Router::Ospfv3::Area::Ipv4Range::Range::has_data() const
{
    return ip.is_set
	|| mask.is_set
	|| advertise.is_set
	|| not_advertise.is_set
	|| cost.is_set;
}

bool Native::Router::Ospfv3::Area::Ipv4Range::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(advertise.yfilter)
	|| ydk::is_set(not_advertise.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string Native::Router::Ospfv3::Area::Ipv4Range::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[ip='" <<ip <<"']" <<"[mask='" <<mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::Ipv4Range::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (advertise.is_set || is_set(advertise.yfilter)) leaf_name_data.push_back(advertise.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::Ipv4Range::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::Ipv4Range::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::Ipv4Range::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "advertise")
    {
        advertise = value;
        advertise.value_namespace = name_space;
        advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::Ipv4Range::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::Ipv4Range::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "mask" || name == "advertise" || name == "not-advertise" || name == "cost")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::Ipv6Range::Ipv6Range()
{

    yang_name = "ipv6-range"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::Ipv6Range::~Ipv6Range()
{
}

bool Native::Router::Ospfv3::Area::Ipv6Range::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Ospfv3::Area::Ipv6Range::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Ospfv3::Area::Ipv6Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::Ipv6Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::Ipv6Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::Area::Ipv6Range::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::Ipv6Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Ospfv3::Area::Ipv6Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::Area::Ipv6Range::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::Area::Ipv6Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::Ipv6Range::Range::Range()
    :
    ip{YType::str, "ip"},
    advertise{YType::empty, "advertise"},
    not_advertise{YType::empty, "not-advertise"},
    cost{YType::uint32, "cost"}
{

    yang_name = "range"; yang_parent_name = "ipv6-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::Ipv6Range::Range::~Range()
{
}

bool Native::Router::Ospfv3::Area::Ipv6Range::Range::has_data() const
{
    return ip.is_set
	|| advertise.is_set
	|| not_advertise.is_set
	|| cost.is_set;
}

bool Native::Router::Ospfv3::Area::Ipv6Range::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(advertise.yfilter)
	|| ydk::is_set(not_advertise.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string Native::Router::Ospfv3::Area::Ipv6Range::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::Ipv6Range::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (advertise.is_set || is_set(advertise.yfilter)) leaf_name_data.push_back(advertise.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::Ipv6Range::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::Ipv6Range::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::Ipv6Range::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise")
    {
        advertise = value;
        advertise.value_namespace = name_space;
        advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::Ipv6Range::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::Ipv6Range::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "advertise" || name == "not-advertise" || name == "cost")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::ShamLink::ShamLink()
    :
    source{YType::str, "source"},
    dest{YType::str, "dest"},
    cost{YType::uint16, "cost"}
    	,
    ttl_security(std::make_shared<Native::Router::Ospfv3::Area::ShamLink::TtlSecurity>())
{
    ttl_security->parent = this;

    yang_name = "sham-link"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::ShamLink::~ShamLink()
{
}

bool Native::Router::Ospfv3::Area::ShamLink::has_data() const
{
    return source.is_set
	|| dest.is_set
	|| cost.is_set
	|| (ttl_security !=  nullptr && ttl_security->has_data());
}

bool Native::Router::Ospfv3::Area::ShamLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(dest.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| (ttl_security !=  nullptr && ttl_security->has_operation());
}

std::string Native::Router::Ospfv3::Area::ShamLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link" <<"[source='" <<source <<"']" <<"[dest='" <<dest <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::ShamLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (dest.is_set || is_set(dest.yfilter)) leaf_name_data.push_back(dest.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::ShamLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Ospfv3::Area::ShamLink::TtlSecurity>();
        }
        return ttl_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::ShamLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    return children;
}

void Native::Router::Ospfv3::Area::ShamLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest")
    {
        dest = value;
        dest.value_namespace = name_space;
        dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::ShamLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "dest")
    {
        dest.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::ShamLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl-security" || name == "source" || name == "dest" || name == "cost")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::ShamLink::TtlSecurity::TtlSecurity()
    :
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "sham-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::ShamLink::TtlSecurity::~TtlSecurity()
{
}

bool Native::Router::Ospfv3::Area::ShamLink::TtlSecurity::has_data() const
{
    return hops.is_set;
}

bool Native::Router::Ospfv3::Area::ShamLink::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Router::Ospfv3::Area::ShamLink::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::ShamLink::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::ShamLink::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::ShamLink::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::ShamLink::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::ShamLink::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::ShamLink::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::Stub::Stub()
    :
    no_ext_capability{YType::empty, "no-ext-capability"},
    no_summary{YType::empty, "no-summary"}
{

    yang_name = "stub"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::Stub::~Stub()
{
}

bool Native::Router::Ospfv3::Area::Stub::has_data() const
{
    return no_ext_capability.is_set
	|| no_summary.is_set;
}

bool Native::Router::Ospfv3::Area::Stub::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_ext_capability.yfilter)
	|| ydk::is_set(no_summary.yfilter);
}

std::string Native::Router::Ospfv3::Area::Stub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::Stub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_ext_capability.is_set || is_set(no_ext_capability.yfilter)) leaf_name_data.push_back(no_ext_capability.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.yfilter)) leaf_name_data.push_back(no_summary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::Stub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::Stub::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::Stub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-ext-capability")
    {
        no_ext_capability = value;
        no_ext_capability.value_namespace = name_space;
        no_ext_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-summary")
    {
        no_summary = value;
        no_summary.value_namespace = name_space;
        no_summary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::Stub::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-ext-capability")
    {
        no_ext_capability.yfilter = yfilter;
    }
    if(value_path == "no-summary")
    {
        no_summary.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::Stub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-ext-capability" || name == "no-summary")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::VirtualLink()
    :
    id{YType::str, "id"}
    	,
    authentication(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication>())
	,hello_interval(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::HelloInterval>())
	,dead_interval(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::DeadInterval>())
	,retransmit_interval(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval>())
	,transmit_delay(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay>())
	,topology(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Topology>())
	,ttl_security(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity>())
	,authentication_key(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey>())
{
    authentication->parent = this;
    hello_interval->parent = this;
    dead_interval->parent = this;
    retransmit_interval->parent = this;
    transmit_delay->parent = this;
    topology->parent = this;
    ttl_security->parent = this;
    authentication_key->parent = this;

    yang_name = "virtual-link"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::~VirtualLink()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return id.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (dead_interval !=  nullptr && dead_interval->has_data())
	|| (retransmit_interval !=  nullptr && retransmit_interval->has_data())
	|| (transmit_delay !=  nullptr && transmit_delay->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (authentication_key !=  nullptr && authentication_key->has_data());
}

bool Native::Router::Ospfv3::Area::VirtualLink::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (dead_interval !=  nullptr && dead_interval->has_operation())
	|| (retransmit_interval !=  nullptr && retransmit_interval->has_operation())
	|| (transmit_delay !=  nullptr && transmit_delay->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (authentication_key !=  nullptr && authentication_key->has_operation());
}

std::string Native::Router::Ospfv3::Area::VirtualLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "dead-interval")
    {
        if(dead_interval == nullptr)
        {
            dead_interval = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::DeadInterval>();
        }
        return dead_interval;
    }

    if(child_yang_name == "retransmit-interval")
    {
        if(retransmit_interval == nullptr)
        {
            retransmit_interval = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval>();
        }
        return retransmit_interval;
    }

    if(child_yang_name == "transmit-delay")
    {
        if(transmit_delay == nullptr)
        {
            transmit_delay = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay>();
        }
        return transmit_delay;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Topology>();
        }
        return topology;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "message-digest-key")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    if(dead_interval != nullptr)
    {
        children["dead-interval"] = dead_interval;
    }

    if(retransmit_interval != nullptr)
    {
        children["retransmit-interval"] = retransmit_interval;
    }

    if(transmit_delay != nullptr)
    {
        children["transmit-delay"] = transmit_delay;
    }

    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    count = 0;
    for (auto const & c : message_digest_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::VirtualLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::VirtualLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "hello-interval" || name == "dead-interval" || name == "retransmit-interval" || name == "transmit-delay" || name == "topology" || name == "ttl-security" || name == "authentication-key" || name == "message-digest-key" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::Authentication()
    :
    null{YType::empty, "null"}
    	,
    authentication_key(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey>())
	,key_chain(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain>())
	,message_digest(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest>())
{
    authentication_key->parent = this;
    key_chain->parent = this;
    message_digest->parent = this;

    yang_name = "authentication"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::~Authentication()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return null.is_set
	|| (authentication_key !=  nullptr && authentication_key->has_data())
	|| (key_chain !=  nullptr && key_chain->has_data())
	|| (message_digest !=  nullptr && message_digest->has_data());
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter)
	|| (authentication_key !=  nullptr && authentication_key->has_operation())
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (message_digest !=  nullptr && message_digest->has_operation());
}

std::string Native::Router::Ospfv3::Area::VirtualLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "message-digest-key")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "message-digest")
    {
        if(message_digest == nullptr)
        {
            message_digest = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest>();
        }
        return message_digest;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    count = 0;
    for (auto const & c : message_digest_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    if(message_digest != nullptr)
    {
        children["message-digest"] = message_digest;
    }

    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-key" || name == "message-digest-key" || name == "key-chain" || name == "message-digest" || name == "null")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey::AuthenticationKey()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "authentication-key"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey::has_data() const
{
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::MessageDigestKey()
    :
    id{YType::uint8, "id"}
    	,
    md5(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5>())
{
    md5->parent = this;

    yang_name = "message-digest-key"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::~MessageDigestKey()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::has_data() const
{
    return id.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5::Md5()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "md5"; yang_parent_name = "message-digest-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5::~Md5()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5::has_data() const
{
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
    	,
    authentication_key(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey>())
{
    authentication_key->parent = this;

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return name.is_set
	|| (authentication_key !=  nullptr && authentication_key->has_data());
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (authentication_key !=  nullptr && authentication_key->has_operation());
}

std::string Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "message-digest-key")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    count = 0;
    for (auto const & c : message_digest_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-key" || name == "message-digest-key" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::AuthenticationKey()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "authentication-key"; yang_parent_name = "key-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::has_data() const
{
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::MessageDigestKey()
    :
    id{YType::uint8, "id"}
    	,
    md5(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5>())
{
    md5->parent = this;

    yang_name = "message-digest-key"; yang_parent_name = "key-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::~MessageDigestKey()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::has_data() const
{
    return id.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::Md5()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "md5"; yang_parent_name = "message-digest-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::~Md5()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::has_data() const
{
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigest()
    :
    authentication_key(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey>())
{
    authentication_key->parent = this;

    yang_name = "message-digest"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::~MessageDigest()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return (authentication_key !=  nullptr && authentication_key->has_data());
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (authentication_key !=  nullptr && authentication_key->has_operation());
}

std::string Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "message-digest-key")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    count = 0;
    for (auto const & c : message_digest_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-key" || name == "message-digest-key")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::AuthenticationKey()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "authentication-key"; yang_parent_name = "message-digest"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::has_data() const
{
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::MessageDigestKey()
    :
    id{YType::uint8, "id"}
    	,
    md5(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5>())
{
    md5->parent = this;

    yang_name = "message-digest-key"; yang_parent_name = "message-digest"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::~MessageDigestKey()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::has_data() const
{
    return id.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::Md5()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "md5"; yang_parent_name = "message-digest-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::~Md5()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::has_data() const
{
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::HelloInterval::HelloInterval()
    :
    hello_interval_value{YType::int32, "hello-interval-value"}
{

    yang_name = "hello-interval"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::HelloInterval::~HelloInterval()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::HelloInterval::has_data() const
{
    return hello_interval_value.is_set;
}

bool Native::Router::Ospfv3::Area::VirtualLink::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_interval_value.yfilter);
}

std::string Native::Router::Ospfv3::Area::VirtualLink::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_interval_value.is_set || is_set(hello_interval_value.yfilter)) leaf_name_data.push_back(hello_interval_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-interval-value")
    {
        hello_interval_value = value;
        hello_interval_value.value_namespace = name_space;
        hello_interval_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::VirtualLink::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-interval-value")
    {
        hello_interval_value.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::VirtualLink::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval-value")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::DeadInterval::DeadInterval()
    :
    dead_interval_value{YType::uint16, "dead-interval-value"}
{

    yang_name = "dead-interval"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::DeadInterval::~DeadInterval()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::DeadInterval::has_data() const
{
    return dead_interval_value.is_set;
}

bool Native::Router::Ospfv3::Area::VirtualLink::DeadInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dead_interval_value.yfilter);
}

std::string Native::Router::Ospfv3::Area::VirtualLink::DeadInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::DeadInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_interval_value.is_set || is_set(dead_interval_value.yfilter)) leaf_name_data.push_back(dead_interval_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::DeadInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::DeadInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::DeadInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dead-interval-value")
    {
        dead_interval_value = value;
        dead_interval_value.value_namespace = name_space;
        dead_interval_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::VirtualLink::DeadInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dead-interval-value")
    {
        dead_interval_value.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::VirtualLink::DeadInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dead-interval-value")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval::RetransmitInterval()
    :
    retransmit_interval_value{YType::uint16, "retransmit-interval-value"}
{

    yang_name = "retransmit-interval"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval::~RetransmitInterval()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval::has_data() const
{
    return retransmit_interval_value.is_set;
}

bool Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retransmit_interval_value.yfilter);
}

std::string Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retransmit_interval_value.is_set || is_set(retransmit_interval_value.yfilter)) leaf_name_data.push_back(retransmit_interval_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retransmit-interval-value")
    {
        retransmit_interval_value = value;
        retransmit_interval_value.value_namespace = name_space;
        retransmit_interval_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retransmit-interval-value")
    {
        retransmit_interval_value.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmit-interval-value")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay::TransmitDelay()
    :
    transmit_delay_value{YType::uint16, "transmit-delay-value"}
{

    yang_name = "transmit-delay"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay::~TransmitDelay()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay::has_data() const
{
    return transmit_delay_value.is_set;
}

bool Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit_delay_value.yfilter);
}

std::string Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit_delay_value.is_set || is_set(transmit_delay_value.yfilter)) leaf_name_data.push_back(transmit_delay_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit-delay-value")
    {
        transmit_delay_value = value;
        transmit_delay_value.value_namespace = name_space;
        transmit_delay_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit-delay-value")
    {
        transmit_delay_value.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit-delay-value")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::Topology::Topology()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "topology"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::Topology::~Topology()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::Topology::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Ospfv3::Area::VirtualLink::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Ospfv3::Area::VirtualLink::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::VirtualLink::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::VirtualLink::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity::TtlSecurity()
    :
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity::~TtlSecurity()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity::has_data() const
{
    return hops.is_set;
}

bool Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey::AuthenticationKey()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "authentication-key"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey::has_data() const
{
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::MessageDigestKey()
    :
    id{YType::uint8, "id"}
    	,
    md5(std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5>())
{
    md5->parent = this;

    yang_name = "message-digest-key"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::~MessageDigestKey()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::has_data() const
{
    return id.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5::Md5()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "md5"; yang_parent_name = "message-digest-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5::~Md5()
{
}

bool Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5::has_data() const
{
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Router::Ospfv3::AutoCost::AutoCost()
    :
    reference_bandwidth{YType::uint32, "reference-bandwidth"}
{

    yang_name = "auto-cost"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AutoCost::~AutoCost()
{
}

bool Native::Router::Ospfv3::AutoCost::has_data() const
{
    return reference_bandwidth.is_set;
}

bool Native::Router::Ospfv3::AutoCost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reference_bandwidth.yfilter);
}

std::string Native::Router::Ospfv3::AutoCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AutoCost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reference_bandwidth.is_set || is_set(reference_bandwidth.yfilter)) leaf_name_data.push_back(reference_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AutoCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AutoCost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AutoCost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth = value;
        reference_bandwidth.value_namespace = name_space;
        reference_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AutoCost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AutoCost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference-bandwidth")
        return true;
    return false;
}

Native::Router::Ospfv3::EventLog::EventLog()
    :
    one_shot{YType::empty, "one-shot"},
    pause{YType::empty, "pause"},
    size{YType::uint32, "size"}
{

    yang_name = "event-log"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::EventLog::~EventLog()
{
}

bool Native::Router::Ospfv3::EventLog::has_data() const
{
    return one_shot.is_set
	|| pause.is_set
	|| size.is_set;
}

bool Native::Router::Ospfv3::EventLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(one_shot.yfilter)
	|| ydk::is_set(pause.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Router::Ospfv3::EventLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::EventLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (one_shot.is_set || is_set(one_shot.yfilter)) leaf_name_data.push_back(one_shot.get_name_leafdata());
    if (pause.is_set || is_set(pause.yfilter)) leaf_name_data.push_back(pause.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::EventLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::EventLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::EventLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "one-shot")
    {
        one_shot = value;
        one_shot.value_namespace = name_space;
        one_shot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pause")
    {
        pause = value;
        pause.value_namespace = name_space;
        pause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::EventLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "one-shot")
    {
        one_shot.yfilter = yfilter;
    }
    if(value_path == "pause")
    {
        pause.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::EventLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one-shot" || name == "pause" || name == "size")
        return true;
    return false;
}

Native::Router::Ospfv3::Bfd::Bfd()
    :
    all_interfaces{YType::empty, "all-interfaces"}
{

    yang_name = "bfd"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Bfd::~Bfd()
{
}

bool Native::Router::Ospfv3::Bfd::has_data() const
{
    return all_interfaces.is_set;
}

bool Native::Router::Ospfv3::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter);
}

std::string Native::Router::Ospfv3::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-interfaces")
        return true;
    return false;
}

Native::Router::Ospfv3::InterfaceId::InterfaceId()
    :
    snmp_if_index{YType::empty, "snmp-if-index"}
{

    yang_name = "interface-id"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::InterfaceId::~InterfaceId()
{
}

bool Native::Router::Ospfv3::InterfaceId::has_data() const
{
    return snmp_if_index.is_set;
}

bool Native::Router::Ospfv3::InterfaceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmp_if_index.yfilter);
}

std::string Native::Router::Ospfv3::InterfaceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::InterfaceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp_if_index.is_set || is_set(snmp_if_index.yfilter)) leaf_name_data.push_back(snmp_if_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::InterfaceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::InterfaceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::InterfaceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmp-if-index")
    {
        snmp_if_index = value;
        snmp_if_index.value_namespace = name_space;
        snmp_if_index.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::InterfaceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmp-if-index")
    {
        snmp_if_index.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::InterfaceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp-if-index")
        return true;
    return false;
}

Native::Router::Ospfv3::LogAdjacencyChanges::LogAdjacencyChanges()
    :
    detail{YType::empty, "detail"}
{

    yang_name = "log-adjacency-changes"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::LogAdjacencyChanges::~LogAdjacencyChanges()
{
}

bool Native::Router::Ospfv3::LogAdjacencyChanges::has_data() const
{
    return detail.is_set;
}

bool Native::Router::Ospfv3::LogAdjacencyChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detail.yfilter);
}

std::string Native::Router::Ospfv3::LogAdjacencyChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-adjacency-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::LogAdjacencyChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detail.is_set || is_set(detail.yfilter)) leaf_name_data.push_back(detail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::LogAdjacencyChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::LogAdjacencyChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::LogAdjacencyChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detail")
    {
        detail = value;
        detail.value_namespace = name_space;
        detail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::LogAdjacencyChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detail")
    {
        detail.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::LogAdjacencyChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail")
        return true;
    return false;
}

Native::Router::Ospfv3::MaxLsa::MaxLsa()
    :
    number{YType::uint32, "number"},
    threshold_value{YType::uint32, "threshold-value"},
    ignore_count{YType::uint32, "ignore-count"},
    ignore_time{YType::uint32, "ignore-time"},
    reset_time{YType::uint32, "reset-time"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "max-lsa"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::MaxLsa::~MaxLsa()
{
}

bool Native::Router::Ospfv3::MaxLsa::has_data() const
{
    return number.is_set
	|| threshold_value.is_set
	|| ignore_count.is_set
	|| ignore_time.is_set
	|| reset_time.is_set
	|| warning_only.is_set;
}

bool Native::Router::Ospfv3::MaxLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(ignore_count.yfilter)
	|| ydk::is_set(ignore_time.yfilter)
	|| ydk::is_set(reset_time.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Ospfv3::MaxLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::MaxLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (ignore_count.is_set || is_set(ignore_count.yfilter)) leaf_name_data.push_back(ignore_count.get_name_leafdata());
    if (ignore_time.is_set || is_set(ignore_time.yfilter)) leaf_name_data.push_back(ignore_time.get_name_leafdata());
    if (reset_time.is_set || is_set(reset_time.yfilter)) leaf_name_data.push_back(reset_time.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::MaxLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::MaxLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::MaxLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ignore-count")
    {
        ignore_count = value;
        ignore_count.value_namespace = name_space;
        ignore_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-time")
    {
        ignore_time = value;
        ignore_time.value_namespace = name_space;
        ignore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset-time")
    {
        reset_time = value;
        reset_time.value_namespace = name_space;
        reset_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::MaxLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "ignore-count")
    {
        ignore_count.yfilter = yfilter;
    }
    if(value_path == "ignore-time")
    {
        ignore_time.yfilter = yfilter;
    }
    if(value_path == "reset-time")
    {
        reset_time.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::MaxLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "threshold-value" || name == "ignore-count" || name == "ignore-time" || name == "reset-time" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Ospfv3::MaxMetric::MaxMetric()
    :
    router_lsa(nullptr) // presence node
{

    yang_name = "max-metric"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::MaxMetric::~MaxMetric()
{
}

bool Native::Router::Ospfv3::MaxMetric::has_data() const
{
    return (router_lsa !=  nullptr && router_lsa->has_data());
}

bool Native::Router::Ospfv3::MaxMetric::has_operation() const
{
    return is_set(yfilter)
	|| (router_lsa !=  nullptr && router_lsa->has_operation());
}

std::string Native::Router::Ospfv3::MaxMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::MaxMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::MaxMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-lsa")
    {
        if(router_lsa == nullptr)
        {
            router_lsa = std::make_shared<Native::Router::Ospfv3::MaxMetric::RouterLsa>();
        }
        return router_lsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::MaxMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(router_lsa != nullptr)
    {
        children["router-lsa"] = router_lsa;
    }

    return children;
}

void Native::Router::Ospfv3::MaxMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::MaxMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::MaxMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-lsa")
        return true;
    return false;
}

Native::Router::Ospfv3::MaxMetric::RouterLsa::RouterLsa()
    :
    include_stub{YType::empty, "include-stub"}
    	,
    external_lsa(nullptr) // presence node
	,on_startup(nullptr) // presence node
	,summary_lsa(nullptr) // presence node
{

    yang_name = "router-lsa"; yang_parent_name = "max-metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::MaxMetric::RouterLsa::~RouterLsa()
{
}

bool Native::Router::Ospfv3::MaxMetric::RouterLsa::has_data() const
{
    return include_stub.is_set
	|| (external_lsa !=  nullptr && external_lsa->has_data())
	|| (on_startup !=  nullptr && on_startup->has_data())
	|| (summary_lsa !=  nullptr && summary_lsa->has_data());
}

bool Native::Router::Ospfv3::MaxMetric::RouterLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| (external_lsa !=  nullptr && external_lsa->has_operation())
	|| (on_startup !=  nullptr && on_startup->has_operation())
	|| (summary_lsa !=  nullptr && summary_lsa->has_operation());
}

std::string Native::Router::Ospfv3::MaxMetric::RouterLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::MaxMetric::RouterLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::MaxMetric::RouterLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-lsa")
    {
        if(external_lsa == nullptr)
        {
            external_lsa = std::make_shared<Native::Router::Ospfv3::MaxMetric::RouterLsa::ExternalLsa>();
        }
        return external_lsa;
    }

    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Native::Router::Ospfv3::MaxMetric::RouterLsa::OnStartup>();
        }
        return on_startup;
    }

    if(child_yang_name == "summary-lsa")
    {
        if(summary_lsa == nullptr)
        {
            summary_lsa = std::make_shared<Native::Router::Ospfv3::MaxMetric::RouterLsa::SummaryLsa>();
        }
        return summary_lsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::MaxMetric::RouterLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(external_lsa != nullptr)
    {
        children["external-lsa"] = external_lsa;
    }

    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    if(summary_lsa != nullptr)
    {
        children["summary-lsa"] = summary_lsa;
    }

    return children;
}

void Native::Router::Ospfv3::MaxMetric::RouterLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::MaxMetric::RouterLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::MaxMetric::RouterLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-lsa" || name == "on-startup" || name == "summary-lsa" || name == "include-stub")
        return true;
    return false;
}

Native::Router::Ospfv3::MaxMetric::RouterLsa::ExternalLsa::ExternalLsa()
    :
    metric{YType::uint32, "metric"}
{

    yang_name = "external-lsa"; yang_parent_name = "router-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::MaxMetric::RouterLsa::ExternalLsa::~ExternalLsa()
{
}

bool Native::Router::Ospfv3::MaxMetric::RouterLsa::ExternalLsa::has_data() const
{
    return metric.is_set;
}

bool Native::Router::Ospfv3::MaxMetric::RouterLsa::ExternalLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Ospfv3::MaxMetric::RouterLsa::ExternalLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::MaxMetric::RouterLsa::ExternalLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::MaxMetric::RouterLsa::ExternalLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::MaxMetric::RouterLsa::ExternalLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::MaxMetric::RouterLsa::ExternalLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::MaxMetric::RouterLsa::ExternalLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::MaxMetric::RouterLsa::ExternalLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Native::Router::Ospfv3::MaxMetric::RouterLsa::OnStartup::OnStartup()
    :
    time{YType::uint32, "time"},
    wait_for_bgp{YType::empty, "wait-for-bgp"}
{

    yang_name = "on-startup"; yang_parent_name = "router-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::MaxMetric::RouterLsa::OnStartup::~OnStartup()
{
}

bool Native::Router::Ospfv3::MaxMetric::RouterLsa::OnStartup::has_data() const
{
    return time.is_set
	|| wait_for_bgp.is_set;
}

bool Native::Router::Ospfv3::MaxMetric::RouterLsa::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter);
}

std::string Native::Router::Ospfv3::MaxMetric::RouterLsa::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::MaxMetric::RouterLsa::OnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::MaxMetric::RouterLsa::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::MaxMetric::RouterLsa::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::MaxMetric::RouterLsa::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::MaxMetric::RouterLsa::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::MaxMetric::RouterLsa::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "wait-for-bgp")
        return true;
    return false;
}

Native::Router::Ospfv3::MaxMetric::RouterLsa::SummaryLsa::SummaryLsa()
    :
    metric{YType::uint32, "metric"}
{

    yang_name = "summary-lsa"; yang_parent_name = "router-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::MaxMetric::RouterLsa::SummaryLsa::~SummaryLsa()
{
}

bool Native::Router::Ospfv3::MaxMetric::RouterLsa::SummaryLsa::has_data() const
{
    return metric.is_set;
}

bool Native::Router::Ospfv3::MaxMetric::RouterLsa::SummaryLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Ospfv3::MaxMetric::RouterLsa::SummaryLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::MaxMetric::RouterLsa::SummaryLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::MaxMetric::RouterLsa::SummaryLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::MaxMetric::RouterLsa::SummaryLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::MaxMetric::RouterLsa::SummaryLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::MaxMetric::RouterLsa::SummaryLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::MaxMetric::RouterLsa::SummaryLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Native::Router::Ospfv3::PassiveInterface::PassiveInterface()
    :
    default_{YType::empty, "default"},
    interface{YType::str, "interface"}
{

    yang_name = "passive-interface"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Ospfv3::PassiveInterface::has_data() const
{
    return default_.is_set
	|| interface.is_set;
}

bool Native::Router::Ospfv3::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Ospfv3::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "interface")
        return true;
    return false;
}

Native::Router::Ospfv3::Disable::Disable()
{

    yang_name = "disable"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Disable::~Disable()
{
}

bool Native::Router::Ospfv3::Disable::has_data() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Ospfv3::Disable::has_operation() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Ospfv3::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "passive-interface")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::Disable::PassiveInterface>();
        c->parent = this;
        passive_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Disable::get_children() const
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

void Native::Router::Ospfv3::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-interface")
        return true;
    return false;
}

Native::Router::Ospfv3::Disable::PassiveInterface::PassiveInterface()
    :
    interface{YType::str, "interface"}
{

    yang_name = "passive-interface"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Disable::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Ospfv3::Disable::PassiveInterface::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Ospfv3::Disable::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Ospfv3::Disable::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Disable::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Disable::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Disable::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Disable::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Disable::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Disable::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Router::Ospfv3::QueueDepth::QueueDepth()
    :
    hello(std::make_shared<Native::Router::Ospfv3::QueueDepth::Hello>())
	,update(std::make_shared<Native::Router::Ospfv3::QueueDepth::Update>())
{
    hello->parent = this;
    update->parent = this;

    yang_name = "queue-depth"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::QueueDepth::~QueueDepth()
{
}

bool Native::Router::Ospfv3::QueueDepth::has_data() const
{
    return (hello !=  nullptr && hello->has_data())
	|| (update !=  nullptr && update->has_data());
}

bool Native::Router::Ospfv3::QueueDepth::has_operation() const
{
    return is_set(yfilter)
	|| (hello !=  nullptr && hello->has_operation())
	|| (update !=  nullptr && update->has_operation());
}

std::string Native::Router::Ospfv3::QueueDepth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-depth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::QueueDepth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::QueueDepth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Router::Ospfv3::QueueDepth::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Native::Router::Ospfv3::QueueDepth::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::QueueDepth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(update != nullptr)
    {
        children["update"] = update;
    }

    return children;
}

void Native::Router::Ospfv3::QueueDepth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::QueueDepth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::QueueDepth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello" || name == "update")
        return true;
    return false;
}

Native::Router::Ospfv3::QueueDepth::Hello::Hello()
    :
    options{YType::str, "options"}
{

    yang_name = "hello"; yang_parent_name = "queue-depth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::QueueDepth::Hello::~Hello()
{
}

bool Native::Router::Ospfv3::QueueDepth::Hello::has_data() const
{
    return options.is_set;
}

bool Native::Router::Ospfv3::QueueDepth::Hello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string Native::Router::Ospfv3::QueueDepth::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::QueueDepth::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::QueueDepth::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::QueueDepth::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::QueueDepth::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options = value;
        options.value_namespace = name_space;
        options.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::QueueDepth::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::QueueDepth::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options")
        return true;
    return false;
}

Native::Router::Ospfv3::QueueDepth::Update::Update()
    :
    options{YType::str, "options"}
{

    yang_name = "update"; yang_parent_name = "queue-depth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::QueueDepth::Update::~Update()
{
}

bool Native::Router::Ospfv3::QueueDepth::Update::has_data() const
{
    return options.is_set;
}

bool Native::Router::Ospfv3::QueueDepth::Update::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string Native::Router::Ospfv3::QueueDepth::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::QueueDepth::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::QueueDepth::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::QueueDepth::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::QueueDepth::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options = value;
        options.value_namespace = name_space;
        options.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::QueueDepth::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::QueueDepth::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options")
        return true;
    return false;
}

Native::Router::Ospfv3::Timers::Timers()
    :
    lsa(std::make_shared<Native::Router::Ospfv3::Timers::Lsa>())
	,pacing(std::make_shared<Native::Router::Ospfv3::Timers::Pacing>())
	,throttle(std::make_shared<Native::Router::Ospfv3::Timers::Throttle>())
{
    lsa->parent = this;
    pacing->parent = this;
    throttle->parent = this;

    yang_name = "timers"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Timers::~Timers()
{
}

bool Native::Router::Ospfv3::Timers::has_data() const
{
    return (lsa !=  nullptr && lsa->has_data())
	|| (pacing !=  nullptr && pacing->has_data())
	|| (throttle !=  nullptr && throttle->has_data());
}

bool Native::Router::Ospfv3::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (pacing !=  nullptr && pacing->has_operation())
	|| (throttle !=  nullptr && throttle->has_operation());
}

std::string Native::Router::Ospfv3::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Native::Router::Ospfv3::Timers::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "pacing")
    {
        if(pacing == nullptr)
        {
            pacing = std::make_shared<Native::Router::Ospfv3::Timers::Pacing>();
        }
        return pacing;
    }

    if(child_yang_name == "throttle")
    {
        if(throttle == nullptr)
        {
            throttle = std::make_shared<Native::Router::Ospfv3::Timers::Throttle>();
        }
        return throttle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    if(pacing != nullptr)
    {
        children["pacing"] = pacing;
    }

    if(throttle != nullptr)
    {
        children["throttle"] = throttle;
    }

    return children;
}

void Native::Router::Ospfv3::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa" || name == "pacing" || name == "throttle")
        return true;
    return false;
}

Native::Router::Ospfv3::Timers::Lsa::Lsa()
    :
    arrival{YType::uint32, "arrival"}
{

    yang_name = "lsa"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Timers::Lsa::~Lsa()
{
}

bool Native::Router::Ospfv3::Timers::Lsa::has_data() const
{
    return arrival.is_set;
}

bool Native::Router::Ospfv3::Timers::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arrival.yfilter);
}

std::string Native::Router::Ospfv3::Timers::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Timers::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arrival.is_set || is_set(arrival.yfilter)) leaf_name_data.push_back(arrival.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Timers::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Timers::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Timers::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arrival")
    {
        arrival = value;
        arrival.value_namespace = name_space;
        arrival.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Timers::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arrival")
    {
        arrival.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Timers::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arrival")
        return true;
    return false;
}

Native::Router::Ospfv3::Timers::Pacing::Pacing()
    :
    flood{YType::uint32, "flood"},
    lsa_group{YType::uint32, "lsa-group"},
    retransmission{YType::uint32, "retransmission"}
{

    yang_name = "pacing"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Timers::Pacing::~Pacing()
{
}

bool Native::Router::Ospfv3::Timers::Pacing::has_data() const
{
    return flood.is_set
	|| lsa_group.is_set
	|| retransmission.is_set;
}

bool Native::Router::Ospfv3::Timers::Pacing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flood.yfilter)
	|| ydk::is_set(lsa_group.yfilter)
	|| ydk::is_set(retransmission.yfilter);
}

std::string Native::Router::Ospfv3::Timers::Pacing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pacing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Timers::Pacing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flood.is_set || is_set(flood.yfilter)) leaf_name_data.push_back(flood.get_name_leafdata());
    if (lsa_group.is_set || is_set(lsa_group.yfilter)) leaf_name_data.push_back(lsa_group.get_name_leafdata());
    if (retransmission.is_set || is_set(retransmission.yfilter)) leaf_name_data.push_back(retransmission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Timers::Pacing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Timers::Pacing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Timers::Pacing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flood")
    {
        flood = value;
        flood.value_namespace = name_space;
        flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-group")
    {
        lsa_group = value;
        lsa_group.value_namespace = name_space;
        lsa_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission")
    {
        retransmission = value;
        retransmission.value_namespace = name_space;
        retransmission.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Timers::Pacing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flood")
    {
        flood.yfilter = yfilter;
    }
    if(value_path == "lsa-group")
    {
        lsa_group.yfilter = yfilter;
    }
    if(value_path == "retransmission")
    {
        retransmission.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Timers::Pacing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood" || name == "lsa-group" || name == "retransmission")
        return true;
    return false;
}

Native::Router::Ospfv3::Timers::Throttle::Throttle()
    :
    lsa(std::make_shared<Native::Router::Ospfv3::Timers::Throttle::Lsa>())
	,spf(std::make_shared<Native::Router::Ospfv3::Timers::Throttle::Spf>())
{
    lsa->parent = this;
    spf->parent = this;

    yang_name = "throttle"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Timers::Throttle::~Throttle()
{
}

bool Native::Router::Ospfv3::Timers::Throttle::has_data() const
{
    return (lsa !=  nullptr && lsa->has_data())
	|| (spf !=  nullptr && spf->has_data());
}

bool Native::Router::Ospfv3::Timers::Throttle::has_operation() const
{
    return is_set(yfilter)
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (spf !=  nullptr && spf->has_operation());
}

std::string Native::Router::Ospfv3::Timers::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Timers::Throttle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Timers::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Native::Router::Ospfv3::Timers::Throttle::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "spf")
    {
        if(spf == nullptr)
        {
            spf = std::make_shared<Native::Router::Ospfv3::Timers::Throttle::Spf>();
        }
        return spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Timers::Throttle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    if(spf != nullptr)
    {
        children["spf"] = spf;
    }

    return children;
}

void Native::Router::Ospfv3::Timers::Throttle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::Timers::Throttle::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::Timers::Throttle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa" || name == "spf")
        return true;
    return false;
}

Native::Router::Ospfv3::Timers::Throttle::Lsa::Lsa()
    :
    all(std::make_shared<Native::Router::Ospfv3::Timers::Throttle::Lsa::All>())
{
    all->parent = this;

    yang_name = "lsa"; yang_parent_name = "throttle"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Timers::Throttle::Lsa::~Lsa()
{
}

bool Native::Router::Ospfv3::Timers::Throttle::Lsa::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Ospfv3::Timers::Throttle::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Ospfv3::Timers::Throttle::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Timers::Throttle::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Timers::Throttle::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Ospfv3::Timers::Throttle::Lsa::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Timers::Throttle::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Router::Ospfv3::Timers::Throttle::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::Timers::Throttle::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::Timers::Throttle::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Ospfv3::Timers::Throttle::Lsa::All::All()
    :
    delay{YType::uint32, "delay"},
    min_delay{YType::uint32, "min-delay"},
    max_delay{YType::uint32, "max-delay"}
{

    yang_name = "all"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Timers::Throttle::Lsa::All::~All()
{
}

bool Native::Router::Ospfv3::Timers::Throttle::Lsa::All::has_data() const
{
    return delay.is_set
	|| min_delay.is_set
	|| max_delay.is_set;
}

bool Native::Router::Ospfv3::Timers::Throttle::Lsa::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(min_delay.yfilter)
	|| ydk::is_set(max_delay.yfilter);
}

std::string Native::Router::Ospfv3::Timers::Throttle::Lsa::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Timers::Throttle::Lsa::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (min_delay.is_set || is_set(min_delay.yfilter)) leaf_name_data.push_back(min_delay.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.yfilter)) leaf_name_data.push_back(max_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Timers::Throttle::Lsa::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Timers::Throttle::Lsa::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Timers::Throttle::Lsa::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-delay")
    {
        min_delay = value;
        min_delay.value_namespace = name_space;
        min_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
        max_delay.value_namespace = name_space;
        max_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Timers::Throttle::Lsa::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "min-delay")
    {
        min_delay.yfilter = yfilter;
    }
    if(value_path == "max-delay")
    {
        max_delay.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Timers::Throttle::Lsa::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "min-delay" || name == "max-delay")
        return true;
    return false;
}

Native::Router::Ospfv3::Timers::Throttle::Spf::Spf()
    :
    delay{YType::uint32, "delay"},
    min_delay{YType::uint32, "min-delay"},
    max_delay{YType::uint32, "max-delay"}
{

    yang_name = "spf"; yang_parent_name = "throttle"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Timers::Throttle::Spf::~Spf()
{
}

bool Native::Router::Ospfv3::Timers::Throttle::Spf::has_data() const
{
    return delay.is_set
	|| min_delay.is_set
	|| max_delay.is_set;
}

bool Native::Router::Ospfv3::Timers::Throttle::Spf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(min_delay.yfilter)
	|| ydk::is_set(max_delay.yfilter);
}

std::string Native::Router::Ospfv3::Timers::Throttle::Spf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Timers::Throttle::Spf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (min_delay.is_set || is_set(min_delay.yfilter)) leaf_name_data.push_back(min_delay.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.yfilter)) leaf_name_data.push_back(max_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Timers::Throttle::Spf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Timers::Throttle::Spf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Timers::Throttle::Spf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-delay")
    {
        min_delay = value;
        min_delay.value_namespace = name_space;
        min_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
        max_delay.value_namespace = name_space;
        max_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Timers::Throttle::Spf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "min-delay")
    {
        min_delay.yfilter = yfilter;
    }
    if(value_path == "max-delay")
    {
        max_delay.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Timers::Throttle::Spf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "min-delay" || name == "max-delay")
        return true;
    return false;
}

Native::Router::Ospfv3::TrafficShare::TrafficShare()
    :
    min{YType::empty, "min"},
    across_interfaces{YType::empty, "across-interfaces"}
{

    yang_name = "traffic-share"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Ospfv3::TrafficShare::has_data() const
{
    return min.is_set
	|| across_interfaces.is_set;
}

bool Native::Router::Ospfv3::TrafficShare::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(across_interfaces.yfilter);
}

std::string Native::Router::Ospfv3::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::TrafficShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (across_interfaces.is_set || is_set(across_interfaces.yfilter)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::TrafficShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
        across_interfaces.value_namespace = name_space;
        across_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::TrafficShare::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "across-interfaces")
    {
        across_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::TrafficShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "across-interfaces")
        return true;
    return false;
}

Native::Router::Ospfv3::TtlSecurity::TtlSecurity()
    :
    all_interfaces{YType::empty, "all-interfaces"},
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::TtlSecurity::~TtlSecurity()
{
}

bool Native::Router::Ospfv3::TtlSecurity::has_data() const
{
    return all_interfaces.is_set
	|| hops.is_set;
}

bool Native::Router::Ospfv3::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Router::Ospfv3::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());
    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-interfaces" || name == "hops")
        return true;
    return false;
}

Native::Router::Ospfv3::Authentication::Authentication()
    :
    mode{YType::enumeration, "mode"}
{

    yang_name = "authentication"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Authentication::~Authentication()
{
}

bool Native::Router::Ospfv3::Authentication::has_data() const
{
    return mode.is_set;
}

bool Native::Router::Ospfv3::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Router::Ospfv3::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Router::Ospfv3::GracefulRestart::GracefulRestart()
    :
    restart_interval{YType::uint16, "restart-interval"}
    	,
    helper(nullptr) // presence node
{

    yang_name = "graceful-restart"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Ospfv3::GracefulRestart::has_data() const
{
    return restart_interval.is_set
	|| (helper !=  nullptr && helper->has_data());
}

bool Native::Router::Ospfv3::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart_interval.yfilter)
	|| (helper !=  nullptr && helper->has_operation());
}

std::string Native::Router::Ospfv3::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart_interval.is_set || is_set(restart_interval.yfilter)) leaf_name_data.push_back(restart_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper")
    {
        if(helper == nullptr)
        {
            helper = std::make_shared<Native::Router::Ospfv3::GracefulRestart::Helper>();
        }
        return helper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(helper != nullptr)
    {
        children["helper"] = helper;
    }

    return children;
}

void Native::Router::Ospfv3::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restart-interval")
    {
        restart_interval = value;
        restart_interval.value_namespace = name_space;
        restart_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restart-interval")
    {
        restart_interval.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper" || name == "restart-interval")
        return true;
    return false;
}

Native::Router::Ospfv3::GracefulRestart::Helper::Helper()
    :
    disable{YType::empty, "disable"},
    strict_lsa_checking{YType::empty, "strict-lsa-checking"}
{

    yang_name = "helper"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::GracefulRestart::Helper::~Helper()
{
}

bool Native::Router::Ospfv3::GracefulRestart::Helper::has_data() const
{
    return disable.is_set
	|| strict_lsa_checking.is_set;
}

bool Native::Router::Ospfv3::GracefulRestart::Helper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(strict_lsa_checking.yfilter);
}

std::string Native::Router::Ospfv3::GracefulRestart::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::GracefulRestart::Helper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (strict_lsa_checking.is_set || is_set(strict_lsa_checking.yfilter)) leaf_name_data.push_back(strict_lsa_checking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::GracefulRestart::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::GracefulRestart::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::GracefulRestart::Helper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::GracefulRestart::Helper::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::GracefulRestart::Helper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "strict-lsa-checking")
        return true;
    return false;
}

Native::Router::Ospfv3::Manet::Manet()
    :
    hello{YType::enumeration, "hello"},
    willingness{YType::uint8, "willingness"}
    	,
    cache(std::make_shared<Native::Router::Ospfv3::Manet::Cache>())
	,peering(std::make_shared<Native::Router::Ospfv3::Manet::Peering>())
{
    cache->parent = this;
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Manet::~Manet()
{
}

bool Native::Router::Ospfv3::Manet::has_data() const
{
    return hello.is_set
	|| willingness.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (peering !=  nullptr && peering->has_data());
}

bool Native::Router::Ospfv3::Manet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(willingness.yfilter)
	|| (cache !=  nullptr && cache->has_operation())
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Router::Ospfv3::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (willingness.is_set || is_set(willingness.yfilter)) leaf_name_data.push_back(willingness.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Router::Ospfv3::Manet::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Router::Ospfv3::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Manet::get_children() const
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

void Native::Router::Ospfv3::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::Manet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "peering" || name == "hello" || name == "willingness")
        return true;
    return false;
}

Native::Router::Ospfv3::Manet::Cache::Cache()
    :
    acknowledgement{YType::uint64, "acknowledgement"},
    update{YType::uint64, "update"}
{

    yang_name = "cache"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Manet::Cache::~Cache()
{
}

bool Native::Router::Ospfv3::Manet::Cache::has_data() const
{
    return acknowledgement.is_set
	|| update.is_set;
}

bool Native::Router::Ospfv3::Manet::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| ydk::is_set(update.yfilter);
}

std::string Native::Router::Ospfv3::Manet::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Manet::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());
    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Manet::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Manet::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Manet::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::Manet::Cache::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::Manet::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledgement" || name == "update")
        return true;
    return false;
}

Native::Router::Ospfv3::Manet::Peering::Peering()
    :
    selective(std::make_shared<Native::Router::Ospfv3::Manet::Peering::Selective>())
{
    selective->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Manet::Peering::~Peering()
{
}

bool Native::Router::Ospfv3::Manet::Peering::has_data() const
{
    return (selective !=  nullptr && selective->has_data());
}

bool Native::Router::Ospfv3::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| (selective !=  nullptr && selective->has_operation());
}

std::string Native::Router::Ospfv3::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selective")
    {
        if(selective == nullptr)
        {
            selective = std::make_shared<Native::Router::Ospfv3::Manet::Peering::Selective>();
        }
        return selective;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(selective != nullptr)
    {
        children["selective"] = selective;
    }

    return children;
}

void Native::Router::Ospfv3::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selective")
        return true;
    return false;
}

Native::Router::Ospfv3::Manet::Peering::Selective::Selective()
    :
    disable{YType::empty, "disable"},
    per_interface{YType::empty, "per-interface"},
    redundancy{YType::uint8, "redundancy"}
{

    yang_name = "selective"; yang_parent_name = "peering"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::Manet::Peering::Selective::~Selective()
{
}

bool Native::Router::Ospfv3::Manet::Peering::Selective::has_data() const
{
    return disable.is_set
	|| per_interface.is_set
	|| redundancy.is_set;
}

bool Native::Router::Ospfv3::Manet::Peering::Selective::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(per_interface.yfilter)
	|| ydk::is_set(redundancy.yfilter);
}

std::string Native::Router::Ospfv3::Manet::Peering::Selective::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selective";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::Manet::Peering::Selective::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (per_interface.is_set || is_set(per_interface.yfilter)) leaf_name_data.push_back(per_interface.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::Manet::Peering::Selective::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::Manet::Peering::Selective::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::Manet::Peering::Selective::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::Manet::Peering::Selective::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::Manet::Peering::Selective::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "per-interface" || name == "redundancy")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::AddressFamily()
    :
    ipv4(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4>())
	,ipv6(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "address-family"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::~AddressFamily()
{
}

bool Native::Router::Ospfv3::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Ipv4()
    :
    unicast(nullptr) // presence node
{

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return (unicast !=  nullptr && unicast->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast>();
        }
        return unicast;
    }

    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::get_children() const
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

void Native::Router::Ospfv3::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Unicast()
    :
    router_id{YType::str, "router-id"},
    nsr{YType::empty, "nsr"},
    default_metric{YType::uint32, "default-metric"},
    maximum_paths{YType::uint32, "maximum-paths"}
    	,
    auto_cost(nullptr) // presence node
	,event_log(nullptr) // presence node
	,bfd(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Bfd>())
	,interface_id(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::InterfaceId>())
	,log_adjacency_changes(nullptr) // presence node
	,max_lsa(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxLsa>())
	,max_metric(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric>())
	,passive_interface(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::PassiveInterface>())
	,disable(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Disable>())
	,queue_depth(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::QueueDepth>())
	,timers(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers>())
	,traffic_share(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare>())
	,ttl_security(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity>())
	,capability(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Capability>())
	,compatible(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Compatible>())
	,default_information(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::DefaultInformation>())
	,discard_route(nullptr) // presence node
	,distance(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Distance>())
	,redistribute(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute>())
	,authentication(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Authentication>())
	,graceful_restart(nullptr) // presence node
	,manet(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Manet>())
{
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
    authentication->parent = this;
    manet->parent = this;

    yang_name = "unicast"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::~Unicast()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return router_id.is_set
	|| nsr.is_set
	|| default_metric.is_set
	|| maximum_paths.is_set
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
	|| (authentication !=  nullptr && authentication->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (manet !=  nullptr && manet->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
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
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (manet !=  nullptr && manet->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "auto-cost")
    {
        if(auto_cost == nullptr)
        {
            auto_cost = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::AutoCost>();
        }
        return auto_cost;
    }

    if(child_yang_name == "event-log")
    {
        if(event_log == nullptr)
        {
            event_log = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::EventLog>();
        }
        return event_log;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "interface-id")
    {
        if(interface_id == nullptr)
        {
            interface_id = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::InterfaceId>();
        }
        return interface_id;
    }

    if(child_yang_name == "log-adjacency-changes")
    {
        if(log_adjacency_changes == nullptr)
        {
            log_adjacency_changes = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::LogAdjacencyChanges>();
        }
        return log_adjacency_changes;
    }

    if(child_yang_name == "max-lsa")
    {
        if(max_lsa == nullptr)
        {
            max_lsa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxLsa>();
        }
        return max_lsa;
    }

    if(child_yang_name == "max-metric")
    {
        if(max_metric == nullptr)
        {
            max_metric = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric>();
        }
        return max_metric;
    }

    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::PassiveInterface>();
        }
        return passive_interface;
    }

    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "queue-depth")
    {
        if(queue_depth == nullptr)
        {
            queue_depth = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::QueueDepth>();
        }
        return queue_depth;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare>();
        }
        return traffic_share;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "compatible")
    {
        if(compatible == nullptr)
        {
            compatible = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Compatible>();
        }
        return compatible;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "discard-route")
    {
        if(discard_route == nullptr)
        {
            discard_route = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::DiscardRoute>();
        }
        return discard_route;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "summary-prefix")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(auto_cost != nullptr)
    {
        children["auto-cost"] = auto_cost;
    }

    if(event_log != nullptr)
    {
        children["event-log"] = event_log;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(interface_id != nullptr)
    {
        children["interface-id"] = interface_id;
    }

    if(log_adjacency_changes != nullptr)
    {
        children["log-adjacency-changes"] = log_adjacency_changes;
    }

    if(max_lsa != nullptr)
    {
        children["max-lsa"] = max_lsa;
    }

    if(max_metric != nullptr)
    {
        children["max-metric"] = max_metric;
    }

    if(passive_interface != nullptr)
    {
        children["passive-interface"] = passive_interface;
    }

    if(disable != nullptr)
    {
        children["disable"] = disable;
    }

    if(queue_depth != nullptr)
    {
        children["queue-depth"] = queue_depth;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(traffic_share != nullptr)
    {
        children["traffic-share"] = traffic_share;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    if(capability != nullptr)
    {
        children["capability"] = capability;
    }

    if(compatible != nullptr)
    {
        children["compatible"] = compatible;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(discard_route != nullptr)
    {
        children["discard-route"] = discard_route;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    count = 0;
    for (auto const & c : summary_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
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
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "auto-cost" || name == "event-log" || name == "bfd" || name == "interface-id" || name == "log-adjacency-changes" || name == "max-lsa" || name == "max-metric" || name == "passive-interface" || name == "disable" || name == "queue-depth" || name == "timers" || name == "traffic-share" || name == "ttl-security" || name == "capability" || name == "compatible" || name == "default-information" || name == "discard-route" || name == "distance" || name == "redistribute" || name == "authentication" || name == "graceful-restart" || name == "manet" || name == "summary-prefix" || name == "router-id" || name == "nsr" || name == "default-metric" || name == "maximum-paths")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Area()
    :
    id{YType::str, "id"},
    default_cost{YType::uint32, "default-cost"}
    	,
    authentication(nullptr) // presence node
	,capability(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability>())
	,nssa(nullptr) // presence node
	,ipv4_range(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv4Range>())
	,ipv6_range(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv6Range>())
	,stub(nullptr) // presence node
{
    capability->parent = this;
    ipv4_range->parent = this;
    ipv6_range->parent = this;

    yang_name = "area"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::~Area()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::has_data() const
{
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<virtual_link.size(); index++)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::has_operation() const
{
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<virtual_link.size(); index++)
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

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.yfilter)) leaf_name_data.push_back(default_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "filter-list")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::FilterList>();
        c->parent = this;
        filter_list.push_back(c);
        return c;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "ipv4-range")
    {
        if(ipv4_range == nullptr)
        {
            ipv4_range = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv4Range>();
        }
        return ipv4_range;
    }

    if(child_yang_name == "ipv6-range")
    {
        if(ipv6_range == nullptr)
        {
            ipv6_range = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv6Range>();
        }
        return ipv6_range;
    }

    if(child_yang_name == "sham-link")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::ShamLink>();
        c->parent = this;
        sham_link.push_back(c);
        return c;
    }

    if(child_yang_name == "stub")
    {
        if(stub == nullptr)
        {
            stub = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Stub>();
        }
        return stub;
    }

    if(child_yang_name == "virtual-link")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink>();
        c->parent = this;
        virtual_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(capability != nullptr)
    {
        children["capability"] = capability;
    }

    count = 0;
    for (auto const & c : filter_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(ipv4_range != nullptr)
    {
        children["ipv4-range"] = ipv4_range;
    }

    if(ipv6_range != nullptr)
    {
        children["ipv6-range"] = ipv6_range;
    }

    count = 0;
    for (auto const & c : sham_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(stub != nullptr)
    {
        children["stub"] = stub;
    }

    count = 0;
    for (auto const & c : virtual_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "capability" || name == "filter-list" || name == "nssa" || name == "ipv4-range" || name == "ipv6-range" || name == "sham-link" || name == "stub" || name == "virtual-link" || name == "id" || name == "default-cost")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Authentication::Authentication()
    :
    message_digest{YType::empty, "message-digest"}
{

    yang_name = "authentication"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Authentication::~Authentication()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Authentication::has_data() const
{
    return message_digest.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_digest.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_digest.is_set || is_set(message_digest.yfilter)) leaf_name_data.push_back(message_digest.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-digest")
    {
        message_digest = value;
        message_digest.value_namespace = name_space;
        message_digest.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-digest")
    {
        message_digest.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability::Capability()
    :
    default_exclusion{YType::empty, "default-exclusion"}
{

    yang_name = "capability"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability::~Capability()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability::has_data() const
{
    return default_exclusion.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_exclusion.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_exclusion.is_set || is_set(default_exclusion.yfilter)) leaf_name_data.push_back(default_exclusion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-exclusion")
    {
        default_exclusion = value;
        default_exclusion.value_namespace = name_space;
        default_exclusion.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-exclusion")
    {
        default_exclusion.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-exclusion")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Static::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Static::RedistOptions::MetricType::Y_2 {1, "2"};

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

const Enum::YLeaf Native::Router::Ospfv3::Area::FilterList::InOut::in {0, "in"};
const Enum::YLeaf Native::Router::Ospfv3::Area::FilterList::InOut::out {1, "out"};

const Enum::YLeaf Native::Router::Ospfv3::QueueDepth::Hello::Options::unlimited {0, "unlimited"};

const Enum::YLeaf Native::Router::Ospfv3::QueueDepth::Update::Options::unlimited {0, "unlimited"};

const Enum::YLeaf Native::Router::Ospfv3::Authentication::Mode::deployment {0, "deployment"};
const Enum::YLeaf Native::Router::Ospfv3::Authentication::Mode::strict {1, "strict"};

const Enum::YLeaf Native::Router::Ospfv3::Manet::Hello::unicast {0, "unicast"};


}
}

