
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_subscriber_srg_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_subscriber_srg_cfg {

SubscriberRedundancy::SubscriberRedundancy()
    :
    enable{YType::empty, "enable"},
    hold_timer{YType::uint32, "hold-timer"},
    preferred_role{YType::enumeration, "preferred-role"},
    redundancy_disable{YType::empty, "redundancy-disable"},
    slave_mode{YType::enumeration, "slave-mode"},
    source_interface{YType::str, "source-interface"},
    virtual_mac_prefix{YType::str, "virtual-mac-prefix"}
    	,
    groups(std::make_shared<SubscriberRedundancy::Groups>())
	,revertive_timer(std::make_shared<SubscriberRedundancy::RevertiveTimer>())
{
    groups->parent = this;

    revertive_timer->parent = this;

    yang_name = "subscriber-redundancy"; yang_parent_name = "Cisco-IOS-XR-subscriber-srg-cfg";
}

SubscriberRedundancy::~SubscriberRedundancy()
{
}

bool SubscriberRedundancy::has_data() const
{
    return enable.is_set
	|| hold_timer.is_set
	|| preferred_role.is_set
	|| redundancy_disable.is_set
	|| slave_mode.is_set
	|| source_interface.is_set
	|| virtual_mac_prefix.is_set
	|| (groups !=  nullptr && groups->has_data())
	|| (revertive_timer !=  nullptr && revertive_timer->has_data());
}

bool SubscriberRedundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(hold_timer.operation)
	|| is_set(preferred_role.operation)
	|| is_set(redundancy_disable.operation)
	|| is_set(slave_mode.operation)
	|| is_set(source_interface.operation)
	|| is_set(virtual_mac_prefix.operation)
	|| (groups !=  nullptr && groups->has_operation())
	|| (revertive_timer !=  nullptr && revertive_timer->has_operation());
}

