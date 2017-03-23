
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_serg_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_serg_cfg {

SessionRedundancy::SessionRedundancy()
    :
    enable{YType::empty, "enable"},
    hold_timer{YType::uint32, "hold-timer"},
    preferred_role{YType::enumeration, "preferred-role"},
    redundancy_disable{YType::empty, "redundancy-disable"},
    source_interface{YType::str, "source-interface"}
    	,
    groups(std::make_shared<SessionRedundancy::Groups>())
	,revertive_timer(std::make_shared<SessionRedundancy::RevertiveTimer>())
{
    groups->parent = this;
    children["groups"] = groups;

    revertive_timer->parent = this;
    children["revertive-timer"] = revertive_timer;

    yang_name = "session-redundancy"; yang_parent_name = "Cisco-IOS-XR-infra-serg-cfg";
}

SessionRedundancy::~SessionRedundancy()
{
}

bool SessionRedundancy::has_data() const
{
    return enable.is_set
	|| hold_timer.is_set
	|| preferred_role.is_set
	|| redundancy_disable.is_set
	|| source_interface.is_set
	|| (groups !=  nullptr && groups->has_data())
	|| (revertive_timer !=  nullptr && revertive_timer->has_data());
}

bool SessionRedundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(hold_timer.operation)
	|| is_set(preferred_role.operation)
	|| is_set(redundancy_disable.operation)
	|| is_set(source_interface.operation)
	|| (groups !=  nullptr && groups->has_operation())
	|| (revertive_timer !=  nullptr && revertive_timer->has_operation());
}

std::string SessionRedundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-serg-cfg:session-redundancy";

    return path_buffer.str();

}

EntityPath SessionRedundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hold_timer.is_set || is_set(hold_timer.operation)) leaf_name_data.push_back(hold_timer.get_name_leafdata());
    if (preferred_role.is_set || is_set(preferred_role.operation)) leaf_name_data.push_back(preferred_role.get_name_leafdata());
    if (redundancy_disable.is_set || is_set(redundancy_disable.operation)) leaf_name_data.push_back(redundancy_disable.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            groups = std::make_shared<SessionRedundancy::Groups>();
            groups->parent = this;
            children["groups"] = groups;
        }
        return children.at("groups");
    }

    if(child_yang_name == "revertive-timer")
    {
        if(revertive_timer != nullptr)
        {
            children["revertive-timer"] = revertive_timer;
        }
        else
        {
            revertive_timer = std::make_shared<SessionRedundancy::RevertiveTimer>();
            revertive_timer->parent = this;
            children["revertive-timer"] = revertive_timer;
        }
        return children.at("revertive-timer");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SessionRedundancy::get_children()
{
    if(children.find("groups") == children.end())
    {
        if(groups != nullptr)
        {
            children["groups"] = groups;
        }
    }

    if(children.find("revertive-timer") == children.end())
    {
        if(revertive_timer != nullptr)
        {
            children["revertive-timer"] = revertive_timer;
        }
    }

    return children;
}

void SessionRedundancy::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "source-interface")
    {
        source_interface = value;
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

SessionRedundancy::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "session-redundancy";
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
    return is_set(operation);
}

std::string SessionRedundancy::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

EntityPath SessionRedundancy::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-serg-cfg:session-redundancy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancy::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<SessionRedundancy::Groups::Group>();
        c->parent = this;
        group.push_back(std::move(c));
        children[segment_path] = group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SessionRedundancy::Groups::get_children()
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

void SessionRedundancy::Groups::set_value(const std::string & value_path, std::string value)
{
}

SessionRedundancy::Groups::Group::Group()
    :
    group_id{YType::uint32, "group-id"},
    access_tracking_object{YType::str, "access-tracking-object"},
    core_tracking_object{YType::str, "core-tracking-object"},
    description{YType::str, "description"},
    disable_tracking_object{YType::empty, "disable-tracking-object"},
    enable{YType::empty, "enable"},
    hold_timer{YType::uint32, "hold-timer"},
    preferred_role{YType::enumeration, "preferred-role"},
    redundancy_disable{YType::empty, "redundancy-disable"}
    	,
    interface_list(std::make_shared<SessionRedundancy::Groups::Group::InterfaceList>())
	,peer(std::make_shared<SessionRedundancy::Groups::Group::Peer>())
	,revertive_timer(std::make_shared<SessionRedundancy::Groups::Group::RevertiveTimer>())
{
    interface_list->parent = this;
    children["interface-list"] = interface_list;

    peer->parent = this;
    children["peer"] = peer;

    revertive_timer->parent = this;
    children["revertive-timer"] = revertive_timer;

    yang_name = "group"; yang_parent_name = "groups";
}

