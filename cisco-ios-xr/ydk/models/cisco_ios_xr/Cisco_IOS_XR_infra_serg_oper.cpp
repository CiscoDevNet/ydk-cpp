
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_serg_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_serg_oper {

SessionRedundancyManager::SessionRedundancyManager()
    :
    groups(std::make_shared<SessionRedundancyManager::Groups>())
	,interfaces(std::make_shared<SessionRedundancyManager::Interfaces>())
	,summary(std::make_shared<SessionRedundancyManager::Summary>())
{
    groups->parent = this;

    interfaces->parent = this;

    summary->parent = this;

    yang_name = "session-redundancy-manager"; yang_parent_name = "Cisco-IOS-XR-infra-serg-oper";
}

SessionRedundancyManager::~SessionRedundancyManager()
{
}

bool SessionRedundancyManager::has_data() const
{
    return (groups !=  nullptr && groups->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool SessionRedundancyManager::has_operation() const
{
    return is_set(operation)
	|| (groups !=  nullptr && groups->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string SessionRedundancyManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-manager";

    return path_buffer.str();

}

const EntityPath SessionRedundancyManager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<SessionRedundancyManager::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<SessionRedundancyManager::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<SessionRedundancyManager::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyManager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void SessionRedundancyManager::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SessionRedundancyManager::clone_ptr() const
{
    return std::make_shared<SessionRedundancyManager>();
}

std::string SessionRedundancyManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SessionRedundancyManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SessionRedundancyManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

SessionRedundancyManager::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "session-redundancy-manager";
}

SessionRedundancyManager::Interfaces::~Interfaces()
{
}

bool SessionRedundancyManager::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyManager::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SessionRedundancyManager::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath SessionRedundancyManager::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyManager::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<SessionRedundancyManager::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyManager::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SessionRedundancyManager::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

SessionRedundancyManager::Interfaces::Interface::Interface()
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

SessionRedundancyManager::Interfaces::Interface::~Interface()
{
}

bool SessionRedundancyManager::Interfaces::Interface::has_data() const
{
    return interface.is_set
	|| forward_referenced.is_set
	|| group_id.is_set
	|| interface_mapping_id.is_set
	|| interface_name.is_set
	|| role.is_set;
}

bool SessionRedundancyManager::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(forward_referenced.operation)
	|| is_set(group_id.operation)
	|| is_set(interface_mapping_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(role.operation);
}

std::string SessionRedundancyManager::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath SessionRedundancyManager::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-manager/interfaces/" << get_segment_path();
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

std::shared_ptr<Entity> SessionRedundancyManager::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyManager::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyManager::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
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

SessionRedundancyManager::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "session-redundancy-manager";
}

SessionRedundancyManager::Groups::~Groups()
{
}

bool SessionRedundancyManager::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyManager::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SessionRedundancyManager::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

const EntityPath SessionRedundancyManager::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyManager::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<SessionRedundancyManager::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyManager::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SessionRedundancyManager::Groups::set_value(const std::string & value_path, std::string value)
{
}

SessionRedundancyManager::Groups::Group::Group()
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
    slave_mode{YType::enumeration, "slave-mode"}
{
    yang_name = "group"; yang_parent_name = "groups";
}

SessionRedundancyManager::Groups::Group::~Group()
{
}

bool SessionRedundancyManager::Groups::Group::has_data() const
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
	|| slave_mode.is_set;
}

bool SessionRedundancyManager::Groups::Group::has_operation() const
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
	|| is_set(slave_mode.operation);
}

std::string SessionRedundancyManager::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group='" <<group <<"']";

    return path_buffer.str();

}

const EntityPath SessionRedundancyManager::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-manager/groups/" << get_segment_path();
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyManager::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyManager::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyManager::Groups::Group::set_value(const std::string & value_path, std::string value)
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
}

SessionRedundancyManager::Summary::Summary()
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
    yang_name = "summary"; yang_parent_name = "session-redundancy-manager";
}

SessionRedundancyManager::Summary::~Summary()
{
}

bool SessionRedundancyManager::Summary::has_data() const
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

bool SessionRedundancyManager::Summary::has_operation() const
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

std::string SessionRedundancyManager::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath SessionRedundancyManager::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-manager/" << get_segment_path();
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

std::shared_ptr<Entity> SessionRedundancyManager::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyManager::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyManager::Summary::set_value(const std::string & value_path, std::string value)
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

SessionRedundancyAgent::SessionRedundancyAgent()
    :
    nodes(std::make_shared<SessionRedundancyAgent::Nodes>())
{
    nodes->parent = this;

    yang_name = "session-redundancy-agent"; yang_parent_name = "Cisco-IOS-XR-infra-serg-oper";
}

SessionRedundancyAgent::~SessionRedundancyAgent()
{
}

bool SessionRedundancyAgent::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool SessionRedundancyAgent::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string SessionRedundancyAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-agent";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<SessionRedundancyAgent::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void SessionRedundancyAgent::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SessionRedundancyAgent::clone_ptr() const
{
    return std::make_shared<SessionRedundancyAgent>();
}

std::string SessionRedundancyAgent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SessionRedundancyAgent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SessionRedundancyAgent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

SessionRedundancyAgent::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "session-redundancy-agent";
}

SessionRedundancyAgent::Nodes::~Nodes()
{
}

bool SessionRedundancyAgent::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyAgent::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SessionRedundancyAgent::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SessionRedundancyAgent::Nodes::set_value(const std::string & value_path, std::string value)
{
}