std::string SubscriberRedundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-srg-cfg:subscriber-redundancy";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hold_timer.is_set || is_set(hold_timer.operation)) leaf_name_data.push_back(hold_timer.get_name_leafdata());
    if (preferred_role.is_set || is_set(preferred_role.operation)) leaf_name_data.push_back(preferred_role.get_name_leafdata());
    if (redundancy_disable.is_set || is_set(redundancy_disable.operation)) leaf_name_data.push_back(redundancy_disable.get_name_leafdata());
    if (slave_mode.is_set || is_set(slave_mode.operation)) leaf_name_data.push_back(slave_mode.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (virtual_mac_prefix.is_set || is_set(virtual_mac_prefix.operation)) leaf_name_data.push_back(virtual_mac_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<SubscriberRedundancy::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "revertive-timer")
    {
        if(revertive_timer == nullptr)
        {
            revertive_timer = std::make_shared<SubscriberRedundancy::RevertiveTimer>();
        }
        return revertive_timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void SubscriberRedundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hold-timer")
    {
        hold_timer = value;
    }
    if(value_path == "preferred-role")
    {
        preferred_role = value;
    }
    if(value_path == "redundancy-disable")
    {
        redundancy_disable = value;
    }
    if(value_path == "slave-mode")
    {
        slave_mode = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
    if(value_path == "virtual-mac-prefix")
    {
        virtual_mac_prefix = value;
    }
}

std::shared_ptr<Entity> SubscriberRedundancy::clone_ptr() const
{
    return std::make_shared<SubscriberRedundancy>();
}

std::string SubscriberRedundancy::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubscriberRedundancy::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubscriberRedundancy::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

SubscriberRedundancy::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "subscriber-redundancy";
}

SubscriberRedundancy::Groups::~Groups()
{
}

bool SubscriberRedundancy::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancy::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SubscriberRedundancy::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-srg-cfg:subscriber-redundancy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SubscriberRedundancy::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SubscriberRedundancy::Groups::set_value(const std::string & value_path, std::string value)
{
}

SubscriberRedundancy::Groups::Group::Group()
    :
    group_id{YType::uint32, "group-id"},
    access_tracking_object{YType::str, "access-tracking-object"},
    core_tracking_object{YType::str, "core-tracking-object"},
    description{YType::str, "description"},
    disable_tracking_object{YType::empty, "disable-tracking-object"},
    enable{YType::empty, "enable"},
    enable_fast_switchover{YType::empty, "enable-fast-switchover"},
    hold_timer{YType::uint32, "hold-timer"},
    l2tp_source_ip_address{YType::str, "l2tp-source-ip-address"},
    preferred_role{YType::enumeration, "preferred-role"},
    redundancy_disable{YType::empty, "redundancy-disable"},
    slave_mode{YType::enumeration, "slave-mode"}
    	,
    interface_list(std::make_shared<SubscriberRedundancy::Groups::Group::InterfaceList>())
	,peer(std::make_shared<SubscriberRedundancy::Groups::Group::Peer>())
	,revertive_timer(std::make_shared<SubscriberRedundancy::Groups::Group::RevertiveTimer>())
	,state_control_route(std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute>())
	,virtual_mac(std::make_shared<SubscriberRedundancy::Groups::Group::VirtualMac>())
{
    interface_list->parent = this;

    peer->parent = this;

    revertive_timer->parent = this;

    state_control_route->parent = this;

    virtual_mac->parent = this;

    yang_name = "group"; yang_parent_name = "groups";
}

SubscriberRedundancy::Groups::Group::~Group()
{
}

bool SubscriberRedundancy::Groups::Group::has_data() const
{
    return group_id.is_set
	|| access_tracking_object.is_set
	|| core_tracking_object.is_set
	|| description.is_set
	|| disable_tracking_object.is_set
	|| enable.is_set
	|| enable_fast_switchover.is_set
	|| hold_timer.is_set
	|| l2tp_source_ip_address.is_set
	|| preferred_role.is_set
	|| redundancy_disable.is_set
	|| slave_mode.is_set
	|| (interface_list !=  nullptr && interface_list->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (revertive_timer !=  nullptr && revertive_timer->has_data())
	|| (state_control_route !=  nullptr && state_control_route->has_data())
	|| (virtual_mac !=  nullptr && virtual_mac->has_data());
}

bool SubscriberRedundancy::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(group_id.operation)
	|| is_set(access_tracking_object.operation)
	|| is_set(core_tracking_object.operation)
	|| is_set(description.operation)
	|| is_set(disable_tracking_object.operation)
	|| is_set(enable.operation)
	|| is_set(enable_fast_switchover.operation)
	|| is_set(hold_timer.operation)
	|| is_set(l2tp_source_ip_address.operation)
	|| is_set(preferred_role.operation)
	|| is_set(redundancy_disable.operation)
	|| is_set(slave_mode.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (revertive_timer !=  nullptr && revertive_timer->has_operation())
	|| (state_control_route !=  nullptr && state_control_route->has_operation())
	|| (virtual_mac !=  nullptr && virtual_mac->has_operation());
}

std::string SubscriberRedundancy::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-id='" <<group_id <<"']";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-srg-cfg:subscriber-redundancy/groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (access_tracking_object.is_set || is_set(access_tracking_object.operation)) leaf_name_data.push_back(access_tracking_object.get_name_leafdata());
    if (core_tracking_object.is_set || is_set(core_tracking_object.operation)) leaf_name_data.push_back(core_tracking_object.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (disable_tracking_object.is_set || is_set(disable_tracking_object.operation)) leaf_name_data.push_back(disable_tracking_object.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (enable_fast_switchover.is_set || is_set(enable_fast_switchover.operation)) leaf_name_data.push_back(enable_fast_switchover.get_name_leafdata());
    if (hold_timer.is_set || is_set(hold_timer.operation)) leaf_name_data.push_back(hold_timer.get_name_leafdata());
    if (l2tp_source_ip_address.is_set || is_set(l2tp_source_ip_address.operation)) leaf_name_data.push_back(l2tp_source_ip_address.get_name_leafdata());
    if (preferred_role.is_set || is_set(preferred_role.operation)) leaf_name_data.push_back(preferred_role.get_name_leafdata());
    if (redundancy_disable.is_set || is_set(redundancy_disable.operation)) leaf_name_data.push_back(redundancy_disable.get_name_leafdata());
    if (slave_mode.is_set || is_set(slave_mode.operation)) leaf_name_data.push_back(slave_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<SubscriberRedundancy::Groups::Group::InterfaceList>();
        }
        return interface_list;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<SubscriberRedundancy::Groups::Group::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "revertive-timer")
    {
        if(revertive_timer == nullptr)
        {
            revertive_timer = std::make_shared<SubscriberRedundancy::Groups::Group::RevertiveTimer>();
        }
        return revertive_timer;
    }

    if(child_yang_name == "state-control-route")
    {
        if(state_control_route == nullptr)
        {
            state_control_route = std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute>();
        }
        return state_control_route;
    }

    if(child_yang_name == "virtual-mac")
    {
        if(virtual_mac == nullptr)
        {
            virtual_mac = std::make_shared<SubscriberRedundancy::Groups::Group::VirtualMac>();
        }
        return virtual_mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(revertive_timer != nullptr)
    {
        children["revertive-timer"] = revertive_timer;
    }

    if(state_control_route != nullptr)
    {
        children["state-control-route"] = state_control_route;
    }

    if(virtual_mac != nullptr)
    {
        children["virtual-mac"] = virtual_mac;
    }

    return children;
}

void SubscriberRedundancy::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "access-tracking-object")
    {
        access_tracking_object = value;
    }
    if(value_path == "core-tracking-object")
    {
        core_tracking_object = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "disable-tracking-object")
    {
        disable_tracking_object = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "enable-fast-switchover")
    {
        enable_fast_switchover = value;
    }
    if(value_path == "hold-timer")
    {
        hold_timer = value;
    }
    if(value_path == "l2tp-source-ip-address")
    {
        l2tp_source_ip_address = value;
    }
    if(value_path == "preferred-role")
    {
        preferred_role = value;
    }
    if(value_path == "redundancy-disable")
    {
        redundancy_disable = value;
    }
    if(value_path == "slave-mode")
    {
        slave_mode = value;
    }
}

SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceList()
    :
    enable{YType::empty, "enable"}
    	,
    interface_ranges(std::make_shared<SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges>())
	,interfaces(std::make_shared<SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces>())
{
    interface_ranges->parent = this;

    interfaces->parent = this;

    yang_name = "interface-list"; yang_parent_name = "group";
}

SubscriberRedundancy::Groups::Group::InterfaceList::~InterfaceList()
{
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::has_data() const
{
    return enable.is_set
	|| (interface_ranges !=  nullptr && interface_ranges->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (interface_ranges !=  nullptr && interface_ranges->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string SubscriberRedundancy::Groups::Group::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::Groups::Group::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XR_subscriber_srg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::Groups::Group::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-ranges")
    {
        if(interface_ranges == nullptr)
        {
            interface_ranges = std::make_shared<SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges>();
        }
        return interface_ranges;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::Groups::Group::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void SubscriberRedundancy::Groups::Group::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "interface-list";
}

SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::~Interfaces()
{
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_subscriber_srg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_id{YType::uint32, "interface-id"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::~Interface()
{
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| interface_id.is_set;
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_id.operation);
}

std::string SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_subscriber_srg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
}

SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRanges()
{
    yang_name = "interface-ranges"; yang_parent_name = "interface-list";
}

SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::~InterfaceRanges()
{
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::has_data() const
{
    for (std::size_t index=0; index<interface_range.size(); index++)
    {
        if(interface_range[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::has_operation() const
{
    for (std::size_t index=0; index<interface_range.size(); index++)
    {
        if(interface_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ranges";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceRanges' in Cisco_IOS_XR_subscriber_srg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-range")
    {
        for(auto const & c : interface_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange>();
        c->parent = this;
        interface_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::set_value(const std::string & value_path, std::string value)
{
}

SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::InterfaceRange()
    :
    interface_name{YType::str, "interface-name"},
    sub_interface_range_start{YType::uint32, "sub-interface-range-start"},
    sub_interface_range_end{YType::uint32, "sub-interface-range-end"},
    interface_id_range_end{YType::uint32, "interface-id-range-end"},
    interface_id_range_start{YType::uint32, "interface-id-range-start"}
{
    yang_name = "interface-range"; yang_parent_name = "interface-ranges";
}

SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::~InterfaceRange()
{
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::has_data() const
{
    return interface_name.is_set
	|| sub_interface_range_start.is_set
	|| sub_interface_range_end.is_set
	|| interface_id_range_end.is_set
	|| interface_id_range_start.is_set;
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(sub_interface_range_start.operation)
	|| is_set(sub_interface_range_end.operation)
	|| is_set(interface_id_range_end.operation)
	|| is_set(interface_id_range_start.operation);
}

std::string SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-range" <<"[interface-name='" <<interface_name <<"']" <<"[sub-interface-range-start='" <<sub_interface_range_start <<"']" <<"[sub-interface-range-end='" <<sub_interface_range_end <<"']";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceRange' in Cisco_IOS_XR_subscriber_srg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sub_interface_range_start.is_set || is_set(sub_interface_range_start.operation)) leaf_name_data.push_back(sub_interface_range_start.get_name_leafdata());
    if (sub_interface_range_end.is_set || is_set(sub_interface_range_end.operation)) leaf_name_data.push_back(sub_interface_range_end.get_name_leafdata());
    if (interface_id_range_end.is_set || is_set(interface_id_range_end.operation)) leaf_name_data.push_back(interface_id_range_end.get_name_leafdata());
    if (interface_id_range_start.is_set || is_set(interface_id_range_start.operation)) leaf_name_data.push_back(interface_id_range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "sub-interface-range-start")
    {
        sub_interface_range_start = value;
    }
    if(value_path == "sub-interface-range-end")
    {
        sub_interface_range_end = value;
    }
    if(value_path == "interface-id-range-end")
    {
        interface_id_range_end = value;
    }
    if(value_path == "interface-id-range-start")
    {
        interface_id_range_start = value;
    }
}

SubscriberRedundancy::Groups::Group::Peer::Peer()
    :
    route_add_disable{YType::empty, "route-add-disable"}
    	,
    ipaddress(std::make_shared<SubscriberRedundancy::Groups::Group::Peer::Ipaddress>())
{
    ipaddress->parent = this;

    yang_name = "peer"; yang_parent_name = "group";
}

SubscriberRedundancy::Groups::Group::Peer::~Peer()
{
}

bool SubscriberRedundancy::Groups::Group::Peer::has_data() const
{
    return route_add_disable.is_set
	|| (ipaddress !=  nullptr && ipaddress->has_data());
}

bool SubscriberRedundancy::Groups::Group::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_add_disable.operation)
	|| (ipaddress !=  nullptr && ipaddress->has_operation());
}

std::string SubscriberRedundancy::Groups::Group::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::Groups::Group::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_subscriber_srg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_add_disable.is_set || is_set(route_add_disable.operation)) leaf_name_data.push_back(route_add_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::Groups::Group::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipaddress")
    {
        if(ipaddress == nullptr)
        {
            ipaddress = std::make_shared<SubscriberRedundancy::Groups::Group::Peer::Ipaddress>();
        }
        return ipaddress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::Groups::Group::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipaddress != nullptr)
    {
        children["ipaddress"] = ipaddress;
    }

    return children;
}

void SubscriberRedundancy::Groups::Group::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-add-disable")
    {
        route_add_disable = value;
    }
}

SubscriberRedundancy::Groups::Group::Peer::Ipaddress::Ipaddress()
    :
    address_family{YType::enumeration, "address-family"},
    prefix_string{YType::str, "prefix-string"}
{
    yang_name = "ipaddress"; yang_parent_name = "peer";
}

SubscriberRedundancy::Groups::Group::Peer::Ipaddress::~Ipaddress()
{
}

bool SubscriberRedundancy::Groups::Group::Peer::Ipaddress::has_data() const
{
    return address_family.is_set
	|| prefix_string.is_set;
}

bool SubscriberRedundancy::Groups::Group::Peer::Ipaddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(prefix_string.operation);
}

std::string SubscriberRedundancy::Groups::Group::Peer::Ipaddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipaddress";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::Groups::Group::Peer::Ipaddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipaddress' in Cisco_IOS_XR_subscriber_srg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (prefix_string.is_set || is_set(prefix_string.operation)) leaf_name_data.push_back(prefix_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::Groups::Group::Peer::Ipaddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::Groups::Group::Peer::Ipaddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SubscriberRedundancy::Groups::Group::Peer::Ipaddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "prefix-string")
    {
        prefix_string = value;
    }
}

SubscriberRedundancy::Groups::Group::RevertiveTimer::RevertiveTimer()
    :
    max_value{YType::uint32, "max-value"},
    value_{YType::uint32, "value"}
{
    yang_name = "revertive-timer"; yang_parent_name = "group";
}

SubscriberRedundancy::Groups::Group::RevertiveTimer::~RevertiveTimer()
{
}

bool SubscriberRedundancy::Groups::Group::RevertiveTimer::has_data() const
{
    return max_value.is_set
	|| value_.is_set;
}

bool SubscriberRedundancy::Groups::Group::RevertiveTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(max_value.operation)
	|| is_set(value_.operation);
}

std::string SubscriberRedundancy::Groups::Group::RevertiveTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revertive-timer";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::Groups::Group::RevertiveTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertiveTimer' in Cisco_IOS_XR_subscriber_srg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_value.is_set || is_set(max_value.operation)) leaf_name_data.push_back(max_value.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::Groups::Group::RevertiveTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::Groups::Group::RevertiveTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SubscriberRedundancy::Groups::Group::RevertiveTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-value")
    {
        max_value = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

SubscriberRedundancy::Groups::Group::VirtualMac::VirtualMac()
    :
    address{YType::str, "address"},
    disable{YType::empty, "disable"}
{
    yang_name = "virtual-mac"; yang_parent_name = "group";
}

SubscriberRedundancy::Groups::Group::VirtualMac::~VirtualMac()
{
}

bool SubscriberRedundancy::Groups::Group::VirtualMac::has_data() const
{
    return address.is_set
	|| disable.is_set;
}

bool SubscriberRedundancy::Groups::Group::VirtualMac::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(disable.operation);
}

std::string SubscriberRedundancy::Groups::Group::VirtualMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-mac";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::Groups::Group::VirtualMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualMac' in Cisco_IOS_XR_subscriber_srg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::Groups::Group::VirtualMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::Groups::Group::VirtualMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SubscriberRedundancy::Groups::Group::VirtualMac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
}

SubscriberRedundancy::Groups::Group::StateControlRoute::StateControlRoute()
    :
    ipv4_route(std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Route>())
	,ipv6_route(std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route>())
{
    ipv4_route->parent = this;

    ipv6_route->parent = this;

    yang_name = "state-control-route"; yang_parent_name = "group";
}

SubscriberRedundancy::Groups::Group::StateControlRoute::~StateControlRoute()
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::has_data() const
{
    return (ipv4_route !=  nullptr && ipv4_route->has_data())
	|| (ipv6_route !=  nullptr && ipv6_route->has_data());
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::has_operation() const
{
    return is_set(operation)
	|| (ipv4_route !=  nullptr && ipv4_route->has_operation())
	|| (ipv6_route !=  nullptr && ipv6_route->has_operation());
}

std::string SubscriberRedundancy::Groups::Group::StateControlRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-control-route";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::Groups::Group::StateControlRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateControlRoute' in Cisco_IOS_XR_subscriber_srg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::Groups::Group::StateControlRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-route")
    {
        if(ipv4_route == nullptr)
        {
            ipv4_route = std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Route>();
        }
        return ipv4_route;
    }

    if(child_yang_name == "ipv6-route")
    {
        if(ipv6_route == nullptr)
        {
            ipv6_route = std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route>();
        }
        return ipv6_route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::Groups::Group::StateControlRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_route != nullptr)
    {
        children["ipv4-route"] = ipv4_route;
    }

    if(ipv6_route != nullptr)
    {
        children["ipv6-route"] = ipv6_route;
    }

    return children;
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::set_value(const std::string & value_path, std::string value)
{
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Route::Ipv4Route()
    :
    address_family{YType::enumeration, "address-family"},
    prefix_length{YType::int32, "prefix-length"},
    prefix_string{YType::str, "prefix-string"},
    value_{YType::int32, "value"}
{
    yang_name = "ipv4-route"; yang_parent_name = "state-control-route";
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Route::~Ipv4Route()
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Route::has_data() const
{
    return address_family.is_set
	|| prefix_length.is_set
	|| prefix_string.is_set
	|| value_.is_set;
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Route::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_string.operation)
	|| is_set(value_.operation);
}

std::string SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-route";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Route' in Cisco_IOS_XR_subscriber_srg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_string.is_set || is_set(prefix_string.operation)) leaf_name_data.push_back(prefix_string.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-string")
    {
        prefix_string = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6Route()
    :
    ipv6na_route(std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6NaRoute>())
	,ipv6pd_route(std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6PdRoute>())
{
    ipv6na_route->parent = this;

    ipv6pd_route->parent = this;

    yang_name = "ipv6-route"; yang_parent_name = "state-control-route";
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::~Ipv6Route()
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::has_data() const
{
    return (ipv6na_route !=  nullptr && ipv6na_route->has_data())
	|| (ipv6pd_route !=  nullptr && ipv6pd_route->has_data());
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::has_operation() const
{
    return is_set(operation)
	|| (ipv6na_route !=  nullptr && ipv6na_route->has_operation())
	|| (ipv6pd_route !=  nullptr && ipv6pd_route->has_operation());
}

std::string SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-route";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Route' in Cisco_IOS_XR_subscriber_srg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6na-route")
    {
        if(ipv6na_route == nullptr)
        {
            ipv6na_route = std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6NaRoute>();
        }
        return ipv6na_route;
    }

    if(child_yang_name == "ipv6pd-route")
    {
        if(ipv6pd_route == nullptr)
        {
            ipv6pd_route = std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6PdRoute>();
        }
        return ipv6pd_route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6na_route != nullptr)
    {
        children["ipv6na-route"] = ipv6na_route;
    }

    if(ipv6pd_route != nullptr)
    {
        children["ipv6pd-route"] = ipv6pd_route;
    }

    return children;
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::set_value(const std::string & value_path, std::string value)
{
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6NaRoute::Ipv6NaRoute()
    :
    address_family{YType::enumeration, "address-family"},
    prefix_length{YType::int32, "prefix-length"},
    prefix_string{YType::str, "prefix-string"},
    value_{YType::int32, "value"}
{
    yang_name = "ipv6na-route"; yang_parent_name = "ipv6-route";
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6NaRoute::~Ipv6NaRoute()
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6NaRoute::has_data() const
{
    return address_family.is_set
	|| prefix_length.is_set
	|| prefix_string.is_set
	|| value_.is_set;
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6NaRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_string.operation)
	|| is_set(value_.operation);
}

std::string SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6NaRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6na-route";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6NaRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6NaRoute' in Cisco_IOS_XR_subscriber_srg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_string.is_set || is_set(prefix_string.operation)) leaf_name_data.push_back(prefix_string.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6NaRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6NaRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6NaRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-string")
    {
        prefix_string = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6PdRoute::Ipv6PdRoute()
    :
    address_family{YType::enumeration, "address-family"},
    prefix_length{YType::int32, "prefix-length"},
    prefix_string{YType::str, "prefix-string"},
    value_{YType::int32, "value"}
{
    yang_name = "ipv6pd-route"; yang_parent_name = "ipv6-route";
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6PdRoute::~Ipv6PdRoute()
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6PdRoute::has_data() const
{
    return address_family.is_set
	|| prefix_length.is_set
	|| prefix_string.is_set
	|| value_.is_set;
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6PdRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_string.operation)
	|| is_set(value_.operation);
}

std::string SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6PdRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6pd-route";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6PdRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6PdRoute' in Cisco_IOS_XR_subscriber_srg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_string.is_set || is_set(prefix_string.operation)) leaf_name_data.push_back(prefix_string.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6PdRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6PdRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6PdRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-string")
    {
        prefix_string = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

SubscriberRedundancy::RevertiveTimer::RevertiveTimer()
    :
    max_value{YType::uint32, "max-value"},
    value_{YType::uint32, "value"}
{
    yang_name = "revertive-timer"; yang_parent_name = "subscriber-redundancy";
}

SubscriberRedundancy::RevertiveTimer::~RevertiveTimer()
{
}

bool SubscriberRedundancy::RevertiveTimer::has_data() const
{
    return max_value.is_set
	|| value_.is_set;
}

bool SubscriberRedundancy::RevertiveTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(max_value.operation)
	|| is_set(value_.operation);
}

std::string SubscriberRedundancy::RevertiveTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revertive-timer";

    return path_buffer.str();

}

const EntityPath SubscriberRedundancy::RevertiveTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-srg-cfg:subscriber-redundancy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_value.is_set || is_set(max_value.operation)) leaf_name_data.push_back(max_value.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancy::RevertiveTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberRedundancy::RevertiveTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SubscriberRedundancy::RevertiveTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-value")
    {
        max_value = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

const Enum::YLeaf SubscriberRedundancyGroupSlaveModeEnum::warm {1, "warm"};
const Enum::YLeaf SubscriberRedundancyGroupSlaveModeEnum::hot {2, "hot"};

const Enum::YLeaf SrgAddrFamilyEnum::ipv4 {2, "ipv4"};
const Enum::YLeaf SrgAddrFamilyEnum::ipv6 {10, "ipv6"};

const Enum::YLeaf SubscriberRedundancyGroupRoleEnum::master {1, "master"};
const Enum::YLeaf SubscriberRedundancyGroupRoleEnum::slave {2, "slave"};


}
}

