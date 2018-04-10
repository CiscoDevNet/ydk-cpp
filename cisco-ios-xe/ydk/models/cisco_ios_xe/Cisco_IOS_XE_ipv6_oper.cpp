
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_ipv6_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_ipv6_oper {

Ipv6Data::Ipv6Data()
{

    yang_name = "ipv6-data"; yang_parent_name = "Cisco-IOS-XE-ipv6-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Ipv6Data::~Ipv6Data()
{
}

bool Ipv6Data::has_data() const
{
    for (std::size_t index=0; index<nd6_info.size(); index++)
    {
        if(nd6_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Data::has_operation() const
{
    for (std::size_t index=0; index<nd6_info.size(); index++)
    {
        if(nd6_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ipv6-oper:ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nd6-info")
    {
        auto c = std::make_shared<Ipv6Data::Nd6Info>();
        c->parent = this;
        nd6_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nd6_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ipv6Data::clone_ptr() const
{
    return std::make_shared<Ipv6Data>();
}

std::string Ipv6Data::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Ipv6Data::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Ipv6Data::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipv6Data::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nd6-info")
        return true;
    return false;
}

Ipv6Data::Nd6Info::Nd6Info()
    :
    vrf_name{YType::str, "vrf-name"},
    if_name{YType::str, "if-name"},
    ip{YType::str, "ip"},
    mac_address{YType::str, "mac-address"},
    state{YType::enumeration, "state"},
    idle_timer{YType::uint32, "idle-timer"},
    uptime{YType::uint32, "uptime"}
{

    yang_name = "nd6-info"; yang_parent_name = "ipv6-data"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv6Data::Nd6Info::~Nd6Info()
{
}

bool Ipv6Data::Nd6Info::has_data() const
{
    return vrf_name.is_set
	|| if_name.is_set
	|| ip.is_set
	|| mac_address.is_set
	|| state.is_set
	|| idle_timer.is_set
	|| uptime.is_set;
}

bool Ipv6Data::Nd6Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(if_name.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(idle_timer.yfilter)
	|| ydk::is_set(uptime.yfilter);
}

std::string Ipv6Data::Nd6Info::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ipv6-oper:ipv6-data/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6Data::Nd6Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd6-info" <<"[vrf-name='" <<vrf_name <<"']" <<"[if-name='" <<if_name <<"']" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Data::Nd6Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (if_name.is_set || is_set(if_name.yfilter)) leaf_name_data.push_back(if_name.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (idle_timer.is_set || is_set(idle_timer.yfilter)) leaf_name_data.push_back(idle_timer.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Data::Nd6Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Data::Nd6Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Data::Nd6Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-name")
    {
        if_name = value;
        if_name.value_namespace = name_space;
        if_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-timer")
    {
        idle_timer = value;
        idle_timer.value_namespace = name_space;
        idle_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Data::Nd6Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "if-name")
    {
        if_name.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "idle-timer")
    {
        idle_timer.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Ipv6Data::Nd6Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "if-name" || name == "ip" || name == "mac-address" || name == "state" || name == "idle-timer" || name == "uptime")
        return true;
    return false;
}

const Enum::YLeaf Ipv6NdTdlState::ipv6_nd_incomplete {0, "ipv6-nd-incomplete"};
const Enum::YLeaf Ipv6NdTdlState::ipv6_nd_reachable {1, "ipv6-nd-reachable"};
const Enum::YLeaf Ipv6NdTdlState::ipv6_nd_stale {2, "ipv6-nd-stale"};
const Enum::YLeaf Ipv6NdTdlState::ipv6_nd_glean {3, "ipv6-nd-glean"};
const Enum::YLeaf Ipv6NdTdlState::ipv6_nd_delay {4, "ipv6-nd-delay"};
const Enum::YLeaf Ipv6NdTdlState::ipv6_nd_probe {5, "ipv6-nd-probe"};
const Enum::YLeaf Ipv6NdTdlState::ipv6_nd_delete {6, "ipv6-nd-delete"};


}
}