SessionRedundancy::Groups::Group::~Group()
{
}

bool SessionRedundancy::Groups::Group::has_data() const
{
    return group_id.is_set
	|| access_tracking_object.is_set
	|| core_tracking_object.is_set
	|| description.is_set
	|| disable_tracking_object.is_set
	|| enable.is_set
	|| hold_timer.is_set
	|| preferred_role.is_set
	|| redundancy_disable.is_set
	|| (interface_list !=  nullptr && interface_list->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (revertive_timer !=  nullptr && revertive_timer->has_data());
}

bool SessionRedundancy::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(group_id.operation)
	|| is_set(access_tracking_object.operation)
	|| is_set(core_tracking_object.operation)
	|| is_set(description.operation)
	|| is_set(disable_tracking_object.operation)
	|| is_set(enable.operation)
	|| is_set(hold_timer.operation)
	|| is_set(preferred_role.operation)
	|| is_set(redundancy_disable.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (revertive_timer !=  nullptr && revertive_timer->has_operation());
}

std::string SessionRedundancy::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-id='" <<group_id <<"']";

    return path_buffer.str();

}

EntityPath SessionRedundancy::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-serg-cfg:session-redundancy/groups/" << get_segment_path();
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
    if (hold_timer.is_set || is_set(hold_timer.operation)) leaf_name_data.push_back(hold_timer.get_name_leafdata());
    if (preferred_role.is_set || is_set(preferred_role.operation)) leaf_name_data.push_back(preferred_role.get_name_leafdata());
    if (redundancy_disable.is_set || is_set(redundancy_disable.operation)) leaf_name_data.push_back(redundancy_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-list")
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
        else
        {
            interface_list = std::make_shared<SessionRedundancy::Groups::Group::InterfaceList>();
            interface_list->parent = this;
            children["interface-list"] = interface_list;
        }
        return children.at("interface-list");
    }

    if(child_yang_name == "peer")
    {
        if(peer != nullptr)
        {
            children["peer"] = peer;
        }
        else
        {
            peer = std::make_shared<SessionRedundancy::Groups::Group::Peer>();
            peer->parent = this;
            children["peer"] = peer;
        }
        return children.at("peer");
    }

    if(child_yang_name == "revertive-timer")
    {
        if(revertive_timer != nullptr)
        {
            children["revertive-timer"] = revertive_timer;
        }
        else
        {
            revertive_timer = std::make_shared<SessionRedundancy::Groups::Group::RevertiveTimer>();
            revertive_timer->parent = this;
            children["revertive-timer"] = revertive_timer;
        }
        return children.at("revertive-timer");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SessionRedundancy::Groups::Group::get_children()
{
    if(children.find("interface-list") == children.end())
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
    }

    if(children.find("peer") == children.end())
    {
        if(peer != nullptr)
        {
            children["peer"] = peer;
        }
    }

    if(children.find("revertive-timer") == children.end())
    {
        if(revertive_timer != nullptr)
        {
            children["revertive-timer"] = revertive_timer;
        }
    }

    return children;
}

void SessionRedundancy::Groups::Group::set_value(const std::string & value_path, std::string value)
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
}

SessionRedundancy::Groups::Group::Peer::Peer()
    :
    ipaddress(std::make_shared<SessionRedundancy::Groups::Group::Peer::Ipaddress>())
{
    ipaddress->parent = this;
    children["ipaddress"] = ipaddress;

    yang_name = "peer"; yang_parent_name = "group";
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
    return is_set(operation)
	|| (ipaddress !=  nullptr && ipaddress->has_operation());
}

std::string SessionRedundancy::Groups::Group::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

