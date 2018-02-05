
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_serg_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_serg_cfg {

SessionRedundancy::SessionRedundancy()
    :
    redundancy_disable{YType::empty, "redundancy-disable"},
    enable{YType::empty, "enable"},
    source_interface{YType::str, "source-interface"},
    preferred_role{YType::enumeration, "preferred-role"},
    hold_timer{YType::uint32, "hold-timer"}
    	,
    groups(std::make_shared<SessionRedundancy::Groups>())
	,revertive_timer(std::make_shared<SessionRedundancy::RevertiveTimer>())
{
    groups->parent = this;
    revertive_timer->parent = this;

    yang_name = "session-redundancy"; yang_parent_name = "Cisco-IOS-XR-infra-serg-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

SessionRedundancy::~SessionRedundancy()
{
}

bool SessionRedundancy::has_data() const
{
    return redundancy_disable.is_set
	|| enable.is_set
	|| source_interface.is_set
	|| preferred_role.is_set
	|| hold_timer.is_set
	|| (groups !=  nullptr && groups->has_data())
	|| (revertive_timer !=  nullptr && revertive_timer->has_data());
}

bool SessionRedundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redundancy_disable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(preferred_role.yfilter)
	|| ydk::is_set(hold_timer.yfilter)
	|| (groups !=  nullptr && groups->has_operation())
	|| (revertive_timer !=  nullptr && revertive_timer->has_operation());
}

std::string SessionRedundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-serg-cfg:session-redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy_disable.is_set || is_set(redundancy_disable.yfilter)) leaf_name_data.push_back(redundancy_disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (preferred_role.is_set || is_set(preferred_role.yfilter)) leaf_name_data.push_back(preferred_role.get_name_leafdata());
    if (hold_timer.is_set || is_set(hold_timer.yfilter)) leaf_name_data.push_back(hold_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SessionRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<SessionRedundancy::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "revertive-timer")
    {
        if(revertive_timer == nullptr)
        {
            revertive_timer = std::make_shared<SessionRedundancy::RevertiveTimer>();
        }
        return revertive_timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    if(revertive_timer != nullptr)
    {
        children["revertive-timer"] = revertive_timer;
    }

    return children;
}

void SessionRedundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redundancy-disable")
    {
        redundancy_disable = value;
        redundancy_disable.value_namespace = name_space;
        redundancy_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-role")
    {
        preferred_role = value;
        preferred_role.value_namespace = name_space;
        preferred_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-timer")
    {
        hold_timer = value;
        hold_timer.value_namespace = name_space;
        hold_timer.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redundancy-disable")
    {
        redundancy_disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "preferred-role")
    {
        preferred_role.yfilter = yfilter;
    }
    if(value_path == "hold-timer")
    {
        hold_timer.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> SessionRedundancy::clone_ptr() const
{
    return std::make_shared<SessionRedundancy>();
}

std::string SessionRedundancy::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SessionRedundancy::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SessionRedundancy::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SessionRedundancy::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SessionRedundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "revertive-timer" || name == "redundancy-disable" || name == "enable" || name == "source-interface" || name == "preferred-role" || name == "hold-timer")
        return true;
    return false;
}

SessionRedundancy::Groups::Groups()
{

    yang_name = "groups"; yang_parent_name = "session-redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

SessionRedundancy::Groups::~Groups()
{
}

bool SessionRedundancy::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancy::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SessionRedundancy::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-serg-cfg:session-redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string SessionRedundancy::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancy::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SessionRedundancy::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto c = std::make_shared<SessionRedundancy::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancy::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SessionRedundancy::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionRedundancy::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SessionRedundancy::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

SessionRedundancy::Groups::Group::Group()
    :
    group_id{YType::uint32, "group-id"},
    core_tracking_object{YType::str, "core-tracking-object"},
    disable_tracking_object{YType::empty, "disable-tracking-object"},
    redundancy_disable{YType::empty, "redundancy-disable"},
    enable{YType::empty, "enable"},
    description{YType::str, "description"},
    access_tracking_object{YType::str, "access-tracking-object"},
    preferred_role{YType::enumeration, "preferred-role"},
    hold_timer{YType::uint32, "hold-timer"}
    	,
    peer(std::make_shared<SessionRedundancy::Groups::Group::Peer>())
	,revertive_timer(std::make_shared<SessionRedundancy::Groups::Group::RevertiveTimer>())
	,interface_list(std::make_shared<SessionRedundancy::Groups::Group::InterfaceList>())
{
    peer->parent = this;
    revertive_timer->parent = this;
    interface_list->parent = this;

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false;
}

SessionRedundancy::Groups::Group::~Group()
{
}

bool SessionRedundancy::Groups::Group::has_data() const
{
    return group_id.is_set
	|| core_tracking_object.is_set
	|| disable_tracking_object.is_set
	|| redundancy_disable.is_set
	|| enable.is_set
	|| description.is_set
	|| access_tracking_object.is_set
	|| preferred_role.is_set
	|| hold_timer.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (revertive_timer !=  nullptr && revertive_timer->has_data())
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool SessionRedundancy::Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(core_tracking_object.yfilter)
	|| ydk::is_set(disable_tracking_object.yfilter)
	|| ydk::is_set(redundancy_disable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(access_tracking_object.yfilter)
	|| ydk::is_set(preferred_role.yfilter)
	|| ydk::is_set(hold_timer.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (revertive_timer !=  nullptr && revertive_timer->has_operation())
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string SessionRedundancy::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-serg-cfg:session-redundancy/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string SessionRedundancy::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-id='" <<group_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancy::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (core_tracking_object.is_set || is_set(core_tracking_object.yfilter)) leaf_name_data.push_back(core_tracking_object.get_name_leafdata());
    if (disable_tracking_object.is_set || is_set(disable_tracking_object.yfilter)) leaf_name_data.push_back(disable_tracking_object.get_name_leafdata());
    if (redundancy_disable.is_set || is_set(redundancy_disable.yfilter)) leaf_name_data.push_back(redundancy_disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (access_tracking_object.is_set || is_set(access_tracking_object.yfilter)) leaf_name_data.push_back(access_tracking_object.get_name_leafdata());
    if (preferred_role.is_set || is_set(preferred_role.yfilter)) leaf_name_data.push_back(preferred_role.get_name_leafdata());
    if (hold_timer.is_set || is_set(hold_timer.yfilter)) leaf_name_data.push_back(hold_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<SessionRedundancy::Groups::Group::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "revertive-timer")
    {
        if(revertive_timer == nullptr)
        {
            revertive_timer = std::make_shared<SessionRedundancy::Groups::Group::RevertiveTimer>();
        }
        return revertive_timer;
    }

    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<SessionRedundancy::Groups::Group::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancy::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(revertive_timer != nullptr)
    {
        children["revertive-timer"] = revertive_timer;
    }

    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void SessionRedundancy::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-tracking-object")
    {
        core_tracking_object = value;
        core_tracking_object.value_namespace = name_space;
        core_tracking_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-tracking-object")
    {
        disable_tracking_object = value;
        disable_tracking_object.value_namespace = name_space;
        disable_tracking_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-disable")
    {
        redundancy_disable = value;
        redundancy_disable.value_namespace = name_space;
        redundancy_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-tracking-object")
    {
        access_tracking_object = value;
        access_tracking_object.value_namespace = name_space;
        access_tracking_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-role")
    {
        preferred_role = value;
        preferred_role.value_namespace = name_space;
        preferred_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-timer")
    {
        hold_timer = value;
        hold_timer.value_namespace = name_space;
        hold_timer.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancy::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "core-tracking-object")
    {
        core_tracking_object.yfilter = yfilter;
    }
    if(value_path == "disable-tracking-object")
    {
        disable_tracking_object.yfilter = yfilter;
    }
    if(value_path == "redundancy-disable")
    {
        redundancy_disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "access-tracking-object")
    {
        access_tracking_object.yfilter = yfilter;
    }
    if(value_path == "preferred-role")
    {
        preferred_role.yfilter = yfilter;
    }
    if(value_path == "hold-timer")
    {
        hold_timer.yfilter = yfilter;
    }
}

bool SessionRedundancy::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "revertive-timer" || name == "interface-list" || name == "group-id" || name == "core-tracking-object" || name == "disable-tracking-object" || name == "redundancy-disable" || name == "enable" || name == "description" || name == "access-tracking-object" || name == "preferred-role" || name == "hold-timer")
        return true;
    return false;
}

SessionRedundancy::Groups::Group::Peer::Peer()
    :
    ipaddress(std::make_shared<SessionRedundancy::Groups::Group::Peer::Ipaddress>())
{
    ipaddress->parent = this;

    yang_name = "peer"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

SessionRedundancy::Groups::Group::Peer::~Peer()
{
}

bool SessionRedundancy::Groups::Group::Peer::has_data() const
{
    return (ipaddress !=  nullptr && ipaddress->has_data());
}

bool SessionRedundancy::Groups::Group::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (ipaddress !=  nullptr && ipaddress->has_operation());
}

std::string SessionRedundancy::Groups::Group::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancy::Groups::Group::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipaddress")
    {
        if(ipaddress == nullptr)
        {
            ipaddress = std::make_shared<SessionRedundancy::Groups::Group::Peer::Ipaddress>();
        }
        return ipaddress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancy::Groups::Group::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipaddress != nullptr)
    {
        children["ipaddress"] = ipaddress;
    }

    return children;
}

void SessionRedundancy::Groups::Group::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionRedundancy::Groups::Group::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SessionRedundancy::Groups::Group::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipaddress")
        return true;
    return false;
}

SessionRedundancy::Groups::Group::Peer::Ipaddress::Ipaddress()
    :
    address_family{YType::enumeration, "address-family"},
    prefix_string{YType::str, "prefix-string"}
{

    yang_name = "ipaddress"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

SessionRedundancy::Groups::Group::Peer::Ipaddress::~Ipaddress()
{
}

bool SessionRedundancy::Groups::Group::Peer::Ipaddress::has_data() const
{
    return address_family.is_set
	|| prefix_string.is_set;
}

bool SessionRedundancy::Groups::Group::Peer::Ipaddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(prefix_string.yfilter);
}

std::string SessionRedundancy::Groups::Group::Peer::Ipaddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipaddress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancy::Groups::Group::Peer::Ipaddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (prefix_string.is_set || is_set(prefix_string.yfilter)) leaf_name_data.push_back(prefix_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::Peer::Ipaddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancy::Groups::Group::Peer::Ipaddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SessionRedundancy::Groups::Group::Peer::Ipaddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-string")
    {
        prefix_string = value;
        prefix_string.value_namespace = name_space;
        prefix_string.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancy::Groups::Group::Peer::Ipaddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "prefix-string")
    {
        prefix_string.yfilter = yfilter;
    }
}

bool SessionRedundancy::Groups::Group::Peer::Ipaddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "prefix-string")
        return true;
    return false;
}

SessionRedundancy::Groups::Group::RevertiveTimer::RevertiveTimer()
    :
    max_value{YType::uint32, "max-value"},
    value_{YType::uint32, "value"}
{

    yang_name = "revertive-timer"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

SessionRedundancy::Groups::Group::RevertiveTimer::~RevertiveTimer()
{
}

bool SessionRedundancy::Groups::Group::RevertiveTimer::has_data() const
{
    return max_value.is_set
	|| value_.is_set;
}

bool SessionRedundancy::Groups::Group::RevertiveTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_value.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string SessionRedundancy::Groups::Group::RevertiveTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revertive-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancy::Groups::Group::RevertiveTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_value.is_set || is_set(max_value.yfilter)) leaf_name_data.push_back(max_value.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::RevertiveTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancy::Groups::Group::RevertiveTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SessionRedundancy::Groups::Group::RevertiveTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-value")
    {
        max_value = value;
        max_value.value_namespace = name_space;
        max_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancy::Groups::Group::RevertiveTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-value")
    {
        max_value.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool SessionRedundancy::Groups::Group::RevertiveTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-value" || name == "value")
        return true;
    return false;
}

SessionRedundancy::Groups::Group::InterfaceList::InterfaceList()
    :
    enable{YType::empty, "enable"}
    	,
    interface_ranges(std::make_shared<SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges>())
	,interfaces(std::make_shared<SessionRedundancy::Groups::Group::InterfaceList::Interfaces>())
{
    interface_ranges->parent = this;
    interfaces->parent = this;

    yang_name = "interface-list"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

SessionRedundancy::Groups::Group::InterfaceList::~InterfaceList()
{
}

bool SessionRedundancy::Groups::Group::InterfaceList::has_data() const
{
    return enable.is_set
	|| (interface_ranges !=  nullptr && interface_ranges->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool SessionRedundancy::Groups::Group::InterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (interface_ranges !=  nullptr && interface_ranges->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string SessionRedundancy::Groups::Group::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancy::Groups::Group::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-ranges")
    {
        if(interface_ranges == nullptr)
        {
            interface_ranges = std::make_shared<SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges>();
        }
        return interface_ranges;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<SessionRedundancy::Groups::Group::InterfaceList::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancy::Groups::Group::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_ranges != nullptr)
    {
        children["interface-ranges"] = interface_ranges;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void SessionRedundancy::Groups::Group::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancy::Groups::Group::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool SessionRedundancy::Groups::Group::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-ranges" || name == "interfaces" || name == "enable")
        return true;
    return false;
}

SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRanges()
{

    yang_name = "interface-ranges"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::~InterfaceRanges()
{
}

bool SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::has_data() const
{
    for (std::size_t index=0; index<interface_range.size(); index++)
    {
        if(interface_range[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::has_operation() const
{
    for (std::size_t index=0; index<interface_range.size(); index++)
    {
        if(interface_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-range")
    {
        auto c = std::make_shared<SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange>();
        c->parent = this;
        interface_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-range")
        return true;
    return false;
}

SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::InterfaceRange()
    :
    interface_name{YType::str, "interface-name"},
    sub_interface_range_start{YType::uint32, "sub-interface-range-start"},
    sub_interface_range_end{YType::uint32, "sub-interface-range-end"},
    interface_id_range_start{YType::uint32, "interface-id-range-start"},
    interface_id_range_end{YType::uint32, "interface-id-range-end"}
{

    yang_name = "interface-range"; yang_parent_name = "interface-ranges"; is_top_level_class = false; has_list_ancestor = true;
}

SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::~InterfaceRange()
{
}

bool SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::has_data() const
{
    return interface_name.is_set
	|| sub_interface_range_start.is_set
	|| sub_interface_range_end.is_set
	|| interface_id_range_start.is_set
	|| interface_id_range_end.is_set;
}

bool SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(sub_interface_range_start.yfilter)
	|| ydk::is_set(sub_interface_range_end.yfilter)
	|| ydk::is_set(interface_id_range_start.yfilter)
	|| ydk::is_set(interface_id_range_end.yfilter);
}

std::string SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-range" <<"[interface-name='" <<interface_name <<"']" <<"[sub-interface-range-start='" <<sub_interface_range_start <<"']" <<"[sub-interface-range-end='" <<sub_interface_range_end <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sub_interface_range_start.is_set || is_set(sub_interface_range_start.yfilter)) leaf_name_data.push_back(sub_interface_range_start.get_name_leafdata());
    if (sub_interface_range_end.is_set || is_set(sub_interface_range_end.yfilter)) leaf_name_data.push_back(sub_interface_range_end.get_name_leafdata());
    if (interface_id_range_start.is_set || is_set(interface_id_range_start.yfilter)) leaf_name_data.push_back(interface_id_range_start.get_name_leafdata());
    if (interface_id_range_end.is_set || is_set(interface_id_range_end.yfilter)) leaf_name_data.push_back(interface_id_range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-range-start")
    {
        sub_interface_range_start = value;
        sub_interface_range_start.value_namespace = name_space;
        sub_interface_range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-range-end")
    {
        sub_interface_range_end = value;
        sub_interface_range_end.value_namespace = name_space;
        sub_interface_range_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id-range-start")
    {
        interface_id_range_start = value;
        interface_id_range_start.value_namespace = name_space;
        interface_id_range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id-range-end")
    {
        interface_id_range_end = value;
        interface_id_range_end.value_namespace = name_space;
        interface_id_range_end.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "sub-interface-range-start")
    {
        sub_interface_range_start.yfilter = yfilter;
    }
    if(value_path == "sub-interface-range-end")
    {
        sub_interface_range_end.yfilter = yfilter;
    }
    if(value_path == "interface-id-range-start")
    {
        interface_id_range_start.yfilter = yfilter;
    }
    if(value_path == "interface-id-range-end")
    {
        interface_id_range_end.yfilter = yfilter;
    }
}

bool SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "sub-interface-range-start" || name == "sub-interface-range-end" || name == "interface-id-range-start" || name == "interface-id-range-end")
        return true;
    return false;
}

SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

SessionRedundancy::Groups::Group::InterfaceList::Interfaces::~Interfaces()
{
}

bool SessionRedundancy::Groups::Group::InterfaceList::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancy::Groups::Group::InterfaceList::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SessionRedundancy::Groups::Group::InterfaceList::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancy::Groups::Group::InterfaceList::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::InterfaceList::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancy::Groups::Group::InterfaceList::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SessionRedundancy::Groups::Group::InterfaceList::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionRedundancy::Groups::Group::InterfaceList::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SessionRedundancy::Groups::Group::InterfaceList::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_id{YType::uint32, "interface-id"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::~Interface()
{
}

bool SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| interface_id.is_set;
}

bool SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-id")
        return true;
    return false;
}

SessionRedundancy::RevertiveTimer::RevertiveTimer()
    :
    max_value{YType::uint32, "max-value"},
    value_{YType::uint32, "value"}
{

    yang_name = "revertive-timer"; yang_parent_name = "session-redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

SessionRedundancy::RevertiveTimer::~RevertiveTimer()
{
}

bool SessionRedundancy::RevertiveTimer::has_data() const
{
    return max_value.is_set
	|| value_.is_set;
}

bool SessionRedundancy::RevertiveTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_value.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string SessionRedundancy::RevertiveTimer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-serg-cfg:session-redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string SessionRedundancy::RevertiveTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revertive-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancy::RevertiveTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_value.is_set || is_set(max_value.yfilter)) leaf_name_data.push_back(max_value.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SessionRedundancy::RevertiveTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancy::RevertiveTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SessionRedundancy::RevertiveTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-value")
    {
        max_value = value;
        max_value.value_namespace = name_space;
        max_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancy::RevertiveTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-value")
    {
        max_value.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool SessionRedundancy::RevertiveTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-value" || name == "value")
        return true;
    return false;
}

const Enum::YLeaf SessionRedundancyGroupRole::master {1, "master"};
const Enum::YLeaf SessionRedundancyGroupRole::slave {2, "slave"};

const Enum::YLeaf SergAddrFamily::ipv4 {2, "ipv4"};
const Enum::YLeaf SergAddrFamily::ipv6 {10, "ipv6"};


}
}