SessionRedundancyAgent::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    client_ids(std::make_shared<SessionRedundancyAgent::Nodes::Node::ClientIds>())
	,group_id_xr(std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIdXr>())
	,group_ids(std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIds>())
	,group_summaries(std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupSummaries>())
	,interfaces(std::make_shared<SessionRedundancyAgent::Nodes::Node::Interfaces>())
	,memory(std::make_shared<SessionRedundancyAgent::Nodes::Node::Memory>())
	,stats_global(std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal>())
{
    client_ids->parent = this;

    group_id_xr->parent = this;

    group_ids->parent = this;

    group_summaries->parent = this;

    interfaces->parent = this;

    memory->parent = this;

    stats_global->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

SessionRedundancyAgent::Nodes::Node::~Node()
{
}

bool SessionRedundancyAgent::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (client_ids !=  nullptr && client_ids->has_data())
	|| (group_id_xr !=  nullptr && group_id_xr->has_data())
	|| (group_ids !=  nullptr && group_ids->has_data())
	|| (group_summaries !=  nullptr && group_summaries->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (memory !=  nullptr && memory->has_data())
	|| (stats_global !=  nullptr && stats_global->has_data());
}

bool SessionRedundancyAgent::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (client_ids !=  nullptr && client_ids->has_operation())
	|| (group_id_xr !=  nullptr && group_id_xr->has_operation())
	|| (group_ids !=  nullptr && group_ids->has_operation())
	|| (group_summaries !=  nullptr && group_summaries->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (memory !=  nullptr && memory->has_operation())
	|| (stats_global !=  nullptr && stats_global->has_operation());
}

std::string SessionRedundancyAgent::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-agent/nodes/" << get_segment_path();
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

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-ids")
    {
        if(client_ids == nullptr)
        {
            client_ids = std::make_shared<SessionRedundancyAgent::Nodes::Node::ClientIds>();
        }
        return client_ids;
    }

    if(child_yang_name == "group-id-xr")
    {
        if(group_id_xr == nullptr)
        {
            group_id_xr = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIdXr>();
        }
        return group_id_xr;
    }

    if(child_yang_name == "group-ids")
    {
        if(group_ids == nullptr)
        {
            group_ids = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIds>();
        }
        return group_ids;
    }

    if(child_yang_name == "group-summaries")
    {
        if(group_summaries == nullptr)
        {
            group_summaries = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupSummaries>();
        }
        return group_summaries;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<SessionRedundancyAgent::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "memory")
    {
        if(memory == nullptr)
        {
            memory = std::make_shared<SessionRedundancyAgent::Nodes::Node::Memory>();
        }
        return memory;
    }

    if(child_yang_name == "stats-global")
    {
        if(stats_global == nullptr)
        {
            stats_global = std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal>();
        }
        return stats_global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_ids != nullptr)
    {
        children["client-ids"] = client_ids;
    }

    if(group_id_xr != nullptr)
    {
        children["group-id-xr"] = group_id_xr;
    }

    if(group_ids != nullptr)
    {
        children["group-ids"] = group_ids;
    }

    if(group_summaries != nullptr)
    {
        children["group-summaries"] = group_summaries;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(memory != nullptr)
    {
        children["memory"] = memory;
    }

    if(stats_global != nullptr)
    {
        children["stats-global"] = stats_global;
    }

    return children;
}

void SessionRedundancyAgent::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupIdXr()
{
    yang_name = "group-id-xr"; yang_parent_name = "node";
}

SessionRedundancyAgent::Nodes::Node::GroupIdXr::~GroupIdXr()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::has_data() const
{
    for (std::size_t index=0; index<group_id.size(); index++)
    {
        if(group_id[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::has_operation() const
{
    for (std::size_t index=0; index<group_id.size(); index++)
    {
        if(group_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIdXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id-xr";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::GroupIdXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupIdXr' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::GroupIdXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-id")
    {
        for(auto const & c : group_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId>();
        c->parent = this;
        group_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::GroupIdXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SessionRedundancyAgent::Nodes::Node::GroupIdXr::set_value(const std::string & value_path, std::string value)
{
}

SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::GroupId()
    :
    group_id{YType::str, "group-id"},
    group_id_xr{YType::uint32, "group-id-xr"},
    interface_name{YType::str, "interface-name"},
    key_index{YType::str, "key-index"},
    negative_acknowledgement_update_all{YType::boolean, "negative-acknowledgement-update-all"},
    role_master{YType::boolean, "role-master"}
{
    yang_name = "group-id"; yang_parent_name = "group-id-xr";
}

SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::~GroupId()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::has_data() const
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
	|| interface_name.is_set
	|| key_index.is_set
	|| negative_acknowledgement_update_all.is_set
	|| role_master.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::has_operation() const
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
	|| is_set(interface_name.operation)
	|| is_set(key_index.operation)
	|| is_set(negative_acknowledgement_update_all.operation)
	|| is_set(role_master.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id" <<"[group-id='" <<group_id <<"']";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupId' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_id_xr.is_set || is_set(group_id_xr.operation)) leaf_name_data.push_back(group_id_xr.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (key_index.is_set || is_set(key_index.operation)) leaf_name_data.push_back(key_index.get_name_leafdata());
    if (negative_acknowledgement_update_all.is_set || is_set(negative_acknowledgement_update_all.operation)) leaf_name_data.push_back(negative_acknowledgement_update_all.get_name_leafdata());
    if (role_master.is_set || is_set(role_master.operation)) leaf_name_data.push_back(role_master.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detailed-information")
    {
        for(auto const & c : session_detailed_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation>();
        c->parent = this;
        session_detailed_information.push_back(c);
        return c;
    }

    if(child_yang_name == "session-sync-error-information")
    {
        for(auto const & c : session_sync_error_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation>();
        c->parent = this;
        session_sync_error_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_detailed_information)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : session_sync_error_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "group-id-xr")
    {
        group_id_xr = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "key-index")
    {
        key_index = value;
    }
    if(value_path == "negative-acknowledgement-update-all")
    {
        negative_acknowledgement_update_all = value;
    }
    if(value_path == "role-master")
    {
        role_master = value;
    }
}

SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::SessionDetailedInformation()
    :
    component{YType::enumeration, "component"},
    marked_for_cleanup{YType::boolean, "marked-for-cleanup"},
    marked_for_sweeping{YType::boolean, "marked-for-sweeping"},
    operation_{YType::enumeration, "operation"},
    tx_list_queue_fail{YType::boolean, "tx-list-queue-fail"}
{
    yang_name = "session-detailed-information"; yang_parent_name = "group-id";
}

SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::~SessionDetailedInformation()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::has_data() const
{
    return component.is_set
	|| marked_for_cleanup.is_set
	|| marked_for_sweeping.is_set
	|| operation_.is_set
	|| tx_list_queue_fail.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(component.operation)
	|| is_set(marked_for_cleanup.operation)
	|| is_set(marked_for_sweeping.operation)
	|| is_set(operation_.operation)
	|| is_set(tx_list_queue_fail.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detailed-information";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionDetailedInformation' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::set_value(const std::string & value_path, std::string value)
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

SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::SessionSyncErrorInformation()
    :
    last_error_code{YType::uint32, "last-error-code"},
    last_error_type{YType::enumeration, "last-error-type"},
    sync_error_count{YType::uint16, "sync-error-count"}
{
    yang_name = "session-sync-error-information"; yang_parent_name = "group-id";
}

SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::~SessionSyncErrorInformation()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::has_data() const
{
    return last_error_code.is_set
	|| last_error_type.is_set
	|| sync_error_count.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(last_error_code.operation)
	|| is_set(last_error_type.operation)
	|| is_set(sync_error_count.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-sync-error-information";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionSyncErrorInformation' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::set_value(const std::string & value_path, std::string value)
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

SessionRedundancyAgent::Nodes::Node::ClientIds::ClientIds()
{
    yang_name = "client-ids"; yang_parent_name = "node";
}

SessionRedundancyAgent::Nodes::Node::ClientIds::~ClientIds()
{
}

bool SessionRedundancyAgent::Nodes::Node::ClientIds::has_data() const
{
    for (std::size_t index=0; index<client_id.size(); index++)
    {
        if(client_id[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyAgent::Nodes::Node::ClientIds::has_operation() const
{
    for (std::size_t index=0; index<client_id.size(); index++)
    {
        if(client_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SessionRedundancyAgent::Nodes::Node::ClientIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-ids";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::ClientIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientIds' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::ClientIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-id")
    {
        for(auto const & c : client_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId>();
        c->parent = this;
        client_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::ClientIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SessionRedundancyAgent::Nodes::Node::ClientIds::set_value(const std::string & value_path, std::string value)
{
}

SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::ClientId()
    :
    stats_client_id{YType::int32, "stats-client-id"},
    clean_call_back{YType::uint32, "clean-call-back"},
    last_replay_all_count{YType::uint32, "last-replay-all-count"},
    tx_list_active_not_ok{YType::uint32, "tx-list-active-not-ok"},
    tx_list_active_ok{YType::uint32, "tx-list-active-ok"},
    tx_list_clear_all_add_not_ok{YType::uint32, "tx-list-clear-all-add-not-ok"},
    tx_list_clear_all_add_ok{YType::uint32, "tx-list-clear-all-add-ok"},
    tx_list_clear_selected_add_not_ok{YType::uint32, "tx-list-clear-selected-add-not-ok"},
    tx_list_clear_selected_add_ok{YType::uint32, "tx-list-clear-selected-add-ok"},
    tx_list_client_cleanup{YType::uint32, "tx-list-client-cleanup"},
    tx_list_client_connection_down{YType::uint32, "tx-list-client-connection-down"},
    tx_list_client_de_registration{YType::uint32, "tx-list-client-de-registration"},
    tx_list_client_registration_not_ok{YType::uint32, "tx-list-client-registration-not-ok"},
    tx_list_client_registration_ok{YType::uint32, "tx-list-client-registration-ok"},
    tx_list_de_active_not_ok{YType::uint32, "tx-list-de-active-not-ok"},
    tx_list_de_active_ok{YType::uint32, "tx-list-de-active-ok"},
    tx_list_encode_session_session_ok{YType::uint32, "tx-list-encode-session-session-ok"},
    tx_list_encode_session_session_partial_write{YType::uint32, "tx-list-encode-session-session-partial-write"},
    tx_list_end_of_download_add_not_ok{YType::uint32, "tx-list-end-of-download-add-not-ok"},
    tx_list_end_of_download_add_ok{YType::uint32, "tx-list-end-of-download-add-ok"},
    tx_list_end_of_message_add_not_ok{YType::uint32, "tx-list-end-of-message-add-not-ok"},
    tx_list_end_of_message_add_ok{YType::uint32, "tx-list-end-of-message-add-ok"},
    tx_list_receive_command_replay_all{YType::uint32, "tx-list-receive-command-replay-all"},
    tx_list_receive_command_replay_selected{YType::uint32, "tx-list-receive-command-replay-selected"},
    tx_list_receive_session_session_clear_all{YType::uint32, "tx-list-receive-session-session-clear-all"},
    tx_list_receive_session_session_clear_selected{YType::uint32, "tx-list-receive-session-session-clear-selected"},
    tx_list_receive_session_session_delete_invalid{YType::uint32, "tx-list-receive-session-session-delete-invalid"},
    tx_list_receive_session_session_delete_valid{YType::uint32, "tx-list-receive-session-session-delete-valid"},
    tx_list_receive_session_session_eod_all{YType::uint32, "tx-list-receive-session-session-eod-all"},
    tx_list_receive_session_session_eod_selected{YType::uint32, "tx-list-receive-session-session-eod-selected"},
    tx_list_receive_session_session_eoms{YType::uint32, "tx-list-receive-session-session-eoms"},
    tx_list_receive_session_session_neg_ack{YType::uint32, "tx-list-receive-session-session-neg-ack"},
    tx_list_receive_session_session_neg_ack_not_ok{YType::uint32, "tx-list-receive-session-session-neg-ack-not-ok"},
    tx_list_receive_session_session_sod_all{YType::uint32, "tx-list-receive-session-session-sod-all"},
    tx_list_receive_session_session_sod_selected{YType::uint32, "tx-list-receive-session-session-sod-selected"},
    tx_list_receive_session_session_update_invalid{YType::uint32, "tx-list-receive-session-session-update-invalid"},
    tx_list_receive_session_session_update_valid{YType::uint32, "tx-list-receive-session-session-update-valid"},
    tx_list_replay_all_add_not_ok{YType::uint32, "tx-list-replay-all-add-not-ok"},
    tx_list_replay_all_add_ok{YType::uint32, "tx-list-replay-all-add-ok"},
    tx_list_replay_selected_add_not_ok{YType::uint32, "tx-list-replay-selected-add-not-ok"},
    tx_list_replay_selected_add_ok{YType::uint32, "tx-list-replay-selected-add-ok"},
    tx_list_session_session_add_not_ok{YType::uint32, "tx-list-session-session-add-not-ok"},
    tx_list_session_session_add_ok{YType::uint32, "tx-list-session-session-add-ok"},
    tx_list_session_session_delete{YType::uint32, "tx-list-session-session-delete"},
    tx_list_session_session_update_not_ok{YType::uint32, "tx-list-session-session-update-not-ok"},
    tx_list_session_session_update_ok{YType::uint32, "tx-list-session-session-update-ok"},
    tx_list_start_of_download_add_not_ok{YType::uint32, "tx-list-start-of-download-add-not-ok"},
    tx_list_start_of_download_add_ok{YType::uint32, "tx-list-start-of-download-add-ok"}
{
    yang_name = "client-id"; yang_parent_name = "client-ids";
}

SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::~ClientId()
{
}

bool SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::has_data() const
{
    return stats_client_id.is_set
	|| clean_call_back.is_set
	|| last_replay_all_count.is_set
	|| tx_list_active_not_ok.is_set
	|| tx_list_active_ok.is_set
	|| tx_list_clear_all_add_not_ok.is_set
	|| tx_list_clear_all_add_ok.is_set
	|| tx_list_clear_selected_add_not_ok.is_set
	|| tx_list_clear_selected_add_ok.is_set
	|| tx_list_client_cleanup.is_set
	|| tx_list_client_connection_down.is_set
	|| tx_list_client_de_registration.is_set
	|| tx_list_client_registration_not_ok.is_set
	|| tx_list_client_registration_ok.is_set
	|| tx_list_de_active_not_ok.is_set
	|| tx_list_de_active_ok.is_set
	|| tx_list_encode_session_session_ok.is_set
	|| tx_list_encode_session_session_partial_write.is_set
	|| tx_list_end_of_download_add_not_ok.is_set
	|| tx_list_end_of_download_add_ok.is_set
	|| tx_list_end_of_message_add_not_ok.is_set
	|| tx_list_end_of_message_add_ok.is_set
	|| tx_list_receive_command_replay_all.is_set
	|| tx_list_receive_command_replay_selected.is_set
	|| tx_list_receive_session_session_clear_all.is_set
	|| tx_list_receive_session_session_clear_selected.is_set
	|| tx_list_receive_session_session_delete_invalid.is_set
	|| tx_list_receive_session_session_delete_valid.is_set
	|| tx_list_receive_session_session_eod_all.is_set
	|| tx_list_receive_session_session_eod_selected.is_set
	|| tx_list_receive_session_session_eoms.is_set
	|| tx_list_receive_session_session_neg_ack.is_set
	|| tx_list_receive_session_session_neg_ack_not_ok.is_set
	|| tx_list_receive_session_session_sod_all.is_set
	|| tx_list_receive_session_session_sod_selected.is_set
	|| tx_list_receive_session_session_update_invalid.is_set
	|| tx_list_receive_session_session_update_valid.is_set
	|| tx_list_replay_all_add_not_ok.is_set
	|| tx_list_replay_all_add_ok.is_set
	|| tx_list_replay_selected_add_not_ok.is_set
	|| tx_list_replay_selected_add_ok.is_set
	|| tx_list_session_session_add_not_ok.is_set
	|| tx_list_session_session_add_ok.is_set
	|| tx_list_session_session_delete.is_set
	|| tx_list_session_session_update_not_ok.is_set
	|| tx_list_session_session_update_ok.is_set
	|| tx_list_start_of_download_add_not_ok.is_set
	|| tx_list_start_of_download_add_ok.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::has_operation() const
{
    return is_set(operation)
	|| is_set(stats_client_id.operation)
	|| is_set(clean_call_back.operation)
	|| is_set(last_replay_all_count.operation)
	|| is_set(tx_list_active_not_ok.operation)
	|| is_set(tx_list_active_ok.operation)
	|| is_set(tx_list_clear_all_add_not_ok.operation)
	|| is_set(tx_list_clear_all_add_ok.operation)
	|| is_set(tx_list_clear_selected_add_not_ok.operation)
	|| is_set(tx_list_clear_selected_add_ok.operation)
	|| is_set(tx_list_client_cleanup.operation)
	|| is_set(tx_list_client_connection_down.operation)
	|| is_set(tx_list_client_de_registration.operation)
	|| is_set(tx_list_client_registration_not_ok.operation)
	|| is_set(tx_list_client_registration_ok.operation)
	|| is_set(tx_list_de_active_not_ok.operation)
	|| is_set(tx_list_de_active_ok.operation)
	|| is_set(tx_list_encode_session_session_ok.operation)
	|| is_set(tx_list_encode_session_session_partial_write.operation)
	|| is_set(tx_list_end_of_download_add_not_ok.operation)
	|| is_set(tx_list_end_of_download_add_ok.operation)
	|| is_set(tx_list_end_of_message_add_not_ok.operation)
	|| is_set(tx_list_end_of_message_add_ok.operation)
	|| is_set(tx_list_receive_command_replay_all.operation)
	|| is_set(tx_list_receive_command_replay_selected.operation)
	|| is_set(tx_list_receive_session_session_clear_all.operation)
	|| is_set(tx_list_receive_session_session_clear_selected.operation)
	|| is_set(tx_list_receive_session_session_delete_invalid.operation)
	|| is_set(tx_list_receive_session_session_delete_valid.operation)
	|| is_set(tx_list_receive_session_session_eod_all.operation)
	|| is_set(tx_list_receive_session_session_eod_selected.operation)
	|| is_set(tx_list_receive_session_session_eoms.operation)
	|| is_set(tx_list_receive_session_session_neg_ack.operation)
	|| is_set(tx_list_receive_session_session_neg_ack_not_ok.operation)
	|| is_set(tx_list_receive_session_session_sod_all.operation)
	|| is_set(tx_list_receive_session_session_sod_selected.operation)
	|| is_set(tx_list_receive_session_session_update_invalid.operation)
	|| is_set(tx_list_receive_session_session_update_valid.operation)
	|| is_set(tx_list_replay_all_add_not_ok.operation)
	|| is_set(tx_list_replay_all_add_ok.operation)
	|| is_set(tx_list_replay_selected_add_not_ok.operation)
	|| is_set(tx_list_replay_selected_add_ok.operation)
	|| is_set(tx_list_session_session_add_not_ok.operation)
	|| is_set(tx_list_session_session_add_ok.operation)
	|| is_set(tx_list_session_session_delete.operation)
	|| is_set(tx_list_session_session_update_not_ok.operation)
	|| is_set(tx_list_session_session_update_ok.operation)
	|| is_set(tx_list_start_of_download_add_not_ok.operation)
	|| is_set(tx_list_start_of_download_add_ok.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-id" <<"[stats-client-id='" <<stats_client_id <<"']";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientId' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stats_client_id.is_set || is_set(stats_client_id.operation)) leaf_name_data.push_back(stats_client_id.get_name_leafdata());
    if (clean_call_back.is_set || is_set(clean_call_back.operation)) leaf_name_data.push_back(clean_call_back.get_name_leafdata());
    if (last_replay_all_count.is_set || is_set(last_replay_all_count.operation)) leaf_name_data.push_back(last_replay_all_count.get_name_leafdata());
    if (tx_list_active_not_ok.is_set || is_set(tx_list_active_not_ok.operation)) leaf_name_data.push_back(tx_list_active_not_ok.get_name_leafdata());
    if (tx_list_active_ok.is_set || is_set(tx_list_active_ok.operation)) leaf_name_data.push_back(tx_list_active_ok.get_name_leafdata());
    if (tx_list_clear_all_add_not_ok.is_set || is_set(tx_list_clear_all_add_not_ok.operation)) leaf_name_data.push_back(tx_list_clear_all_add_not_ok.get_name_leafdata());
    if (tx_list_clear_all_add_ok.is_set || is_set(tx_list_clear_all_add_ok.operation)) leaf_name_data.push_back(tx_list_clear_all_add_ok.get_name_leafdata());
    if (tx_list_clear_selected_add_not_ok.is_set || is_set(tx_list_clear_selected_add_not_ok.operation)) leaf_name_data.push_back(tx_list_clear_selected_add_not_ok.get_name_leafdata());
    if (tx_list_clear_selected_add_ok.is_set || is_set(tx_list_clear_selected_add_ok.operation)) leaf_name_data.push_back(tx_list_clear_selected_add_ok.get_name_leafdata());
    if (tx_list_client_cleanup.is_set || is_set(tx_list_client_cleanup.operation)) leaf_name_data.push_back(tx_list_client_cleanup.get_name_leafdata());
    if (tx_list_client_connection_down.is_set || is_set(tx_list_client_connection_down.operation)) leaf_name_data.push_back(tx_list_client_connection_down.get_name_leafdata());
    if (tx_list_client_de_registration.is_set || is_set(tx_list_client_de_registration.operation)) leaf_name_data.push_back(tx_list_client_de_registration.get_name_leafdata());
    if (tx_list_client_registration_not_ok.is_set || is_set(tx_list_client_registration_not_ok.operation)) leaf_name_data.push_back(tx_list_client_registration_not_ok.get_name_leafdata());
    if (tx_list_client_registration_ok.is_set || is_set(tx_list_client_registration_ok.operation)) leaf_name_data.push_back(tx_list_client_registration_ok.get_name_leafdata());
    if (tx_list_de_active_not_ok.is_set || is_set(tx_list_de_active_not_ok.operation)) leaf_name_data.push_back(tx_list_de_active_not_ok.get_name_leafdata());
    if (tx_list_de_active_ok.is_set || is_set(tx_list_de_active_ok.operation)) leaf_name_data.push_back(tx_list_de_active_ok.get_name_leafdata());
    if (tx_list_encode_session_session_ok.is_set || is_set(tx_list_encode_session_session_ok.operation)) leaf_name_data.push_back(tx_list_encode_session_session_ok.get_name_leafdata());
    if (tx_list_encode_session_session_partial_write.is_set || is_set(tx_list_encode_session_session_partial_write.operation)) leaf_name_data.push_back(tx_list_encode_session_session_partial_write.get_name_leafdata());
    if (tx_list_end_of_download_add_not_ok.is_set || is_set(tx_list_end_of_download_add_not_ok.operation)) leaf_name_data.push_back(tx_list_end_of_download_add_not_ok.get_name_leafdata());
    if (tx_list_end_of_download_add_ok.is_set || is_set(tx_list_end_of_download_add_ok.operation)) leaf_name_data.push_back(tx_list_end_of_download_add_ok.get_name_leafdata());
    if (tx_list_end_of_message_add_not_ok.is_set || is_set(tx_list_end_of_message_add_not_ok.operation)) leaf_name_data.push_back(tx_list_end_of_message_add_not_ok.get_name_leafdata());
    if (tx_list_end_of_message_add_ok.is_set || is_set(tx_list_end_of_message_add_ok.operation)) leaf_name_data.push_back(tx_list_end_of_message_add_ok.get_name_leafdata());
    if (tx_list_receive_command_replay_all.is_set || is_set(tx_list_receive_command_replay_all.operation)) leaf_name_data.push_back(tx_list_receive_command_replay_all.get_name_leafdata());
    if (tx_list_receive_command_replay_selected.is_set || is_set(tx_list_receive_command_replay_selected.operation)) leaf_name_data.push_back(tx_list_receive_command_replay_selected.get_name_leafdata());
    if (tx_list_receive_session_session_clear_all.is_set || is_set(tx_list_receive_session_session_clear_all.operation)) leaf_name_data.push_back(tx_list_receive_session_session_clear_all.get_name_leafdata());
    if (tx_list_receive_session_session_clear_selected.is_set || is_set(tx_list_receive_session_session_clear_selected.operation)) leaf_name_data.push_back(tx_list_receive_session_session_clear_selected.get_name_leafdata());
    if (tx_list_receive_session_session_delete_invalid.is_set || is_set(tx_list_receive_session_session_delete_invalid.operation)) leaf_name_data.push_back(tx_list_receive_session_session_delete_invalid.get_name_leafdata());
    if (tx_list_receive_session_session_delete_valid.is_set || is_set(tx_list_receive_session_session_delete_valid.operation)) leaf_name_data.push_back(tx_list_receive_session_session_delete_valid.get_name_leafdata());
    if (tx_list_receive_session_session_eod_all.is_set || is_set(tx_list_receive_session_session_eod_all.operation)) leaf_name_data.push_back(tx_list_receive_session_session_eod_all.get_name_leafdata());
    if (tx_list_receive_session_session_eod_selected.is_set || is_set(tx_list_receive_session_session_eod_selected.operation)) leaf_name_data.push_back(tx_list_receive_session_session_eod_selected.get_name_leafdata());
    if (tx_list_receive_session_session_eoms.is_set || is_set(tx_list_receive_session_session_eoms.operation)) leaf_name_data.push_back(tx_list_receive_session_session_eoms.get_name_leafdata());
    if (tx_list_receive_session_session_neg_ack.is_set || is_set(tx_list_receive_session_session_neg_ack.operation)) leaf_name_data.push_back(tx_list_receive_session_session_neg_ack.get_name_leafdata());
    if (tx_list_receive_session_session_neg_ack_not_ok.is_set || is_set(tx_list_receive_session_session_neg_ack_not_ok.operation)) leaf_name_data.push_back(tx_list_receive_session_session_neg_ack_not_ok.get_name_leafdata());
    if (tx_list_receive_session_session_sod_all.is_set || is_set(tx_list_receive_session_session_sod_all.operation)) leaf_name_data.push_back(tx_list_receive_session_session_sod_all.get_name_leafdata());
    if (tx_list_receive_session_session_sod_selected.is_set || is_set(tx_list_receive_session_session_sod_selected.operation)) leaf_name_data.push_back(tx_list_receive_session_session_sod_selected.get_name_leafdata());
    if (tx_list_receive_session_session_update_invalid.is_set || is_set(tx_list_receive_session_session_update_invalid.operation)) leaf_name_data.push_back(tx_list_receive_session_session_update_invalid.get_name_leafdata());
    if (tx_list_receive_session_session_update_valid.is_set || is_set(tx_list_receive_session_session_update_valid.operation)) leaf_name_data.push_back(tx_list_receive_session_session_update_valid.get_name_leafdata());
    if (tx_list_replay_all_add_not_ok.is_set || is_set(tx_list_replay_all_add_not_ok.operation)) leaf_name_data.push_back(tx_list_replay_all_add_not_ok.get_name_leafdata());
    if (tx_list_replay_all_add_ok.is_set || is_set(tx_list_replay_all_add_ok.operation)) leaf_name_data.push_back(tx_list_replay_all_add_ok.get_name_leafdata());
    if (tx_list_replay_selected_add_not_ok.is_set || is_set(tx_list_replay_selected_add_not_ok.operation)) leaf_name_data.push_back(tx_list_replay_selected_add_not_ok.get_name_leafdata());
    if (tx_list_replay_selected_add_ok.is_set || is_set(tx_list_replay_selected_add_ok.operation)) leaf_name_data.push_back(tx_list_replay_selected_add_ok.get_name_leafdata());
    if (tx_list_session_session_add_not_ok.is_set || is_set(tx_list_session_session_add_not_ok.operation)) leaf_name_data.push_back(tx_list_session_session_add_not_ok.get_name_leafdata());
    if (tx_list_session_session_add_ok.is_set || is_set(tx_list_session_session_add_ok.operation)) leaf_name_data.push_back(tx_list_session_session_add_ok.get_name_leafdata());
    if (tx_list_session_session_delete.is_set || is_set(tx_list_session_session_delete.operation)) leaf_name_data.push_back(tx_list_session_session_delete.get_name_leafdata());
    if (tx_list_session_session_update_not_ok.is_set || is_set(tx_list_session_session_update_not_ok.operation)) leaf_name_data.push_back(tx_list_session_session_update_not_ok.get_name_leafdata());
    if (tx_list_session_session_update_ok.is_set || is_set(tx_list_session_session_update_ok.operation)) leaf_name_data.push_back(tx_list_session_session_update_ok.get_name_leafdata());
    if (tx_list_start_of_download_add_not_ok.is_set || is_set(tx_list_start_of_download_add_not_ok.operation)) leaf_name_data.push_back(tx_list_start_of_download_add_not_ok.get_name_leafdata());
    if (tx_list_start_of_download_add_ok.is_set || is_set(tx_list_start_of_download_add_ok.operation)) leaf_name_data.push_back(tx_list_start_of_download_add_ok.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stats-client-id")
    {
        stats_client_id = value;
    }
    if(value_path == "clean-call-back")
    {
        clean_call_back = value;
    }
    if(value_path == "last-replay-all-count")
    {
        last_replay_all_count = value;
    }
    if(value_path == "tx-list-active-not-ok")
    {
        tx_list_active_not_ok = value;
    }
    if(value_path == "tx-list-active-ok")
    {
        tx_list_active_ok = value;
    }
    if(value_path == "tx-list-clear-all-add-not-ok")
    {
        tx_list_clear_all_add_not_ok = value;
    }
    if(value_path == "tx-list-clear-all-add-ok")
    {
        tx_list_clear_all_add_ok = value;
    }
    if(value_path == "tx-list-clear-selected-add-not-ok")
    {
        tx_list_clear_selected_add_not_ok = value;
    }
    if(value_path == "tx-list-clear-selected-add-ok")
    {
        tx_list_clear_selected_add_ok = value;
    }
    if(value_path == "tx-list-client-cleanup")
    {
        tx_list_client_cleanup = value;
    }
    if(value_path == "tx-list-client-connection-down")
    {
        tx_list_client_connection_down = value;
    }
    if(value_path == "tx-list-client-de-registration")
    {
        tx_list_client_de_registration = value;
    }
    if(value_path == "tx-list-client-registration-not-ok")
    {
        tx_list_client_registration_not_ok = value;
    }
    if(value_path == "tx-list-client-registration-ok")
    {
        tx_list_client_registration_ok = value;
    }
    if(value_path == "tx-list-de-active-not-ok")
    {
        tx_list_de_active_not_ok = value;
    }
    if(value_path == "tx-list-de-active-ok")
    {
        tx_list_de_active_ok = value;
    }
    if(value_path == "tx-list-encode-session-session-ok")
    {
        tx_list_encode_session_session_ok = value;
    }
    if(value_path == "tx-list-encode-session-session-partial-write")
    {
        tx_list_encode_session_session_partial_write = value;
    }
    if(value_path == "tx-list-end-of-download-add-not-ok")
    {
        tx_list_end_of_download_add_not_ok = value;
    }
    if(value_path == "tx-list-end-of-download-add-ok")
    {
        tx_list_end_of_download_add_ok = value;
    }
    if(value_path == "tx-list-end-of-message-add-not-ok")
    {
        tx_list_end_of_message_add_not_ok = value;
    }
    if(value_path == "tx-list-end-of-message-add-ok")
    {
        tx_list_end_of_message_add_ok = value;
    }
    if(value_path == "tx-list-receive-command-replay-all")
    {
        tx_list_receive_command_replay_all = value;
    }
    if(value_path == "tx-list-receive-command-replay-selected")
    {
        tx_list_receive_command_replay_selected = value;
    }
    if(value_path == "tx-list-receive-session-session-clear-all")
    {
        tx_list_receive_session_session_clear_all = value;
    }
    if(value_path == "tx-list-receive-session-session-clear-selected")
    {
        tx_list_receive_session_session_clear_selected = value;
    }
    if(value_path == "tx-list-receive-session-session-delete-invalid")
    {
        tx_list_receive_session_session_delete_invalid = value;
    }
    if(value_path == "tx-list-receive-session-session-delete-valid")
    {
        tx_list_receive_session_session_delete_valid = value;
    }
    if(value_path == "tx-list-receive-session-session-eod-all")
    {
        tx_list_receive_session_session_eod_all = value;
    }
    if(value_path == "tx-list-receive-session-session-eod-selected")
    {
        tx_list_receive_session_session_eod_selected = value;
    }
    if(value_path == "tx-list-receive-session-session-eoms")
    {
        tx_list_receive_session_session_eoms = value;
    }
    if(value_path == "tx-list-receive-session-session-neg-ack")
    {
        tx_list_receive_session_session_neg_ack = value;
    }
    if(value_path == "tx-list-receive-session-session-neg-ack-not-ok")
    {
        tx_list_receive_session_session_neg_ack_not_ok = value;
    }
    if(value_path == "tx-list-receive-session-session-sod-all")
    {
        tx_list_receive_session_session_sod_all = value;
    }
    if(value_path == "tx-list-receive-session-session-sod-selected")
    {
        tx_list_receive_session_session_sod_selected = value;
    }
    if(value_path == "tx-list-receive-session-session-update-invalid")
    {
        tx_list_receive_session_session_update_invalid = value;
    }
    if(value_path == "tx-list-receive-session-session-update-valid")
    {
        tx_list_receive_session_session_update_valid = value;
    }
    if(value_path == "tx-list-replay-all-add-not-ok")
    {
        tx_list_replay_all_add_not_ok = value;
    }
    if(value_path == "tx-list-replay-all-add-ok")
    {
        tx_list_replay_all_add_ok = value;
    }
    if(value_path == "tx-list-replay-selected-add-not-ok")
    {
        tx_list_replay_selected_add_not_ok = value;
    }
    if(value_path == "tx-list-replay-selected-add-ok")
    {
        tx_list_replay_selected_add_ok = value;
    }
    if(value_path == "tx-list-session-session-add-not-ok")
    {
        tx_list_session_session_add_not_ok = value;
    }
    if(value_path == "tx-list-session-session-add-ok")
    {
        tx_list_session_session_add_ok = value;
    }
    if(value_path == "tx-list-session-session-delete")
    {
        tx_list_session_session_delete = value;
    }
    if(value_path == "tx-list-session-session-update-not-ok")
    {
        tx_list_session_session_update_not_ok = value;
    }
    if(value_path == "tx-list-session-session-update-ok")
    {
        tx_list_session_session_update_ok = value;
    }
    if(value_path == "tx-list-start-of-download-add-not-ok")
    {
        tx_list_start_of_download_add_not_ok = value;
    }
    if(value_path == "tx-list-start-of-download-add-ok")
    {
        tx_list_start_of_download_add_ok = value;
    }
}

SessionRedundancyAgent::Nodes::Node::Memory::Memory()
{
    yang_name = "memory"; yang_parent_name = "node";
}

SessionRedundancyAgent::Nodes::Node::Memory::~Memory()
{
}

bool SessionRedundancyAgent::Nodes::Node::Memory::has_data() const
{
    for (std::size_t index=0; index<edm_memory_info.size(); index++)
    {
        if(edm_memory_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<memory_info.size(); index++)
    {
        if(memory_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<string_memory_info.size(); index++)
    {
        if(string_memory_info[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyAgent::Nodes::Node::Memory::has_operation() const
{
    for (std::size_t index=0; index<edm_memory_info.size(); index++)
    {
        if(edm_memory_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<memory_info.size(); index++)
    {
        if(memory_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<string_memory_info.size(); index++)
    {
        if(string_memory_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SessionRedundancyAgent::Nodes::Node::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::Memory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Memory' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "edm-memory-info")
    {
        for(auto const & c : edm_memory_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo>();
        c->parent = this;
        edm_memory_info.push_back(c);
        return c;
    }

    if(child_yang_name == "memory-info")
    {
        for(auto const & c : memory_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo>();
        c->parent = this;
        memory_info.push_back(c);
        return c;
    }

    if(child_yang_name == "string-memory-info")
    {
        for(auto const & c : string_memory_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo>();
        c->parent = this;
        string_memory_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : edm_memory_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : memory_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : string_memory_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SessionRedundancyAgent::Nodes::Node::Memory::set_value(const std::string & value_path, std::string value)
{
}

SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::MemoryInfo()
    :
    alloc_count{YType::uint32, "alloc-count"},
    alloc_fails{YType::uint32, "alloc-fails"},
    current_count{YType::uint32, "current-count"},
    freed_count{YType::uint32, "freed-count"},
    memory_type{YType::enumeration, "memory-type"},
    size{YType::uint32, "size"},
    structure_name{YType::str, "structure-name"}
{
    yang_name = "memory-info"; yang_parent_name = "memory";
}

SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::~MemoryInfo()
{
}

bool SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::has_data() const
{
    return alloc_count.is_set
	|| alloc_fails.is_set
	|| current_count.is_set
	|| freed_count.is_set
	|| memory_type.is_set
	|| size.is_set
	|| structure_name.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alloc_count.operation)
	|| is_set(alloc_fails.operation)
	|| is_set(current_count.operation)
	|| is_set(freed_count.operation)
	|| is_set(memory_type.operation)
	|| is_set(size.operation)
	|| is_set(structure_name.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-info";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemoryInfo' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alloc_count.is_set || is_set(alloc_count.operation)) leaf_name_data.push_back(alloc_count.get_name_leafdata());
    if (alloc_fails.is_set || is_set(alloc_fails.operation)) leaf_name_data.push_back(alloc_fails.get_name_leafdata());
    if (current_count.is_set || is_set(current_count.operation)) leaf_name_data.push_back(current_count.get_name_leafdata());
    if (freed_count.is_set || is_set(freed_count.operation)) leaf_name_data.push_back(freed_count.get_name_leafdata());
    if (memory_type.is_set || is_set(memory_type.operation)) leaf_name_data.push_back(memory_type.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (structure_name.is_set || is_set(structure_name.operation)) leaf_name_data.push_back(structure_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alloc-count")
    {
        alloc_count = value;
    }
    if(value_path == "alloc-fails")
    {
        alloc_fails = value;
    }
    if(value_path == "current-count")
    {
        current_count = value;
    }
    if(value_path == "freed-count")
    {
        freed_count = value;
    }
    if(value_path == "memory-type")
    {
        memory_type = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "structure-name")
    {
        structure_name = value;
    }
}

SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::EdmMemoryInfo()
    :
    failure{YType::uint32, "failure"},
    size{YType::uint32, "size"},
    success{YType::uint32, "success"},
    total{YType::uint32, "total"}
{
    yang_name = "edm-memory-info"; yang_parent_name = "memory";
}

SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::~EdmMemoryInfo()
{
}

bool SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::has_data() const
{
    return failure.is_set
	|| size.is_set
	|| success.is_set
	|| total.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(failure.operation)
	|| is_set(size.operation)
	|| is_set(success.operation)
	|| is_set(total.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edm-memory-info";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EdmMemoryInfo' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.operation)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (success.is_set || is_set(success.operation)) leaf_name_data.push_back(success.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "failure")
    {
        failure = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "success")
    {
        success = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::StringMemoryInfo()
    :
    failure{YType::uint32, "failure"},
    size{YType::uint32, "size"},
    success{YType::uint32, "success"},
    total{YType::uint32, "total"}
{
    yang_name = "string-memory-info"; yang_parent_name = "memory";
}

SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::~StringMemoryInfo()
{
}

bool SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::has_data() const
{
    return failure.is_set
	|| size.is_set
	|| success.is_set
	|| total.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(failure.operation)
	|| is_set(size.operation)
	|| is_set(success.operation)
	|| is_set(total.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "string-memory-info";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StringMemoryInfo' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.operation)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (success.is_set || is_set(success.operation)) leaf_name_data.push_back(success.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "failure")
    {
        failure = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "success")
    {
        success = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

SessionRedundancyAgent::Nodes::Node::GroupIds::GroupIds()
{
    yang_name = "group-ids"; yang_parent_name = "node";
}

SessionRedundancyAgent::Nodes::Node::GroupIds::~GroupIds()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::has_data() const
{
    for (std::size_t index=0; index<group_id.size(); index++)
    {
        if(group_id[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::has_operation() const
{
    for (std::size_t index=0; index<group_id.size(); index++)
    {
        if(group_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-ids";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::GroupIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupIds' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::GroupIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-id")
    {
        for(auto const & c : group_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId>();
        c->parent = this;
        group_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::GroupIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SessionRedundancyAgent::Nodes::Node::GroupIds::set_value(const std::string & value_path, std::string value)
{
}

SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::GroupId()
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
    switchover_revert_time{YType::uint32, "switchover-revert-time"}
{
    yang_name = "group-id"; yang_parent_name = "group-ids";
}

SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::~GroupId()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::has_data() const
{
    for (std::size_t index=0; index<client_session_count.size(); index++)
    {
        if(client_session_count[index]->has_data())
            return true;
    }
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
	|| switchover_revert_time.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::has_operation() const
{
    for (std::size_t index=0; index<client_session_count.size(); index++)
    {
        if(client_session_count[index]->has_operation())
            return true;
    }
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
	|| is_set(switchover_revert_time.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id" <<"[group-id='" <<group_id <<"']";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupId' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-session-count")
    {
        for(auto const & c : client_session_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount>();
        c->parent = this;
        client_session_count.push_back(c);
        return c;
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
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client_session_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::set_value(const std::string & value_path, std::string value)
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
}

SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::ClientSessionCount()
    :
    component{YType::enumeration, "component"},
    session_count{YType::uint32, "session-count"}
{
    yang_name = "client-session-count"; yang_parent_name = "group-id";
}

SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::~ClientSessionCount()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::has_data() const
{
    return component.is_set
	|| session_count.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::has_operation() const
{
    return is_set(operation)
	|| is_set(component.operation)
	|| is_set(session_count.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-session-count";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientSessionCount' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (component.is_set || is_set(component.operation)) leaf_name_data.push_back(component.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.operation)) leaf_name_data.push_back(session_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "component")
    {
        component = value;
    }
    if(value_path == "session-count")
    {
        session_count = value;
    }
}

SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::Interface()
    :
    forward_referenced{YType::boolean, "forward-referenced"},
    interface_name{YType::str, "interface-name"},
    interface_synchronization_id{YType::uint32, "interface-synchronization-id"},
    session_count{YType::uint32, "session-count"}
{
    yang_name = "interface"; yang_parent_name = "group-id";
}

SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::~Interface()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::has_data() const
{
    return forward_referenced.is_set
	|| interface_name.is_set
	|| interface_synchronization_id.is_set
	|| session_count.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(forward_referenced.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_synchronization_id.operation)
	|| is_set(session_count.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::set_value(const std::string & value_path, std::string value)
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

SessionRedundancyAgent::Nodes::Node::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "node";
}

SessionRedundancyAgent::Nodes::Node::Interfaces::~Interfaces()
{
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SessionRedundancyAgent::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SessionRedundancyAgent::Nodes::Node::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::Interface()
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
    interface_oper(std::make_shared<SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper>())
	,interface_status(std::make_shared<SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus>())
{
    interface_oper->parent = this;

    interface_status->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::has_data() const
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

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::has_operation() const
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

std::string SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-status")
    {
        for(auto const & c : client_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus>();
        c->parent = this;
        client_status.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-oper")
    {
        if(interface_oper == nullptr)
        {
            interface_oper = std::make_shared<SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper>();
        }
        return interface_oper;
    }

    if(child_yang_name == "interface-status")
    {
        if(interface_status == nullptr)
        {
            interface_status = std::make_shared<SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus>();
        }
        return interface_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client_status)
    {
        children[c->get_segment_path()] = c;
    }

    if(interface_oper != nullptr)
    {
        children["interface-oper"] = interface_oper;
    }

    if(interface_status != nullptr)
    {
        children["interface-status"] = interface_status;
    }

    return children;
}

void SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
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

SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::InterfaceOper()
    :
    idb_oper_attr_update{YType::boolean, "idb-oper-attr-update"},
    idb_oper_caps_add{YType::boolean, "idb-oper-caps-add"},
    idb_oper_caps_remove{YType::boolean, "idb-oper-caps-remove"},
    idb_oper_reg_disable{YType::boolean, "idb-oper-reg-disable"},
    idb_oper_reg_enable{YType::boolean, "idb-oper-reg-enable"}
{
    yang_name = "interface-oper"; yang_parent_name = "interface";
}

SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::~InterfaceOper()
{
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::has_data() const
{
    return idb_oper_attr_update.is_set
	|| idb_oper_caps_add.is_set
	|| idb_oper_caps_remove.is_set
	|| idb_oper_reg_disable.is_set
	|| idb_oper_reg_enable.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::has_operation() const
{
    return is_set(operation)
	|| is_set(idb_oper_attr_update.operation)
	|| is_set(idb_oper_caps_add.operation)
	|| is_set(idb_oper_caps_remove.operation)
	|| is_set(idb_oper_reg_disable.operation)
	|| is_set(idb_oper_reg_enable.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-oper";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceOper' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::set_value(const std::string & value_path, std::string value)
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

SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::InterfaceStatus()
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

SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::~InterfaceStatus()
{
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::has_data() const
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

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::has_operation() const
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

std::string SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-status";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatus' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::set_value(const std::string & value_path, std::string value)
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

SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::ClientStatus()
    :
    component{YType::enumeration, "component"},
    serg_show_idb_client_eoms_pending{YType::boolean, "serg-show-idb-client-eoms-pending"},
    serg_show_idb_client_sync_eod_pending{YType::boolean, "serg-show-idb-client-sync-eod-pending"},
    session_count{YType::uint32, "session-count"}
{
    yang_name = "client-status"; yang_parent_name = "interface";
}

SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::~ClientStatus()
{
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::has_data() const
{
    return component.is_set
	|| serg_show_idb_client_eoms_pending.is_set
	|| serg_show_idb_client_sync_eod_pending.is_set
	|| session_count.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(component.operation)
	|| is_set(serg_show_idb_client_eoms_pending.operation)
	|| is_set(serg_show_idb_client_sync_eod_pending.operation)
	|| is_set(session_count.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-status";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientStatus' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (component.is_set || is_set(component.operation)) leaf_name_data.push_back(component.get_name_leafdata());
    if (serg_show_idb_client_eoms_pending.is_set || is_set(serg_show_idb_client_eoms_pending.operation)) leaf_name_data.push_back(serg_show_idb_client_eoms_pending.get_name_leafdata());
    if (serg_show_idb_client_sync_eod_pending.is_set || is_set(serg_show_idb_client_sync_eod_pending.operation)) leaf_name_data.push_back(serg_show_idb_client_sync_eod_pending.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.operation)) leaf_name_data.push_back(session_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "component")
    {
        component = value;
    }
    if(value_path == "serg-show-idb-client-eoms-pending")
    {
        serg_show_idb_client_eoms_pending = value;
    }
    if(value_path == "serg-show-idb-client-sync-eod-pending")
    {
        serg_show_idb_client_sync_eod_pending = value;
    }
    if(value_path == "session-count")
    {
        session_count = value;
    }
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::StatsGlobal()
    :
    client_init_sync_time_stamp{YType::str, "client-init-sync-time-stamp"},
    peer_action_timer{YType::uint32, "peer-action-timer"},
    peer_init_sync_time_stamp{YType::str, "peer-init-sync-time-stamp"},
    redundancy_role{YType::str, "redundancy-role"},
    restart_client_sync_in_progress{YType::boolean, "restart-client-sync-in-progress"},
    restart_peer_sync_in_progress{YType::boolean, "restart-peer-sync-in-progress"},
    retry_timer_remaining{YType::uint32, "retry-timer-remaining"},
    source_interface_ipv4_address{YType::str, "source-interface-ipv4-address"},
    source_interface_ipv6_address{YType::str, "source-interface-ipv6-address"},
    source_interface_name{YType::str, "source-interface-name"},
    sync_in_progress{YType::boolean, "sync-in-progress"},
    tx_list_client_connection_down{YType::uint32, "tx-list-client-connection-down"},
    tx_list_client_connection_up{YType::uint32, "tx-list-client-connection-up"},
    tx_list_client_de_registration_invalid{YType::uint32, "tx-list-client-de-registration-invalid"},
    tx_list_client_message_call_back{YType::uint32, "tx-list-client-message-call-back"},
    tx_list_client_peer_done{YType::uint32, "tx-list-client-peer-done"},
    tx_list_client_receive_command_invalid{YType::uint32, "tx-list-client-receive-command-invalid"},
    tx_list_client_receive_command_valid{YType::uint32, "tx-list-client-receive-command-valid"},
    tx_list_client_receive_invalid{YType::uint32, "tx-list-client-receive-invalid"},
    tx_list_client_receive_session_session_invalid{YType::uint32, "tx-list-client-receive-session-session-invalid"},
    tx_list_client_receive_session_sessionvalid{YType::uint32, "tx-list-client-receive-session-sessionvalid"},
    tx_list_client_receive_valid{YType::uint32, "tx-list-client-receive-valid"},
    tx_list_client_registration_invalid{YType::uint32, "tx-list-client-registration-invalid"},
    tx_list_peer_cmd_connection_down_not_ok{YType::uint32, "tx-list-peer-cmd-connection-down-not-ok"},
    tx_list_peer_cmd_connection_up_not_ok{YType::uint32, "tx-list-peer-cmd-connection-up-not-ok"},
    tx_list_peer_de_registration_invalid{YType::uint32, "tx-list-peer-de-registration-invalid"},
    tx_list_peer_done{YType::uint32, "tx-list-peer-done"},
    tx_list_peer_message_call_back_invalid{YType::uint32, "tx-list-peer-message-call-back-invalid"},
    tx_list_peer_message_call_back_valid{YType::uint32, "tx-list-peer-message-call-back-valid"},
    tx_list_peer_registration_invalid{YType::uint32, "tx-list-peer-registration-invalid"},
    tx_list_peer_session_connection_down_not_ok{YType::uint32, "tx-list-peer-session-connection-down-not-ok"},
    tx_list_peer_session_connection_up_not_ok{YType::uint32, "tx-list-peer-session-connection-up-not-ok"},
    tx_list_peer_timer_handler{YType::uint32, "tx-list-peer-timer-handler"},
    vrf_name{YType::str, "vrf-name"}
    	,
    intf_status_statistics(std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics>())
	,tx_list_statistics(std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics>())
{
    intf_status_statistics->parent = this;

    tx_list_statistics->parent = this;

    yang_name = "stats-global"; yang_parent_name = "node";
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::~StatsGlobal()
{
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::has_data() const
{
    for (std::size_t index=0; index<client_status.size(); index++)
    {
        if(client_status[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<opaque_memory_status.size(); index++)
    {
        if(opaque_memory_status[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tx_list_over_tcp_status.size(); index++)
    {
        if(tx_list_over_tcp_status[index]->has_data())
            return true;
    }
    return client_init_sync_time_stamp.is_set
	|| peer_action_timer.is_set
	|| peer_init_sync_time_stamp.is_set
	|| redundancy_role.is_set
	|| restart_client_sync_in_progress.is_set
	|| restart_peer_sync_in_progress.is_set
	|| retry_timer_remaining.is_set
	|| source_interface_ipv4_address.is_set
	|| source_interface_ipv6_address.is_set
	|| source_interface_name.is_set
	|| sync_in_progress.is_set
	|| tx_list_client_connection_down.is_set
	|| tx_list_client_connection_up.is_set
	|| tx_list_client_de_registration_invalid.is_set
	|| tx_list_client_message_call_back.is_set
	|| tx_list_client_peer_done.is_set
	|| tx_list_client_receive_command_invalid.is_set
	|| tx_list_client_receive_command_valid.is_set
	|| tx_list_client_receive_invalid.is_set
	|| tx_list_client_receive_session_session_invalid.is_set
	|| tx_list_client_receive_session_sessionvalid.is_set
	|| tx_list_client_receive_valid.is_set
	|| tx_list_client_registration_invalid.is_set
	|| tx_list_peer_cmd_connection_down_not_ok.is_set
	|| tx_list_peer_cmd_connection_up_not_ok.is_set
	|| tx_list_peer_de_registration_invalid.is_set
	|| tx_list_peer_done.is_set
	|| tx_list_peer_message_call_back_invalid.is_set
	|| tx_list_peer_message_call_back_valid.is_set
	|| tx_list_peer_registration_invalid.is_set
	|| tx_list_peer_session_connection_down_not_ok.is_set
	|| tx_list_peer_session_connection_up_not_ok.is_set
	|| tx_list_peer_timer_handler.is_set
	|| vrf_name.is_set
	|| (intf_status_statistics !=  nullptr && intf_status_statistics->has_data())
	|| (tx_list_statistics !=  nullptr && tx_list_statistics->has_data());
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::has_operation() const
{
    for (std::size_t index=0; index<client_status.size(); index++)
    {
        if(client_status[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<opaque_memory_status.size(); index++)
    {
        if(opaque_memory_status[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tx_list_over_tcp_status.size(); index++)
    {
        if(tx_list_over_tcp_status[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(client_init_sync_time_stamp.operation)
	|| is_set(peer_action_timer.operation)
	|| is_set(peer_init_sync_time_stamp.operation)
	|| is_set(redundancy_role.operation)
	|| is_set(restart_client_sync_in_progress.operation)
	|| is_set(restart_peer_sync_in_progress.operation)
	|| is_set(retry_timer_remaining.operation)
	|| is_set(source_interface_ipv4_address.operation)
	|| is_set(source_interface_ipv6_address.operation)
	|| is_set(source_interface_name.operation)
	|| is_set(sync_in_progress.operation)
	|| is_set(tx_list_client_connection_down.operation)
	|| is_set(tx_list_client_connection_up.operation)
	|| is_set(tx_list_client_de_registration_invalid.operation)
	|| is_set(tx_list_client_message_call_back.operation)
	|| is_set(tx_list_client_peer_done.operation)
	|| is_set(tx_list_client_receive_command_invalid.operation)
	|| is_set(tx_list_client_receive_command_valid.operation)
	|| is_set(tx_list_client_receive_invalid.operation)
	|| is_set(tx_list_client_receive_session_session_invalid.operation)
	|| is_set(tx_list_client_receive_session_sessionvalid.operation)
	|| is_set(tx_list_client_receive_valid.operation)
	|| is_set(tx_list_client_registration_invalid.operation)
	|| is_set(tx_list_peer_cmd_connection_down_not_ok.operation)
	|| is_set(tx_list_peer_cmd_connection_up_not_ok.operation)
	|| is_set(tx_list_peer_de_registration_invalid.operation)
	|| is_set(tx_list_peer_done.operation)
	|| is_set(tx_list_peer_message_call_back_invalid.operation)
	|| is_set(tx_list_peer_message_call_back_valid.operation)
	|| is_set(tx_list_peer_registration_invalid.operation)
	|| is_set(tx_list_peer_session_connection_down_not_ok.operation)
	|| is_set(tx_list_peer_session_connection_up_not_ok.operation)
	|| is_set(tx_list_peer_timer_handler.operation)
	|| is_set(vrf_name.operation)
	|| (intf_status_statistics !=  nullptr && intf_status_statistics->has_operation())
	|| (tx_list_statistics !=  nullptr && tx_list_statistics->has_operation());
}

std::string SessionRedundancyAgent::Nodes::Node::StatsGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-global";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::StatsGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatsGlobal' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_init_sync_time_stamp.is_set || is_set(client_init_sync_time_stamp.operation)) leaf_name_data.push_back(client_init_sync_time_stamp.get_name_leafdata());
    if (peer_action_timer.is_set || is_set(peer_action_timer.operation)) leaf_name_data.push_back(peer_action_timer.get_name_leafdata());
    if (peer_init_sync_time_stamp.is_set || is_set(peer_init_sync_time_stamp.operation)) leaf_name_data.push_back(peer_init_sync_time_stamp.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.operation)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (restart_client_sync_in_progress.is_set || is_set(restart_client_sync_in_progress.operation)) leaf_name_data.push_back(restart_client_sync_in_progress.get_name_leafdata());
    if (restart_peer_sync_in_progress.is_set || is_set(restart_peer_sync_in_progress.operation)) leaf_name_data.push_back(restart_peer_sync_in_progress.get_name_leafdata());
    if (retry_timer_remaining.is_set || is_set(retry_timer_remaining.operation)) leaf_name_data.push_back(retry_timer_remaining.get_name_leafdata());
    if (source_interface_ipv4_address.is_set || is_set(source_interface_ipv4_address.operation)) leaf_name_data.push_back(source_interface_ipv4_address.get_name_leafdata());
    if (source_interface_ipv6_address.is_set || is_set(source_interface_ipv6_address.operation)) leaf_name_data.push_back(source_interface_ipv6_address.get_name_leafdata());
    if (source_interface_name.is_set || is_set(source_interface_name.operation)) leaf_name_data.push_back(source_interface_name.get_name_leafdata());
    if (sync_in_progress.is_set || is_set(sync_in_progress.operation)) leaf_name_data.push_back(sync_in_progress.get_name_leafdata());
    if (tx_list_client_connection_down.is_set || is_set(tx_list_client_connection_down.operation)) leaf_name_data.push_back(tx_list_client_connection_down.get_name_leafdata());
    if (tx_list_client_connection_up.is_set || is_set(tx_list_client_connection_up.operation)) leaf_name_data.push_back(tx_list_client_connection_up.get_name_leafdata());
    if (tx_list_client_de_registration_invalid.is_set || is_set(tx_list_client_de_registration_invalid.operation)) leaf_name_data.push_back(tx_list_client_de_registration_invalid.get_name_leafdata());
    if (tx_list_client_message_call_back.is_set || is_set(tx_list_client_message_call_back.operation)) leaf_name_data.push_back(tx_list_client_message_call_back.get_name_leafdata());
    if (tx_list_client_peer_done.is_set || is_set(tx_list_client_peer_done.operation)) leaf_name_data.push_back(tx_list_client_peer_done.get_name_leafdata());
    if (tx_list_client_receive_command_invalid.is_set || is_set(tx_list_client_receive_command_invalid.operation)) leaf_name_data.push_back(tx_list_client_receive_command_invalid.get_name_leafdata());
    if (tx_list_client_receive_command_valid.is_set || is_set(tx_list_client_receive_command_valid.operation)) leaf_name_data.push_back(tx_list_client_receive_command_valid.get_name_leafdata());
    if (tx_list_client_receive_invalid.is_set || is_set(tx_list_client_receive_invalid.operation)) leaf_name_data.push_back(tx_list_client_receive_invalid.get_name_leafdata());
    if (tx_list_client_receive_session_session_invalid.is_set || is_set(tx_list_client_receive_session_session_invalid.operation)) leaf_name_data.push_back(tx_list_client_receive_session_session_invalid.get_name_leafdata());
    if (tx_list_client_receive_session_sessionvalid.is_set || is_set(tx_list_client_receive_session_sessionvalid.operation)) leaf_name_data.push_back(tx_list_client_receive_session_sessionvalid.get_name_leafdata());
    if (tx_list_client_receive_valid.is_set || is_set(tx_list_client_receive_valid.operation)) leaf_name_data.push_back(tx_list_client_receive_valid.get_name_leafdata());
    if (tx_list_client_registration_invalid.is_set || is_set(tx_list_client_registration_invalid.operation)) leaf_name_data.push_back(tx_list_client_registration_invalid.get_name_leafdata());
    if (tx_list_peer_cmd_connection_down_not_ok.is_set || is_set(tx_list_peer_cmd_connection_down_not_ok.operation)) leaf_name_data.push_back(tx_list_peer_cmd_connection_down_not_ok.get_name_leafdata());
    if (tx_list_peer_cmd_connection_up_not_ok.is_set || is_set(tx_list_peer_cmd_connection_up_not_ok.operation)) leaf_name_data.push_back(tx_list_peer_cmd_connection_up_not_ok.get_name_leafdata());
    if (tx_list_peer_de_registration_invalid.is_set || is_set(tx_list_peer_de_registration_invalid.operation)) leaf_name_data.push_back(tx_list_peer_de_registration_invalid.get_name_leafdata());
    if (tx_list_peer_done.is_set || is_set(tx_list_peer_done.operation)) leaf_name_data.push_back(tx_list_peer_done.get_name_leafdata());
    if (tx_list_peer_message_call_back_invalid.is_set || is_set(tx_list_peer_message_call_back_invalid.operation)) leaf_name_data.push_back(tx_list_peer_message_call_back_invalid.get_name_leafdata());
    if (tx_list_peer_message_call_back_valid.is_set || is_set(tx_list_peer_message_call_back_valid.operation)) leaf_name_data.push_back(tx_list_peer_message_call_back_valid.get_name_leafdata());
    if (tx_list_peer_registration_invalid.is_set || is_set(tx_list_peer_registration_invalid.operation)) leaf_name_data.push_back(tx_list_peer_registration_invalid.get_name_leafdata());
    if (tx_list_peer_session_connection_down_not_ok.is_set || is_set(tx_list_peer_session_connection_down_not_ok.operation)) leaf_name_data.push_back(tx_list_peer_session_connection_down_not_ok.get_name_leafdata());
    if (tx_list_peer_session_connection_up_not_ok.is_set || is_set(tx_list_peer_session_connection_up_not_ok.operation)) leaf_name_data.push_back(tx_list_peer_session_connection_up_not_ok.get_name_leafdata());
    if (tx_list_peer_timer_handler.is_set || is_set(tx_list_peer_timer_handler.operation)) leaf_name_data.push_back(tx_list_peer_timer_handler.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::StatsGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-status")
    {
        for(auto const & c : client_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus>();
        c->parent = this;
        client_status.push_back(c);
        return c;
    }

    if(child_yang_name == "intf-status-statistics")
    {
        if(intf_status_statistics == nullptr)
        {
            intf_status_statistics = std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics>();
        }
        return intf_status_statistics;
    }

    if(child_yang_name == "opaque-memory-status")
    {
        for(auto const & c : opaque_memory_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus>();
        c->parent = this;
        opaque_memory_status.push_back(c);
        return c;
    }

    if(child_yang_name == "tx-list-over-tcp-status")
    {
        for(auto const & c : tx_list_over_tcp_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus>();
        c->parent = this;
        tx_list_over_tcp_status.push_back(c);
        return c;
    }

    if(child_yang_name == "tx-list-statistics")
    {
        if(tx_list_statistics == nullptr)
        {
            tx_list_statistics = std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics>();
        }
        return tx_list_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::StatsGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client_status)
    {
        children[c->get_segment_path()] = c;
    }

    if(intf_status_statistics != nullptr)
    {
        children["intf-status-statistics"] = intf_status_statistics;
    }

    for (auto const & c : opaque_memory_status)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tx_list_over_tcp_status)
    {
        children[c->get_segment_path()] = c;
    }

    if(tx_list_statistics != nullptr)
    {
        children["tx-list-statistics"] = tx_list_statistics;
    }

    return children;
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-init-sync-time-stamp")
    {
        client_init_sync_time_stamp = value;
    }
    if(value_path == "peer-action-timer")
    {
        peer_action_timer = value;
    }
    if(value_path == "peer-init-sync-time-stamp")
    {
        peer_init_sync_time_stamp = value;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
    }
    if(value_path == "restart-client-sync-in-progress")
    {
        restart_client_sync_in_progress = value;
    }
    if(value_path == "restart-peer-sync-in-progress")
    {
        restart_peer_sync_in_progress = value;
    }
    if(value_path == "retry-timer-remaining")
    {
        retry_timer_remaining = value;
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
    if(value_path == "sync-in-progress")
    {
        sync_in_progress = value;
    }
    if(value_path == "tx-list-client-connection-down")
    {
        tx_list_client_connection_down = value;
    }
    if(value_path == "tx-list-client-connection-up")
    {
        tx_list_client_connection_up = value;
    }
    if(value_path == "tx-list-client-de-registration-invalid")
    {
        tx_list_client_de_registration_invalid = value;
    }
    if(value_path == "tx-list-client-message-call-back")
    {
        tx_list_client_message_call_back = value;
    }
    if(value_path == "tx-list-client-peer-done")
    {
        tx_list_client_peer_done = value;
    }
    if(value_path == "tx-list-client-receive-command-invalid")
    {
        tx_list_client_receive_command_invalid = value;
    }
    if(value_path == "tx-list-client-receive-command-valid")
    {
        tx_list_client_receive_command_valid = value;
    }
    if(value_path == "tx-list-client-receive-invalid")
    {
        tx_list_client_receive_invalid = value;
    }
    if(value_path == "tx-list-client-receive-session-session-invalid")
    {
        tx_list_client_receive_session_session_invalid = value;
    }
    if(value_path == "tx-list-client-receive-session-sessionvalid")
    {
        tx_list_client_receive_session_sessionvalid = value;
    }
    if(value_path == "tx-list-client-receive-valid")
    {
        tx_list_client_receive_valid = value;
    }
    if(value_path == "tx-list-client-registration-invalid")
    {
        tx_list_client_registration_invalid = value;
    }
    if(value_path == "tx-list-peer-cmd-connection-down-not-ok")
    {
        tx_list_peer_cmd_connection_down_not_ok = value;
    }
    if(value_path == "tx-list-peer-cmd-connection-up-not-ok")
    {
        tx_list_peer_cmd_connection_up_not_ok = value;
    }
    if(value_path == "tx-list-peer-de-registration-invalid")
    {
        tx_list_peer_de_registration_invalid = value;
    }
    if(value_path == "tx-list-peer-done")
    {
        tx_list_peer_done = value;
    }
    if(value_path == "tx-list-peer-message-call-back-invalid")
    {
        tx_list_peer_message_call_back_invalid = value;
    }
    if(value_path == "tx-list-peer-message-call-back-valid")
    {
        tx_list_peer_message_call_back_valid = value;
    }
    if(value_path == "tx-list-peer-registration-invalid")
    {
        tx_list_peer_registration_invalid = value;
    }
    if(value_path == "tx-list-peer-session-connection-down-not-ok")
    {
        tx_list_peer_session_connection_down_not_ok = value;
    }
    if(value_path == "tx-list-peer-session-connection-up-not-ok")
    {
        tx_list_peer_session_connection_up_not_ok = value;
    }
    if(value_path == "tx-list-peer-timer-handler")
    {
        tx_list_peer_timer_handler = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::IntfStatusStatistics()
    :
    grp_bound_cnt{YType::uint32, "grp-bound-cnt"},
    non_stale_cnt{YType::uint32, "non-stale-cnt"},
    pend_caps_rem_cnt{YType::uint32, "pend-caps-rem-cnt"},
    pend_other_batch_oper_cnt{YType::uint32, "pend-other-batch-oper-cnt"},
    pend_reg_disable_cnt{YType::uint32, "pend-reg-disable-cnt"}
{
    yang_name = "intf-status-statistics"; yang_parent_name = "stats-global";
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::~IntfStatusStatistics()
{
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::has_data() const
{
    return grp_bound_cnt.is_set
	|| non_stale_cnt.is_set
	|| pend_caps_rem_cnt.is_set
	|| pend_other_batch_oper_cnt.is_set
	|| pend_reg_disable_cnt.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(grp_bound_cnt.operation)
	|| is_set(non_stale_cnt.operation)
	|| is_set(pend_caps_rem_cnt.operation)
	|| is_set(pend_other_batch_oper_cnt.operation)
	|| is_set(pend_reg_disable_cnt.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-status-statistics";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IntfStatusStatistics' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grp_bound_cnt.is_set || is_set(grp_bound_cnt.operation)) leaf_name_data.push_back(grp_bound_cnt.get_name_leafdata());
    if (non_stale_cnt.is_set || is_set(non_stale_cnt.operation)) leaf_name_data.push_back(non_stale_cnt.get_name_leafdata());
    if (pend_caps_rem_cnt.is_set || is_set(pend_caps_rem_cnt.operation)) leaf_name_data.push_back(pend_caps_rem_cnt.get_name_leafdata());
    if (pend_other_batch_oper_cnt.is_set || is_set(pend_other_batch_oper_cnt.operation)) leaf_name_data.push_back(pend_other_batch_oper_cnt.get_name_leafdata());
    if (pend_reg_disable_cnt.is_set || is_set(pend_reg_disable_cnt.operation)) leaf_name_data.push_back(pend_reg_disable_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "grp-bound-cnt")
    {
        grp_bound_cnt = value;
    }
    if(value_path == "non-stale-cnt")
    {
        non_stale_cnt = value;
    }
    if(value_path == "pend-caps-rem-cnt")
    {
        pend_caps_rem_cnt = value;
    }
    if(value_path == "pend-other-batch-oper-cnt")
    {
        pend_other_batch_oper_cnt = value;
    }
    if(value_path == "pend-reg-disable-cnt")
    {
        pend_reg_disable_cnt = value;
    }
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::TxListStatistics()
    :
    tx_list_clean_command{YType::uint32, "tx-list-clean-command"},
    tx_list_clean_marker{YType::uint32, "tx-list-clean-marker"},
    tx_list_clean_negotiation{YType::uint32, "tx-list-clean-negotiation"},
    tx_list_encode_command_ok{YType::uint32, "tx-list-encode-command-ok"},
    tx_list_encode_command_partial_write{YType::uint32, "tx-list-encode-command-partial-write"},
    tx_list_encode_marker_ok{YType::uint32, "tx-list-encode-marker-ok"},
    tx_list_encode_marker_partial_write{YType::uint32, "tx-list-encode-marker-partial-write"},
    tx_list_encode_negotiation_ok{YType::uint32, "tx-list-encode-negotiation-ok"},
    tx_list_encode_negotiation_partial_write{YType::uint32, "tx-list-encode-negotiation-partial-write"}
{
    yang_name = "tx-list-statistics"; yang_parent_name = "stats-global";
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::~TxListStatistics()
{
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::has_data() const
{
    return tx_list_clean_command.is_set
	|| tx_list_clean_marker.is_set
	|| tx_list_clean_negotiation.is_set
	|| tx_list_encode_command_ok.is_set
	|| tx_list_encode_command_partial_write.is_set
	|| tx_list_encode_marker_ok.is_set
	|| tx_list_encode_marker_partial_write.is_set
	|| tx_list_encode_negotiation_ok.is_set
	|| tx_list_encode_negotiation_partial_write.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(tx_list_clean_command.operation)
	|| is_set(tx_list_clean_marker.operation)
	|| is_set(tx_list_clean_negotiation.operation)
	|| is_set(tx_list_encode_command_ok.operation)
	|| is_set(tx_list_encode_command_partial_write.operation)
	|| is_set(tx_list_encode_marker_ok.operation)
	|| is_set(tx_list_encode_marker_partial_write.operation)
	|| is_set(tx_list_encode_negotiation_ok.operation)
	|| is_set(tx_list_encode_negotiation_partial_write.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-list-statistics";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxListStatistics' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_list_clean_command.is_set || is_set(tx_list_clean_command.operation)) leaf_name_data.push_back(tx_list_clean_command.get_name_leafdata());
    if (tx_list_clean_marker.is_set || is_set(tx_list_clean_marker.operation)) leaf_name_data.push_back(tx_list_clean_marker.get_name_leafdata());
    if (tx_list_clean_negotiation.is_set || is_set(tx_list_clean_negotiation.operation)) leaf_name_data.push_back(tx_list_clean_negotiation.get_name_leafdata());
    if (tx_list_encode_command_ok.is_set || is_set(tx_list_encode_command_ok.operation)) leaf_name_data.push_back(tx_list_encode_command_ok.get_name_leafdata());
    if (tx_list_encode_command_partial_write.is_set || is_set(tx_list_encode_command_partial_write.operation)) leaf_name_data.push_back(tx_list_encode_command_partial_write.get_name_leafdata());
    if (tx_list_encode_marker_ok.is_set || is_set(tx_list_encode_marker_ok.operation)) leaf_name_data.push_back(tx_list_encode_marker_ok.get_name_leafdata());
    if (tx_list_encode_marker_partial_write.is_set || is_set(tx_list_encode_marker_partial_write.operation)) leaf_name_data.push_back(tx_list_encode_marker_partial_write.get_name_leafdata());
    if (tx_list_encode_negotiation_ok.is_set || is_set(tx_list_encode_negotiation_ok.operation)) leaf_name_data.push_back(tx_list_encode_negotiation_ok.get_name_leafdata());
    if (tx_list_encode_negotiation_partial_write.is_set || is_set(tx_list_encode_negotiation_partial_write.operation)) leaf_name_data.push_back(tx_list_encode_negotiation_partial_write.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tx-list-clean-command")
    {
        tx_list_clean_command = value;
    }
    if(value_path == "tx-list-clean-marker")
    {
        tx_list_clean_marker = value;
    }
    if(value_path == "tx-list-clean-negotiation")
    {
        tx_list_clean_negotiation = value;
    }
    if(value_path == "tx-list-encode-command-ok")
    {
        tx_list_encode_command_ok = value;
    }
    if(value_path == "tx-list-encode-command-partial-write")
    {
        tx_list_encode_command_partial_write = value;
    }
    if(value_path == "tx-list-encode-marker-ok")
    {
        tx_list_encode_marker_ok = value;
    }
    if(value_path == "tx-list-encode-marker-partial-write")
    {
        tx_list_encode_marker_partial_write = value;
    }
    if(value_path == "tx-list-encode-negotiation-ok")
    {
        tx_list_encode_negotiation_ok = value;
    }
    if(value_path == "tx-list-encode-negotiation-partial-write")
    {
        tx_list_encode_negotiation_partial_write = value;
    }
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::ClientStatus()
    :
    clean_up_timer_remaining{YType::uint32, "clean-up-timer-remaining"},
    client_connection_status{YType::boolean, "client-connection-status"},
    client_initialization_synchronization_pending{YType::boolean, "client-initialization-synchronization-pending"},
    client_synchronization_end_of_download_pending{YType::boolean, "client-synchronization-end-of-download-pending"},
    component{YType::enumeration, "component"},
    down_time_stamp{YType::str, "down-time-stamp"},
    up_time_stamp{YType::str, "up-time-stamp"}
{
    yang_name = "client-status"; yang_parent_name = "stats-global";
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::~ClientStatus()
{
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::has_data() const
{
    return clean_up_timer_remaining.is_set
	|| client_connection_status.is_set
	|| client_initialization_synchronization_pending.is_set
	|| client_synchronization_end_of_download_pending.is_set
	|| component.is_set
	|| down_time_stamp.is_set
	|| up_time_stamp.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(clean_up_timer_remaining.operation)
	|| is_set(client_connection_status.operation)
	|| is_set(client_initialization_synchronization_pending.operation)
	|| is_set(client_synchronization_end_of_download_pending.operation)
	|| is_set(component.operation)
	|| is_set(down_time_stamp.operation)
	|| is_set(up_time_stamp.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-status";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientStatus' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clean_up_timer_remaining.is_set || is_set(clean_up_timer_remaining.operation)) leaf_name_data.push_back(clean_up_timer_remaining.get_name_leafdata());
    if (client_connection_status.is_set || is_set(client_connection_status.operation)) leaf_name_data.push_back(client_connection_status.get_name_leafdata());
    if (client_initialization_synchronization_pending.is_set || is_set(client_initialization_synchronization_pending.operation)) leaf_name_data.push_back(client_initialization_synchronization_pending.get_name_leafdata());
    if (client_synchronization_end_of_download_pending.is_set || is_set(client_synchronization_end_of_download_pending.operation)) leaf_name_data.push_back(client_synchronization_end_of_download_pending.get_name_leafdata());
    if (component.is_set || is_set(component.operation)) leaf_name_data.push_back(component.get_name_leafdata());
    if (down_time_stamp.is_set || is_set(down_time_stamp.operation)) leaf_name_data.push_back(down_time_stamp.get_name_leafdata());
    if (up_time_stamp.is_set || is_set(up_time_stamp.operation)) leaf_name_data.push_back(up_time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clean-up-timer-remaining")
    {
        clean_up_timer_remaining = value;
    }
    if(value_path == "client-connection-status")
    {
        client_connection_status = value;
    }
    if(value_path == "client-initialization-synchronization-pending")
    {
        client_initialization_synchronization_pending = value;
    }
    if(value_path == "client-synchronization-end-of-download-pending")
    {
        client_synchronization_end_of_download_pending = value;
    }
    if(value_path == "component")
    {
        component = value;
    }
    if(value_path == "down-time-stamp")
    {
        down_time_stamp = value;
    }
    if(value_path == "up-time-stamp")
    {
        up_time_stamp = value;
    }
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::OpaqueMemoryStatus()
    :
    component{YType::enumeration, "component"},
    opaque_data_size{YType::uint32, "opaque-data-size"},
    opaque_high_size{YType::uint32, "opaque-high-size"},
    opaque_size{YType::uint32, "opaque-size"},
    session_count{YType::uint32, "session-count"}
{
    yang_name = "opaque-memory-status"; yang_parent_name = "stats-global";
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::~OpaqueMemoryStatus()
{
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::has_data() const
{
    return component.is_set
	|| opaque_data_size.is_set
	|| opaque_high_size.is_set
	|| opaque_size.is_set
	|| session_count.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(component.operation)
	|| is_set(opaque_data_size.operation)
	|| is_set(opaque_high_size.operation)
	|| is_set(opaque_size.operation)
	|| is_set(session_count.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-memory-status";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpaqueMemoryStatus' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (component.is_set || is_set(component.operation)) leaf_name_data.push_back(component.get_name_leafdata());
    if (opaque_data_size.is_set || is_set(opaque_data_size.operation)) leaf_name_data.push_back(opaque_data_size.get_name_leafdata());
    if (opaque_high_size.is_set || is_set(opaque_high_size.operation)) leaf_name_data.push_back(opaque_high_size.get_name_leafdata());
    if (opaque_size.is_set || is_set(opaque_size.operation)) leaf_name_data.push_back(opaque_size.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.operation)) leaf_name_data.push_back(session_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "component")
    {
        component = value;
    }
    if(value_path == "opaque-data-size")
    {
        opaque_data_size = value;
    }
    if(value_path == "opaque-high-size")
    {
        opaque_high_size = value;
    }
    if(value_path == "opaque-size")
    {
        opaque_size = value;
    }
    if(value_path == "session-count")
    {
        session_count = value;
    }
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::TxListOverTcpStatus()
    :
    accept_count{YType::uint32, "accept-count"},
    active_socket_count{YType::uint16, "active-socket-count"},
    blocked_connect_count{YType::uint32, "blocked-connect-count"},
    buffer_cache_hit{YType::uint16, "buffer-cache-hit"},
    buffer_cache_miss{YType::uint16, "buffer-cache-miss"},
    buffer_freed_count{YType::uint16, "buffer-freed-count"},
    buffer_full_occurence_count{YType::uint32, "buffer-full-occurence-count"},
    bytes_received{YType::uint32, "bytes-received"},
    bytes_sent{YType::uint32, "bytes-sent"},
    connect_count{YType::uint32, "connect-count"},
    connect_retry_count{YType::uint32, "connect-retry-count"},
    maximum_received_message_size{YType::uint32, "maximum-received-message-size"},
    maximum_requested_buffer_size{YType::uint32, "maximum-requested-buffer-size"},
    maximum_sent_message_size{YType::uint32, "maximum-sent-message-size"},
    mem_move_bytes_count{YType::uint32, "mem-move-bytes-count"},
    mem_move_message_count{YType::uint32, "mem-move-message-count"},
    messages_received{YType::uint32, "messages-received"},
    messages_sent{YType::uint32, "messages-sent"},
    peer_pause_count{YType::uint32, "peer-pause-count"},
    remote_node_down_count{YType::uint32, "remote-node-down-count"},
    socket_read_count{YType::uint32, "socket-read-count"},
    socket_write_count{YType::uint32, "socket-write-count"}
{
    yang_name = "tx-list-over-tcp-status"; yang_parent_name = "stats-global";
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::~TxListOverTcpStatus()
{
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::has_data() const
{
    return accept_count.is_set
	|| active_socket_count.is_set
	|| blocked_connect_count.is_set
	|| buffer_cache_hit.is_set
	|| buffer_cache_miss.is_set
	|| buffer_freed_count.is_set
	|| buffer_full_occurence_count.is_set
	|| bytes_received.is_set
	|| bytes_sent.is_set
	|| connect_count.is_set
	|| connect_retry_count.is_set
	|| maximum_received_message_size.is_set
	|| maximum_requested_buffer_size.is_set
	|| maximum_sent_message_size.is_set
	|| mem_move_bytes_count.is_set
	|| mem_move_message_count.is_set
	|| messages_received.is_set
	|| messages_sent.is_set
	|| peer_pause_count.is_set
	|| remote_node_down_count.is_set
	|| socket_read_count.is_set
	|| socket_write_count.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_count.operation)
	|| is_set(active_socket_count.operation)
	|| is_set(blocked_connect_count.operation)
	|| is_set(buffer_cache_hit.operation)
	|| is_set(buffer_cache_miss.operation)
	|| is_set(buffer_freed_count.operation)
	|| is_set(buffer_full_occurence_count.operation)
	|| is_set(bytes_received.operation)
	|| is_set(bytes_sent.operation)
	|| is_set(connect_count.operation)
	|| is_set(connect_retry_count.operation)
	|| is_set(maximum_received_message_size.operation)
	|| is_set(maximum_requested_buffer_size.operation)
	|| is_set(maximum_sent_message_size.operation)
	|| is_set(mem_move_bytes_count.operation)
	|| is_set(mem_move_message_count.operation)
	|| is_set(messages_received.operation)
	|| is_set(messages_sent.operation)
	|| is_set(peer_pause_count.operation)
	|| is_set(remote_node_down_count.operation)
	|| is_set(socket_read_count.operation)
	|| is_set(socket_write_count.operation);
}

std::string SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-list-over-tcp-status";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxListOverTcpStatus' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_count.is_set || is_set(accept_count.operation)) leaf_name_data.push_back(accept_count.get_name_leafdata());
    if (active_socket_count.is_set || is_set(active_socket_count.operation)) leaf_name_data.push_back(active_socket_count.get_name_leafdata());
    if (blocked_connect_count.is_set || is_set(blocked_connect_count.operation)) leaf_name_data.push_back(blocked_connect_count.get_name_leafdata());
    if (buffer_cache_hit.is_set || is_set(buffer_cache_hit.operation)) leaf_name_data.push_back(buffer_cache_hit.get_name_leafdata());
    if (buffer_cache_miss.is_set || is_set(buffer_cache_miss.operation)) leaf_name_data.push_back(buffer_cache_miss.get_name_leafdata());
    if (buffer_freed_count.is_set || is_set(buffer_freed_count.operation)) leaf_name_data.push_back(buffer_freed_count.get_name_leafdata());
    if (buffer_full_occurence_count.is_set || is_set(buffer_full_occurence_count.operation)) leaf_name_data.push_back(buffer_full_occurence_count.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.operation)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.operation)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (connect_count.is_set || is_set(connect_count.operation)) leaf_name_data.push_back(connect_count.get_name_leafdata());
    if (connect_retry_count.is_set || is_set(connect_retry_count.operation)) leaf_name_data.push_back(connect_retry_count.get_name_leafdata());
    if (maximum_received_message_size.is_set || is_set(maximum_received_message_size.operation)) leaf_name_data.push_back(maximum_received_message_size.get_name_leafdata());
    if (maximum_requested_buffer_size.is_set || is_set(maximum_requested_buffer_size.operation)) leaf_name_data.push_back(maximum_requested_buffer_size.get_name_leafdata());
    if (maximum_sent_message_size.is_set || is_set(maximum_sent_message_size.operation)) leaf_name_data.push_back(maximum_sent_message_size.get_name_leafdata());
    if (mem_move_bytes_count.is_set || is_set(mem_move_bytes_count.operation)) leaf_name_data.push_back(mem_move_bytes_count.get_name_leafdata());
    if (mem_move_message_count.is_set || is_set(mem_move_message_count.operation)) leaf_name_data.push_back(mem_move_message_count.get_name_leafdata());
    if (messages_received.is_set || is_set(messages_received.operation)) leaf_name_data.push_back(messages_received.get_name_leafdata());
    if (messages_sent.is_set || is_set(messages_sent.operation)) leaf_name_data.push_back(messages_sent.get_name_leafdata());
    if (peer_pause_count.is_set || is_set(peer_pause_count.operation)) leaf_name_data.push_back(peer_pause_count.get_name_leafdata());
    if (remote_node_down_count.is_set || is_set(remote_node_down_count.operation)) leaf_name_data.push_back(remote_node_down_count.get_name_leafdata());
    if (socket_read_count.is_set || is_set(socket_read_count.operation)) leaf_name_data.push_back(socket_read_count.get_name_leafdata());
    if (socket_write_count.is_set || is_set(socket_write_count.operation)) leaf_name_data.push_back(socket_write_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-count")
    {
        accept_count = value;
    }
    if(value_path == "active-socket-count")
    {
        active_socket_count = value;
    }
    if(value_path == "blocked-connect-count")
    {
        blocked_connect_count = value;
    }
    if(value_path == "buffer-cache-hit")
    {
        buffer_cache_hit = value;
    }
    if(value_path == "buffer-cache-miss")
    {
        buffer_cache_miss = value;
    }
    if(value_path == "buffer-freed-count")
    {
        buffer_freed_count = value;
    }
    if(value_path == "buffer-full-occurence-count")
    {
        buffer_full_occurence_count = value;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
    }
    if(value_path == "connect-count")
    {
        connect_count = value;
    }
    if(value_path == "connect-retry-count")
    {
        connect_retry_count = value;
    }
    if(value_path == "maximum-received-message-size")
    {
        maximum_received_message_size = value;
    }
    if(value_path == "maximum-requested-buffer-size")
    {
        maximum_requested_buffer_size = value;
    }
    if(value_path == "maximum-sent-message-size")
    {
        maximum_sent_message_size = value;
    }
    if(value_path == "mem-move-bytes-count")
    {
        mem_move_bytes_count = value;
    }
    if(value_path == "mem-move-message-count")
    {
        mem_move_message_count = value;
    }
    if(value_path == "messages-received")
    {
        messages_received = value;
    }
    if(value_path == "messages-sent")
    {
        messages_sent = value;
    }
    if(value_path == "peer-pause-count")
    {
        peer_pause_count = value;
    }
    if(value_path == "remote-node-down-count")
    {
        remote_node_down_count = value;
    }
    if(value_path == "socket-read-count")
    {
        socket_read_count = value;
    }
    if(value_path == "socket-write-count")
    {
        socket_write_count = value;
    }
}

SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummaries()
{
    yang_name = "group-summaries"; yang_parent_name = "node";
}

SessionRedundancyAgent::Nodes::Node::GroupSummaries::~GroupSummaries()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupSummaries::has_data() const
{
    for (std::size_t index=0; index<group_summary.size(); index++)
    {
        if(group_summary[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyAgent::Nodes::Node::GroupSummaries::has_operation() const
{
    for (std::size_t index=0; index<group_summary.size(); index++)
    {
        if(group_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summaries";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::GroupSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupSummaries' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::GroupSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-summary")
    {
        for(auto const & c : group_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary>();
        c->parent = this;
        group_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::GroupSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SessionRedundancyAgent::Nodes::Node::GroupSummaries::set_value(const std::string & value_path, std::string value)
{
}

SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::GroupSummary()
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

SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::~GroupSummary()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::has_data() const
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

bool SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::has_operation() const
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

std::string SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summary" <<"[group-id='" <<group_id <<"']";

    return path_buffer.str();

}

const EntityPath SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupSummary' in Cisco_IOS_XR_infra_serg_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::set_value(const std::string & value_path, std::string value)
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

const Enum::YLeaf SergShowSessionErrorEnum::none {0, "none"};
const Enum::YLeaf SergShowSessionErrorEnum::hard {1, "hard"};
const Enum::YLeaf SergShowSessionErrorEnum::soft {2, "soft"};

const Enum::YLeaf SergShowSlaveModeEnum::none {0, "none"};
const Enum::YLeaf SergShowSlaveModeEnum::warm {1, "warm"};
const Enum::YLeaf SergShowSlaveModeEnum::hot {2, "hot"};

const Enum::YLeaf SergShowSoReasonEnum::internal {0, "internal"};
const Enum::YLeaf SergShowSoReasonEnum::admin {1, "admin"};
const Enum::YLeaf SergShowSoReasonEnum::peer_up {2, "peer-up"};
const Enum::YLeaf SergShowSoReasonEnum::peer_down {3, "peer-down"};
const Enum::YLeaf SergShowSoReasonEnum::object_tracking_status_change {4, "object-tracking-status-change"};
const Enum::YLeaf SergShowSoReasonEnum::serg_show_so_reason_max {5, "serg-show-so-reason-max"};

const Enum::YLeaf SergShowMemEnum::standard {0, "standard"};
const Enum::YLeaf SergShowMemEnum::chunk {1, "chunk"};
const Enum::YLeaf SergShowMemEnum::edm {2, "edm"};
const Enum::YLeaf SergShowMemEnum::string {3, "string"};
const Enum::YLeaf SergShowMemEnum::static_ {4, "static"};
const Enum::YLeaf SergShowMemEnum::unknown {5, "unknown"};

const Enum::YLeaf SergPeerStatusEnum::not_configured {0, "not-configured"};
const Enum::YLeaf SergPeerStatusEnum::initialize {1, "initialize"};
const Enum::YLeaf SergPeerStatusEnum::retry {2, "retry"};
const Enum::YLeaf SergPeerStatusEnum::connect {3, "connect"};
const Enum::YLeaf SergPeerStatusEnum::listen {4, "listen"};
const Enum::YLeaf SergPeerStatusEnum::registration {5, "registration"};
const Enum::YLeaf SergPeerStatusEnum::cleanup {6, "cleanup"};
const Enum::YLeaf SergPeerStatusEnum::connected {7, "connected"};
const Enum::YLeaf SergPeerStatusEnum::established {8, "established"};

const Enum::YLeaf SergShowImRoleEnum::none {0, "none"};
const Enum::YLeaf SergShowImRoleEnum::master {1, "master"};
const Enum::YLeaf SergShowImRoleEnum::slave {2, "slave"};

const Enum::YLeaf SergShowCompEnum::serga {0, "serga"};
const Enum::YLeaf SergShowCompEnum::ipv6nd {1, "ipv6nd"};
const Enum::YLeaf SergShowCompEnum::dhcpv6 {2, "dhcpv6"};

const Enum::YLeaf SergShowSessionOperationEnum::none {0, "none"};
const Enum::YLeaf SergShowSessionOperationEnum::update {1, "update"};
const Enum::YLeaf SergShowSessionOperationEnum::delete_ {2, "delete"};
const Enum::YLeaf SergShowSessionOperationEnum::in_sync {3, "in-sync"};

const Enum::YLeaf SergShowRoleEnum::none {0, "none"};
const Enum::YLeaf SergShowRoleEnum::master {1, "master"};
const Enum::YLeaf SergShowRoleEnum::slave {2, "slave"};


}
}