EntityPath SessionRedundancy::Groups::Group::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_infra_serg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipaddress")
    {
        if(ipaddress != nullptr)
        {
            children["ipaddress"] = ipaddress;
        }
        else
        {
            ipaddress = std::make_shared<SessionRedundancy::Groups::Group::Peer::Ipaddress>();
            ipaddress->parent = this;
            children["ipaddress"] = ipaddress;
        }
        return children.at("ipaddress");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SessionRedundancy::Groups::Group::Peer::get_children()
{
    if(children.find("ipaddress") == children.end())
    {
        if(ipaddress != nullptr)
        {
            children["ipaddress"] = ipaddress;
        }
    }

    return children;
}

void SessionRedundancy::Groups::Group::Peer::set_value(const std::string & value_path, std::string value)
{
}

SessionRedundancy::Groups::Group::Peer::Ipaddress::Ipaddress()
    :
    address_family{YType::enumeration, "address-family"},
    prefix_string{YType::str, "prefix-string"}
{
    yang_name = "ipaddress"; yang_parent_name = "peer";
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
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(prefix_string.operation);
}

std::string SessionRedundancy::Groups::Group::Peer::Ipaddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipaddress";

    return path_buffer.str();

}

EntityPath SessionRedundancy::Groups::Group::Peer::Ipaddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipaddress' in Cisco_IOS_XR_infra_serg_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::Peer::Ipaddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SessionRedundancy::Groups::Group::Peer::Ipaddress::get_children()
{
    return children;
}

void SessionRedundancy::Groups::Group::Peer::Ipaddress::set_value(const std::string & value_path, std::string value)
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

SessionRedundancy::Groups::Group::RevertiveTimer::RevertiveTimer()
    :
    max_value{YType::uint32, "max-value"},
    value_{YType::uint32, "value"}
{
    yang_name = "revertive-timer"; yang_parent_name = "group";
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
    return is_set(operation)
	|| is_set(max_value.operation)
	|| is_set(value_.operation);
}

std::string SessionRedundancy::Groups::Group::RevertiveTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revertive-timer";

    return path_buffer.str();

}

EntityPath SessionRedundancy::Groups::Group::RevertiveTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertiveTimer' in Cisco_IOS_XR_infra_serg_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::RevertiveTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SessionRedundancy::Groups::Group::RevertiveTimer::get_children()
{
    return children;
}

void SessionRedundancy::Groups::Group::RevertiveTimer::set_value(const std::string & value_path, std::string value)
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

