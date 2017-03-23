
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_subscriber_srg_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_subscriber_srg_oper {

SubscriberRedundancyManager::SubscriberRedundancyManager()
    :
    groups(std::make_shared<SubscriberRedundancyManager::Groups>())
	,interfaces(std::make_shared<SubscriberRedundancyManager::Interfaces>())
	,summary(std::make_shared<SubscriberRedundancyManager::Summary>())
{
    groups->parent = this;
    children["groups"] = groups;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "subscriber-redundancy-manager"; yang_parent_name = "Cisco-IOS-XR-subscriber-srg-oper";
}

SubscriberRedundancyManager::~SubscriberRedundancyManager()
{
}

bool SubscriberRedundancyManager::has_data() const
{
    return (groups !=  nullptr && groups->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool SubscriberRedundancyManager::has_operation() const
{
    return is_set(operation)
	|| (groups !=  nullptr && groups->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string SubscriberRedundancyManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-manager";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyManager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "groups")
    {
        if(groups != nullptr)
        {
            children["groups"] = groups;
        }
        else
        {
            groups = std::make_shared<SubscriberRedundancyManager::Groups>();
            groups->parent = this;
            children["groups"] = groups;
        }
        return children.at("groups");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<SubscriberRedundancyManager::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<SubscriberRedundancyManager::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyManager::get_children()
{
    if(children.find("groups") == children.end())
    {
        if(groups != nullptr)
        {
            children["groups"] = groups;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void SubscriberRedundancyManager::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SubscriberRedundancyManager::clone_ptr() const
{
    return std::make_shared<SubscriberRedundancyManager>();
}

std::string SubscriberRedundancyManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubscriberRedundancyManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubscriberRedundancyManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

SubscriberRedundancyManager::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "subscriber-redundancy-manager";
}

SubscriberRedundancyManager::Groups::~Groups()
{
}

bool SubscriberRedundancyManager::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancyManager::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SubscriberRedundancyManager::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyManager::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyManager::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SubscriberRedundancyManager::Groups::Group>();
        c->parent = this;
        group.push_back(std::move(c));
        children[segment_path] = group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyManager::Groups::get_children()
{
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void SubscriberRedundancyManager::Groups::set_value(const std::string & value_path, std::string value)
{
}

SubscriberRedundancyManager::Groups::Group::Group()
    :
    group{YType::str, "group"},
    description{YType::str, "description"},
    disabled{YType::boolean, "disabled"},
    group_id{YType::uint32, "group-id"},
    interface_count{YType::uint32, "interface-count"},
    node_name{YType::str, "node-name"},
    object_tracking_status{YType::boolean, "object-tracking-status"},
    peer_ipv4_address{YType::str, "peer-ipv4-address"},
    peer_ipv6_address{YType::str, "peer-ipv6-address"},
    preferred_role{YType::enumeration, "preferred-role"},
    role{YType::enumeration, "role"},
    slave_mode{YType::enumeration, "slave-mode"},
    virtual_mac_address{YType::str, "virtual-mac-address"},
    virtual_mac_address_disable{YType::boolean, "virtual-mac-address-disable"}
{
    yang_name = "group"; yang_parent_name = "groups";
}

SubscriberRedundancyManager::Groups::Group::~Group()
{
}

bool SubscriberRedundancyManager::Groups::Group::has_data() const
{
    return group.is_set
	|| description.is_set
	|| disabled.is_set
	|| group_id.is_set
	|| interface_count.is_set
	|| node_name.is_set
	|| object_tracking_status.is_set
	|| peer_ipv4_address.is_set
	|| peer_ipv6_address.is_set
	|| preferred_role.is_set
	|| role.is_set
	|| slave_mode.is_set
	|| virtual_mac_address.is_set
	|| virtual_mac_address_disable.is_set;
}

bool SubscriberRedundancyManager::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation)
	|| is_set(description.operation)
	|| is_set(disabled.operation)
	|| is_set(group_id.operation)
	|| is_set(interface_count.operation)
	|| is_set(node_name.operation)
	|| is_set(object_tracking_status.operation)
	|| is_set(peer_ipv4_address.operation)
	|| is_set(peer_ipv6_address.operation)
	|| is_set(preferred_role.operation)
	|| is_set(role.operation)
	|| is_set(slave_mode.operation)
	|| is_set(virtual_mac_address.operation)
	|| is_set(virtual_mac_address_disable.operation);
}

std::string SubscriberRedundancyManager::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group='" <<group <<"']";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyManager::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-manager/groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (disabled.is_set || is_set(disabled.operation)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (object_tracking_status.is_set || is_set(object_tracking_status.operation)) leaf_name_data.push_back(object_tracking_status.get_name_leafdata());
    if (peer_ipv4_address.is_set || is_set(peer_ipv4_address.operation)) leaf_name_data.push_back(peer_ipv4_address.get_name_leafdata());
    if (peer_ipv6_address.is_set || is_set(peer_ipv6_address.operation)) leaf_name_data.push_back(peer_ipv6_address.get_name_leafdata());
    if (preferred_role.is_set || is_set(preferred_role.operation)) leaf_name_data.push_back(preferred_role.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (slave_mode.is_set || is_set(slave_mode.operation)) leaf_name_data.push_back(slave_mode.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.operation)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());
    if (virtual_mac_address_disable.is_set || is_set(virtual_mac_address_disable.operation)) leaf_name_data.push_back(virtual_mac_address_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyManager::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyManager::Groups::Group::get_children()
{
    return children;
}

void SubscriberRedundancyManager::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "disabled")
    {
        disabled = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "object-tracking-status")
    {
        object_tracking_status = value;
    }
    if(value_path == "peer-ipv4-address")
    {
        peer_ipv4_address = value;
    }
    if(value_path == "peer-ipv6-address")
    {
        peer_ipv6_address = value;
    }
    if(value_path == "preferred-role")
    {
        preferred_role = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "slave-mode")
    {
        slave_mode = value;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
    }
    if(value_path == "virtual-mac-address-disable")
    {
        virtual_mac_address_disable = value;
    }
}

SubscriberRedundancyManager::Summary::Summary()
    :
    active_state{YType::boolean, "active-state"},
    disabled{YType::boolean, "disabled"},
    disabled_group_count{YType::uint32, "disabled-group-count"},
    group_count{YType::uint32, "group-count"},
    hold_timer{YType::uint32, "hold-timer"},
    interface_count{YType::uint32, "interface-count"},
    master_group_count{YType::uint32, "master-group-count"},
    master_interface_count{YType::uint32, "master-interface-count"},
    preferred_role{YType::enumeration, "preferred-role"},
    slave_group_count{YType::uint32, "slave-group-count"},
    slave_interface_count{YType::uint32, "slave-interface-count"},
    slave_mode{YType::enumeration, "slave-mode"},
    source_interface_ipv4_address{YType::str, "source-interface-ipv4-address"},
    source_interface_ipv6_address{YType::str, "source-interface-ipv6-address"},
    source_interface_name{YType::str, "source-interface-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "summary"; yang_parent_name = "subscriber-redundancy-manager";
}

SubscriberRedundancyManager::Summary::~Summary()
{
}

bool SubscriberRedundancyManager::Summary::has_data() const
{
    return active_state.is_set
	|| disabled.is_set
	|| disabled_group_count.is_set
	|| group_count.is_set
	|| hold_timer.is_set
	|| interface_count.is_set
	|| master_group_count.is_set
	|| master_interface_count.is_set
	|| preferred_role.is_set
	|| slave_group_count.is_set
	|| slave_interface_count.is_set
	|| slave_mode.is_set
	|| source_interface_ipv4_address.is_set
	|| source_interface_ipv6_address.is_set
	|| source_interface_name.is_set
	|| vrf_name.is_set;
}

bool SubscriberRedundancyManager::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(active_state.operation)
	|| is_set(disabled.operation)
	|| is_set(disabled_group_count.operation)
	|| is_set(group_count.operation)
	|| is_set(hold_timer.operation)
	|| is_set(interface_count.operation)
	|| is_set(master_group_count.operation)
	|| is_set(master_interface_count.operation)
	|| is_set(preferred_role.operation)
	|| is_set(slave_group_count.operation)
	|| is_set(slave_interface_count.operation)
	|| is_set(slave_mode.operation)
	|| is_set(source_interface_ipv4_address.operation)
	|| is_set(source_interface_ipv6_address.operation)
	|| is_set(source_interface_name.operation)
	|| is_set(vrf_name.operation);
}

std::string SubscriberRedundancyManager::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyManager::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_state.is_set || is_set(active_state.operation)) leaf_name_data.push_back(active_state.get_name_leafdata());
    if (disabled.is_set || is_set(disabled.operation)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (disabled_group_count.is_set || is_set(disabled_group_count.operation)) leaf_name_data.push_back(disabled_group_count.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (hold_timer.is_set || is_set(hold_timer.operation)) leaf_name_data.push_back(hold_timer.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (master_group_count.is_set || is_set(master_group_count.operation)) leaf_name_data.push_back(master_group_count.get_name_leafdata());
    if (master_interface_count.is_set || is_set(master_interface_count.operation)) leaf_name_data.push_back(master_interface_count.get_name_leafdata());
    if (preferred_role.is_set || is_set(preferred_role.operation)) leaf_name_data.push_back(preferred_role.get_name_leafdata());
    if (slave_group_count.is_set || is_set(slave_group_count.operation)) leaf_name_data.push_back(slave_group_count.get_name_leafdata());
    if (slave_interface_count.is_set || is_set(slave_interface_count.operation)) leaf_name_data.push_back(slave_interface_count.get_name_leafdata());
    if (slave_mode.is_set || is_set(slave_mode.operation)) leaf_name_data.push_back(slave_mode.get_name_leafdata());
    if (source_interface_ipv4_address.is_set || is_set(source_interface_ipv4_address.operation)) leaf_name_data.push_back(source_interface_ipv4_address.get_name_leafdata());
    if (source_interface_ipv6_address.is_set || is_set(source_interface_ipv6_address.operation)) leaf_name_data.push_back(source_interface_ipv6_address.get_name_leafdata());
    if (source_interface_name.is_set || is_set(source_interface_name.operation)) leaf_name_data.push_back(source_interface_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyManager::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyManager::Summary::get_children()
{
    return children;
}

void SubscriberRedundancyManager::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-state")
    {
        active_state = value;
    }
    if(value_path == "disabled")
    {
        disabled = value;
    }
    if(value_path == "disabled-group-count")
    {
        disabled_group_count = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "hold-timer")
    {
        hold_timer = value;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
    if(value_path == "master-group-count")
    {
        master_group_count = value;
    }
    if(value_path == "master-interface-count")
    {
        master_interface_count = value;
    }
    if(value_path == "preferred-role")
    {
        preferred_role = value;
    }
    if(value_path == "slave-group-count")
    {
        slave_group_count = value;
    }
    if(value_path == "slave-interface-count")
    {
        slave_interface_count = value;
    }
    if(value_path == "slave-mode")
    {
        slave_mode = value;
    }
    if(value_path == "source-interface-ipv4-address")
    {
        source_interface_ipv4_address = value;
    }
    if(value_path == "source-interface-ipv6-address")
    {
        source_interface_ipv6_address = value;
    }
    if(value_path == "source-interface-name")
    {
        source_interface_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

SubscriberRedundancyManager::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "subscriber-redundancy-manager";
}

SubscriberRedundancyManager::Interfaces::~Interfaces()
{
}

bool SubscriberRedundancyManager::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancyManager::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SubscriberRedundancyManager::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyManager::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyManager::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SubscriberRedundancyManager::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyManager::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void SubscriberRedundancyManager::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

SubscriberRedundancyManager::Interfaces::Interface::Interface()
    :
    interface{YType::str, "interface"},
    forward_referenced{YType::boolean, "forward-referenced"},
    group_id{YType::uint32, "group-id"},
    interface_mapping_id{YType::uint32, "interface-mapping-id"},
    interface_name{YType::str, "interface-name"},
    role{YType::enumeration, "role"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

SubscriberRedundancyManager::Interfaces::Interface::~Interface()
{
}

bool SubscriberRedundancyManager::Interfaces::Interface::has_data() const
{
    return interface.is_set
	|| forward_referenced.is_set
	|| group_id.is_set
	|| interface_mapping_id.is_set
	|| interface_name.is_set
	|| role.is_set;
}

bool SubscriberRedundancyManager::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(forward_referenced.operation)
	|| is_set(group_id.operation)
	|| is_set(interface_mapping_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(role.operation);
}

std::string SubscriberRedundancyManager::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyManager::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-manager/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (forward_referenced.is_set || is_set(forward_referenced.operation)) leaf_name_data.push_back(forward_referenced.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (interface_mapping_id.is_set || is_set(interface_mapping_id.operation)) leaf_name_data.push_back(interface_mapping_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyManager::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyManager::Interfaces::Interface::get_children()
{
    return children;
}

void SubscriberRedundancyManager::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "forward-referenced")
    {
        forward_referenced = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "interface-mapping-id")
    {
        interface_mapping_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
}

SubscriberRedundancyAgent::SubscriberRedundancyAgent()
    :
    nodes(std::make_shared<SubscriberRedundancyAgent::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "subscriber-redundancy-agent"; yang_parent_name = "Cisco-IOS-XR-subscriber-srg-oper";
}

SubscriberRedundancyAgent::~SubscriberRedundancyAgent()
{
}

bool SubscriberRedundancyAgent::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool SubscriberRedundancyAgent::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string SubscriberRedundancyAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-agent";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<SubscriberRedundancyAgent::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    return children;
}

void SubscriberRedundancyAgent::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SubscriberRedundancyAgent::clone_ptr() const
{
    return std::make_shared<SubscriberRedundancyAgent>();
}

std::string SubscriberRedundancyAgent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubscriberRedundancyAgent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubscriberRedundancyAgent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

SubscriberRedundancyAgent::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "subscriber-redundancy-agent";
}

SubscriberRedundancyAgent::Nodes::~Nodes()
{
}

bool SubscriberRedundancyAgent::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancyAgent::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SubscriberRedundancyAgent::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SubscriberRedundancyAgent::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void SubscriberRedundancyAgent::Nodes::set_value(const std::string & value_path, std::string value)
{
}

SubscriberRedundancyAgent::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    group_id_xr(std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIdXr>())
	,group_ids(std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIds>())
	,group_summaries(std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupSummaries>())
	,interfaces(std::make_shared<SubscriberRedundancyAgent::Nodes::Node::Interfaces>())
{
    group_id_xr->parent = this;
    children["group-id-xr"] = group_id_xr;

    group_ids->parent = this;
    children["group-ids"] = group_ids;

    group_summaries->parent = this;
    children["group-summaries"] = group_summaries;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    yang_name = "node"; yang_parent_name = "nodes";
}

SubscriberRedundancyAgent::Nodes::Node::~Node()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (group_id_xr !=  nullptr && group_id_xr->has_data())
	|| (group_ids !=  nullptr && group_ids->has_data())
	|| (group_summaries !=  nullptr && group_summaries->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool SubscriberRedundancyAgent::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (group_id_xr !=  nullptr && group_id_xr->has_operation())
	|| (group_ids !=  nullptr && group_ids->has_operation())
	|| (group_summaries !=  nullptr && group_summaries->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string SubscriberRedundancyAgent::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-agent/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-id-xr")
    {
        if(group_id_xr != nullptr)
        {
            children["group-id-xr"] = group_id_xr;
        }
        else
        {
            group_id_xr = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIdXr>();
            group_id_xr->parent = this;
            children["group-id-xr"] = group_id_xr;
        }
        return children.at("group-id-xr");
    }

    if(child_yang_name == "group-ids")
    {
        if(group_ids != nullptr)
        {
            children["group-ids"] = group_ids;
        }
        else
        {
            group_ids = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIds>();
            group_ids->parent = this;
            children["group-ids"] = group_ids;
        }
        return children.at("group-ids");
    }

    if(child_yang_name == "group-summaries")
    {
        if(group_summaries != nullptr)
        {
            children["group-summaries"] = group_summaries;
        }
        else
        {
            group_summaries = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupSummaries>();
            group_summaries->parent = this;
            children["group-summaries"] = group_summaries;
        }
        return children.at("group-summaries");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::Nodes::Node::get_children()
{
    if(children.find("group-id-xr") == children.end())
    {
        if(group_id_xr != nullptr)
        {
            children["group-id-xr"] = group_id_xr;
        }
    }

    if(children.find("group-ids") == children.end())
    {
        if(group_ids != nullptr)
        {
            children["group-ids"] = group_ids;
        }
    }

    if(children.find("group-summaries") == children.end())
    {
        if(group_summaries != nullptr)
        {
            children["group-summaries"] = group_summaries;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    return children;
}

void SubscriberRedundancyAgent::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupIdXr()
{
    yang_name = "group-id-xr"; yang_parent_name = "node";
}

SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::~GroupIdXr()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::has_data() const
{
    for (std::size_t index=0; index<group_id.size(); index++)
    {
        if(group_id[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::has_operation() const
{
    for (std::size_t index=0; index<group_id.size(); index++)
    {
        if(group_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id-xr";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupIdXr' in Cisco_IOS_XR_subscriber_srg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-id")
    {
        for(auto const & c : group_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId>();
        c->parent = this;
        group_id.push_back(std::move(c));
        children[segment_path] = group_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::get_children()
{
    for (auto const & c : group_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::set_value(const std::string & value_path, std::string value)
{
}

SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::GroupId()
    :
    group_id{YType::str, "group-id"},
    group_id_xr{YType::uint32, "group-id-xr"},
    inner_vlan{YType::uint32, "inner-vlan"},
    interface_name{YType::str, "interface-name"},
    l2tp_tunnel_id{YType::uint32, "l2tp-tunnel-id"},
    negative_acknowledgement_update_all{YType::boolean, "negative-acknowledgement-update-all"},
    outer_vlan{YType::uint32, "outer-vlan"},
    pppoe_session_id{YType::uint16, "pppoe-session-id"},
    role_master{YType::boolean, "role-master"},
    session_mac_address{YType::str, "session-mac-address"},
    valid_mac_address{YType::boolean, "valid-mac-address"}
{
    yang_name = "group-id"; yang_parent_name = "group-id-xr";
}

SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::~GroupId()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::has_data() const
{
    for (std::size_t index=0; index<session_detailed_information.size(); index++)
    {
        if(session_detailed_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<session_sync_error_information.size(); index++)
    {
        if(session_sync_error_information[index]->has_data())
            return true;
    }
    return group_id.is_set
	|| group_id_xr.is_set
	|| inner_vlan.is_set
	|| interface_name.is_set
	|| l2tp_tunnel_id.is_set
	|| negative_acknowledgement_update_all.is_set
	|| outer_vlan.is_set
	|| pppoe_session_id.is_set
	|| role_master.is_set
	|| session_mac_address.is_set
	|| valid_mac_address.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::has_operation() const
{
    for (std::size_t index=0; index<session_detailed_information.size(); index++)
    {
        if(session_detailed_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<session_sync_error_information.size(); index++)
    {
        if(session_sync_error_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(group_id.operation)
	|| is_set(group_id_xr.operation)
	|| is_set(inner_vlan.operation)
	|| is_set(interface_name.operation)
	|| is_set(l2tp_tunnel_id.operation)
	|| is_set(negative_acknowledgement_update_all.operation)
	|| is_set(outer_vlan.operation)
	|| is_set(pppoe_session_id.operation)
	|| is_set(role_master.operation)
	|| is_set(session_mac_address.operation)
	|| is_set(valid_mac_address.operation);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id" <<"[group-id='" <<group_id <<"']";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupId' in Cisco_IOS_XR_subscriber_srg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_id_xr.is_set || is_set(group_id_xr.operation)) leaf_name_data.push_back(group_id_xr.get_name_leafdata());
    if (inner_vlan.is_set || is_set(inner_vlan.operation)) leaf_name_data.push_back(inner_vlan.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (l2tp_tunnel_id.is_set || is_set(l2tp_tunnel_id.operation)) leaf_name_data.push_back(l2tp_tunnel_id.get_name_leafdata());
    if (negative_acknowledgement_update_all.is_set || is_set(negative_acknowledgement_update_all.operation)) leaf_name_data.push_back(negative_acknowledgement_update_all.get_name_leafdata());
    if (outer_vlan.is_set || is_set(outer_vlan.operation)) leaf_name_data.push_back(outer_vlan.get_name_leafdata());
    if (pppoe_session_id.is_set || is_set(pppoe_session_id.operation)) leaf_name_data.push_back(pppoe_session_id.get_name_leafdata());
    if (role_master.is_set || is_set(role_master.operation)) leaf_name_data.push_back(role_master.get_name_leafdata());
    if (session_mac_address.is_set || is_set(session_mac_address.operation)) leaf_name_data.push_back(session_mac_address.get_name_leafdata());
    if (valid_mac_address.is_set || is_set(valid_mac_address.operation)) leaf_name_data.push_back(valid_mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-detailed-information")
    {
        for(auto const & c : session_detailed_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation>();
        c->parent = this;
        session_detailed_information.push_back(std::move(c));
        children[segment_path] = session_detailed_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "session-sync-error-information")
    {
        for(auto const & c : session_sync_error_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation>();
        c->parent = this;
        session_sync_error_information.push_back(std::move(c));
        children[segment_path] = session_sync_error_information.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::get_children()
{
    for (auto const & c : session_detailed_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : session_sync_error_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "group-id-xr")
    {
        group_id_xr = value;
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "l2tp-tunnel-id")
    {
        l2tp_tunnel_id = value;
    }
    if(value_path == "negative-acknowledgement-update-all")
    {
        negative_acknowledgement_update_all = value;
    }
    if(value_path == "outer-vlan")
    {
        outer_vlan = value;
    }
    if(value_path == "pppoe-session-id")
    {
        pppoe_session_id = value;
    }
    if(value_path == "role-master")
    {
        role_master = value;
    }
    if(value_path == "session-mac-address")
    {
        session_mac_address = value;
    }
    if(value_path == "valid-mac-address")
    {
        valid_mac_address = value;
    }
}

SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::SessionDetailedInformation()
    :
    component{YType::enumeration, "component"},
    marked_for_cleanup{YType::boolean, "marked-for-cleanup"},
    marked_for_sweeping{YType::boolean, "marked-for-sweeping"},
    operation_{YType::enumeration, "operation"},
    tx_list_queue_fail{YType::boolean, "tx-list-queue-fail"}
{
    yang_name = "session-detailed-information"; yang_parent_name = "group-id";
}

SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::~SessionDetailedInformation()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::has_data() const
{
    return component.is_set
	|| marked_for_cleanup.is_set
	|| marked_for_sweeping.is_set
	|| operation_.is_set
	|| tx_list_queue_fail.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(component.operation)
	|| is_set(marked_for_cleanup.operation)
	|| is_set(marked_for_sweeping.operation)
	|| is_set(operation_.operation)
	|| is_set(tx_list_queue_fail.operation);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detailed-information";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionDetailedInformation' in Cisco_IOS_XR_subscriber_srg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (component.is_set || is_set(component.operation)) leaf_name_data.push_back(component.get_name_leafdata());
    if (marked_for_cleanup.is_set || is_set(marked_for_cleanup.operation)) leaf_name_data.push_back(marked_for_cleanup.get_name_leafdata());
    if (marked_for_sweeping.is_set || is_set(marked_for_sweeping.operation)) leaf_name_data.push_back(marked_for_sweeping.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.operation)) leaf_name_data.push_back(operation_.get_name_leafdata());
    if (tx_list_queue_fail.is_set || is_set(tx_list_queue_fail.operation)) leaf_name_data.push_back(tx_list_queue_fail.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::get_children()
{
    return children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "component")
    {
        component = value;
    }
    if(value_path == "marked-for-cleanup")
    {
        marked_for_cleanup = value;
    }
    if(value_path == "marked-for-sweeping")
    {
        marked_for_sweeping = value;
    }
    if(value_path == "operation")
    {
        operation_ = value;
    }
    if(value_path == "tx-list-queue-fail")
    {
        tx_list_queue_fail = value;
    }
}

SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::SessionSyncErrorInformation()
    :
    last_error_code{YType::uint32, "last-error-code"},
    last_error_type{YType::enumeration, "last-error-type"},
    sync_error_count{YType::uint16, "sync-error-count"}
{
    yang_name = "session-sync-error-information"; yang_parent_name = "group-id";
}

SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::~SessionSyncErrorInformation()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::has_data() const
{
    return last_error_code.is_set
	|| last_error_type.is_set
	|| sync_error_count.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(last_error_code.operation)
	|| is_set(last_error_type.operation)
	|| is_set(sync_error_count.operation);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-sync-error-information";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionSyncErrorInformation' in Cisco_IOS_XR_subscriber_srg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_error_code.is_set || is_set(last_error_code.operation)) leaf_name_data.push_back(last_error_code.get_name_leafdata());
    if (last_error_type.is_set || is_set(last_error_type.operation)) leaf_name_data.push_back(last_error_type.get_name_leafdata());
    if (sync_error_count.is_set || is_set(sync_error_count.operation)) leaf_name_data.push_back(sync_error_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::get_children()
{
    return children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-error-code")
    {
        last_error_code = value;
    }
    if(value_path == "last-error-type")
    {
        last_error_type = value;
    }
    if(value_path == "sync-error-count")
    {
        sync_error_count = value;
    }
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "node";
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::~Interfaces()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SubscriberRedundancyAgent::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::Nodes::Node::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_subscriber_srg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::Nodes::Node::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void SubscriberRedundancyAgent::Nodes::Node::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface{YType::str, "interface"},
    forward_referenced{YType::boolean, "forward-referenced"},
    group_id{YType::uint32, "group-id"},
    interface_attribute_update_error_count{YType::uint32, "interface-attribute-update-error-count"},
    interface_caps_add_error_count{YType::uint32, "interface-caps-add-error-count"},
    interface_caps_remove_error_count{YType::uint32, "interface-caps-remove-error-count"},
    interface_disable_error_count{YType::uint32, "interface-disable-error-count"},
    interface_enable_error_count{YType::uint32, "interface-enable-error-count"},
    interface_name{YType::str, "interface-name"},
    interface_synchronization_id{YType::uint32, "interface-synchronization-id"},
    role{YType::enumeration, "role"},
    session_count{YType::uint32, "session-count"}
    	,
    interface_oper(std::make_shared<SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper>())
	,interface_status(std::make_shared<SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus>())
{
    interface_oper->parent = this;
    children["interface-oper"] = interface_oper;

    interface_status->parent = this;
    children["interface-status"] = interface_status;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<client_status.size(); index++)
    {
        if(client_status[index]->has_data())
            return true;
    }
    return interface.is_set
	|| forward_referenced.is_set
	|| group_id.is_set
	|| interface_attribute_update_error_count.is_set
	|| interface_caps_add_error_count.is_set
	|| interface_caps_remove_error_count.is_set
	|| interface_disable_error_count.is_set
	|| interface_enable_error_count.is_set
	|| interface_name.is_set
	|| interface_synchronization_id.is_set
	|| role.is_set
	|| session_count.is_set
	|| (interface_oper !=  nullptr && interface_oper->has_data())
	|| (interface_status !=  nullptr && interface_status->has_data());
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<client_status.size(); index++)
    {
        if(client_status[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(forward_referenced.operation)
	|| is_set(group_id.operation)
	|| is_set(interface_attribute_update_error_count.operation)
	|| is_set(interface_caps_add_error_count.operation)
	|| is_set(interface_caps_remove_error_count.operation)
	|| is_set(interface_disable_error_count.operation)
	|| is_set(interface_enable_error_count.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_synchronization_id.operation)
	|| is_set(role.operation)
	|| is_set(session_count.operation)
	|| (interface_oper !=  nullptr && interface_oper->has_operation())
	|| (interface_status !=  nullptr && interface_status->has_operation());
}

std::string SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_subscriber_srg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (forward_referenced.is_set || is_set(forward_referenced.operation)) leaf_name_data.push_back(forward_referenced.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (interface_attribute_update_error_count.is_set || is_set(interface_attribute_update_error_count.operation)) leaf_name_data.push_back(interface_attribute_update_error_count.get_name_leafdata());
    if (interface_caps_add_error_count.is_set || is_set(interface_caps_add_error_count.operation)) leaf_name_data.push_back(interface_caps_add_error_count.get_name_leafdata());
    if (interface_caps_remove_error_count.is_set || is_set(interface_caps_remove_error_count.operation)) leaf_name_data.push_back(interface_caps_remove_error_count.get_name_leafdata());
    if (interface_disable_error_count.is_set || is_set(interface_disable_error_count.operation)) leaf_name_data.push_back(interface_disable_error_count.get_name_leafdata());
    if (interface_enable_error_count.is_set || is_set(interface_enable_error_count.operation)) leaf_name_data.push_back(interface_enable_error_count.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_synchronization_id.is_set || is_set(interface_synchronization_id.operation)) leaf_name_data.push_back(interface_synchronization_id.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.operation)) leaf_name_data.push_back(session_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "client-status")
    {
        for(auto const & c : client_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus>();
        c->parent = this;
        client_status.push_back(std::move(c));
        children[segment_path] = client_status.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-oper")
    {
        if(interface_oper != nullptr)
        {
            children["interface-oper"] = interface_oper;
        }
        else
        {
            interface_oper = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper>();
            interface_oper->parent = this;
            children["interface-oper"] = interface_oper;
        }
        return children.at("interface-oper");
    }

    if(child_yang_name == "interface-status")
    {
        if(interface_status != nullptr)
        {
            children["interface-status"] = interface_status;
        }
        else
        {
            interface_status = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus>();
            interface_status->parent = this;
            children["interface-status"] = interface_status;
        }
        return children.at("interface-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::get_children()
{
    for (auto const & c : client_status)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("interface-oper") == children.end())
    {
        if(interface_oper != nullptr)
        {
            children["interface-oper"] = interface_oper;
        }
    }

    if(children.find("interface-status") == children.end())
    {
        if(interface_status != nullptr)
        {
            children["interface-status"] = interface_status;
        }
    }

    return children;
}

void SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "forward-referenced")
    {
        forward_referenced = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "interface-attribute-update-error-count")
    {
        interface_attribute_update_error_count = value;
    }
    if(value_path == "interface-caps-add-error-count")
    {
        interface_caps_add_error_count = value;
    }
    if(value_path == "interface-caps-remove-error-count")
    {
        interface_caps_remove_error_count = value;
    }
    if(value_path == "interface-disable-error-count")
    {
        interface_disable_error_count = value;
    }
    if(value_path == "interface-enable-error-count")
    {
        interface_enable_error_count = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-synchronization-id")
    {
        interface_synchronization_id = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "session-count")
    {
        session_count = value;
    }
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::InterfaceOper()
    :
    idb_oper_attr_update{YType::boolean, "idb-oper-attr-update"},
    idb_oper_caps_add{YType::boolean, "idb-oper-caps-add"},
    idb_oper_caps_remove{YType::boolean, "idb-oper-caps-remove"},
    idb_oper_reg_disable{YType::boolean, "idb-oper-reg-disable"},
    idb_oper_reg_enable{YType::boolean, "idb-oper-reg-enable"}
{
    yang_name = "interface-oper"; yang_parent_name = "interface";
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::~InterfaceOper()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::has_data() const
{
    return idb_oper_attr_update.is_set
	|| idb_oper_caps_add.is_set
	|| idb_oper_caps_remove.is_set
	|| idb_oper_reg_disable.is_set
	|| idb_oper_reg_enable.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::has_operation() const
{
    return is_set(operation)
	|| is_set(idb_oper_attr_update.operation)
	|| is_set(idb_oper_caps_add.operation)
	|| is_set(idb_oper_caps_remove.operation)
	|| is_set(idb_oper_reg_disable.operation)
	|| is_set(idb_oper_reg_enable.operation);
}

std::string SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-oper";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceOper' in Cisco_IOS_XR_subscriber_srg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idb_oper_attr_update.is_set || is_set(idb_oper_attr_update.operation)) leaf_name_data.push_back(idb_oper_attr_update.get_name_leafdata());
    if (idb_oper_caps_add.is_set || is_set(idb_oper_caps_add.operation)) leaf_name_data.push_back(idb_oper_caps_add.get_name_leafdata());
    if (idb_oper_caps_remove.is_set || is_set(idb_oper_caps_remove.operation)) leaf_name_data.push_back(idb_oper_caps_remove.get_name_leafdata());
    if (idb_oper_reg_disable.is_set || is_set(idb_oper_reg_disable.operation)) leaf_name_data.push_back(idb_oper_reg_disable.get_name_leafdata());
    if (idb_oper_reg_enable.is_set || is_set(idb_oper_reg_enable.operation)) leaf_name_data.push_back(idb_oper_reg_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::get_children()
{
    return children;
}

void SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "idb-oper-attr-update")
    {
        idb_oper_attr_update = value;
    }
    if(value_path == "idb-oper-caps-add")
    {
        idb_oper_caps_add = value;
    }
    if(value_path == "idb-oper-caps-remove")
    {
        idb_oper_caps_remove = value;
    }
    if(value_path == "idb-oper-reg-disable")
    {
        idb_oper_reg_disable = value;
    }
    if(value_path == "idb-oper-reg-enable")
    {
        idb_oper_reg_enable = value;
    }
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::InterfaceStatus()
    :
    idb_client_eoms_pending{YType::boolean, "idb-client-eoms-pending"},
    idb_state_caps_added{YType::boolean, "idb-state-caps-added"},
    idb_state_fwd_ref{YType::boolean, "idb-state-fwd-ref"},
    idb_state_owned_re_source{YType::boolean, "idb-state-owned-re-source"},
    idb_state_p_end_caps_rem{YType::boolean, "idb-state-p-end-caps-rem"},
    idb_state_p_end_reg_disable{YType::boolean, "idb-state-p-end-reg-disable"},
    idb_state_registered{YType::boolean, "idb-state-registered"},
    idb_state_stale{YType::boolean, "idb-state-stale"}
{
    yang_name = "interface-status"; yang_parent_name = "interface";
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::~InterfaceStatus()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::has_data() const
{
    return idb_client_eoms_pending.is_set
	|| idb_state_caps_added.is_set
	|| idb_state_fwd_ref.is_set
	|| idb_state_owned_re_source.is_set
	|| idb_state_p_end_caps_rem.is_set
	|| idb_state_p_end_reg_disable.is_set
	|| idb_state_registered.is_set
	|| idb_state_stale.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(idb_client_eoms_pending.operation)
	|| is_set(idb_state_caps_added.operation)
	|| is_set(idb_state_fwd_ref.operation)
	|| is_set(idb_state_owned_re_source.operation)
	|| is_set(idb_state_p_end_caps_rem.operation)
	|| is_set(idb_state_p_end_reg_disable.operation)
	|| is_set(idb_state_registered.operation)
	|| is_set(idb_state_stale.operation);
}

std::string SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-status";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatus' in Cisco_IOS_XR_subscriber_srg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idb_client_eoms_pending.is_set || is_set(idb_client_eoms_pending.operation)) leaf_name_data.push_back(idb_client_eoms_pending.get_name_leafdata());
    if (idb_state_caps_added.is_set || is_set(idb_state_caps_added.operation)) leaf_name_data.push_back(idb_state_caps_added.get_name_leafdata());
    if (idb_state_fwd_ref.is_set || is_set(idb_state_fwd_ref.operation)) leaf_name_data.push_back(idb_state_fwd_ref.get_name_leafdata());
    if (idb_state_owned_re_source.is_set || is_set(idb_state_owned_re_source.operation)) leaf_name_data.push_back(idb_state_owned_re_source.get_name_leafdata());
    if (idb_state_p_end_caps_rem.is_set || is_set(idb_state_p_end_caps_rem.operation)) leaf_name_data.push_back(idb_state_p_end_caps_rem.get_name_leafdata());
    if (idb_state_p_end_reg_disable.is_set || is_set(idb_state_p_end_reg_disable.operation)) leaf_name_data.push_back(idb_state_p_end_reg_disable.get_name_leafdata());
    if (idb_state_registered.is_set || is_set(idb_state_registered.operation)) leaf_name_data.push_back(idb_state_registered.get_name_leafdata());
    if (idb_state_stale.is_set || is_set(idb_state_stale.operation)) leaf_name_data.push_back(idb_state_stale.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::get_children()
{
    return children;
}

void SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "idb-client-eoms-pending")
    {
        idb_client_eoms_pending = value;
    }
    if(value_path == "idb-state-caps-added")
    {
        idb_state_caps_added = value;
    }
    if(value_path == "idb-state-fwd-ref")
    {
        idb_state_fwd_ref = value;
    }
    if(value_path == "idb-state-owned-re-source")
    {
        idb_state_owned_re_source = value;
    }
    if(value_path == "idb-state-p-end-caps-rem")
    {
        idb_state_p_end_caps_rem = value;
    }
    if(value_path == "idb-state-p-end-reg-disable")
    {
        idb_state_p_end_reg_disable = value;
    }
    if(value_path == "idb-state-registered")
    {
        idb_state_registered = value;
    }
    if(value_path == "idb-state-stale")
    {
        idb_state_stale = value;
    }
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::ClientStatus()
    :
    component{YType::enumeration, "component"},
    session_count{YType::uint32, "session-count"},
    srg_show_idb_client_eoms_pending{YType::boolean, "srg-show-idb-client-eoms-pending"},
    srg_show_idb_client_sync_eod_pending{YType::boolean, "srg-show-idb-client-sync-eod-pending"}
{
    yang_name = "client-status"; yang_parent_name = "interface";
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::~ClientStatus()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::has_data() const
{
    return component.is_set
	|| session_count.is_set
	|| srg_show_idb_client_eoms_pending.is_set
	|| srg_show_idb_client_sync_eod_pending.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(component.operation)
	|| is_set(session_count.operation)
	|| is_set(srg_show_idb_client_eoms_pending.operation)
	|| is_set(srg_show_idb_client_sync_eod_pending.operation);
}

std::string SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-status";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientStatus' in Cisco_IOS_XR_subscriber_srg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (component.is_set || is_set(component.operation)) leaf_name_data.push_back(component.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.operation)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (srg_show_idb_client_eoms_pending.is_set || is_set(srg_show_idb_client_eoms_pending.operation)) leaf_name_data.push_back(srg_show_idb_client_eoms_pending.get_name_leafdata());
    if (srg_show_idb_client_sync_eod_pending.is_set || is_set(srg_show_idb_client_sync_eod_pending.operation)) leaf_name_data.push_back(srg_show_idb_client_sync_eod_pending.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::get_children()
{
    return children;
}

void SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "component")
    {
        component = value;
    }
    if(value_path == "session-count")
    {
        session_count = value;
    }
    if(value_path == "srg-show-idb-client-eoms-pending")
    {
        srg_show_idb_client_eoms_pending = value;
    }
    if(value_path == "srg-show-idb-client-sync-eod-pending")
    {
        srg_show_idb_client_sync_eod_pending = value;
    }
}

SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummaries()
{
    yang_name = "group-summaries"; yang_parent_name = "node";
}

SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::~GroupSummaries()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::has_data() const
{
    for (std::size_t index=0; index<group_summary.size(); index++)
    {
        if(group_summary[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::has_operation() const
{
    for (std::size_t index=0; index<group_summary.size(); index++)
    {
        if(group_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summaries";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupSummaries' in Cisco_IOS_XR_subscriber_srg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-summary")
    {
        for(auto const & c : group_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary>();
        c->parent = this;
        group_summary.push_back(std::move(c));
        children[segment_path] = group_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::get_children()
{
    for (auto const & c : group_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::set_value(const std::string & value_path, std::string value)
{
}

SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::GroupSummary()
    :
    group_id{YType::str, "group-id"},
    disabled{YType::boolean, "disabled"},
    group_id_xr{YType::uint32, "group-id-xr"},
    interface_count{YType::uint32, "interface-count"},
    object_tracking_status{YType::boolean, "object-tracking-status"},
    peer_ipv4_address{YType::str, "peer-ipv4-address"},
    peer_ipv6_address{YType::str, "peer-ipv6-address"},
    peer_status{YType::enumeration, "peer-status"},
    pending_add_session_count{YType::uint32, "pending-add-session-count"},
    preferred_role{YType::enumeration, "preferred-role"},
    role{YType::enumeration, "role"},
    session_count{YType::uint32, "session-count"},
    slave_mode{YType::enumeration, "slave-mode"}
{
    yang_name = "group-summary"; yang_parent_name = "group-summaries";
}

SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::~GroupSummary()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::has_data() const
{
    return group_id.is_set
	|| disabled.is_set
	|| group_id_xr.is_set
	|| interface_count.is_set
	|| object_tracking_status.is_set
	|| peer_ipv4_address.is_set
	|| peer_ipv6_address.is_set
	|| peer_status.is_set
	|| pending_add_session_count.is_set
	|| preferred_role.is_set
	|| role.is_set
	|| session_count.is_set
	|| slave_mode.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(group_id.operation)
	|| is_set(disabled.operation)
	|| is_set(group_id_xr.operation)
	|| is_set(interface_count.operation)
	|| is_set(object_tracking_status.operation)
	|| is_set(peer_ipv4_address.operation)
	|| is_set(peer_ipv6_address.operation)
	|| is_set(peer_status.operation)
	|| is_set(pending_add_session_count.operation)
	|| is_set(preferred_role.operation)
	|| is_set(role.operation)
	|| is_set(session_count.operation)
	|| is_set(slave_mode.operation);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summary" <<"[group-id='" <<group_id <<"']";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupSummary' in Cisco_IOS_XR_subscriber_srg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (disabled.is_set || is_set(disabled.operation)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (group_id_xr.is_set || is_set(group_id_xr.operation)) leaf_name_data.push_back(group_id_xr.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (object_tracking_status.is_set || is_set(object_tracking_status.operation)) leaf_name_data.push_back(object_tracking_status.get_name_leafdata());
    if (peer_ipv4_address.is_set || is_set(peer_ipv4_address.operation)) leaf_name_data.push_back(peer_ipv4_address.get_name_leafdata());
    if (peer_ipv6_address.is_set || is_set(peer_ipv6_address.operation)) leaf_name_data.push_back(peer_ipv6_address.get_name_leafdata());
    if (peer_status.is_set || is_set(peer_status.operation)) leaf_name_data.push_back(peer_status.get_name_leafdata());
    if (pending_add_session_count.is_set || is_set(pending_add_session_count.operation)) leaf_name_data.push_back(pending_add_session_count.get_name_leafdata());
    if (preferred_role.is_set || is_set(preferred_role.operation)) leaf_name_data.push_back(preferred_role.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.operation)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (slave_mode.is_set || is_set(slave_mode.operation)) leaf_name_data.push_back(slave_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::get_children()
{
    return children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "disabled")
    {
        disabled = value;
    }
    if(value_path == "group-id-xr")
    {
        group_id_xr = value;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
    if(value_path == "object-tracking-status")
    {
        object_tracking_status = value;
    }
    if(value_path == "peer-ipv4-address")
    {
        peer_ipv4_address = value;
    }
    if(value_path == "peer-ipv6-address")
    {
        peer_ipv6_address = value;
    }
    if(value_path == "peer-status")
    {
        peer_status = value;
    }
    if(value_path == "pending-add-session-count")
    {
        pending_add_session_count = value;
    }
    if(value_path == "preferred-role")
    {
        preferred_role = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "session-count")
    {
        session_count = value;
    }
    if(value_path == "slave-mode")
    {
        slave_mode = value;
    }
}

SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupIds()
{
    yang_name = "group-ids"; yang_parent_name = "node";
}

SubscriberRedundancyAgent::Nodes::Node::GroupIds::~GroupIds()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIds::has_data() const
{
    for (std::size_t index=0; index<group_id.size(); index++)
    {
        if(group_id[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIds::has_operation() const
{
    for (std::size_t index=0; index<group_id.size(); index++)
    {
        if(group_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-ids";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::Nodes::Node::GroupIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupIds' in Cisco_IOS_XR_subscriber_srg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::Nodes::Node::GroupIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-id")
    {
        for(auto const & c : group_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId>();
        c->parent = this;
        group_id.push_back(std::move(c));
        children[segment_path] = group_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::Nodes::Node::GroupIds::get_children()
{
    for (auto const & c : group_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIds::set_value(const std::string & value_path, std::string value)
{
}

SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::GroupId()
    :
    group_id{YType::str, "group-id"},
    access_tracking_object_name{YType::str, "access-tracking-object-name"},
    access_tracking_object_status{YType::boolean, "access-tracking-object-status"},
    core_tracking_object_name{YType::str, "core-tracking-object-name"},
    core_tracking_object_status{YType::boolean, "core-tracking-object-status"},
    current_role{YType::enumeration, "current-role"},
    description{YType::str, "description"},
    disabled{YType::boolean, "disabled"},
    group_id_xr{YType::uint32, "group-id-xr"},
    hold_timer{YType::uint32, "hold-timer"},
    init_role{YType::enumeration, "init-role"},
    interface_count{YType::uint32, "interface-count"},
    l2tp_source_ip{YType::str, "l2tp-source-ip"},
    last_switchover_reason{YType::enumeration, "last-switchover-reason"},
    last_switchover_time{YType::str, "last-switchover-time"},
    negotiating_role{YType::enumeration, "negotiating-role"},
    object_tracking_status{YType::boolean, "object-tracking-status"},
    peer_current_role{YType::enumeration, "peer-current-role"},
    peer_init_role{YType::enumeration, "peer-init-role"},
    peer_ipv4_address{YType::str, "peer-ipv4-address"},
    peer_ipv6_address{YType::str, "peer-ipv6-address"},
    peer_last_down_time{YType::str, "peer-last-down-time"},
    peer_last_negotiation_time{YType::str, "peer-last-negotiation-time"},
    peer_last_up_time{YType::str, "peer-last-up-time"},
    peer_negotiating_role{YType::enumeration, "peer-negotiating-role"},
    peer_object_tracking_status{YType::boolean, "peer-object-tracking-status"},
    peer_status{YType::enumeration, "peer-status"},
    pending_session_delete_count{YType::uint32, "pending-session-delete-count"},
    pending_session_update_count{YType::uint32, "pending-session-update-count"},
    revertive_timer{YType::uint32, "revertive-timer"},
    session_count{YType::uint32, "session-count"},
    slave_mode{YType::enumeration, "slave-mode"},
    slave_update_failure_count{YType::uint32, "slave-update-failure-count"},
    switchover_count{YType::uint32, "switchover-count"},
    switchover_hold_time{YType::uint32, "switchover-hold-time"},
    switchover_revert_time{YType::uint32, "switchover-revert-time"},
    tunnel_count{YType::uint32, "tunnel-count"},
    virtual_mac_address{YType::str, "virtual-mac-address"},
    virtual_mac_address_disable{YType::boolean, "virtual-mac-address-disable"}
{
    yang_name = "group-id"; yang_parent_name = "group-ids";
}

SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::~GroupId()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return group_id.is_set
	|| access_tracking_object_name.is_set
	|| access_tracking_object_status.is_set
	|| core_tracking_object_name.is_set
	|| core_tracking_object_status.is_set
	|| current_role.is_set
	|| description.is_set
	|| disabled.is_set
	|| group_id_xr.is_set
	|| hold_timer.is_set
	|| init_role.is_set
	|| interface_count.is_set
	|| l2tp_source_ip.is_set
	|| last_switchover_reason.is_set
	|| last_switchover_time.is_set
	|| negotiating_role.is_set
	|| object_tracking_status.is_set
	|| peer_current_role.is_set
	|| peer_init_role.is_set
	|| peer_ipv4_address.is_set
	|| peer_ipv6_address.is_set
	|| peer_last_down_time.is_set
	|| peer_last_negotiation_time.is_set
	|| peer_last_up_time.is_set
	|| peer_negotiating_role.is_set
	|| peer_object_tracking_status.is_set
	|| peer_status.is_set
	|| pending_session_delete_count.is_set
	|| pending_session_update_count.is_set
	|| revertive_timer.is_set
	|| session_count.is_set
	|| slave_mode.is_set
	|| slave_update_failure_count.is_set
	|| switchover_count.is_set
	|| switchover_hold_time.is_set
	|| switchover_revert_time.is_set
	|| tunnel_count.is_set
	|| virtual_mac_address.is_set
	|| virtual_mac_address_disable.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(group_id.operation)
	|| is_set(access_tracking_object_name.operation)
	|| is_set(access_tracking_object_status.operation)
	|| is_set(core_tracking_object_name.operation)
	|| is_set(core_tracking_object_status.operation)
	|| is_set(current_role.operation)
	|| is_set(description.operation)
	|| is_set(disabled.operation)
	|| is_set(group_id_xr.operation)
	|| is_set(hold_timer.operation)
	|| is_set(init_role.operation)
	|| is_set(interface_count.operation)
	|| is_set(l2tp_source_ip.operation)
	|| is_set(last_switchover_reason.operation)
	|| is_set(last_switchover_time.operation)
	|| is_set(negotiating_role.operation)
	|| is_set(object_tracking_status.operation)
	|| is_set(peer_current_role.operation)
	|| is_set(peer_init_role.operation)
	|| is_set(peer_ipv4_address.operation)
	|| is_set(peer_ipv6_address.operation)
	|| is_set(peer_last_down_time.operation)
	|| is_set(peer_last_negotiation_time.operation)
	|| is_set(peer_last_up_time.operation)
	|| is_set(peer_negotiating_role.operation)
	|| is_set(peer_object_tracking_status.operation)
	|| is_set(peer_status.operation)
	|| is_set(pending_session_delete_count.operation)
	|| is_set(pending_session_update_count.operation)
	|| is_set(revertive_timer.operation)
	|| is_set(session_count.operation)
	|| is_set(slave_mode.operation)
	|| is_set(slave_update_failure_count.operation)
	|| is_set(switchover_count.operation)
	|| is_set(switchover_hold_time.operation)
	|| is_set(switchover_revert_time.operation)
	|| is_set(tunnel_count.operation)
	|| is_set(virtual_mac_address.operation)
	|| is_set(virtual_mac_address_disable.operation);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id" <<"[group-id='" <<group_id <<"']";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupId' in Cisco_IOS_XR_subscriber_srg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (access_tracking_object_name.is_set || is_set(access_tracking_object_name.operation)) leaf_name_data.push_back(access_tracking_object_name.get_name_leafdata());
    if (access_tracking_object_status.is_set || is_set(access_tracking_object_status.operation)) leaf_name_data.push_back(access_tracking_object_status.get_name_leafdata());
    if (core_tracking_object_name.is_set || is_set(core_tracking_object_name.operation)) leaf_name_data.push_back(core_tracking_object_name.get_name_leafdata());
    if (core_tracking_object_status.is_set || is_set(core_tracking_object_status.operation)) leaf_name_data.push_back(core_tracking_object_status.get_name_leafdata());
    if (current_role.is_set || is_set(current_role.operation)) leaf_name_data.push_back(current_role.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (disabled.is_set || is_set(disabled.operation)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (group_id_xr.is_set || is_set(group_id_xr.operation)) leaf_name_data.push_back(group_id_xr.get_name_leafdata());
    if (hold_timer.is_set || is_set(hold_timer.operation)) leaf_name_data.push_back(hold_timer.get_name_leafdata());
    if (init_role.is_set || is_set(init_role.operation)) leaf_name_data.push_back(init_role.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (l2tp_source_ip.is_set || is_set(l2tp_source_ip.operation)) leaf_name_data.push_back(l2tp_source_ip.get_name_leafdata());
    if (last_switchover_reason.is_set || is_set(last_switchover_reason.operation)) leaf_name_data.push_back(last_switchover_reason.get_name_leafdata());
    if (last_switchover_time.is_set || is_set(last_switchover_time.operation)) leaf_name_data.push_back(last_switchover_time.get_name_leafdata());
    if (negotiating_role.is_set || is_set(negotiating_role.operation)) leaf_name_data.push_back(negotiating_role.get_name_leafdata());
    if (object_tracking_status.is_set || is_set(object_tracking_status.operation)) leaf_name_data.push_back(object_tracking_status.get_name_leafdata());
    if (peer_current_role.is_set || is_set(peer_current_role.operation)) leaf_name_data.push_back(peer_current_role.get_name_leafdata());
    if (peer_init_role.is_set || is_set(peer_init_role.operation)) leaf_name_data.push_back(peer_init_role.get_name_leafdata());
    if (peer_ipv4_address.is_set || is_set(peer_ipv4_address.operation)) leaf_name_data.push_back(peer_ipv4_address.get_name_leafdata());
    if (peer_ipv6_address.is_set || is_set(peer_ipv6_address.operation)) leaf_name_data.push_back(peer_ipv6_address.get_name_leafdata());
    if (peer_last_down_time.is_set || is_set(peer_last_down_time.operation)) leaf_name_data.push_back(peer_last_down_time.get_name_leafdata());
    if (peer_last_negotiation_time.is_set || is_set(peer_last_negotiation_time.operation)) leaf_name_data.push_back(peer_last_negotiation_time.get_name_leafdata());
    if (peer_last_up_time.is_set || is_set(peer_last_up_time.operation)) leaf_name_data.push_back(peer_last_up_time.get_name_leafdata());
    if (peer_negotiating_role.is_set || is_set(peer_negotiating_role.operation)) leaf_name_data.push_back(peer_negotiating_role.get_name_leafdata());
    if (peer_object_tracking_status.is_set || is_set(peer_object_tracking_status.operation)) leaf_name_data.push_back(peer_object_tracking_status.get_name_leafdata());
    if (peer_status.is_set || is_set(peer_status.operation)) leaf_name_data.push_back(peer_status.get_name_leafdata());
    if (pending_session_delete_count.is_set || is_set(pending_session_delete_count.operation)) leaf_name_data.push_back(pending_session_delete_count.get_name_leafdata());
    if (pending_session_update_count.is_set || is_set(pending_session_update_count.operation)) leaf_name_data.push_back(pending_session_update_count.get_name_leafdata());
    if (revertive_timer.is_set || is_set(revertive_timer.operation)) leaf_name_data.push_back(revertive_timer.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.operation)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (slave_mode.is_set || is_set(slave_mode.operation)) leaf_name_data.push_back(slave_mode.get_name_leafdata());
    if (slave_update_failure_count.is_set || is_set(slave_update_failure_count.operation)) leaf_name_data.push_back(slave_update_failure_count.get_name_leafdata());
    if (switchover_count.is_set || is_set(switchover_count.operation)) leaf_name_data.push_back(switchover_count.get_name_leafdata());
    if (switchover_hold_time.is_set || is_set(switchover_hold_time.operation)) leaf_name_data.push_back(switchover_hold_time.get_name_leafdata());
    if (switchover_revert_time.is_set || is_set(switchover_revert_time.operation)) leaf_name_data.push_back(switchover_revert_time.get_name_leafdata());
    if (tunnel_count.is_set || is_set(tunnel_count.operation)) leaf_name_data.push_back(tunnel_count.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.operation)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());
    if (virtual_mac_address_disable.is_set || is_set(virtual_mac_address_disable.operation)) leaf_name_data.push_back(virtual_mac_address_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "access-tracking-object-name")
    {
        access_tracking_object_name = value;
    }
    if(value_path == "access-tracking-object-status")
    {
        access_tracking_object_status = value;
    }
    if(value_path == "core-tracking-object-name")
    {
        core_tracking_object_name = value;
    }
    if(value_path == "core-tracking-object-status")
    {
        core_tracking_object_status = value;
    }
    if(value_path == "current-role")
    {
        current_role = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "disabled")
    {
        disabled = value;
    }
    if(value_path == "group-id-xr")
    {
        group_id_xr = value;
    }
    if(value_path == "hold-timer")
    {
        hold_timer = value;
    }
    if(value_path == "init-role")
    {
        init_role = value;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
    if(value_path == "l2tp-source-ip")
    {
        l2tp_source_ip = value;
    }
    if(value_path == "last-switchover-reason")
    {
        last_switchover_reason = value;
    }
    if(value_path == "last-switchover-time")
    {
        last_switchover_time = value;
    }
    if(value_path == "negotiating-role")
    {
        negotiating_role = value;
    }
    if(value_path == "object-tracking-status")
    {
        object_tracking_status = value;
    }
    if(value_path == "peer-current-role")
    {
        peer_current_role = value;
    }
    if(value_path == "peer-init-role")
    {
        peer_init_role = value;
    }
    if(value_path == "peer-ipv4-address")
    {
        peer_ipv4_address = value;
    }
    if(value_path == "peer-ipv6-address")
    {
        peer_ipv6_address = value;
    }
    if(value_path == "peer-last-down-time")
    {
        peer_last_down_time = value;
    }
    if(value_path == "peer-last-negotiation-time")
    {
        peer_last_negotiation_time = value;
    }
    if(value_path == "peer-last-up-time")
    {
        peer_last_up_time = value;
    }
    if(value_path == "peer-negotiating-role")
    {
        peer_negotiating_role = value;
    }
    if(value_path == "peer-object-tracking-status")
    {
        peer_object_tracking_status = value;
    }
    if(value_path == "peer-status")
    {
        peer_status = value;
    }
    if(value_path == "pending-session-delete-count")
    {
        pending_session_delete_count = value;
    }
    if(value_path == "pending-session-update-count")
    {
        pending_session_update_count = value;
    }
    if(value_path == "revertive-timer")
    {
        revertive_timer = value;
    }
    if(value_path == "session-count")
    {
        session_count = value;
    }
    if(value_path == "slave-mode")
    {
        slave_mode = value;
    }
    if(value_path == "slave-update-failure-count")
    {
        slave_update_failure_count = value;
    }
    if(value_path == "switchover-count")
    {
        switchover_count = value;
    }
    if(value_path == "switchover-hold-time")
    {
        switchover_hold_time = value;
    }
    if(value_path == "switchover-revert-time")
    {
        switchover_revert_time = value;
    }
    if(value_path == "tunnel-count")
    {
        tunnel_count = value;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
    }
    if(value_path == "virtual-mac-address-disable")
    {
        virtual_mac_address_disable = value;
    }
}

SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::Interface()
    :
    forward_referenced{YType::boolean, "forward-referenced"},
    interface_name{YType::str, "interface-name"},
    interface_synchronization_id{YType::uint32, "interface-synchronization-id"},
    session_count{YType::uint32, "session-count"}
{
    yang_name = "interface"; yang_parent_name = "group-id";
}

SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::~Interface()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::has_data() const
{
    return forward_referenced.is_set
	|| interface_name.is_set
	|| interface_synchronization_id.is_set
	|| session_count.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(forward_referenced.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_synchronization_id.operation)
	|| is_set(session_count.operation);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_subscriber_srg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward_referenced.is_set || is_set(forward_referenced.operation)) leaf_name_data.push_back(forward_referenced.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_synchronization_id.is_set || is_set(interface_synchronization_id.operation)) leaf_name_data.push_back(interface_synchronization_id.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.operation)) leaf_name_data.push_back(session_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::get_children()
{
    return children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forward-referenced")
    {
        forward_referenced = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-synchronization-id")
    {
        interface_synchronization_id = value;
    }
    if(value_path == "session-count")
    {
        session_count = value;
    }
}

const Enum::YLeaf SrgShowImRoleEnum::none {0, "none"};
const Enum::YLeaf SrgShowImRoleEnum::master {1, "master"};
const Enum::YLeaf SrgShowImRoleEnum::slave {2, "slave"};

const Enum::YLeaf SrgShowSessionErrorEnum::none {0, "none"};
const Enum::YLeaf SrgShowSessionErrorEnum::hard {1, "hard"};
const Enum::YLeaf SrgShowSessionErrorEnum::soft {2, "soft"};

const Enum::YLeaf SrgShowSoReasonEnum::internal {0, "internal"};
const Enum::YLeaf SrgShowSoReasonEnum::admin {1, "admin"};
const Enum::YLeaf SrgShowSoReasonEnum::peer_up {2, "peer-up"};
const Enum::YLeaf SrgShowSoReasonEnum::peer_down {3, "peer-down"};
const Enum::YLeaf SrgShowSoReasonEnum::object_tracking_status_change {4, "object-tracking-status-change"};
const Enum::YLeaf SrgShowSoReasonEnum::srg_show_so_reason_max {5, "srg-show-so-reason-max"};

const Enum::YLeaf SrgShowSessionOperationEnum::none {0, "none"};
const Enum::YLeaf SrgShowSessionOperationEnum::update {1, "update"};
const Enum::YLeaf SrgShowSessionOperationEnum::delete_ {2, "delete"};
const Enum::YLeaf SrgShowSessionOperationEnum::in_sync {3, "in-sync"};

const Enum::YLeaf SrgPeerStatusEnum::not_configured {0, "not-configured"};
const Enum::YLeaf SrgPeerStatusEnum::initialize {1, "initialize"};
const Enum::YLeaf SrgPeerStatusEnum::retry {2, "retry"};
const Enum::YLeaf SrgPeerStatusEnum::connect {3, "connect"};
const Enum::YLeaf SrgPeerStatusEnum::listen {4, "listen"};
const Enum::YLeaf SrgPeerStatusEnum::registration {5, "registration"};
const Enum::YLeaf SrgPeerStatusEnum::cleanup {6, "cleanup"};
const Enum::YLeaf SrgPeerStatusEnum::connected {7, "connected"};
const Enum::YLeaf SrgPeerStatusEnum::established {8, "established"};

const Enum::YLeaf SrgShowRoleEnum::none {0, "none"};
const Enum::YLeaf SrgShowRoleEnum::master {1, "master"};
const Enum::YLeaf SrgShowRoleEnum::slave {2, "slave"};

const Enum::YLeaf SrgShowSlaveModeEnum::none {0, "none"};
const Enum::YLeaf SrgShowSlaveModeEnum::warm {1, "warm"};
const Enum::YLeaf SrgShowSlaveModeEnum::hot {2, "hot"};

const Enum::YLeaf SrgShowCompEnum::srga {0, "srga"};
const Enum::YLeaf SrgShowCompEnum::dhcpv4 {1, "dhcpv4"};
const Enum::YLeaf SrgShowCompEnum::dhcpv6 {2, "dhcpv6"};
const Enum::YLeaf SrgShowCompEnum::pppoe {3, "pppoe"};
const Enum::YLeaf SrgShowCompEnum::ppp {4, "ppp"};
const Enum::YLeaf SrgShowCompEnum::l2tp {5, "l2tp"};
const Enum::YLeaf SrgShowCompEnum::iedge {6, "iedge"};


}
}

