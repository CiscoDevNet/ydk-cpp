
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_78.hpp"
#include "Cisco_IOS_XE_native_79.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ip::Multicast::Multicast()
    :
    route_limit{YType::uint32, "Cisco-IOS-XE-multicast:route-limit"}
    	,
    multipath(nullptr) // presence node
{

    yang_name = "multicast"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Multicast::~Multicast()
{
}

bool Native::Ip::Multicast::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return route_limit.is_set
	|| (multipath !=  nullptr && multipath->has_data());
}

bool Native::Ip::Multicast::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_limit.yfilter)
	|| (multipath !=  nullptr && multipath->has_operation());
}

std::string Native::Ip::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_limit.is_set || is_set(route_limit.yfilter)) leaf_name_data.push_back(route_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multipath")
    {
        if(multipath == nullptr)
        {
            multipath = std::make_shared<Native::Ip::Multicast::Multipath>();
        }
        return multipath;
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
        auto c = std::make_shared<Native::Ip::Multicast::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multipath != nullptr)
    {
        children["multipath"] = multipath;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-limit")
    {
        route_limit = value;
        route_limit.value_namespace = name_space;
        route_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-limit")
    {
        route_limit.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multipath" || name == "vrf" || name == "route-limit")
        return true;
    return false;
}

Native::Ip::Multicast::Multipath::Multipath()
    :
    s_g_hash{YType::enumeration, "s-g-hash"}
{

    yang_name = "multipath"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Multicast::Multipath::~Multipath()
{
}

bool Native::Ip::Multicast::Multipath::has_data() const
{
    return s_g_hash.is_set;
}

bool Native::Ip::Multicast::Multipath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s_g_hash.yfilter);
}

std::string Native::Ip::Multicast::Multipath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Multicast::Multipath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:multipath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Multipath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s_g_hash.is_set || is_set(s_g_hash.yfilter)) leaf_name_data.push_back(s_g_hash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Multipath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Multipath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Multicast::Multipath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s-g-hash")
    {
        s_g_hash = value;
        s_g_hash.value_namespace = name_space;
        s_g_hash.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Multipath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s-g-hash")
    {
        s_g_hash.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Multipath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s-g-hash")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Vrf()
    :
    name{YType::str, "name"}
    	,
    multipath(nullptr) // presence node
	,route_limit(std::make_shared<Native::Ip::Multicast::Vrf::RouteLimit>())
	,rpf(std::make_shared<Native::Ip::Multicast::Vrf::Rpf>())
{
    route_limit->parent = this;
    rpf->parent = this;

    yang_name = "vrf"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Multicast::Vrf::~Vrf()
{
}

bool Native::Ip::Multicast::Vrf::has_data() const
{
    return name.is_set
	|| (multipath !=  nullptr && multipath->has_data())
	|| (route_limit !=  nullptr && route_limit->has_data())
	|| (rpf !=  nullptr && rpf->has_data());
}

bool Native::Ip::Multicast::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (multipath !=  nullptr && multipath->has_operation())
	|| (route_limit !=  nullptr && route_limit->has_operation())
	|| (rpf !=  nullptr && rpf->has_operation());
}

std::string Native::Ip::Multicast::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Multicast::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multipath")
    {
        if(multipath == nullptr)
        {
            multipath = std::make_shared<Native::Ip::Multicast::Vrf::Multipath>();
        }
        return multipath;
    }

    if(child_yang_name == "route-limit")
    {
        if(route_limit == nullptr)
        {
            route_limit = std::make_shared<Native::Ip::Multicast::Vrf::RouteLimit>();
        }
        return route_limit;
    }

    if(child_yang_name == "rpf")
    {
        if(rpf == nullptr)
        {
            rpf = std::make_shared<Native::Ip::Multicast::Vrf::Rpf>();
        }
        return rpf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multipath != nullptr)
    {
        children["multipath"] = multipath;
    }

    if(route_limit != nullptr)
    {
        children["route-limit"] = route_limit;
    }

    if(rpf != nullptr)
    {
        children["rpf"] = rpf;
    }

    return children;
}

void Native::Ip::Multicast::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multipath" || name == "route-limit" || name == "rpf" || name == "name")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Multipath::Multipath()
    :
    s_g_hash{YType::enumeration, "s-g-hash"}
{

    yang_name = "multipath"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Multicast::Vrf::Multipath::~Multipath()
{
}

bool Native::Ip::Multicast::Vrf::Multipath::has_data() const
{
    return s_g_hash.is_set;
}

bool Native::Ip::Multicast::Vrf::Multipath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s_g_hash.yfilter);
}

std::string Native::Ip::Multicast::Vrf::Multipath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multipath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Multipath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s_g_hash.is_set || is_set(s_g_hash.yfilter)) leaf_name_data.push_back(s_g_hash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::Multipath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::Multipath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Multicast::Vrf::Multipath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s-g-hash")
    {
        s_g_hash = value;
        s_g_hash.value_namespace = name_space;
        s_g_hash.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::Multipath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s-g-hash")
    {
        s_g_hash.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::Multipath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s-g-hash")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::RouteLimit::RouteLimit()
    :
    no_routes{YType::uint32, "no-routes"},
    warning_threshold{YType::uint32, "warning-threshold"}
{

    yang_name = "route-limit"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Multicast::Vrf::RouteLimit::~RouteLimit()
{
}

bool Native::Ip::Multicast::Vrf::RouteLimit::has_data() const
{
    return no_routes.is_set
	|| warning_threshold.is_set;
}

bool Native::Ip::Multicast::Vrf::RouteLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_routes.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Ip::Multicast::Vrf::RouteLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::RouteLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_routes.is_set || is_set(no_routes.yfilter)) leaf_name_data.push_back(no_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::RouteLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::RouteLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Multicast::Vrf::RouteLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-routes")
    {
        no_routes = value;
        no_routes.value_namespace = name_space;
        no_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::RouteLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-routes")
    {
        no_routes.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::RouteLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-routes" || name == "warning-threshold")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Rpf::Rpf()
    :
    select(std::make_shared<Native::Ip::Multicast::Vrf::Rpf::Select>())
{
    select->parent = this;

    yang_name = "rpf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Multicast::Vrf::Rpf::~Rpf()
{
}

bool Native::Ip::Multicast::Vrf::Rpf::has_data() const
{
    return (select !=  nullptr && select->has_data());
}

bool Native::Ip::Multicast::Vrf::Rpf::has_operation() const
{
    return is_set(yfilter)
	|| (select !=  nullptr && select->has_operation());
}

std::string Native::Ip::Multicast::Vrf::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        if(select == nullptr)
        {
            select = std::make_shared<Native::Ip::Multicast::Vrf::Rpf::Select>();
        }
        return select;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(select != nullptr)
    {
        children["select"] = select;
    }

    return children;
}

void Native::Ip::Multicast::Vrf::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Multicast::Vrf::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Multicast::Vrf::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Rpf::Select::Select()
{

    yang_name = "select"; yang_parent_name = "rpf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Multicast::Vrf::Rpf::Select::~Select()
{
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Multicast::Vrf::Rpf::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Rpf::Select::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::Rpf::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::Rpf::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Multicast::Vrf::Rpf::Select::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Multicast::Vrf::Rpf::Select::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::Vrf_()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::~Vrf_()
{
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::has_data() const
{
    for (std::size_t index=0; index<group_list.size(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::has_operation() const
{
    for (std::size_t index=0; index<group_list.size(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-list")
    {
        for(auto const & c : group_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList>();
        c->parent = this;
        group_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list" || name == "name")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::GroupList()
    :
    group_list_name{YType::str, "group-list-name"}
{

    yang_name = "group-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::~GroupList()
{
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::has_data() const
{
    return group_list_name.is_set;
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_list_name.yfilter);
}

std::string Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-list" <<"[group-list-name='" <<group_list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_list_name.is_set || is_set(group_list_name.yfilter)) leaf_name_data.push_back(group_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-list-name")
    {
        group_list_name = value;
        group_list_name.value_namespace = name_space;
        group_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-list-name")
    {
        group_list_name.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list-name")
        return true;
    return false;
}

Native::Ip::MulticastRouting::MulticastRouting()
    :
    distributed{YType::empty, "distributed"}
{

    yang_name = "multicast-routing"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::MulticastRouting::~MulticastRouting()
{
}

bool Native::Ip::MulticastRouting::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return distributed.is_set;
}

bool Native::Ip::MulticastRouting::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(distributed.yfilter);
}

std::string Native::Ip::MulticastRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::MulticastRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:multicast-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::MulticastRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributed.is_set || is_set(distributed.yfilter)) leaf_name_data.push_back(distributed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::MulticastRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ip::MulticastRouting::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::MulticastRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::MulticastRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distributed")
    {
        distributed = value;
        distributed.value_namespace = name_space;
        distributed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::MulticastRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distributed")
    {
        distributed.yfilter = yfilter;
    }
}

bool Native::Ip::MulticastRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "distributed")
        return true;
    return false;
}

Native::Ip::MulticastRouting::Vrf::Vrf()
    :
    name{YType::str, "name"},
    distributed{YType::empty, "distributed"}
{

    yang_name = "vrf"; yang_parent_name = "multicast-routing"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::MulticastRouting::Vrf::~Vrf()
{
}

bool Native::Ip::MulticastRouting::Vrf::has_data() const
{
    return name.is_set
	|| distributed.is_set;
}

bool Native::Ip::MulticastRouting::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(distributed.yfilter);
}

std::string Native::Ip::MulticastRouting::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:multicast-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::MulticastRouting::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::MulticastRouting::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (distributed.is_set || is_set(distributed.yfilter)) leaf_name_data.push_back(distributed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::MulticastRouting::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::MulticastRouting::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::MulticastRouting::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distributed")
    {
        distributed = value;
        distributed.value_namespace = name_space;
        distributed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::MulticastRouting::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "distributed")
    {
        distributed.yfilter = yfilter;
    }
}

bool Native::Ip::MulticastRouting::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "distributed")
        return true;
    return false;
}

Native::Ip::NameServer::NameServer()
    :
    no_vrf{YType::str, "no-vrf"}
{

    yang_name = "name-server"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::NameServer::~NameServer()
{
}

bool Native::Ip::NameServer::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    for (auto const & leaf : no_vrf.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::NameServer::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    for (auto const & leaf : no_vrf.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(no_vrf.yfilter);
}

std::string Native::Ip::NameServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::NameServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::NameServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto no_vrf_name_datas = no_vrf.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), no_vrf_name_datas.begin(), no_vrf_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::NameServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ip::NameServer::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::NameServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::NameServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-vrf")
    {
        no_vrf.append(value);
    }
}

void Native::Ip::NameServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-vrf")
    {
        no_vrf.yfilter = yfilter;
    }
}

bool Native::Ip::NameServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "no-vrf")
        return true;
    return false;
}

Native::Ip::NameServer::Vrf::Vrf()
    :
    word{YType::str, "word"},
    server_ip{YType::str, "server-ip"}
{

    yang_name = "vrf"; yang_parent_name = "name-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::NameServer::Vrf::~Vrf()
{
}

bool Native::Ip::NameServer::Vrf::has_data() const
{
    return word.is_set
	|| server_ip.is_set;
}

bool Native::Ip::NameServer::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(server_ip.yfilter);
}

std::string Native::Ip::NameServer::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/name-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::NameServer::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::NameServer::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (server_ip.is_set || is_set(server_ip.yfilter)) leaf_name_data.push_back(server_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::NameServer::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::NameServer::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::NameServer::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-ip")
    {
        server_ip = value;
        server_ip.value_namespace = name_space;
        server_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::NameServer::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "server-ip")
    {
        server_ip.yfilter = yfilter;
    }
}

bool Native::Ip::NameServer::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "server-ip")
        return true;
    return false;
}

Native::Ip::Nat::Nat()
    :
    inside(std::make_shared<Native::Ip::Nat::Inside>())
	,outside(std::make_shared<Native::Ip::Nat::Outside>())
{
    inside->parent = this;
    outside->parent = this;

    yang_name = "nat"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::~Nat()
{
}

bool Native::Ip::Nat::has_data() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return (inside !=  nullptr && inside->has_data())
	|| (outside !=  nullptr && outside->has_data());
}

bool Native::Ip::Nat::has_operation() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (inside !=  nullptr && inside->has_operation())
	|| (outside !=  nullptr && outside->has_operation());
}

std::string Native::Ip::Nat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nat:nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inside")
    {
        if(inside == nullptr)
        {
            inside = std::make_shared<Native::Ip::Nat::Inside>();
        }
        return inside;
    }

    if(child_yang_name == "outside")
    {
        if(outside == nullptr)
        {
            outside = std::make_shared<Native::Ip::Nat::Outside>();
        }
        return outside;
    }

    if(child_yang_name == "pool")
    {
        for(auto const & c : pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Pool>();
        c->parent = this;
        pool.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inside != nullptr)
    {
        children["inside"] = inside;
    }

    if(outside != nullptr)
    {
        children["outside"] = outside;
    }

    for (auto const & c : pool)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inside" || name == "outside" || name == "pool")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Inside()
    :
    destination(std::make_shared<Native::Ip::Nat::Inside::Destination>())
	,source(std::make_shared<Native::Ip::Nat::Inside::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "inside"; yang_parent_name = "nat"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::~Inside()
{
}

bool Native::Ip::Nat::Inside::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Ip::Nat::Inside::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Ip::Nat::Inside::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inside";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ip::Nat::Inside::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Nat::Inside::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Ip::Nat::Inside::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Destination::Destination()
{

    yang_name = "destination"; yang_parent_name = "inside"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Destination::~Destination()
{
}

bool Native::Ip::Nat::Inside::Destination::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Destination::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Inside::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Inside::Destination::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nat::Inside::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Destination::List::List()
    :
    id{YType::str, "id"},
    mapping_id{YType::uint32, "mapping-id"},
    pool{YType::str, "pool"},
    redundancy{YType::uint8, "redundancy"}
{

    yang_name = "list"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Destination::List::~List()
{
}

bool Native::Ip::Nat::Inside::Destination::List::has_data() const
{
    return id.is_set
	|| mapping_id.is_set
	|| pool.is_set
	|| redundancy.is_set;
}

bool Native::Ip::Nat::Inside::Destination::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(redundancy.yfilter);
}

std::string Native::Ip::Nat::Inside::Destination::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/destination/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Destination::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Destination::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Destination::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Destination::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Destination::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Destination::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Destination::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "mapping-id" || name == "pool" || name == "redundancy")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Source()
    :
    static_(std::make_shared<Native::Ip::Nat::Inside::Source::Static_>())
{
    static_->parent = this;

    yang_name = "source"; yang_parent_name = "inside"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::~Source()
{
}

bool Native::Ip::Nat::Inside::Source::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Nat::Inside::Source::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        for(auto const & c : route_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Nat::Inside::Source::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : route_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "route-map" || name == "static")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::List()
    :
    id{YType::str, "id"},
    mapping_id{YType::uint32, "mapping-id"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    no_payload{YType::empty, "no-payload"},
    oer{YType::empty, "oer"},
    overload{YType::empty, "overload"},
    pool{YType::str, "pool"},
    redundancy{YType::uint8, "redundancy"},
    reversible{YType::empty, "reversible"},
    vrf{YType::str, "vrf"}
    	,
    interface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface>())
{
    interface->parent = this;

    yang_name = "list"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::List::~List()
{
}

bool Native::Ip::Nat::Inside::Source::List::has_data() const
{
    return id.is_set
	|| mapping_id.is_set
	|| match_in_vrf.is_set
	|| no_payload.is_set
	|| oer.is_set
	|| overload.is_set
	|| pool.is_set
	|| redundancy.is_set
	|| reversible.is_set
	|| vrf.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Ip::Nat::Inside::Source::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(no_payload.yfilter)
	|| ydk::is_set(oer.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(reversible.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.yfilter)) leaf_name_data.push_back(no_payload.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (reversible.is_set || is_set(reversible.yfilter)) leaf_name_data.push_back(reversible.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-payload")
    {
        no_payload = value;
        no_payload.value_namespace = name_space;
        no_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversible")
    {
        reversible = value;
        reversible.value_namespace = name_space;
        reversible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "no-payload")
    {
        no_payload.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "reversible")
    {
        reversible.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "id" || name == "mapping-id" || name == "match-in-vrf" || name == "no-payload" || name == "oer" || name == "overload" || name == "pool" || name == "redundancy" || name == "reversible" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::Interface()
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
    lisp{YType::str, "LISP"},
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
    atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::List::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::has_data() const
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

bool Native::Ip::Nat::Inside::Source::List::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
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
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
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
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::get_children() const
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

void Native::Ip::Nat::Inside::Source::List::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
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
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::RouteMap()
    :
    route_map_name{YType::str, "route-map-name"}
    	,
    interface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface>())
	,oer(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Oer>())
	,overload(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Overload>())
	,pool(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Pool>())
{
    interface->parent = this;
    oer->parent = this;
    overload->parent = this;
    pool->parent = this;

    yang_name = "route-map"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::RouteMap::~RouteMap()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return route_map_name.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (oer !=  nullptr && oer->has_data())
	|| (overload !=  nullptr && overload->has_data())
	|| (pool !=  nullptr && pool->has_data());
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_map_name.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (oer !=  nullptr && oer->has_operation())
	|| (overload !=  nullptr && overload->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[route-map-name='" <<route_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "oer")
    {
        if(oer == nullptr)
        {
            oer = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Oer>();
        }
        return oer;
    }

    if(child_yang_name == "overload")
    {
        if(overload == nullptr)
        {
            overload = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Overload>();
        }
        return overload;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Pool>();
        }
        return pool;
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
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(oer != nullptr)
    {
        children["oer"] = oer;
    }

    if(overload != nullptr)
    {
        children["overload"] = overload;
    }

    if(pool != nullptr)
    {
        children["pool"] = pool;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "oer" || name == "overload" || name == "pool" || name == "vrf" || name == "route-map-name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::Interface()
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
    lisp{YType::str, "LISP"},
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
    atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::has_data() const
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

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
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
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
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
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_children() const
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

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
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
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Oer::Oer()
    :
    extended{YType::empty, "extended"},
    overload{YType::empty, "overload"}
{

    yang_name = "oer"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Oer::~Oer()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Oer::has_data() const
{
    return extended.is_set
	|| overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Oer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(overload.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Oer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Oer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Oer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended" || name == "overload")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Overload::Overload()
    :
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"}
{

    yang_name = "overload"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Overload::~Overload()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Overload::has_data() const
{
    return extended.is_set
	|| oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Overload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(oer.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Overload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Overload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Overload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended" || name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Pool::Pool()
    :
    match_in_vrf{YType::empty, "match-in-vrf"},
    pool_name{YType::str, "pool-name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "pool"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Pool::~Pool()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_data() const
{
    return match_in_vrf.is_set
	|| pool_name.is_set
	|| vrf.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-in-vrf" || name == "pool-name" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    oer(nullptr) // presence node
	,overload(nullptr) // presence node
{

    yang_name = "vrf"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::~Vrf()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (oer !=  nullptr && oer->has_data())
	|| (overload !=  nullptr && overload->has_data());
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (oer !=  nullptr && oer->has_operation())
	|| (overload !=  nullptr && overload->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oer")
    {
        if(oer == nullptr)
        {
            oer = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer>();
        }
        return oer;
    }

    if(child_yang_name == "overload")
    {
        if(overload == nullptr)
        {
            overload = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload>();
        }
        return overload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oer != nullptr)
    {
        children["oer"] = oer;
    }

    if(overload != nullptr)
    {
        children["overload"] = overload;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oer" || name == "overload" || name == "vrf-name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::Oer()
    :
    overload{YType::empty, "overload"}
{

    yang_name = "oer"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::~Oer()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::has_data() const
{
    return overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(overload.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overload")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::Overload()
    :
    oer{YType::empty, "oer"}
{

    yang_name = "overload"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::~Overload()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::has_data() const
{
    return oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oer.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static_::Static_()
{

    yang_name = "static"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::Static_::~Static_()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::has_data() const
{
    for (std::size_t index=0; index<nat_static_transport_interface_list.size(); index++)
    {
        if(nat_static_transport_interface_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Source::Static_::has_operation() const
{
    for (std::size_t index=0; index<nat_static_transport_interface_list.size(); index++)
    {
        if(nat_static_transport_interface_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nat-static-transport-interface-list")
    {
        for(auto const & c : nat_static_transport_interface_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList>();
        c->parent = this;
        nat_static_transport_interface_list.push_back(c);
        return c;
    }

    if(child_yang_name == "nat-static-transport-list")
    {
        for(auto const & c : nat_static_transport_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList>();
        c->parent = this;
        nat_static_transport_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nat_static_transport_interface_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : nat_static_transport_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Source::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Source::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nat-static-transport-interface-list" || name == "nat-static-transport-list")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::NatStaticTransportInterfaceList()
    :
    proto{YType::enumeration, "proto"},
    local_ip{YType::str, "local-ip"},
    local_port{YType::uint16, "local-port"},
    global_port{YType::uint16, "global-port"}
    	,
    interface(std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface>())
{
    interface->parent = this;

    yang_name = "nat-static-transport-interface-list"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::~NatStaticTransportInterfaceList()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::has_data() const
{
    return proto.is_set
	|| local_ip.is_set
	|| local_port.is_set
	|| global_port.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(global_port.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-interface-list" <<"[proto='" <<proto <<"']" <<"[local-ip='" <<local_ip <<"']" <<"[local-port='" <<local_port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (global_port.is_set || is_set(global_port.yfilter)) leaf_name_data.push_back(global_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip")
    {
        local_ip = value;
        local_ip.value_namespace = name_space;
        local_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-port")
    {
        global_port = value;
        global_port.value_namespace = name_space;
        global_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "global-port")
    {
        global_port.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "proto" || name == "local-ip" || name == "local-port" || name == "global-port")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::Interface()
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
    lisp{YType::str, "LISP"},
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
    atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "nat-static-transport-interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::has_data() const
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

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
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
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
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
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::get_children() const
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

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
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
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::NatStaticTransportList()
    :
    local_ip{YType::str, "local-ip"},
    global_ip{YType::str, "global-ip"},
    extendable{YType::empty, "extendable"},
    forced{YType::empty, "forced"},
    global_port{YType::uint16, "global-port"},
    local_port{YType::uint16, "local-port"},
    mapping_id{YType::uint32, "mapping-id"},
    mask{YType::str, "mask"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    network{YType::empty, "network"},
    no_alias{YType::empty, "no-alias"},
    no_payload{YType::empty, "no-payload"},
    overload{YType::empty, "overload"},
    proto{YType::enumeration, "proto"},
    redundancy{YType::str, "redundancy"},
    reversible{YType::empty, "reversible"},
    route_map{YType::str, "route-map"},
    vrf{YType::str, "vrf"}
{

    yang_name = "nat-static-transport-list"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::~NatStaticTransportList()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::has_data() const
{
    return local_ip.is_set
	|| global_ip.is_set
	|| extendable.is_set
	|| forced.is_set
	|| global_port.is_set
	|| local_port.is_set
	|| mapping_id.is_set
	|| mask.is_set
	|| match_in_vrf.is_set
	|| network.is_set
	|| no_alias.is_set
	|| no_payload.is_set
	|| overload.is_set
	|| proto.is_set
	|| redundancy.is_set
	|| reversible.is_set
	|| route_map.is_set
	|| vrf.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(global_ip.yfilter)
	|| ydk::is_set(extendable.yfilter)
	|| ydk::is_set(forced.yfilter)
	|| ydk::is_set(global_port.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(no_alias.yfilter)
	|| ydk::is_set(no_payload.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(reversible.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-list" <<"[local-ip='" <<local_ip <<"']" <<"[global-ip='" <<global_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (global_ip.is_set || is_set(global_ip.yfilter)) leaf_name_data.push_back(global_ip.get_name_leafdata());
    if (extendable.is_set || is_set(extendable.yfilter)) leaf_name_data.push_back(extendable.get_name_leafdata());
    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());
    if (global_port.is_set || is_set(global_port.yfilter)) leaf_name_data.push_back(global_port.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (no_alias.is_set || is_set(no_alias.yfilter)) leaf_name_data.push_back(no_alias.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.yfilter)) leaf_name_data.push_back(no_payload.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (reversible.is_set || is_set(reversible.yfilter)) leaf_name_data.push_back(reversible.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ip")
    {
        local_ip = value;
        local_ip.value_namespace = name_space;
        local_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-ip")
    {
        global_ip = value;
        global_ip.value_namespace = name_space;
        global_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extendable")
    {
        extendable = value;
        extendable.value_namespace = name_space;
        extendable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-port")
    {
        global_port = value;
        global_port.value_namespace = name_space;
        global_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-alias")
    {
        no_alias = value;
        no_alias.value_namespace = name_space;
        no_alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-payload")
    {
        no_payload = value;
        no_payload.value_namespace = name_space;
        no_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversible")
    {
        reversible = value;
        reversible.value_namespace = name_space;
        reversible.value_namespace_prefix = name_space_prefix;
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

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
    if(value_path == "global-ip")
    {
        global_ip.yfilter = yfilter;
    }
    if(value_path == "extendable")
    {
        extendable.yfilter = yfilter;
    }
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
    if(value_path == "global-port")
    {
        global_port.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "no-alias")
    {
        no_alias.yfilter = yfilter;
    }
    if(value_path == "no-payload")
    {
        no_payload.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "reversible")
    {
        reversible.yfilter = yfilter;
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

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-ip" || name == "global-ip" || name == "extendable" || name == "forced" || name == "global-port" || name == "local-port" || name == "mapping-id" || name == "mask" || name == "match-in-vrf" || name == "network" || name == "no-alias" || name == "no-payload" || name == "overload" || name == "proto" || name == "redundancy" || name == "reversible" || name == "route-map" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Outside()
    :
    source(std::make_shared<Native::Ip::Nat::Outside::Source>())
{
    source->parent = this;

    yang_name = "outside"; yang_parent_name = "nat"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::~Outside()
{
}

bool Native::Ip::Nat::Outside::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return (source !=  nullptr && source->has_data());
}

bool Native::Ip::Nat::Outside::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Ip::Nat::Outside::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outside";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Outside::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        for(auto const & c : route_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Outside::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Nat::Outside::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : route_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Ip::Nat::Outside::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Outside::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Outside::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "route-map" || name == "source")
        return true;
    return false;
}

Native::Ip::Nat::Outside::List::List()
    :
    id{YType::str, "id"},
    add_route{YType::empty, "add-route"},
    mapping_id{YType::uint32, "mapping-id"},
    pool{YType::str, "pool"},
    vrf{YType::str, "vrf"}
{

    yang_name = "list"; yang_parent_name = "outside"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::List::~List()
{
}

bool Native::Ip::Nat::Outside::List::has_data() const
{
    return id.is_set
	|| add_route.is_set
	|| mapping_id.is_set
	|| pool.is_set
	|| vrf.is_set;
}

bool Native::Ip::Nat::Outside::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(add_route.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Nat::Outside::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.yfilter)) leaf_name_data.push_back(add_route.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Outside::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-route")
    {
        add_route = value;
        add_route.value_namespace = name_space;
        add_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Outside::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "add-route")
    {
        add_route.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Outside::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "add-route" || name == "mapping-id" || name == "pool" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Nat::Outside::RouteMap::RouteMap()
    :
    id{YType::str, "id"},
    add_route{YType::empty, "add-route"},
    mapping_id{YType::uint32, "mapping-id"},
    pool{YType::str, "pool"},
    vrf{YType::str, "vrf"}
{

    yang_name = "route-map"; yang_parent_name = "outside"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::RouteMap::~RouteMap()
{
}

bool Native::Ip::Nat::Outside::RouteMap::has_data() const
{
    return id.is_set
	|| add_route.is_set
	|| mapping_id.is_set
	|| pool.is_set
	|| vrf.is_set;
}

bool Native::Ip::Nat::Outside::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(add_route.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Nat::Outside::RouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.yfilter)) leaf_name_data.push_back(add_route.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Outside::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-route")
    {
        add_route = value;
        add_route.value_namespace = name_space;
        add_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Outside::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "add-route")
    {
        add_route.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Outside::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "add-route" || name == "mapping-id" || name == "pool" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Source::Source()
    :
    static_(std::make_shared<Native::Ip::Nat::Outside::Source::Static_>())
{
    static_->parent = this;

    yang_name = "source"; yang_parent_name = "outside"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::Source::~Source()
{
}

bool Native::Ip::Nat::Outside::Source::has_data() const
{
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Nat::Outside::Source::has_operation() const
{
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Nat::Outside::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Nat::Outside::Source::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Ip::Nat::Outside::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Outside::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Outside::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Source::Static_::Static_()
{

    yang_name = "static"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::Source::Static_::~Static_()
{
}

bool Native::Ip::Nat::Outside::Source::Static_::has_data() const
{
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Outside::Source::Static_::has_operation() const
{
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Outside::Source::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::Source::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::Source::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::Source::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nat-static-transport-list")
    {
        for(auto const & c : nat_static_transport_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList>();
        c->parent = this;
        nat_static_transport_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::Source::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nat_static_transport_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nat::Outside::Source::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Outside::Source::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Outside::Source::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nat-static-transport-list")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::NatStaticTransportList()
    :
    global_ip{YType::str, "global-ip"},
    local_ip{YType::str, "local-ip"},
    extendable{YType::empty, "extendable"},
    no_payload{YType::empty, "no-payload"},
    vrf{YType::str, "vrf"}
{

    yang_name = "nat-static-transport-list"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::~NatStaticTransportList()
{
}

bool Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::has_data() const
{
    return global_ip.is_set
	|| local_ip.is_set
	|| extendable.is_set
	|| no_payload.is_set
	|| vrf.is_set;
}

bool Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_ip.yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(extendable.yfilter)
	|| ydk::is_set(no_payload.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/source/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-list" <<"[global-ip='" <<global_ip <<"']" <<"[local-ip='" <<local_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_ip.is_set || is_set(global_ip.yfilter)) leaf_name_data.push_back(global_ip.get_name_leafdata());
    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (extendable.is_set || is_set(extendable.yfilter)) leaf_name_data.push_back(extendable.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.yfilter)) leaf_name_data.push_back(no_payload.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-ip")
    {
        global_ip = value;
        global_ip.value_namespace = name_space;
        global_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip")
    {
        local_ip = value;
        local_ip.value_namespace = name_space;
        local_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extendable")
    {
        extendable = value;
        extendable.value_namespace = name_space;
        extendable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-payload")
    {
        no_payload = value;
        no_payload.value_namespace = name_space;
        no_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-ip")
    {
        global_ip.yfilter = yfilter;
    }
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
    if(value_path == "extendable")
    {
        extendable.yfilter = yfilter;
    }
    if(value_path == "no-payload")
    {
        no_payload.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-ip" || name == "local-ip" || name == "extendable" || name == "no-payload" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Nat::Pool::Pool()
    :
    id{YType::str, "id"},
    accounting{YType::str, "accounting"},
    add_route{YType::empty, "add-route"},
    arp_ping{YType::empty, "arp-ping"},
    end_address{YType::str, "end-address"},
    netmask{YType::str, "netmask"},
    prefix_length{YType::uint8, "prefix-length"},
    start_address{YType::str, "start-address"},
    type{YType::enumeration, "type"}
{

    yang_name = "pool"; yang_parent_name = "nat"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Pool::~Pool()
{
}

bool Native::Ip::Nat::Pool::has_data() const
{
    return id.is_set
	|| accounting.is_set
	|| add_route.is_set
	|| arp_ping.is_set
	|| end_address.is_set
	|| netmask.is_set
	|| prefix_length.is_set
	|| start_address.is_set
	|| type.is_set;
}

bool Native::Ip::Nat::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(add_route.yfilter)
	|| ydk::is_set(arp_ping.yfilter)
	|| ydk::is_set(end_address.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Ip::Nat::Pool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.yfilter)) leaf_name_data.push_back(add_route.get_name_leafdata());
    if (arp_ping.is_set || is_set(arp_ping.yfilter)) leaf_name_data.push_back(arp_ping.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.yfilter)) leaf_name_data.push_back(end_address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-route")
    {
        add_route = value;
        add_route.value_namespace = name_space;
        add_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-ping")
    {
        arp_ping = value;
        arp_ping.value_namespace = name_space;
        arp_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-address")
    {
        end_address = value;
        end_address.value_namespace = name_space;
        end_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "add-route")
    {
        add_route.yfilter = yfilter;
    }
    if(value_path == "arp-ping")
    {
        arp_ping.yfilter = yfilter;
    }
    if(value_path == "end-address")
    {
        end_address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "accounting" || name == "add-route" || name == "arp-ping" || name == "end-address" || name == "netmask" || name == "prefix-length" || name == "start-address" || name == "type")
        return true;
    return false;
}

Native::Ip::Nbar::Nbar()
    :
    attribute(std::make_shared<Native::Ip::Nbar::Attribute>())
{
    attribute->parent = this;

    yang_name = "nbar"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::~Nbar()
{
}

bool Native::Ip::Nbar::has_data() const
{
    for (std::size_t index=0; index<attribute_map.size(); index++)
    {
        if(attribute_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<attribute_set.size(); index++)
    {
        if(attribute_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return (attribute !=  nullptr && attribute->has_data());
}

bool Native::Ip::Nbar::has_operation() const
{
    for (std::size_t index=0; index<attribute_map.size(); index++)
    {
        if(attribute_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<attribute_set.size(); index++)
    {
        if(attribute_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Ip::Nbar::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:nbar";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Ip::Nbar::Attribute>();
        }
        return attribute;
    }

    if(child_yang_name == "attribute-map")
    {
        for(auto const & c : attribute_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nbar::AttributeMap>();
        c->parent = this;
        attribute_map.push_back(c);
        return c;
    }

    if(child_yang_name == "attribute-set")
    {
        for(auto const & c : attribute_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nbar::AttributeSet>();
        c->parent = this;
        attribute_set.push_back(c);
        return c;
    }

    if(child_yang_name == "custom")
    {
        for(auto const & c : custom)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nbar::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    for (auto const & c : attribute_map)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : attribute_set)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : custom)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nbar::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "attribute-map" || name == "attribute-set" || name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::Attribute()
    :
    application_group(std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup>())
	,category(std::make_shared<Native::Ip::Nbar::Attribute::Category>())
	,sub_category(std::make_shared<Native::Ip::Nbar::Attribute::SubCategory>())
{
    application_group->parent = this;
    category->parent = this;
    sub_category->parent = this;

    yang_name = "attribute"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::~Attribute()
{
}

bool Native::Ip::Nbar::Attribute::has_data() const
{
    return (application_group !=  nullptr && application_group->has_data())
	|| (category !=  nullptr && category->has_data())
	|| (sub_category !=  nullptr && sub_category->has_data());
}

bool Native::Ip::Nbar::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (category !=  nullptr && category->has_operation())
	|| (sub_category !=  nullptr && sub_category->has_operation());
}

std::string Native::Ip::Nbar::Attribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        if(application_group == nullptr)
        {
            application_group = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup>();
        }
        return application_group;
    }

    if(child_yang_name == "category")
    {
        if(category == nullptr)
        {
            category = std::make_shared<Native::Ip::Nbar::Attribute::Category>();
        }
        return category;
    }

    if(child_yang_name == "sub-category")
    {
        if(sub_category == nullptr)
        {
            sub_category = std::make_shared<Native::Ip::Nbar::Attribute::SubCategory>();
        }
        return sub_category;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application_group != nullptr)
    {
        children["application-group"] = application_group;
    }

    if(category != nullptr)
    {
        children["category"] = category;
    }

    if(sub_category != nullptr)
    {
        children["sub-category"] = sub_category;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "category" || name == "sub-category")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::ApplicationGroup::ApplicationGroup()
{

    yang_name = "application-group"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_data() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_operation() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        for(auto const & c : custom)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : custom)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{

    yang_name = "custom"; yang_parent_name = "application-group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::has_data() const
{
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter);
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/application-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "help")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::Category::Category()
{

    yang_name = "category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::Category::~Category()
{
}

bool Native::Ip::Nbar::Attribute::Category::has_data() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::Category::has_operation() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Attribute::Category::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        for(auto const & c : custom)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nbar::Attribute::Category::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : custom)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::Category::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{

    yang_name = "custom"; yang_parent_name = "category"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::Category::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::Category::Custom::has_data() const
{
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::Category::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter);
}

std::string Native::Ip::Nbar::Attribute::Category::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/category/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::Category::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::Category::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::Category::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::Category::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nbar::Attribute::Category::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Attribute::Category::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Attribute::Category::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "help")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::SubCategory::SubCategory()
{

    yang_name = "sub-category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::SubCategory::~SubCategory()
{
}

bool Native::Ip::Nbar::Attribute::SubCategory::has_data() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::SubCategory::has_operation() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Attribute::SubCategory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::SubCategory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-category";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::SubCategory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::SubCategory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        for(auto const & c : custom)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nbar::Attribute::SubCategory::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::SubCategory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : custom)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::SubCategory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::SubCategory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::SubCategory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::SubCategory::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{

    yang_name = "custom"; yang_parent_name = "sub-category"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::SubCategory::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::SubCategory::Custom::has_data() const
{
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::SubCategory::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter);
}

std::string Native::Ip::Nbar::Attribute::SubCategory::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/sub-category/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::SubCategory::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::SubCategory::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::SubCategory::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::SubCategory::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nbar::Attribute::SubCategory::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Attribute::SubCategory::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Attribute::SubCategory::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "help")
        return true;
    return false;
}

Native::Ip::Nbar::AttributeMap::AttributeMap()
    :
    name{YType::str, "name"}
    	,
    attribute(std::make_shared<Native::Ip::Nbar::AttributeMap::Attribute>())
{
    attribute->parent = this;

    yang_name = "attribute-map"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::AttributeMap::~AttributeMap()
{
}

bool Native::Ip::Nbar::AttributeMap::has_data() const
{
    return name.is_set
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Ip::Nbar::AttributeMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Ip::Nbar::AttributeMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::AttributeMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::AttributeMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::AttributeMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Ip::Nbar::AttributeMap::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::AttributeMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Ip::Nbar::AttributeMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::AttributeMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::AttributeMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::AttributeMap::Attribute::Attribute()
    :
    application_group{YType::str, "application-group"},
    business_relevance{YType::enumeration, "business-relevance"},
    category{YType::str, "category"},
    encrypted{YType::enumeration, "encrypted"},
    sub_category{YType::str, "sub-category"},
    traffic_class{YType::enumeration, "traffic-class"},
    tunnel{YType::enumeration, "tunnel"}
{

    yang_name = "attribute"; yang_parent_name = "attribute-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::AttributeMap::Attribute::~Attribute()
{
}

bool Native::Ip::Nbar::AttributeMap::Attribute::has_data() const
{
    return application_group.is_set
	|| business_relevance.is_set
	|| category.is_set
	|| encrypted.is_set
	|| sub_category.is_set
	|| traffic_class.is_set
	|| tunnel.is_set;
}

bool Native::Ip::Nbar::AttributeMap::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_group.yfilter)
	|| ydk::is_set(business_relevance.yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(encrypted.yfilter)
	|| ydk::is_set(sub_category.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Ip::Nbar::AttributeMap::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::AttributeMap::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_group.is_set || is_set(application_group.yfilter)) leaf_name_data.push_back(application_group.get_name_leafdata());
    if (business_relevance.is_set || is_set(business_relevance.yfilter)) leaf_name_data.push_back(business_relevance.get_name_leafdata());
    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());
    if (sub_category.is_set || is_set(sub_category.yfilter)) leaf_name_data.push_back(sub_category.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::AttributeMap::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::AttributeMap::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nbar::AttributeMap::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-group")
    {
        application_group = value;
        application_group.value_namespace = name_space;
        application_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "business-relevance")
    {
        business_relevance = value;
        business_relevance.value_namespace = name_space;
        business_relevance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
        encrypted.value_namespace = name_space;
        encrypted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-category")
    {
        sub_category = value;
        sub_category.value_namespace = name_space;
        sub_category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::AttributeMap::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-group")
    {
        application_group.yfilter = yfilter;
    }
    if(value_path == "business-relevance")
    {
        business_relevance.yfilter = yfilter;
    }
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "encrypted")
    {
        encrypted.yfilter = yfilter;
    }
    if(value_path == "sub-category")
    {
        sub_category.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::AttributeMap::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "business-relevance" || name == "category" || name == "encrypted" || name == "sub-category" || name == "traffic-class" || name == "tunnel")
        return true;
    return false;
}

Native::Ip::Nbar::AttributeSet::AttributeSet()
    :
    protocol_name{YType::str, "protocol-name"},
    profile_name{YType::str, "profile-name"}
{

    yang_name = "attribute-set"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::AttributeSet::~AttributeSet()
{
}

bool Native::Ip::Nbar::AttributeSet::has_data() const
{
    return protocol_name.is_set
	|| profile_name.is_set;
}

bool Native::Ip::Nbar::AttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string Native::Ip::Nbar::AttributeSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set" <<"[protocol-name='" <<protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::AttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nbar::AttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::AttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::AttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name" || name == "profile-name")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Custom()
    :
    name{YType::str, "name"}
    	,
    http(std::make_shared<Native::Ip::Nbar::Custom::Http>())
{
    http->parent = this;

    yang_name = "custom"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Custom::has_data() const
{
    return name.is_set
	|| (http !=  nullptr && http->has_data());
}

bool Native::Ip::Nbar::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (http !=  nullptr && http->has_operation());
}

std::string Native::Ip::Nbar::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Ip::Nbar::Custom::Http>();
        }
        return http;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(http != nullptr)
    {
        children["http"] = http;
    }

    return children;
}

void Native::Ip::Nbar::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "http" || name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Http::Http()
    :
    cookie{YType::str, "cookie"},
    host{YType::str, "host"},
    id{YType::uint16, "id"},
    method{YType::str, "method"},
    referer{YType::str, "referer"},
    url{YType::str, "url"},
    user_agent{YType::str, "user-agent"},
    version{YType::str, "version"},
    via{YType::str, "via"}
{

    yang_name = "http"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Http::~Http()
{
}

bool Native::Ip::Nbar::Custom::Http::has_data() const
{
    return cookie.is_set
	|| host.is_set
	|| id.is_set
	|| method.is_set
	|| referer.is_set
	|| url.is_set
	|| user_agent.is_set
	|| version.is_set
	|| via.is_set;
}

bool Native::Ip::Nbar::Custom::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(referer.yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(user_agent.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(via.yfilter);
}

std::string Native::Ip::Nbar::Custom::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie.is_set || is_set(cookie.yfilter)) leaf_name_data.push_back(cookie.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (referer.is_set || is_set(referer.yfilter)) leaf_name_data.push_back(referer.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (user_agent.is_set || is_set(user_agent.yfilter)) leaf_name_data.push_back(user_agent.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (via.is_set || is_set(via.yfilter)) leaf_name_data.push_back(via.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nbar::Custom::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie")
    {
        cookie = value;
        cookie.value_namespace = name_space;
        cookie.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referer")
    {
        referer = value;
        referer.value_namespace = name_space;
        referer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-agent")
    {
        user_agent = value;
        user_agent.value_namespace = name_space;
        user_agent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "via")
    {
        via = value;
        via.value_namespace = name_space;
        via.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie")
    {
        cookie.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "referer")
    {
        referer.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "user-agent")
    {
        user_agent.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "via")
    {
        via.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie" || name == "host" || name == "id" || name == "method" || name == "referer" || name == "url" || name == "user-agent" || name == "version" || name == "via")
        return true;
    return false;
}

Native::Ip::Pim::Pim()
    :
    register_source{YType::str, "Cisco-IOS-XE-multicast:register-source"}
    	,
    accept_register(std::make_shared<Native::Ip::Pim::AcceptRegister>())
	,autorp(nullptr) // presence node
	,send_rp_announce(std::make_shared<Native::Ip::Pim::SendRpAnnounce>())
	,send_rp_discovery(std::make_shared<Native::Ip::Pim::SendRpDiscovery>())
	,spt_threshold_container(std::make_shared<Native::Ip::Pim::SptThresholdContainer>())
	,ssm(std::make_shared<Native::Ip::Pim::Ssm>())
{
    accept_register->parent = this;
    send_rp_announce->parent = this;
    send_rp_discovery->parent = this;
    spt_threshold_container->parent = this;
    ssm->parent = this;

    yang_name = "pim"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::~Pim()
{
}

bool Native::Ip::Pim::has_data() const
{
    for (std::size_t index=0; index<rp_address.size(); index++)
    {
        if(rp_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.size(); index++)
    {
        if(spt_threshold[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return register_source.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (autorp !=  nullptr && autorp->has_data())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_data())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_data())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Native::Ip::Pim::has_operation() const
{
    for (std::size_t index=0; index<rp_address.size(); index++)
    {
        if(rp_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.size(); index++)
    {
        if(spt_threshold[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(register_source.yfilter)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (autorp !=  nullptr && autorp->has_operation())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_operation())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_operation())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_operation())
	|| (ssm !=  nullptr && ssm->has_operation());
}

std::string Native::Ip::Pim::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (register_source.is_set || is_set(register_source.yfilter)) leaf_name_data.push_back(register_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Ip::Pim::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "autorp")
    {
        if(autorp == nullptr)
        {
            autorp = std::make_shared<Native::Ip::Pim::Autorp>();
        }
        return autorp;
    }

    if(child_yang_name == "rp-address")
    {
        for(auto const & c : rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::RpAddress>();
        c->parent = this;
        rp_address.push_back(c);
        return c;
    }

    if(child_yang_name == "send-rp-announce")
    {
        if(send_rp_announce == nullptr)
        {
            send_rp_announce = std::make_shared<Native::Ip::Pim::SendRpAnnounce>();
        }
        return send_rp_announce;
    }

    if(child_yang_name == "send-rp-discovery")
    {
        if(send_rp_discovery == nullptr)
        {
            send_rp_discovery = std::make_shared<Native::Ip::Pim::SendRpDiscovery>();
        }
        return send_rp_discovery;
    }

    if(child_yang_name == "spt-threshold")
    {
        for(auto const & c : spt_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::SptThreshold>();
        c->parent = this;
        spt_threshold.push_back(c);
        return c;
    }

    if(child_yang_name == "spt-threshold-container")
    {
        if(spt_threshold_container == nullptr)
        {
            spt_threshold_container = std::make_shared<Native::Ip::Pim::SptThresholdContainer>();
        }
        return spt_threshold_container;
    }

    if(child_yang_name == "ssm")
    {
        if(ssm == nullptr)
        {
            ssm = std::make_shared<Native::Ip::Pim::Ssm>();
        }
        return ssm;
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
        auto c = std::make_shared<Native::Ip::Pim::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_register != nullptr)
    {
        children["accept-register"] = accept_register;
    }

    if(autorp != nullptr)
    {
        children["autorp"] = autorp;
    }

    for (auto const & c : rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(send_rp_announce != nullptr)
    {
        children["send-rp-announce"] = send_rp_announce;
    }

    if(send_rp_discovery != nullptr)
    {
        children["send-rp-discovery"] = send_rp_discovery;
    }

    for (auto const & c : spt_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    if(spt_threshold_container != nullptr)
    {
        children["spt-threshold-container"] = spt_threshold_container;
    }

    if(ssm != nullptr)
    {
        children["ssm"] = ssm;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "register-source")
    {
        register_source = value;
        register_source.value_namespace = name_space;
        register_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "register-source")
    {
        register_source.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-register" || name == "autorp" || name == "rp-address" || name == "send-rp-announce" || name == "send-rp-discovery" || name == "spt-threshold" || name == "spt-threshold-container" || name == "ssm" || name == "vrf" || name == "register-source")
        return true;
    return false;
}

Native::Ip::Pim::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{

    yang_name = "accept-register"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::AcceptRegister::~AcceptRegister()
{
}

bool Native::Ip::Pim::AcceptRegister::has_data() const
{
    return list.is_set;
}

bool Native::Ip::Pim::AcceptRegister::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Pim::AcceptRegister::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:accept-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::AcceptRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::AcceptRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::AcceptRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::AcceptRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Ip::Pim::Autorp::Autorp()
    :
    listener{YType::empty, "listener"}
{

    yang_name = "autorp"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::Autorp::~Autorp()
{
}

bool Native::Ip::Pim::Autorp::has_data() const
{
    return listener.is_set;
}

bool Native::Ip::Pim::Autorp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(listener.yfilter);
}

std::string Native::Ip::Pim::Autorp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::Autorp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:autorp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Autorp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (listener.is_set || is_set(listener.yfilter)) leaf_name_data.push_back(listener.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Autorp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Autorp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Autorp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "listener")
    {
        listener = value;
        listener.value_namespace = name_space;
        listener.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Autorp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "listener")
    {
        listener.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Autorp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listener")
        return true;
    return false;
}

Native::Ip::Pim::RpAddress::RpAddress()
    :
    address{YType::str, "address"},
    access_list{YType::str, "access-list"},
    override{YType::empty, "override"}
{

    yang_name = "rp-address"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::RpAddress::~RpAddress()
{
}

bool Native::Ip::Pim::RpAddress::has_data() const
{
    return address.is_set
	|| access_list.is_set
	|| override.is_set;
}

bool Native::Ip::Pim::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string Native::Ip::Pim::RpAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:rp-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "access-list" || name == "override")
        return true;
    return false;
}

Native::Ip::Pim::SendRpAnnounce::SendRpAnnounce()
{

    yang_name = "send-rp-announce"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::SendRpAnnounce::~SendRpAnnounce()
{
}

bool Native::Ip::Pim::SendRpAnnounce::has_data() const
{
    for (std::size_t index=0; index<interface_list.size(); index++)
    {
        if(interface_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Pim::SendRpAnnounce::has_operation() const
{
    for (std::size_t index=0; index<interface_list.size(); index++)
    {
        if(interface_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Pim::SendRpAnnounce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SendRpAnnounce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:send-rp-announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpAnnounce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpAnnounce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface_list")
    {
        for(auto const & c : interface_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::SendRpAnnounce::InterfaceList>();
        c->parent = this;
        interface_list.push_back(c);
        return c;
    }

    if(child_yang_name == "Port-channel")
    {
        for(auto const & c : port_channel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::SendRpAnnounce::PortChannel>();
        c->parent = this;
        port_channel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpAnnounce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_channel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Pim::SendRpAnnounce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Pim::SendRpAnnounce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Pim::SendRpAnnounce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_list" || name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::InterfaceList()
    :
    if_name{YType::str, "if-name"}
    	,
    scope(std::make_shared<Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope>())
{
    scope->parent = this;

    yang_name = "interface_list"; yang_parent_name = "send-rp-announce"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::~InterfaceList()
{
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::has_data() const
{
    return if_name.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_name.yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Ip::Pim::SendRpAnnounce::InterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/Cisco-IOS-XE-multicast:send-rp-announce/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SendRpAnnounce::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface_list" <<"[if-name='" <<if_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpAnnounce::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_name.is_set || is_set(if_name.yfilter)) leaf_name_data.push_back(if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpAnnounce::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpAnnounce::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-name")
    {
        if_name = value;
        if_name.value_namespace = name_space;
        if_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-name")
    {
        if_name.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "if-name")
        return true;
    return false;
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::Scope()
    :
    pkt_ttl{YType::uint8, "pkt-ttl"}
    	,
    group_list(std::make_shared<Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList>())
{
    group_list->parent = this;

    yang_name = "scope"; yang_parent_name = "interface_list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::~Scope()
{
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::has_data() const
{
    return pkt_ttl.is_set
	|| (group_list !=  nullptr && group_list->has_data());
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pkt_ttl.yfilter)
	|| (group_list !=  nullptr && group_list->has_operation());
}

std::string Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkt_ttl.is_set || is_set(pkt_ttl.yfilter)) leaf_name_data.push_back(pkt_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-list")
    {
        if(group_list == nullptr)
        {
            group_list = std::make_shared<Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList>();
        }
        return group_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_list != nullptr)
    {
        children["group-list"] = group_list;
    }

    return children;
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pkt-ttl")
    {
        pkt_ttl = value;
        pkt_ttl.value_namespace = name_space;
        pkt_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pkt-ttl")
    {
        pkt_ttl.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list" || name == "pkt-ttl")
        return true;
    return false;
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::GroupList()
    :
    acl_ref{YType::uint8, "acl-ref"},
    std_acl{YType::str, "std-acl"}
{

    yang_name = "group-list"; yang_parent_name = "scope"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::~GroupList()
{
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::has_data() const
{
    return acl_ref.is_set
	|| std_acl.is_set;
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_ref.yfilter)
	|| ydk::is_set(std_acl.yfilter);
}

std::string Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_ref.is_set || is_set(acl_ref.yfilter)) leaf_name_data.push_back(acl_ref.get_name_leafdata());
    if (std_acl.is_set || is_set(std_acl.yfilter)) leaf_name_data.push_back(std_acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-ref")
    {
        acl_ref = value;
        acl_ref.value_namespace = name_space;
        acl_ref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "std-acl")
    {
        std_acl = value;
        std_acl.value_namespace = name_space;
        std_acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-ref")
    {
        acl_ref.yfilter = yfilter;
    }
    if(value_path == "std-acl")
    {
        std_acl.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-ref" || name == "std-acl")
        return true;
    return false;
}

Native::Ip::Pim::SendRpAnnounce::PortChannel::PortChannel()
    :
    name{YType::uint32, "name"},
    scope{YType::uint8, "scope"}
{

    yang_name = "Port-channel"; yang_parent_name = "send-rp-announce"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::SendRpAnnounce::PortChannel::~PortChannel()
{
}

bool Native::Ip::Pim::SendRpAnnounce::PortChannel::has_data() const
{
    return name.is_set
	|| scope.is_set;
}

bool Native::Ip::Pim::SendRpAnnounce::PortChannel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(scope.yfilter);
}

std::string Native::Ip::Pim::SendRpAnnounce::PortChannel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/Cisco-IOS-XE-multicast:send-rp-announce/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SendRpAnnounce::PortChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpAnnounce::PortChannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpAnnounce::PortChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpAnnounce::PortChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::SendRpAnnounce::PortChannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SendRpAnnounce::PortChannel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SendRpAnnounce::PortChannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "scope")
        return true;
    return false;
}

Native::Ip::Pim::SendRpDiscovery::SendRpDiscovery()
    :
    scope{YType::uint8, "scope"}
{

    yang_name = "send-rp-discovery"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::SendRpDiscovery::~SendRpDiscovery()
{
}

bool Native::Ip::Pim::SendRpDiscovery::has_data() const
{
    return scope.is_set;
}

bool Native::Ip::Pim::SendRpDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(scope.yfilter);
}

std::string Native::Ip::Pim::SendRpDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SendRpDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:send-rp-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::SendRpDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SendRpDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SendRpDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope")
        return true;
    return false;
}

Native::Ip::Pim::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"},
    group_list{YType::str, "group-list"}
{

    yang_name = "spt-threshold"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::SptThreshold::has_data() const
{
    return how.is_set
	|| group_list.is_set;
}

bool Native::Ip::Pim::SptThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(how.yfilter)
	|| ydk::is_set(group_list.yfilter);
}

std::string Native::Ip::Pim::SptThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:spt-threshold" <<"[how='" <<how <<"']" <<"[group-list='" <<group_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SptThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.yfilter)) leaf_name_data.push_back(how.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::SptThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "how")
    {
        how = value;
        how.value_namespace = name_space;
        how.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list")
    {
        group_list = value;
        group_list.value_namespace = name_space;
        group_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SptThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "how")
    {
        how.yfilter = yfilter;
    }
    if(value_path == "group-list")
    {
        group_list.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SptThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "how" || name == "group-list")
        return true;
    return false;
}

Native::Ip::Pim::SptThresholdContainer::SptThresholdContainer()
    :
    spt_threshold(std::make_shared<Native::Ip::Pim::SptThresholdContainer::SptThreshold>())
{
    spt_threshold->parent = this;

    yang_name = "spt-threshold-container"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::SptThresholdContainer::~SptThresholdContainer()
{
}

bool Native::Ip::Pim::SptThresholdContainer::has_data() const
{
    return (spt_threshold !=  nullptr && spt_threshold->has_data());
}

bool Native::Ip::Pim::SptThresholdContainer::has_operation() const
{
    return is_set(yfilter)
	|| (spt_threshold !=  nullptr && spt_threshold->has_operation());
}

std::string Native::Ip::Pim::SptThresholdContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SptThresholdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:spt-threshold-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SptThresholdContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SptThresholdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spt-threshold")
    {
        if(spt_threshold == nullptr)
        {
            spt_threshold = std::make_shared<Native::Ip::Pim::SptThresholdContainer::SptThreshold>();
        }
        return spt_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SptThresholdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spt_threshold != nullptr)
    {
        children["spt-threshold"] = spt_threshold;
    }

    return children;
}

void Native::Ip::Pim::SptThresholdContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Pim::SptThresholdContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Pim::SptThresholdContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spt-threshold")
        return true;
    return false;
}

Native::Ip::Pim::SptThresholdContainer::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"}
{

    yang_name = "spt-threshold"; yang_parent_name = "spt-threshold-container"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::SptThresholdContainer::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::SptThresholdContainer::SptThreshold::has_data() const
{
    return how.is_set;
}

bool Native::Ip::Pim::SptThresholdContainer::SptThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(how.yfilter);
}

std::string Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/Cisco-IOS-XE-multicast:spt-threshold-container/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.yfilter)) leaf_name_data.push_back(how.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::SptThresholdContainer::SptThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "how")
    {
        how = value;
        how.value_namespace = name_space;
        how.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SptThresholdContainer::SptThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "how")
    {
        how.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SptThresholdContainer::SptThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "how")
        return true;
    return false;
}

Native::Ip::Pim::Ssm::Ssm()
    :
    default_{YType::empty, "default"},
    range{YType::str, "range"}
{

    yang_name = "ssm"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::Ssm::~Ssm()
{
}

bool Native::Ip::Pim::Ssm::has_data() const
{
    return default_.is_set
	|| range.is_set;
}

bool Native::Ip::Pim::Ssm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Native::Ip::Pim::Ssm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:ssm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Ssm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Ssm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Ssm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Ssm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Ssm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "range")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::Vrf()
    :
    id{YType::str, "id"},
    register_source{YType::str, "register-source"}
    	,
    accept_register(std::make_shared<Native::Ip::Pim::Vrf::AcceptRegister>())
	,autorp(nullptr) // presence node
	,send_rp_announce(std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce>())
	,send_rp_discovery(std::make_shared<Native::Ip::Pim::Vrf::SendRpDiscovery>())
	,spt_threshold_container(std::make_shared<Native::Ip::Pim::Vrf::SptThresholdContainer>())
	,ssm(std::make_shared<Native::Ip::Pim::Vrf::Ssm>())
{
    accept_register->parent = this;
    send_rp_announce->parent = this;
    send_rp_discovery->parent = this;
    spt_threshold_container->parent = this;
    ssm->parent = this;

    yang_name = "vrf"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::Vrf::~Vrf()
{
}

bool Native::Ip::Pim::Vrf::has_data() const
{
    for (std::size_t index=0; index<rp_address.size(); index++)
    {
        if(rp_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.size(); index++)
    {
        if(spt_threshold[index]->has_data())
            return true;
    }
    return id.is_set
	|| register_source.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (autorp !=  nullptr && autorp->has_data())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_data())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_data())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Native::Ip::Pim::Vrf::has_operation() const
{
    for (std::size_t index=0; index<rp_address.size(); index++)
    {
        if(rp_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.size(); index++)
    {
        if(spt_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(register_source.yfilter)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (autorp !=  nullptr && autorp->has_operation())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_operation())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_operation())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_operation())
	|| (ssm !=  nullptr && ssm->has_operation());
}

std::string Native::Ip::Pim::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:vrf" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (register_source.is_set || is_set(register_source.yfilter)) leaf_name_data.push_back(register_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Ip::Pim::Vrf::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "autorp")
    {
        if(autorp == nullptr)
        {
            autorp = std::make_shared<Native::Ip::Pim::Vrf::Autorp>();
        }
        return autorp;
    }

    if(child_yang_name == "rp-address")
    {
        for(auto const & c : rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::Vrf::RpAddress>();
        c->parent = this;
        rp_address.push_back(c);
        return c;
    }

    if(child_yang_name == "send-rp-announce")
    {
        if(send_rp_announce == nullptr)
        {
            send_rp_announce = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce>();
        }
        return send_rp_announce;
    }

    if(child_yang_name == "send-rp-discovery")
    {
        if(send_rp_discovery == nullptr)
        {
            send_rp_discovery = std::make_shared<Native::Ip::Pim::Vrf::SendRpDiscovery>();
        }
        return send_rp_discovery;
    }

    if(child_yang_name == "spt-threshold")
    {
        for(auto const & c : spt_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::Vrf::SptThreshold>();
        c->parent = this;
        spt_threshold.push_back(c);
        return c;
    }

    if(child_yang_name == "spt-threshold-container")
    {
        if(spt_threshold_container == nullptr)
        {
            spt_threshold_container = std::make_shared<Native::Ip::Pim::Vrf::SptThresholdContainer>();
        }
        return spt_threshold_container;
    }

    if(child_yang_name == "ssm")
    {
        if(ssm == nullptr)
        {
            ssm = std::make_shared<Native::Ip::Pim::Vrf::Ssm>();
        }
        return ssm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_register != nullptr)
    {
        children["accept-register"] = accept_register;
    }

    if(autorp != nullptr)
    {
        children["autorp"] = autorp;
    }

    for (auto const & c : rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(send_rp_announce != nullptr)
    {
        children["send-rp-announce"] = send_rp_announce;
    }

    if(send_rp_discovery != nullptr)
    {
        children["send-rp-discovery"] = send_rp_discovery;
    }

    for (auto const & c : spt_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    if(spt_threshold_container != nullptr)
    {
        children["spt-threshold-container"] = spt_threshold_container;
    }

    if(ssm != nullptr)
    {
        children["ssm"] = ssm;
    }

    return children;
}

void Native::Ip::Pim::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-source")
    {
        register_source = value;
        register_source.value_namespace = name_space;
        register_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "register-source")
    {
        register_source.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-register" || name == "autorp" || name == "rp-address" || name == "send-rp-announce" || name == "send-rp-discovery" || name == "spt-threshold" || name == "spt-threshold-container" || name == "ssm" || name == "id" || name == "register-source")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{

    yang_name = "accept-register"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::AcceptRegister::~AcceptRegister()
{
}

bool Native::Ip::Pim::Vrf::AcceptRegister::has_data() const
{
    return list.is_set;
}

bool Native::Ip::Pim::Vrf::AcceptRegister::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Pim::Vrf::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::AcceptRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::AcceptRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::AcceptRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::AcceptRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::Autorp::Autorp()
    :
    listener{YType::empty, "listener"}
{

    yang_name = "autorp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::Autorp::~Autorp()
{
}

bool Native::Ip::Pim::Vrf::Autorp::has_data() const
{
    return listener.is_set;
}

bool Native::Ip::Pim::Vrf::Autorp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(listener.yfilter);
}

std::string Native::Ip::Pim::Vrf::Autorp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autorp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::Autorp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (listener.is_set || is_set(listener.yfilter)) leaf_name_data.push_back(listener.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::Autorp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::Autorp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::Autorp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "listener")
    {
        listener = value;
        listener.value_namespace = name_space;
        listener.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::Autorp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "listener")
    {
        listener.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::Autorp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listener")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::RpAddress::RpAddress()
    :
    address{YType::str, "address"},
    access_list{YType::str, "access-list"},
    override{YType::empty, "override"}
{

    yang_name = "rp-address"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::RpAddress::~RpAddress()
{
}

bool Native::Ip::Pim::Vrf::RpAddress::has_data() const
{
    return address.is_set
	|| access_list.is_set
	|| override.is_set;
}

bool Native::Ip::Pim::Vrf::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string Native::Ip::Pim::Vrf::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "access-list" || name == "override")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::SendRpAnnounce()
{

    yang_name = "send-rp-announce"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::~SendRpAnnounce()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::has_data() const
{
    for (std::size_t index=0; index<interface_list.size(); index++)
    {
        if(interface_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::has_operation() const
{
    for (std::size_t index=0; index<interface_list.size(); index++)
    {
        if(interface_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-rp-announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpAnnounce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface_list")
    {
        for(auto const & c : interface_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList>();
        c->parent = this;
        interface_list.push_back(c);
        return c;
    }

    if(child_yang_name == "Port-channel")
    {
        for(auto const & c : port_channel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel>();
        c->parent = this;
        port_channel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_channel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_list" || name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::InterfaceList()
    :
    if_name{YType::str, "if-name"}
    	,
    scope(std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope>())
{
    scope->parent = this;

    yang_name = "interface_list"; yang_parent_name = "send-rp-announce"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::~InterfaceList()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::has_data() const
{
    return if_name.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_name.yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface_list" <<"[if-name='" <<if_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_name.is_set || is_set(if_name.yfilter)) leaf_name_data.push_back(if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-name")
    {
        if_name = value;
        if_name.value_namespace = name_space;
        if_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-name")
    {
        if_name.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "if-name")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::Scope()
    :
    pkt_ttl{YType::uint8, "pkt-ttl"}
    	,
    group_list(std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList>())
{
    group_list->parent = this;

    yang_name = "scope"; yang_parent_name = "interface_list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::~Scope()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::has_data() const
{
    return pkt_ttl.is_set
	|| (group_list !=  nullptr && group_list->has_data());
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pkt_ttl.yfilter)
	|| (group_list !=  nullptr && group_list->has_operation());
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkt_ttl.is_set || is_set(pkt_ttl.yfilter)) leaf_name_data.push_back(pkt_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-list")
    {
        if(group_list == nullptr)
        {
            group_list = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList>();
        }
        return group_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_list != nullptr)
    {
        children["group-list"] = group_list;
    }

    return children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pkt-ttl")
    {
        pkt_ttl = value;
        pkt_ttl.value_namespace = name_space;
        pkt_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pkt-ttl")
    {
        pkt_ttl.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list" || name == "pkt-ttl")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::GroupList()
    :
    acl_ref{YType::uint8, "acl-ref"},
    std_acl{YType::str, "std-acl"}
{

    yang_name = "group-list"; yang_parent_name = "scope"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::~GroupList()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::has_data() const
{
    return acl_ref.is_set
	|| std_acl.is_set;
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_ref.yfilter)
	|| ydk::is_set(std_acl.yfilter);
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_ref.is_set || is_set(acl_ref.yfilter)) leaf_name_data.push_back(acl_ref.get_name_leafdata());
    if (std_acl.is_set || is_set(std_acl.yfilter)) leaf_name_data.push_back(std_acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-ref")
    {
        acl_ref = value;
        acl_ref.value_namespace = name_space;
        acl_ref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "std-acl")
    {
        std_acl = value;
        std_acl.value_namespace = name_space;
        std_acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-ref")
    {
        acl_ref.yfilter = yfilter;
    }
    if(value_path == "std-acl")
    {
        std_acl.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-ref" || name == "std-acl")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::PortChannel()
    :
    name{YType::uint32, "name"},
    scope{YType::uint8, "scope"}
{

    yang_name = "Port-channel"; yang_parent_name = "send-rp-announce"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::~PortChannel()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::has_data() const
{
    return name.is_set
	|| scope.is_set;
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(scope.yfilter);
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "scope")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpDiscovery::SendRpDiscovery()
    :
    scope{YType::uint8, "scope"}
{

    yang_name = "send-rp-discovery"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SendRpDiscovery::~SendRpDiscovery()
{
}

bool Native::Ip::Pim::Vrf::SendRpDiscovery::has_data() const
{
    return scope.is_set;
}

bool Native::Ip::Pim::Vrf::SendRpDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(scope.yfilter);
}

std::string Native::Ip::Pim::Vrf::SendRpDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-rp-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::SendRpDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SendRpDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SendRpDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"},
    group_list{YType::str, "group-list"}
{

    yang_name = "spt-threshold"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::Vrf::SptThreshold::has_data() const
{
    return how.is_set
	|| group_list.is_set;
}

bool Native::Ip::Pim::Vrf::SptThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(how.yfilter)
	|| ydk::is_set(group_list.yfilter);
}

std::string Native::Ip::Pim::Vrf::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold" <<"[how='" <<how <<"']" <<"[group-list='" <<group_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SptThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.yfilter)) leaf_name_data.push_back(how.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::SptThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "how")
    {
        how = value;
        how.value_namespace = name_space;
        how.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list")
    {
        group_list = value;
        group_list.value_namespace = name_space;
        group_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SptThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "how")
    {
        how.yfilter = yfilter;
    }
    if(value_path == "group-list")
    {
        group_list.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SptThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "how" || name == "group-list")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SptThresholdContainer::SptThresholdContainer()
    :
    spt_threshold(std::make_shared<Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold>())
{
    spt_threshold->parent = this;

    yang_name = "spt-threshold-container"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SptThresholdContainer::~SptThresholdContainer()
{
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::has_data() const
{
    return (spt_threshold !=  nullptr && spt_threshold->has_data());
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::has_operation() const
{
    return is_set(yfilter)
	|| (spt_threshold !=  nullptr && spt_threshold->has_operation());
}

std::string Native::Ip::Pim::Vrf::SptThresholdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SptThresholdContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SptThresholdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spt-threshold")
    {
        if(spt_threshold == nullptr)
        {
            spt_threshold = std::make_shared<Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold>();
        }
        return spt_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SptThresholdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spt_threshold != nullptr)
    {
        children["spt-threshold"] = spt_threshold;
    }

    return children;
}

void Native::Ip::Pim::Vrf::SptThresholdContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Pim::Vrf::SptThresholdContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spt-threshold")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"}
{

    yang_name = "spt-threshold"; yang_parent_name = "spt-threshold-container"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::has_data() const
{
    return how.is_set;
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(how.yfilter);
}

std::string Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.yfilter)) leaf_name_data.push_back(how.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "how")
    {
        how = value;
        how.value_namespace = name_space;
        how.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "how")
    {
        how.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "how")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::Ssm::Ssm()
    :
    default_{YType::empty, "default"},
    range{YType::str, "range"}
{

    yang_name = "ssm"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::Ssm::~Ssm()
{
}

bool Native::Ip::Pim::Vrf::Ssm::has_data() const
{
    return default_.is_set
	|| range.is_set;
}

bool Native::Ip::Pim::Vrf::Ssm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Native::Ip::Pim::Vrf::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::Ssm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::Ssm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::Ssm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::Ssm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::Ssm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "range")
        return true;
    return false;
}

Native::Ip::PrefixList::PrefixList()
    :
    sequence_number{YType::empty, "sequence-number"}
{

    yang_name = "prefix-list"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::PrefixList::~PrefixList()
{
}

bool Native::Ip::PrefixList::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return sequence_number.is_set;
}

bool Native::Ip::PrefixList::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Native::Ip::PrefixList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ip::PrefixList::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Native::Ip::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "sequence-number")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Prefixes()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    deny(std::make_shared<Native::Ip::PrefixList::Prefixes::Deny>())
	,permit(std::make_shared<Native::Ip::PrefixList::Prefixes::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "prefixes"; yang_parent_name = "prefix-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::PrefixList::Prefixes::~Prefixes()
{
}

bool Native::Ip::PrefixList::Prefixes::has_data() const
{
    for (std::size_t index=0; index<seq.size(); index++)
    {
        if(seq[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::PrefixList::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<seq.size(); index++)
    {
        if(seq[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::PrefixList::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/prefix-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::PrefixList::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::PrefixList::Prefixes::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::PrefixList::Prefixes::Permit>();
        }
        return permit;
    }

    if(child_yang_name == "seq")
    {
        for(auto const & c : seq)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::PrefixList::Prefixes::Seq>();
        c->parent = this;
        seq.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    for (auto const & c : seq)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::PrefixList::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::PrefixList::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::PrefixList::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "seq" || name == "name" || name == "description")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Deny::Deny()
{

    yang_name = "deny"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::PrefixList::Prefixes::Deny::~Deny()
{
}

bool Native::Ip::PrefixList::Prefixes::Deny::has_data() const
{
    for (std::size_t index=0; index<deny_list.size(); index++)
    {
        if(deny_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::PrefixList::Prefixes::Deny::has_operation() const
{
    for (std::size_t index=0; index<deny_list.size(); index++)
    {
        if(deny_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::PrefixList::Prefixes::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny-list")
    {
        for(auto const & c : deny_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::PrefixList::Prefixes::Deny::DenyList>();
        c->parent = this;
        deny_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : deny_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::PrefixList::Prefixes::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::PrefixList::Prefixes::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::PrefixList::Prefixes::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Deny::DenyList::DenyList()
    :
    prefix{YType::str, "prefix"},
    ge{YType::uint8, "ge"},
    le{YType::uint8, "le"}
{

    yang_name = "deny-list"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::PrefixList::Prefixes::Deny::DenyList::~DenyList()
{
}

bool Native::Ip::PrefixList::Prefixes::Deny::DenyList::has_data() const
{
    return prefix.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ip::PrefixList::Prefixes::Deny::DenyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ip::PrefixList::Prefixes::Deny::DenyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny-list" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::Deny::DenyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Deny::DenyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Deny::DenyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::PrefixList::Prefixes::Deny::DenyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::PrefixList::Prefixes::Deny::DenyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ip::PrefixList::Prefixes::Deny::DenyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "ge" || name == "le")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Permit::Permit()
{

    yang_name = "permit"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::PrefixList::Prefixes::Permit::~Permit()
{
}

bool Native::Ip::PrefixList::Prefixes::Permit::has_data() const
{
    for (std::size_t index=0; index<permit_list.size(); index++)
    {
        if(permit_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::PrefixList::Prefixes::Permit::has_operation() const
{
    for (std::size_t index=0; index<permit_list.size(); index++)
    {
        if(permit_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::PrefixList::Prefixes::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit-list")
    {
        for(auto const & c : permit_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::PrefixList::Prefixes::Permit::PermitList>();
        c->parent = this;
        permit_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : permit_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::PrefixList::Prefixes::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::PrefixList::Prefixes::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::PrefixList::Prefixes::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Permit::PermitList::PermitList()
    :
    prefix{YType::str, "prefix"},
    ge{YType::uint8, "ge"},
    le{YType::uint8, "le"}
{

    yang_name = "permit-list"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::PrefixList::Prefixes::Permit::PermitList::~PermitList()
{
}

bool Native::Ip::PrefixList::Prefixes::Permit::PermitList::has_data() const
{
    return prefix.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ip::PrefixList::Prefixes::Permit::PermitList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ip::PrefixList::Prefixes::Permit::PermitList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit-list" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::Permit::PermitList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Permit::PermitList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Permit::PermitList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::PrefixList::Prefixes::Permit::PermitList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::PrefixList::Prefixes::Permit::PermitList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ip::PrefixList::Prefixes::Permit::PermitList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "ge" || name == "le")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Seq::Seq()
    :
    no{YType::uint32, "no"}
    	,
    deny(std::make_shared<Native::Ip::PrefixList::Prefixes::Seq::Deny>())
	,permit(std::make_shared<Native::Ip::PrefixList::Prefixes::Seq::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "seq"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::PrefixList::Prefixes::Seq::~Seq()
{
}

bool Native::Ip::PrefixList::Prefixes::Seq::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::PrefixList::Prefixes::Seq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::PrefixList::Prefixes::Seq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq" <<"[no='" <<no <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::Seq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Seq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::PrefixList::Prefixes::Seq::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::PrefixList::Prefixes::Seq::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Seq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::PrefixList::Prefixes::Seq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::PrefixList::Prefixes::Seq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ip::PrefixList::Prefixes::Seq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "no")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Seq::Deny::Deny()
    :
    ge{YType::uint8, "ge"},
    ip{YType::str, "ip"},
    le{YType::uint8, "le"}
{

    yang_name = "deny"; yang_parent_name = "seq"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::PrefixList::Prefixes::Seq::Deny::~Deny()
{
}

bool Native::Ip::PrefixList::Prefixes::Seq::Deny::has_data() const
{
    return ge.is_set
	|| ip.is_set
	|| le.is_set;
}

bool Native::Ip::PrefixList::Prefixes::Seq::Deny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ip::PrefixList::Prefixes::Seq::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::Seq::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Seq::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Seq::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::PrefixList::Prefixes::Seq::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::PrefixList::Prefixes::Seq::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ip::PrefixList::Prefixes::Seq::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ge" || name == "ip" || name == "le")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Seq::Permit::Permit()
    :
    ge{YType::uint8, "ge"},
    ip{YType::str, "ip"},
    le{YType::uint8, "le"}
{

    yang_name = "permit"; yang_parent_name = "seq"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::PrefixList::Prefixes::Seq::Permit::~Permit()
{
}

bool Native::Ip::PrefixList::Prefixes::Seq::Permit::has_data() const
{
    return ge.is_set
	|| ip.is_set
	|| le.is_set;
}

bool Native::Ip::PrefixList::Prefixes::Seq::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ip::PrefixList::Prefixes::Seq::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::Seq::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Seq::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Seq::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::PrefixList::Prefixes::Seq::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::PrefixList::Prefixes::Seq::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ip::PrefixList::Prefixes::Seq::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ge" || name == "ip" || name == "le")
        return true;
    return false;
}

Native::Ip::Radius::Radius()
    :
    source_interface(std::make_shared<Native::Ip::Radius::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "radius"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Radius::~Radius()
{
}

bool Native::Ip::Radius::has_data() const
{
    return (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::Radius::has_operation() const
{
    return is_set(yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::Radius::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:radius";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Radius::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Ip::Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Radius::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface")
        return true;
    return false;
}

Native::Ip::Radius::SourceInterface::SourceInterface()
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
    lisp{YType::str, "LISP"},
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
    atm_acrsubinterface(std::make_shared<Native::Ip::Radius::SourceInterface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Radius::SourceInterface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Radius::SourceInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Radius::SourceInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Radius::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Radius::SourceInterface::has_data() const
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

bool Native::Ip::Radius::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
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
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Radius::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
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
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Radius::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Radius::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Radius::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Radius::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Radius::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::SourceInterface::get_children() const
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

void Native::Ip::Radius::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Radius::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
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
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ip::Radius::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Ip::Radius::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Radius::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Radius::SourceInterface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Radius::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Radius::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Radius::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Radius::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Radius::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Radius::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Radius::SourceInterface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Radius::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Radius::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Radius::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Radius::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Radius::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Radius::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Radius::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Radius::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Radius::SourceInterface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Radius::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Radius::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Radius::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Radius::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Radius::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Radius::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Radius::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Radius::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Radius::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Radius::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Radius::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Radius::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Radius::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Rcmd::Rcmd()
    :
    rcp_enable{YType::empty, "rcp-enable"},
    rsh_enable{YType::empty, "rsh-enable"}
{

    yang_name = "rcmd"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rcmd::~Rcmd()
{
}

bool Native::Ip::Rcmd::has_data() const
{
    return rcp_enable.is_set
	|| rsh_enable.is_set;
}

bool Native::Ip::Rcmd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rcp_enable.yfilter)
	|| ydk::is_set(rsh_enable.yfilter);
}

std::string Native::Ip::Rcmd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rcmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcmd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rcmd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rcp_enable.is_set || is_set(rcp_enable.yfilter)) leaf_name_data.push_back(rcp_enable.get_name_leafdata());
    if (rsh_enable.is_set || is_set(rsh_enable.yfilter)) leaf_name_data.push_back(rsh_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rcmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rcmd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rcmd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rcp-enable")
    {
        rcp_enable = value;
        rcp_enable.value_namespace = name_space;
        rcp_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsh-enable")
    {
        rsh_enable = value;
        rsh_enable.value_namespace = name_space;
        rsh_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rcmd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rcp-enable")
    {
        rcp_enable.yfilter = yfilter;
    }
    if(value_path == "rsh-enable")
    {
        rsh_enable.yfilter = yfilter;
    }
}

bool Native::Ip::Rcmd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcp-enable" || name == "rsh-enable")
        return true;
    return false;
}

Native::Ip::Route::Route()
    :
    profile{YType::empty, "profile"}
    	,
    static_(std::make_shared<Native::Ip::Route::Static_>())
{
    static_->parent = this;

    yang_name = "route"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Route::~Route()
{
}

bool Native::Ip::Route::has_data() const
{
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.size(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return profile.is_set
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Route::has_operation() const
{
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.size(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-route-interface-forwarding-list")
    {
        for(auto const & c : ip_route_interface_forwarding_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Route::IpRouteInterfaceForwardingList>();
        c->parent = this;
        ip_route_interface_forwarding_list.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Route::Static_>();
        }
        return static_;
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
        auto c = std::make_shared<Native::Ip::Route::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_route_interface_forwarding_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-route-interface-forwarding-list" || name == "static" || name == "vrf" || name == "profile")
        return true;
    return false;
}

Native::Ip::Route::IpRouteInterfaceForwardingList::IpRouteInterfaceForwardingList()
    :
    prefix{YType::str, "prefix"},
    mask{YType::str, "mask"}
{

    yang_name = "ip-route-interface-forwarding-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Route::IpRouteInterfaceForwardingList::~IpRouteInterfaceForwardingList()
{
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::has_data() const
{
    for (std::size_t index=0; index<fwd_list.size(); index++)
    {
        if(fwd_list[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| mask.is_set;
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::has_operation() const
{
    for (std::size_t index=0; index<fwd_list.size(); index++)
    {
        if(fwd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Route::IpRouteInterfaceForwardingList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::IpRouteInterfaceForwardingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-route-interface-forwarding-list" <<"[prefix='" <<prefix <<"']" <<"[mask='" <<mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::IpRouteInterfaceForwardingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::IpRouteInterfaceForwardingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fwd-list")
    {
        for(auto const & c : fwd_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList>();
        c->parent = this;
        fwd_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::IpRouteInterfaceForwardingList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fwd_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwd-list" || name == "prefix" || name == "mask")
        return true;
    return false;
}

Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::FwdList()
    :
    fwd{YType::str, "fwd"},
    dhcp{YType::empty, "dhcp"},
    forwarding_router_adr{YType::str, "forwarding-router-adr"},
    global{YType::empty, "global"},
    metric{YType::uint8, "metric"},
    multicast{YType::empty, "multicast"},
    name{YType::str, "name"},
    permanent{YType::empty, "permanent"},
    tag{YType::uint32, "tag"},
    track{YType::uint16, "track"}
{

    yang_name = "fwd-list"; yang_parent_name = "ip-route-interface-forwarding-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::~FwdList()
{
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::has_data() const
{
    return fwd.is_set
	|| dhcp.is_set
	|| forwarding_router_adr.is_set
	|| global.is_set
	|| metric.is_set
	|| multicast.is_set
	|| name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| track.is_set;
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fwd.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(forwarding_router_adr.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-list" <<"[fwd='" <<fwd <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwd.is_set || is_set(fwd.yfilter)) leaf_name_data.push_back(fwd.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (forwarding_router_adr.is_set || is_set(forwarding_router_adr.yfilter)) leaf_name_data.push_back(forwarding_router_adr.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fwd")
    {
        fwd = value;
        fwd.value_namespace = name_space;
        fwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-router-adr")
    {
        forwarding_router_adr = value;
        forwarding_router_adr.value_namespace = name_space;
        forwarding_router_adr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fwd")
    {
        fwd.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "forwarding-router-adr")
    {
        forwarding_router_adr.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwd" || name == "dhcp" || name == "forwarding-router-adr" || name == "global" || name == "metric" || name == "multicast" || name == "name" || name == "permanent" || name == "tag" || name == "track")
        return true;
    return false;
}

Native::Ip::Route::Static_::Static_()
    :
    adjust_time{YType::uint8, "adjust-time"},
    inter_vrf{YType::empty, "inter-vrf"}
    	,
    bfd(std::make_shared<Native::Ip::Route::Static_::Bfd>())
	,install_routes_recurse_via_nexthop(std::make_shared<Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop>())
{
    bfd->parent = this;
    install_routes_recurse_via_nexthop->parent = this;

    yang_name = "static"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Route::Static_::~Static_()
{
}

bool Native::Ip::Route::Static_::has_data() const
{
    return adjust_time.is_set
	|| inter_vrf.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (install_routes_recurse_via_nexthop !=  nullptr && install_routes_recurse_via_nexthop->has_data());
}

bool Native::Ip::Route::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_time.yfilter)
	|| ydk::is_set(inter_vrf.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (install_routes_recurse_via_nexthop !=  nullptr && install_routes_recurse_via_nexthop->has_operation());
}

std::string Native::Ip::Route::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_time.is_set || is_set(adjust_time.yfilter)) leaf_name_data.push_back(adjust_time.get_name_leafdata());
    if (inter_vrf.is_set || is_set(inter_vrf.yfilter)) leaf_name_data.push_back(inter_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Ip::Route::Static_::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "install-routes-recurse-via-nexthop")
    {
        if(install_routes_recurse_via_nexthop == nullptr)
        {
            install_routes_recurse_via_nexthop = std::make_shared<Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop>();
        }
        return install_routes_recurse_via_nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(install_routes_recurse_via_nexthop != nullptr)
    {
        children["install-routes-recurse-via-nexthop"] = install_routes_recurse_via_nexthop;
    }

    return children;
}

void Native::Ip::Route::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-time")
    {
        adjust_time = value;
        adjust_time.value_namespace = name_space;
        adjust_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-vrf")
    {
        inter_vrf = value;
        inter_vrf.value_namespace = name_space;
        inter_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-time")
    {
        adjust_time.yfilter = yfilter;
    }
    if(value_path == "inter-vrf")
    {
        inter_vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "install-routes-recurse-via-nexthop" || name == "adjust-time" || name == "inter-vrf")
        return true;
    return false;
}

Native::Ip::Route::Static_::Bfd::Bfd()
    :
    gateway_ip{YType::str, "gateway-ip"},
    interface{YType::str, "interface"}
{

    yang_name = "bfd"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Route::Static_::Bfd::~Bfd()
{
}

bool Native::Ip::Route::Static_::Bfd::has_data() const
{
    return gateway_ip.is_set
	|| interface.is_set;
}

bool Native::Ip::Route::Static_::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gateway_ip.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Ip::Route::Static_::Bfd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Static_::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static_::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gateway_ip.is_set || is_set(gateway_ip.yfilter)) leaf_name_data.push_back(gateway_ip.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::Static_::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Static_::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Route::Static_::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gateway-ip")
    {
        gateway_ip = value;
        gateway_ip.value_namespace = name_space;
        gateway_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static_::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gateway-ip")
    {
        gateway_ip.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static_::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gateway-ip" || name == "interface")
        return true;
    return false;
}

Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::InstallRoutesRecurseViaNexthop()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "install-routes-recurse-via-nexthop"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::~InstallRoutesRecurseViaNexthop()
{
}

bool Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::has_data() const
{
    return vrf.is_set;
}

bool Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-routes-recurse-via-nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Ip::Route::Vrf::Vrf()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Route::Vrf::~Vrf()
{
}

bool Native::Ip::Route::Vrf::has_data() const
{
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.size(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Route::Vrf::has_operation() const
{
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.size(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Route::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-route-interface-forwarding-list")
    {
        for(auto const & c : ip_route_interface_forwarding_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList>();
        c->parent = this;
        ip_route_interface_forwarding_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_route_interface_forwarding_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Route::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-route-interface-forwarding-list" || name == "name")
        return true;
    return false;
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::IpRouteInterfaceForwardingList()
    :
    prefix{YType::str, "prefix"},
    mask{YType::str, "mask"}
{

    yang_name = "ip-route-interface-forwarding-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::~IpRouteInterfaceForwardingList()
{
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::has_data() const
{
    for (std::size_t index=0; index<fwd_list.size(); index++)
    {
        if(fwd_list[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| mask.is_set;
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::has_operation() const
{
    for (std::size_t index=0; index<fwd_list.size(); index++)
    {
        if(fwd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-route-interface-forwarding-list" <<"[prefix='" <<prefix <<"']" <<"[mask='" <<mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fwd-list")
    {
        for(auto const & c : fwd_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList>();
        c->parent = this;
        fwd_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fwd_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwd-list" || name == "prefix" || name == "mask")
        return true;
    return false;
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::FwdList()
    :
    fwd{YType::str, "fwd"},
    dhcp{YType::empty, "dhcp"},
    forwarding_router_adr{YType::str, "forwarding-router-adr"},
    global{YType::empty, "global"},
    metric{YType::uint8, "metric"},
    multicast{YType::empty, "multicast"},
    name{YType::str, "name"},
    permanent{YType::empty, "permanent"},
    tag{YType::uint32, "tag"},
    track{YType::uint16, "track"}
{

    yang_name = "fwd-list"; yang_parent_name = "ip-route-interface-forwarding-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::~FwdList()
{
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::has_data() const
{
    return fwd.is_set
	|| dhcp.is_set
	|| forwarding_router_adr.is_set
	|| global.is_set
	|| metric.is_set
	|| multicast.is_set
	|| name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| track.is_set;
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fwd.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(forwarding_router_adr.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-list" <<"[fwd='" <<fwd <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwd.is_set || is_set(fwd.yfilter)) leaf_name_data.push_back(fwd.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (forwarding_router_adr.is_set || is_set(forwarding_router_adr.yfilter)) leaf_name_data.push_back(forwarding_router_adr.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fwd")
    {
        fwd = value;
        fwd.value_namespace = name_space;
        fwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-router-adr")
    {
        forwarding_router_adr = value;
        forwarding_router_adr.value_namespace = name_space;
        forwarding_router_adr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fwd")
    {
        fwd.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "forwarding-router-adr")
    {
        forwarding_router_adr.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwd" || name == "dhcp" || name == "forwarding-router-adr" || name == "global" || name == "metric" || name == "multicast" || name == "name" || name == "permanent" || name == "tag" || name == "track")
        return true;
    return false;
}

Native::Ip::Routing::Routing()
    :
    protocol(std::make_shared<Native::Ip::Routing::Protocol>())
{
    protocol->parent = this;

    yang_name = "routing"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Routing::~Routing()
{
}

bool Native::Ip::Routing::has_data() const
{
    return (protocol !=  nullptr && protocol->has_data());
}

bool Native::Ip::Routing::has_operation() const
{
    return is_set(yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Ip::Routing::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Routing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Ip::Routing::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Routing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Ip::Routing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Routing::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Routing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Ip::Routing::Protocol::Protocol()
    :
    purge(std::make_shared<Native::Ip::Routing::Protocol::Purge>())
{
    purge->parent = this;

    yang_name = "protocol"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Routing::Protocol::~Protocol()
{
}

bool Native::Ip::Routing::Protocol::has_data() const
{
    return (purge !=  nullptr && purge->has_data());
}

bool Native::Ip::Routing::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (purge !=  nullptr && purge->has_operation());
}

std::string Native::Ip::Routing::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Routing::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Routing::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Routing::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "purge")
    {
        if(purge == nullptr)
        {
            purge = std::make_shared<Native::Ip::Routing::Protocol::Purge>();
        }
        return purge;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Routing::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(purge != nullptr)
    {
        children["purge"] = purge;
    }

    return children;
}

void Native::Ip::Routing::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Routing::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Routing::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "purge")
        return true;
    return false;
}

Native::Ip::Routing::Protocol::Purge::Purge()
    :
    interface{YType::boolean, "interface"}
{

    yang_name = "purge"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Routing::Protocol::Purge::~Purge()
{
}

bool Native::Ip::Routing::Protocol::Purge::has_data() const
{
    return interface.is_set;
}

bool Native::Ip::Routing::Protocol::Purge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Ip::Routing::Protocol::Purge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/routing/protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Routing::Protocol::Purge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "purge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Routing::Protocol::Purge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Routing::Protocol::Purge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Routing::Protocol::Purge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Routing::Protocol::Purge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Routing::Protocol::Purge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Ip::Routing::Protocol::Purge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Ip::Rsvp::Rsvp()
    :
    authentication(nullptr) // presence node
	,signalling(std::make_shared<Native::Ip::Rsvp::Signalling>())
{
    signalling->parent = this;

    yang_name = "rsvp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::~Rsvp()
{
}

bool Native::Ip::Rsvp::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data())
	|| (signalling !=  nullptr && signalling->has_data());
}

bool Native::Ip::Rsvp::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (signalling !=  nullptr && signalling->has_operation());
}

std::string Native::Ip::Rsvp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rsvp:rsvp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Ip::Rsvp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "signalling")
    {
        if(signalling == nullptr)
        {
            signalling = std::make_shared<Native::Ip::Rsvp::Signalling>();
        }
        return signalling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(signalling != nullptr)
    {
        children["signalling"] = signalling;
    }

    return children;
}

void Native::Ip::Rsvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "signalling")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Authentication()
    :
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
    	,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Lifetime>())
	,neighbor(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor>())
{
    lifetime->parent = this;
    neighbor->parent = this;

    yang_name = "authentication"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Authentication::~Authentication()
{
}

bool Native::Ip::Rsvp::Authentication::has_data() const
{
    return challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool Native::Ip::Rsvp::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "neighbor" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Authentication::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Lifetime::has_data() const
{
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Lifetime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Authentication::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Neighbor()
    :
    access_list(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList>())
	,address(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address>())
{
    access_list->parent = this;
    address->parent = this;

    yang_name = "neighbor"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Authentication::Neighbor::~Neighbor()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::has_data() const
{
    return (access_list !=  nullptr && access_list->has_data())
	|| (address !=  nullptr && address->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| (access_list !=  nullptr && access_list->has_operation())
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList>();
        }
        return access_list;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_list != nullptr)
    {
        children["access-list"] = access_list;
    }

    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Authentication::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "address")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::AccessList()
{

    yang_name = "access-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::~AccessList()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::has_data() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<number.size(); index++)
    {
        if(number[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::has_operation() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<number.size(); index++)
    {
        if(number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    if(child_yang_name == "number")
    {
        for(auto const & c : number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number>();
        c->parent = this;
        number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "number")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Name()
    :
    acl_name{YType::str, "acl-name"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
    	,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "name"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::~Name()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::has_data() const
{
    return acl_name.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[acl-name='" <<acl_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "acl-name" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::has_data() const
{
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Number()
    :
    acl_number{YType::uint8, "acl-number"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
    	,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "number"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::~Number()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::has_data() const
{
    return acl_number.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_number.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number" <<"[acl-number='" <<acl_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_number.is_set || is_set(acl_number.yfilter)) leaf_name_data.push_back(acl_number.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-number")
    {
        acl_number = value;
        acl_number.value_namespace = name_space;
        acl_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-number")
    {
        acl_number.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "acl-number" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::has_data() const
{
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Address()
{

    yang_name = "address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::~Address()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Ipv4()
    :
    ipv4_address{YType::str, "ipv4-address"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
    	,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::~Ipv4()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::has_data() const
{
    return ipv4_address.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4-address='" <<ipv4_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "ipv4-address" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::has_data() const
{
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Signalling()
    :
    initial_retransmit_delay{YType::uint16, "initial-retransmit-delay"}
    	,
    fast_local_repair(std::make_shared<Native::Ip::Rsvp::Signalling::FastLocalRepair>())
	,hello(nullptr) // presence node
	,patherr(std::make_shared<Native::Ip::Rsvp::Signalling::Patherr>())
	,rate_limit(nullptr) // presence node
	,refresh(std::make_shared<Native::Ip::Rsvp::Signalling::Refresh>())
{
    fast_local_repair->parent = this;
    patherr->parent = this;
    refresh->parent = this;

    yang_name = "signalling"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::~Signalling()
{
}

bool Native::Ip::Rsvp::Signalling::has_data() const
{
    return initial_retransmit_delay.is_set
	|| (fast_local_repair !=  nullptr && fast_local_repair->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (patherr !=  nullptr && patherr->has_data())
	|| (rate_limit !=  nullptr && rate_limit->has_data())
	|| (refresh !=  nullptr && refresh->has_data());
}

bool Native::Ip::Rsvp::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_retransmit_delay.yfilter)
	|| (fast_local_repair !=  nullptr && fast_local_repair->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (patherr !=  nullptr && patherr->has_operation())
	|| (rate_limit !=  nullptr && rate_limit->has_operation())
	|| (refresh !=  nullptr && refresh->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_retransmit_delay.is_set || is_set(initial_retransmit_delay.yfilter)) leaf_name_data.push_back(initial_retransmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-local-repair")
    {
        if(fast_local_repair == nullptr)
        {
            fast_local_repair = std::make_shared<Native::Ip::Rsvp::Signalling::FastLocalRepair>();
        }
        return fast_local_repair;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Ip::Rsvp::Signalling::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "patherr")
    {
        if(patherr == nullptr)
        {
            patherr = std::make_shared<Native::Ip::Rsvp::Signalling::Patherr>();
        }
        return patherr;
    }

    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Native::Ip::Rsvp::Signalling::RateLimit>();
        }
        return rate_limit;
    }

    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Ip::Rsvp::Signalling::Refresh>();
        }
        return refresh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fast_local_repair != nullptr)
    {
        children["fast-local-repair"] = fast_local_repair;
    }

    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(patherr != nullptr)
    {
        children["patherr"] = patherr;
    }

    if(rate_limit != nullptr)
    {
        children["rate-limit"] = rate_limit;
    }

    if(refresh != nullptr)
    {
        children["refresh"] = refresh;
    }

    return children;
}

void Native::Ip::Rsvp::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-retransmit-delay")
    {
        initial_retransmit_delay = value;
        initial_retransmit_delay.value_namespace = name_space;
        initial_retransmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-retransmit-delay")
    {
        initial_retransmit_delay.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-local-repair" || name == "hello" || name == "patherr" || name == "rate-limit" || name == "refresh" || name == "initial-retransmit-delay")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::FastLocalRepair::FastLocalRepair()
    :
    notifications{YType::uint16, "notifications"},
    rate{YType::uint16, "rate"}
{

    yang_name = "fast-local-repair"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::FastLocalRepair::~FastLocalRepair()
{
}

bool Native::Ip::Rsvp::Signalling::FastLocalRepair::has_data() const
{
    return notifications.is_set
	|| rate.is_set;
}

bool Native::Ip::Rsvp::Signalling::FastLocalRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(notifications.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::FastLocalRepair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::FastLocalRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-local-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::FastLocalRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notifications.is_set || is_set(notifications.yfilter)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::FastLocalRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::FastLocalRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Signalling::FastLocalRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "notifications")
    {
        notifications = value;
        notifications.value_namespace = name_space;
        notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::FastLocalRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "notifications")
    {
        notifications.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::FastLocalRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notifications" || name == "rate")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::Hello()
    :
    bfd{YType::empty, "bfd"},
    statistics{YType::empty, "statistics"}
    	,
    graceful_restart(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart>())
{
    graceful_restart->parent = this;

    yang_name = "hello"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Hello::~Hello()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::has_data() const
{
    return bfd.is_set
	|| statistics.is_set
	|| (graceful_restart !=  nullptr && graceful_restart->has_data());
}

bool Native::Ip::Rsvp::Signalling::Hello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(statistics.yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Hello::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (statistics.is_set || is_set(statistics.yfilter)) leaf_name_data.push_back(statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart>();
        }
        return graceful_restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    return children;
}

void Native::Ip::Rsvp::Signalling::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics")
    {
        statistics = value;
        statistics.value_namespace = name_space;
        statistics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "statistics")
    {
        statistics.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "bfd" || name == "statistics")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::GracefulRestart()
    :
    dscp{YType::uint8, "dscp"}
    	,
    mode(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode>())
	,refresh(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh>())
	,send(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send>())
{
    mode->parent = this;
    refresh->parent = this;
    send->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::~GracefulRestart()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::has_data() const
{
    return dscp.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (refresh !=  nullptr && refresh->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (refresh !=  nullptr && refresh->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh>();
        }
        return refresh;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(refresh != nullptr)
    {
        children["refresh"] = refresh;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "refresh" || name == "send" || name == "dscp")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::Mode()
    :
    full{YType::empty, "full"},
    help_neighbor{YType::empty, "help-neighbor"}
{

    yang_name = "mode"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::~Mode()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::has_data() const
{
    return full.is_set
	|| help_neighbor.is_set;
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(full.yfilter)
	|| ydk::is_set(help_neighbor.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full.is_set || is_set(full.yfilter)) leaf_name_data.push_back(full.get_name_leafdata());
    if (help_neighbor.is_set || is_set(help_neighbor.yfilter)) leaf_name_data.push_back(help_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "full")
    {
        full = value;
        full.value_namespace = name_space;
        full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help-neighbor")
    {
        help_neighbor = value;
        help_neighbor.value_namespace = name_space;
        help_neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "full")
    {
        full.yfilter = yfilter;
    }
    if(value_path == "help-neighbor")
    {
        help_neighbor.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "full" || name == "help-neighbor")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::Refresh()
    :
    interval{YType::uint16, "interval"},
    misses{YType::uint8, "misses"}
{

    yang_name = "refresh"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::~Refresh()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::has_data() const
{
    return interval.is_set
	|| misses.is_set;
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(misses.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "misses")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::Send()
    :
    recovery_time{YType::uint32, "recovery-time"}
{

    yang_name = "send"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::~Send()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::has_data() const
{
    return recovery_time.is_set;
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(recovery_time.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery-time")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Patherr::Patherr()
    :
    state_removal(nullptr) // presence node
{

    yang_name = "patherr"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Patherr::~Patherr()
{
}

bool Native::Ip::Rsvp::Signalling::Patherr::has_data() const
{
    return (state_removal !=  nullptr && state_removal->has_data());
}

bool Native::Ip::Rsvp::Signalling::Patherr::has_operation() const
{
    return is_set(yfilter)
	|| (state_removal !=  nullptr && state_removal->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Patherr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Patherr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "patherr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Patherr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Patherr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-removal")
    {
        if(state_removal == nullptr)
        {
            state_removal = std::make_shared<Native::Ip::Rsvp::Signalling::Patherr::StateRemoval>();
        }
        return state_removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Patherr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(state_removal != nullptr)
    {
        children["state-removal"] = state_removal;
    }

    return children;
}

void Native::Ip::Rsvp::Signalling::Patherr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Signalling::Patherr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Signalling::Patherr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-removal")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::StateRemoval()
    :
    neighbor{YType::uint8, "neighbor"}
{

    yang_name = "state-removal"; yang_parent_name = "patherr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::~StateRemoval()
{
}

bool Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::has_data() const
{
    return neighbor.is_set;
}

bool Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/patherr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::RateLimit::RateLimit()
    :
    burst{YType::uint16, "burst"},
    limit{YType::uint16, "limit"},
    maxsize{YType::uint16, "maxsize"},
    period{YType::uint16, "period"}
{

    yang_name = "rate-limit"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::RateLimit::~RateLimit()
{
}

bool Native::Ip::Rsvp::Signalling::RateLimit::has_data() const
{
    return burst.is_set
	|| limit.is_set
	|| maxsize.is_set
	|| period.is_set;
}

bool Native::Ip::Rsvp::Signalling::RateLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(maxsize.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::RateLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::RateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (maxsize.is_set || is_set(maxsize.yfilter)) leaf_name_data.push_back(maxsize.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Signalling::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxsize")
    {
        maxsize = value;
        maxsize.value_namespace = name_space;
        maxsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "maxsize")
    {
        maxsize.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "burst" || name == "limit" || name == "maxsize" || name == "period")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Refresh::Refresh()
    :
    interval{YType::uint32, "interval"},
    misses{YType::uint8, "misses"}
    	,
    reduction(nullptr) // presence node
{

    yang_name = "refresh"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Refresh::~Refresh()
{
}

bool Native::Ip::Rsvp::Signalling::Refresh::has_data() const
{
    return interval.is_set
	|| misses.is_set
	|| (reduction !=  nullptr && reduction->has_data());
}

bool Native::Ip::Rsvp::Signalling::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(misses.yfilter)
	|| (reduction !=  nullptr && reduction->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Refresh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reduction")
    {
        if(reduction == nullptr)
        {
            reduction = std::make_shared<Native::Ip::Rsvp::Signalling::Refresh::Reduction>();
        }
        return reduction;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reduction != nullptr)
    {
        children["reduction"] = reduction;
    }

    return children;
}

void Native::Ip::Rsvp::Signalling::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reduction" || name == "interval" || name == "misses")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Refresh::Reduction::Reduction()
    :
    ack_delay{YType::uint16, "ack-delay"}
{

    yang_name = "reduction"; yang_parent_name = "refresh"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Refresh::Reduction::~Reduction()
{
}

bool Native::Ip::Rsvp::Signalling::Refresh::Reduction::has_data() const
{
    return ack_delay.is_set;
}

bool Native::Ip::Rsvp::Signalling::Refresh::Reduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack_delay.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/refresh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_delay.is_set || is_set(ack_delay.yfilter)) leaf_name_data.push_back(ack_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Signalling::Refresh::Reduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack-delay")
    {
        ack_delay = value;
        ack_delay.value_namespace = name_space;
        ack_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Refresh::Reduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack-delay")
    {
        ack_delay.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Refresh::Reduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack-delay")
        return true;
    return false;
}

Native::Ip::Scp::Scp()
    :
    server(std::make_shared<Native::Ip::Scp::Server>())
{
    server->parent = this;

    yang_name = "scp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Scp::~Scp()
{
}

bool Native::Ip::Scp::has_data() const
{
    return (server !=  nullptr && server->has_data());
}

bool Native::Ip::Scp::has_operation() const
{
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ip::Scp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Scp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Scp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Scp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ip::Scp::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Scp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Ip::Scp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Scp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Scp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Ip::Scp::Server::Server()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "server"; yang_parent_name = "scp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Scp::Server::~Server()
{
}

bool Native::Ip::Scp::Server::has_data() const
{
    return enable.is_set;
}

bool Native::Ip::Scp::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Ip::Scp::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/scp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Scp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Scp::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Scp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Scp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Scp::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Scp::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Ip::Scp::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Ip::Sla::Sla()
    :
    enable(std::make_shared<Native::Ip::Sla::Enable>())
	,group(std::make_shared<Native::Ip::Sla::Group>())
	,logging(std::make_shared<Native::Ip::Sla::Logging>())
	,responder(nullptr) // presence node
	,server(std::make_shared<Native::Ip::Sla::Server>())
{
    enable->parent = this;
    group->parent = this;
    logging->parent = this;
    server->parent = this;

    yang_name = "sla"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::~Sla()
{
}

bool Native::Ip::Sla::has_data() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reaction_configuration.size(); index++)
    {
        if(reaction_configuration[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<schedule.size(); index++)
    {
        if(schedule[index]->has_data())
            return true;
    }
    return (enable !=  nullptr && enable->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (responder !=  nullptr && responder->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Ip::Sla::has_operation() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reaction_configuration.size(); index++)
    {
        if(reaction_configuration[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<schedule.size(); index++)
    {
        if(schedule[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (enable !=  nullptr && enable->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (responder !=  nullptr && responder->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ip::Sla::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sla:sla";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Ip::Sla::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "entry")
    {
        for(auto const & c : entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Entry>();
        c->parent = this;
        entry.push_back(c);
        return c;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Ip::Sla::Group>();
        }
        return group;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Ip::Sla::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "reaction-configuration")
    {
        for(auto const & c : reaction_configuration)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::ReactionConfiguration>();
        c->parent = this;
        reaction_configuration.push_back(c);
        return c;
    }

    if(child_yang_name == "responder")
    {
        if(responder == nullptr)
        {
            responder = std::make_shared<Native::Ip::Sla::Responder>();
        }
        return responder;
    }

    if(child_yang_name == "schedule")
    {
        for(auto const & c : schedule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Schedule>();
        c->parent = this;
        schedule.push_back(c);
        return c;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ip::Sla::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    for (auto const & c : entry)
    {
        children[c->get_segment_path()] = c;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    for (auto const & c : reaction_configuration)
    {
        children[c->get_segment_path()] = c;
    }

    if(responder != nullptr)
    {
        children["responder"] = responder;
    }

    for (auto const & c : schedule)
    {
        children[c->get_segment_path()] = c;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Ip::Sla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entry" || name == "group" || name == "logging" || name == "reaction-configuration" || name == "responder" || name == "schedule" || name == "server")
        return true;
    return false;
}

Native::Ip::Sla::Enable::Enable()
    :
    reaction_alerts{YType::empty, "reaction-alerts"}
{

    yang_name = "enable"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Enable::~Enable()
{
}

bool Native::Ip::Sla::Enable::has_data() const
{
    return reaction_alerts.is_set;
}

bool Native::Ip::Sla::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reaction_alerts.yfilter);
}

std::string Native::Ip::Sla::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reaction_alerts.is_set || is_set(reaction_alerts.yfilter)) leaf_name_data.push_back(reaction_alerts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reaction-alerts")
    {
        reaction_alerts = value;
        reaction_alerts.value_namespace = name_space;
        reaction_alerts.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reaction-alerts")
    {
        reaction_alerts.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reaction-alerts")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Entry()
    :
    number{YType::uint32, "number"}
    	,
    dhcp(std::make_shared<Native::Ip::Sla::Entry::Dhcp>())
	,http(std::make_shared<Native::Ip::Sla::Entry::Http>())
	,icmp_echo(std::make_shared<Native::Ip::Sla::Entry::IcmpEcho>())
	,path_echo(std::make_shared<Native::Ip::Sla::Entry::PathEcho>())
	,path_jitter(std::make_shared<Native::Ip::Sla::Entry::PathJitter>())
	,udp_echo(std::make_shared<Native::Ip::Sla::Entry::UdpEcho>())
	,udp_jitter(std::make_shared<Native::Ip::Sla::Entry::UdpJitter>())
{
    dhcp->parent = this;
    http->parent = this;
    icmp_echo->parent = this;
    path_echo->parent = this;
    path_jitter->parent = this;
    udp_echo->parent = this;
    udp_jitter->parent = this;

    yang_name = "entry"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Entry::~Entry()
{
}

bool Native::Ip::Sla::Entry::has_data() const
{
    return number.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (icmp_echo !=  nullptr && icmp_echo->has_data())
	|| (path_echo !=  nullptr && path_echo->has_data())
	|| (path_jitter !=  nullptr && path_jitter->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data())
	|| (udp_jitter !=  nullptr && udp_jitter->has_data());
}

bool Native::Ip::Sla::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (icmp_echo !=  nullptr && icmp_echo->has_operation())
	|| (path_echo !=  nullptr && path_echo->has_operation())
	|| (path_jitter !=  nullptr && path_jitter->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation())
	|| (udp_jitter !=  nullptr && udp_jitter->has_operation());
}

std::string Native::Ip::Sla::Entry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Ip::Sla::Entry::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Ip::Sla::Entry::Http>();
        }
        return http;
    }

    if(child_yang_name == "icmp-echo")
    {
        if(icmp_echo == nullptr)
        {
            icmp_echo = std::make_shared<Native::Ip::Sla::Entry::IcmpEcho>();
        }
        return icmp_echo;
    }

    if(child_yang_name == "path-echo")
    {
        if(path_echo == nullptr)
        {
            path_echo = std::make_shared<Native::Ip::Sla::Entry::PathEcho>();
        }
        return path_echo;
    }

    if(child_yang_name == "path-jitter")
    {
        if(path_jitter == nullptr)
        {
            path_jitter = std::make_shared<Native::Ip::Sla::Entry::PathJitter>();
        }
        return path_jitter;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::Ip::Sla::Entry::UdpEcho>();
        }
        return udp_echo;
    }

    if(child_yang_name == "udp-jitter")
    {
        if(udp_jitter == nullptr)
        {
            udp_jitter = std::make_shared<Native::Ip::Sla::Entry::UdpJitter>();
        }
        return udp_jitter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(http != nullptr)
    {
        children["http"] = http;
    }

    if(icmp_echo != nullptr)
    {
        children["icmp-echo"] = icmp_echo;
    }

    if(path_echo != nullptr)
    {
        children["path-echo"] = path_echo;
    }

    if(path_jitter != nullptr)
    {
        children["path-jitter"] = path_jitter;
    }

    if(udp_echo != nullptr)
    {
        children["udp-echo"] = udp_echo;
    }

    if(udp_jitter != nullptr)
    {
        children["udp-jitter"] = udp_jitter;
    }

    return children;
}

void Native::Ip::Sla::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "http" || name == "icmp-echo" || name == "path-echo" || name == "path-jitter" || name == "udp-echo" || name == "udp-jitter" || name == "number")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Dhcp::Dhcp()
    :
    dst_ip{YType::str, "dst-ip"},
    source_ip{YType::str, "source-ip"}
{

    yang_name = "dhcp"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::Dhcp::~Dhcp()
{
}

bool Native::Ip::Sla::Entry::Dhcp::has_data() const
{
    return dst_ip.is_set
	|| source_ip.is_set;
}

bool Native::Ip::Sla::Entry::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string Native::Ip::Sla::Entry::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-ip" || name == "source-ip")
        return true;
    return false;
}

const Enum::YLeaf Native::Ip::Multicast::Multipath::SGHash::basic {0, "basic"};
const Enum::YLeaf Native::Ip::Multicast::Multipath::SGHash::next_hop_based {1, "next-hop-based"};

const Enum::YLeaf Native::Ip::Multicast::Vrf::Multipath::SGHash::basic {0, "basic"};
const Enum::YLeaf Native::Ip::Multicast::Vrf::Multipath::SGHash::next_hop_based {1, "next-hop-based"};

const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Proto::tcp {0, "tcp"};
const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Proto::udp {1, "udp"};

const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::Proto::tcp {0, "tcp"};
const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::Proto::udp {1, "udp"};

const Enum::YLeaf Native::Ip::Nat::Pool::Type::match_host {0, "match-host"};
const Enum::YLeaf Native::Ip::Nat::Pool::Type::rotary {1, "rotary"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::aol_group {0, "aol-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::apple_group {1, "apple-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::apple_talk_group {2, "apple-talk-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::banyan_group {3, "banyan-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::bittorrent_group {4, "bittorrent-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::capwap_group {5, "capwap-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::cisco_jabber_group {6, "cisco-jabber-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::cisco_phone_group {7, "cisco-phone-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::corba_group {8, "corba-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::dameware_group {9, "dameware-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::edonkey_emule_group {10, "edonkey-emule-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::espn_group {11, "espn-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::fasttrack_group {12, "fasttrack-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::flash_group {13, "flash-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::fring_group {14, "fring-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::ftp_group {15, "ftp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::gnutella_group {16, "gnutella-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::google_group {17, "google-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::gtalk_group {18, "gtalk-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::icq_group {19, "icq-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::imap_group {20, "imap-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::ipsec_group {21, "ipsec-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::irc_group {22, "irc-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::kakao_group {23, "kakao-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::kerberos_group {24, "kerberos-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::ldap_group {25, "ldap-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::ms_cloud_group {26, "ms-cloud-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::ms_crm_group {27, "ms-crm-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::ms_lync_group {28, "ms-lync-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::msn_messenger_group {29, "msn-messenger-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::netbios_group {30, "netbios-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::nntp_group {31, "nntp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::npmp_group {32, "npmp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::other {33, "other"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::pop3_group {34, "pop3-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::prm_group {35, "prm-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::qq_group {36, "qq-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::skype_group {37, "skype-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::smtp_group {38, "smtp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::snmp_group {39, "snmp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::sqlsvr_group {40, "sqlsvr-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::stun_group {41, "stun-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::telepresence_group {42, "telepresence-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::tftp_group {43, "tftp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::vmware_group {44, "vmware-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::vnc_group {45, "vnc-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::wap_group {46, "wap-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::webex_group {47, "webex-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::xns_xerox_group {48, "xns-xerox-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::xunlei_group {49, "xunlei-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::yahoo_group {50, "yahoo-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::yahoo_messenger_group {51, "yahoo-messenger-group"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::BusinessRelevance::business_irrelevant {0, "business-irrelevant"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::BusinessRelevance::business_relevant {1, "business-relevant"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::BusinessRelevance::default_ {2, "default"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::anonymizers {0, "anonymizers"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::backup_and_storage {1, "backup-and-storage"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::browsing {2, "browsing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::business_and_productivity_tools {3, "business-and-productivity-tools"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::consumer_file_sharing {4, "consumer-file-sharing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::consumer_internet {5, "consumer-internet"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::consumer_messaging {6, "consumer-messaging"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::consumer_streaming {7, "consumer-streaming"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::database {8, "database"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::email {9, "email"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::epayement {10, "epayement"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::file_sharing {11, "file-sharing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::gaming {12, "gaming"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::industrial_protocols {13, "industrial-protocols"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::instant_messaging {14, "instant-messaging"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::inter_process_rpc {15, "inter-process-rpc"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::internet_security {16, "internet-security"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::layer3_over_ip {17, "layer3-over-ip"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::location_based_services {18, "location-based-services"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::net_admin {19, "net-admin"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::newsgroup {20, "newsgroup"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::other {21, "other"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::social_networking {22, "social-networking"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::software_updates {23, "software-updates"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::trojan {24, "trojan"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::voice_and_video {25, "voice-and-video"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Encrypted::encrypted_no {0, "encrypted-no"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Encrypted::encrypted_unassigned {1, "encrypted-unassigned"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Encrypted::encrypted_yes {2, "encrypted-yes"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::authentication_services {0, "authentication-services"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::backup_systems {1, "backup-systems"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::consumer_audio_streaming {2, "consumer-audio-streaming"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::consumer_cloud_storage {3, "consumer-cloud-storage"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::consumer_multimedia_messaging {4, "consumer-multimedia-messaging"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::consumer_video_streaming {5, "consumer-video-streaming"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::consumer_web_browsing {6, "consumer-web-browsing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::control_and_signaling {7, "control-and-signaling"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::desktop_virtualization {8, "desktop-virtualization"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_cloud_data_storage {9, "enterprise-cloud-data-storage"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_cloud_services {10, "enterprise-cloud-services"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_data_center_storage {11, "enterprise-data-center-storage"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_media_conferencing {12, "enterprise-media-conferencing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_realtime_apps {13, "enterprise-realtime-apps"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_rich_media_content {14, "enterprise-rich-media-content"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_sw_deployment_tools {15, "enterprise-sw-deployment-tools"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_transactional_apps {16, "enterprise-transactional-apps"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_video_broadcast {17, "enterprise-video-broadcast"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_voice_collaboration {18, "enterprise-voice-collaboration"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::file_transfer {19, "file-transfer"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::naming_services {20, "naming-services"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::network_management {21, "network-management"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::os_updates {22, "os-updates"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::other {23, "other"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::p2p_file_transfer {24, "p2p-file-transfer"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::p2p_networking {25, "p2p-networking"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::remote_access_terminal {26, "remote-access-terminal"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::routing_protocol {27, "routing-protocol"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::tunneling_protocols {28, "tunneling-protocols"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::broadcast_video {0, "broadcast-video"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::bulk_data {1, "bulk-data"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::multimedia_conferencing {2, "multimedia-conferencing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::multimedia_streaming {3, "multimedia-streaming"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::network_control {4, "network-control"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::ops_admin_mgmt {5, "ops-admin-mgmt"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::real_time_interactive {6, "real-time-interactive"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::signaling {7, "signaling"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::transactional_data {8, "transactional-data"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::voip_telephony {9, "voip-telephony"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Tunnel::tunnel_no {0, "tunnel-no"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Tunnel::tunnel_unassigned {1, "tunnel-unassigned"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Tunnel::tunnel_yes {2, "tunnel-yes"};

const Enum::YLeaf Native::Ip::Pim::SptThreshold::How::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::SptThreshold::How::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::Pim::SptThresholdContainer::SptThreshold::How::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::SptThresholdContainer::SptThreshold::How::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::Pim::Vrf::SptThreshold::How::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::Vrf::SptThreshold::How::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::How::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::How::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::Fwd::Null0 {0, "Null0"};

const Enum::YLeaf Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::Fwd::Null0 {0, "Null0"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Type::sha_1 {1, "sha-1"};


}
}