SessionRedundancy::Groups::Group::InterfaceList::InterfaceList()
    :
    enable{YType::empty, "enable"}
    	,
    interface_ranges(std::make_shared<SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges>())
	,interfaces(std::make_shared<SessionRedundancy::Groups::Group::InterfaceList::Interfaces>())
{
    interface_ranges->parent = this;
    children["interface-ranges"] = interface_ranges;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    yang_name = "interface-list"; yang_parent_name = "group";
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
    return is_set(operation)
	|| is_set(enable.operation)
	|| (interface_ranges !=  nullptr && interface_ranges->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string SessionRedundancy::Groups::Group::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

EntityPath SessionRedundancy::Groups::Group::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XR_infra_serg_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-ranges")
    {
        if(interface_ranges != nullptr)
        {
            children["interface-ranges"] = interface_ranges;
        }
        else
        {
            interface_ranges = std::make_shared<SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges>();
            interface_ranges->parent = this;
            children["interface-ranges"] = interface_ranges;
        }
        return children.at("interface-ranges");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<SessionRedundancy::Groups::Group::InterfaceList::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SessionRedundancy::Groups::Group::InterfaceList::get_children()
{
    if(children.find("interface-ranges") == children.end())
    {
        if(interface_ranges != nullptr)
        {
            children["interface-ranges"] = interface_ranges;
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

void SessionRedundancy::Groups::Group::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRanges()
{
    yang_name = "interface-ranges"; yang_parent_name = "interface-list";
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
    return is_set(operation);
}

std::string SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ranges";

    return path_buffer.str();

}

EntityPath SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceRanges' in Cisco_IOS_XR_infra_serg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-range")
    {
        for(auto const & c : interface_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange>();
        c->parent = this;
        interface_range.push_back(std::move(c));
        children[segment_path] = interface_range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::get_children()
{
    for (auto const & c : interface_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::set_value(const std::string & value_path, std::string value)
{
}

SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::InterfaceRange()
    :
    interface_name{YType::str, "interface-name"},
    sub_interface_range_end{YType::uint32, "sub-interface-range-end"},
    sub_interface_range_start{YType::uint32, "sub-interface-range-start"},
    interface_id_range_end{YType::uint32, "interface-id-range-end"},
    interface_id_range_start{YType::uint32, "interface-id-range-start"}
{
    yang_name = "interface-range"; yang_parent_name = "interface-ranges";
}

SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::~InterfaceRange()
{
}

bool SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::has_data() const
{
    return interface_name.is_set
	|| sub_interface_range_end.is_set
	|| sub_interface_range_start.is_set
	|| interface_id_range_end.is_set
	|| interface_id_range_start.is_set;
}

bool SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(sub_interface_range_end.operation)
	|| is_set(sub_interface_range_start.operation)
	|| is_set(interface_id_range_end.operation)
	|| is_set(interface_id_range_start.operation);
}

std::string SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-range" <<"[interface-name='" <<interface_name <<"']" <<"[sub-interface-range-end='" <<sub_interface_range_end <<"']" <<"[sub-interface-range-start='" <<sub_interface_range_start <<"']";

    return path_buffer.str();

}

EntityPath SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceRange' in Cisco_IOS_XR_infra_serg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sub_interface_range_end.is_set || is_set(sub_interface_range_end.operation)) leaf_name_data.push_back(sub_interface_range_end.get_name_leafdata());
    if (sub_interface_range_start.is_set || is_set(sub_interface_range_start.operation)) leaf_name_data.push_back(sub_interface_range_start.get_name_leafdata());
    if (interface_id_range_end.is_set || is_set(interface_id_range_end.operation)) leaf_name_data.push_back(interface_id_range_end.get_name_leafdata());
    if (interface_id_range_start.is_set || is_set(interface_id_range_start.operation)) leaf_name_data.push_back(interface_id_range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::get_children()
{
    return children;
}

void SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "sub-interface-range-end")
    {
        sub_interface_range_end = value;
    }
    if(value_path == "sub-interface-range-start")
    {
        sub_interface_range_start = value;
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

SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "interface-list";
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
    return is_set(operation);
}

std::string SessionRedundancy::Groups::Group::InterfaceList::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath SessionRedundancy::Groups::Group::InterfaceList::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_infra_serg_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::InterfaceList::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SessionRedundancy::Groups::Group::InterfaceList::Interfaces::get_children()
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

void SessionRedundancy::Groups::Group::InterfaceList::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_id{YType::uint32, "interface-id"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
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
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_id.operation);
}

std::string SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_infra_serg_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_children()
{
    return children;
}

void SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
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

SessionRedundancy::RevertiveTimer::RevertiveTimer()
    :
    max_value{YType::uint32, "max-value"},
    value_{YType::uint32, "value"}
{
    yang_name = "revertive-timer"; yang_parent_name = "session-redundancy";
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
    return is_set(operation)
	|| is_set(max_value.operation)
	|| is_set(value_.operation);
}

std::string SessionRedundancy::RevertiveTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revertive-timer";

    return path_buffer.str();

}

EntityPath SessionRedundancy::RevertiveTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-serg-cfg:session-redundancy/" << get_segment_path();
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

std::shared_ptr<Entity> SessionRedundancy::RevertiveTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SessionRedundancy::RevertiveTimer::get_children()
{
    return children;
}

void SessionRedundancy::RevertiveTimer::set_value(const std::string & value_path, std::string value)
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

const Enum::YLeaf SergAddrFamilyEnum::ipv4 {2, "ipv4"};
const Enum::YLeaf SergAddrFamilyEnum::ipv6 {10, "ipv6"};

const Enum::YLeaf SessionRedundancyGroupRoleEnum::master {1, "master"};
const Enum::YLeaf SessionRedundancyGroupRoleEnum::slave {2, "slave"};


}
}

