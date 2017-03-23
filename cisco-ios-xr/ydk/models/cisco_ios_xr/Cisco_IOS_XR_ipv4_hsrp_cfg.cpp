
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_hsrp_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_hsrp_cfg {

Hsrp::Hsrp()
    :
    interfaces(std::make_shared<Hsrp::Interfaces>())
	,logging(std::make_shared<Hsrp::Logging>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces;

    logging->parent = this;
    children["logging"] = logging;

    yang_name = "hsrp"; yang_parent_name = "Cisco-IOS-XR-ipv4-hsrp-cfg";
}

Hsrp::~Hsrp()
{
}

bool Hsrp::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool Hsrp::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Hsrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-cfg:hsrp";

    return path_buffer.str();

}

EntityPath Hsrp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Hsrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Hsrp::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<Hsrp::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    return children;
}

void Hsrp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Hsrp::clone_ptr() const
{
    return std::make_shared<Hsrp>();
}

std::string Hsrp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Hsrp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Hsrp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Hsrp::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "hsrp";
}

Hsrp::Interfaces::~Interfaces()
{
}

bool Hsrp::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-cfg:hsrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Hsrp::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::get_children()
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

void Hsrp::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    mac_refresh{YType::uint32, "mac-refresh"},
    redirects_disable{YType::empty, "redirects-disable"},
    use_bia{YType::empty, "use-bia"}
    	,
    bfd(std::make_shared<Hsrp::Interfaces::Interface::Bfd>())
	,delay(std::make_shared<Hsrp::Interfaces::Interface::Delay>())
	,ipv4(std::make_shared<Hsrp::Interfaces::Interface::Ipv4>())
	,ipv6(std::make_shared<Hsrp::Interfaces::Interface::Ipv6>())
{
    bfd->parent = this;
    children["bfd"] = bfd;

    delay->parent = this;
    children["delay"] = delay;

    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Hsrp::Interfaces::Interface::~Interface()
{
}

bool Hsrp::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| mac_refresh.is_set
	|| redirects_disable.is_set
	|| use_bia.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Hsrp::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(mac_refresh.operation)
	|| is_set(redirects_disable.operation)
	|| is_set(use_bia.operation)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Hsrp::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-cfg:hsrp/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_refresh.is_set || is_set(mac_refresh.operation)) leaf_name_data.push_back(mac_refresh.get_name_leafdata());
    if (redirects_disable.is_set || is_set(redirects_disable.operation)) leaf_name_data.push_back(redirects_disable.get_name_leafdata());
    if (use_bia.is_set || is_set(use_bia.operation)) leaf_name_data.push_back(use_bia.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Hsrp::Interfaces::Interface::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "delay")
    {
        if(delay != nullptr)
        {
            children["delay"] = delay;
        }
        else
        {
            delay = std::make_shared<Hsrp::Interfaces::Interface::Delay>();
            delay->parent = this;
            children["delay"] = delay;
        }
        return children.at("delay");
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<Hsrp::Interfaces::Interface::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<Hsrp::Interfaces::Interface::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::get_children()
{
    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("delay") == children.end())
    {
        if(delay != nullptr)
        {
            children["delay"] = delay;
        }
    }

    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh = value;
    }
    if(value_path == "redirects-disable")
    {
        redirects_disable = value;
    }
    if(value_path == "use-bia")
    {
        use_bia = value;
    }
}

Hsrp::Interfaces::Interface::Ipv6::Ipv6()
    :
    slave_groups(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::SlaveGroups>())
	,version2(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2>())
{
    slave_groups->parent = this;
    children["slave-groups"] = slave_groups;

    version2->parent = this;
    children["version2"] = version2;

    yang_name = "ipv6"; yang_parent_name = "interface";
}

Hsrp::Interfaces::Interface::Ipv6::~Ipv6()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::has_data() const
{
    return (slave_groups !=  nullptr && slave_groups->has_data())
	|| (version2 !=  nullptr && version2->has_data());
}

bool Hsrp::Interfaces::Interface::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (slave_groups !=  nullptr && slave_groups->has_operation())
	|| (version2 !=  nullptr && version2->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slave-groups")
    {
        if(slave_groups != nullptr)
        {
            children["slave-groups"] = slave_groups;
        }
        else
        {
            slave_groups = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::SlaveGroups>();
            slave_groups->parent = this;
            children["slave-groups"] = slave_groups;
        }
        return children.at("slave-groups");
    }

    if(child_yang_name == "version2")
    {
        if(version2 != nullptr)
        {
            children["version2"] = version2;
        }
        else
        {
            version2 = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2>();
            version2->parent = this;
            children["version2"] = version2;
        }
        return children.at("version2");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::get_children()
{
    if(children.find("slave-groups") == children.end())
    {
        if(slave_groups != nullptr)
        {
            children["slave-groups"] = slave_groups;
        }
    }

    if(children.find("version2") == children.end())
    {
        if(version2 != nullptr)
        {
            children["version2"] = version2;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Version2()
    :
    groups(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups>())
{
    groups->parent = this;
    children["groups"] = groups;

    yang_name = "version2"; yang_parent_name = "ipv6";
}

Hsrp::Interfaces::Interface::Ipv6::Version2::~Version2()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::has_data() const
{
    return (groups !=  nullptr && groups->has_data());
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::has_operation() const
{
    return is_set(operation)
	|| (groups !=  nullptr && groups->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version2";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::Version2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Version2' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            groups = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups>();
            groups->parent = this;
            children["groups"] = groups;
        }
        return children.at("groups");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::Version2::get_children()
{
    if(children.find("groups") == children.end())
    {
        if(groups != nullptr)
        {
            children["groups"] = groups;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "version2";
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::~Groups()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Groups' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group>();
        c->parent = this;
        group.push_back(std::move(c));
        children[segment_path] = group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::get_children()
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

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Group()
    :
    group_number{YType::uint32, "group-number"},
    preempt{YType::int32, "preempt"},
    priority{YType::uint32, "priority"},
    session_name{YType::str, "session-name"},
    virtual_mac_address{YType::str, "virtual-mac-address"}
    	,
    bfd(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd>())
	,global_ipv6_addresses(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses>())
	,link_local_ipv6_address(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address>())
	,timers(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers>())
	,tracked_interfaces(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces>())
	,tracked_objects(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects>())
{
    bfd->parent = this;
    children["bfd"] = bfd;

    global_ipv6_addresses->parent = this;
    children["global-ipv6-addresses"] = global_ipv6_addresses;

    link_local_ipv6_address->parent = this;
    children["link-local-ipv6-address"] = link_local_ipv6_address;

    timers->parent = this;
    children["timers"] = timers;

    tracked_interfaces->parent = this;
    children["tracked-interfaces"] = tracked_interfaces;

    tracked_objects->parent = this;
    children["tracked-objects"] = tracked_objects;

    yang_name = "group"; yang_parent_name = "groups";
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::~Group()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::has_data() const
{
    return group_number.is_set
	|| preempt.is_set
	|| priority.is_set
	|| session_name.is_set
	|| virtual_mac_address.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_data())
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_data())
	|| (tracked_objects !=  nullptr && tracked_objects->has_data());
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(group_number.operation)
	|| is_set(preempt.operation)
	|| is_set(priority.operation)
	|| is_set(session_name.operation)
	|| is_set(virtual_mac_address.operation)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_operation())
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_operation())
	|| (tracked_objects !=  nullptr && tracked_objects->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-number='" <<group_number <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.operation)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.operation)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.operation)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "global-ipv6-addresses")
    {
        if(global_ipv6_addresses != nullptr)
        {
            children["global-ipv6-addresses"] = global_ipv6_addresses;
        }
        else
        {
            global_ipv6_addresses = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses>();
            global_ipv6_addresses->parent = this;
            children["global-ipv6-addresses"] = global_ipv6_addresses;
        }
        return children.at("global-ipv6-addresses");
    }

    if(child_yang_name == "link-local-ipv6-address")
    {
        if(link_local_ipv6_address != nullptr)
        {
            children["link-local-ipv6-address"] = link_local_ipv6_address;
        }
        else
        {
            link_local_ipv6_address = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address>();
            link_local_ipv6_address->parent = this;
            children["link-local-ipv6-address"] = link_local_ipv6_address;
        }
        return children.at("link-local-ipv6-address");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    if(child_yang_name == "tracked-interfaces")
    {
        if(tracked_interfaces != nullptr)
        {
            children["tracked-interfaces"] = tracked_interfaces;
        }
        else
        {
            tracked_interfaces = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces>();
            tracked_interfaces->parent = this;
            children["tracked-interfaces"] = tracked_interfaces;
        }
        return children.at("tracked-interfaces");
    }

    if(child_yang_name == "tracked-objects")
    {
        if(tracked_objects != nullptr)
        {
            children["tracked-objects"] = tracked_objects;
        }
        else
        {
            tracked_objects = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects>();
            tracked_objects->parent = this;
            children["tracked-objects"] = tracked_objects;
        }
        return children.at("tracked-objects");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::get_children()
{
    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("global-ipv6-addresses") == children.end())
    {
        if(global_ipv6_addresses != nullptr)
        {
            children["global-ipv6-addresses"] = global_ipv6_addresses;
        }
    }

    if(children.find("link-local-ipv6-address") == children.end())
    {
        if(link_local_ipv6_address != nullptr)
        {
            children["link-local-ipv6-address"] = link_local_ipv6_address;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    if(children.find("tracked-interfaces") == children.end())
    {
        if(tracked_interfaces != nullptr)
        {
            children["tracked-interfaces"] = tracked_interfaces;
        }
    }

    if(children.find("tracked-objects") == children.end())
    {
        if(tracked_objects != nullptr)
        {
            children["tracked-objects"] = tracked_objects;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-number")
    {
        group_number = value;
    }
    if(value_path == "preempt")
    {
        preempt = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
    }
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::Bfd()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "bfd"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::~Bfd()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::has_data() const
{
    return address.is_set
	|| interface_name.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(interface_name.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterfaces()
{
    yang_name = "tracked-interfaces"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::~TrackedInterfaces()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::has_data() const
{
    for (std::size_t index=0; index<tracked_interface.size(); index++)
    {
        if(tracked_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<tracked_interface.size(); index++)
    {
        if(tracked_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interfaces";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedInterfaces' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tracked-interface")
    {
        for(auto const & c : tracked_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface>();
        c->parent = this;
        tracked_interface.push_back(std::move(c));
        children[segment_path] = tracked_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::get_children()
{
    for (auto const & c : tracked_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::TrackedInterface()
    :
    interface_name{YType::str, "interface-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{
    yang_name = "tracked-interface"; yang_parent_name = "tracked-interfaces";
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::~TrackedInterface()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::has_data() const
{
    return interface_name.is_set
	|| priority_decrement.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(priority_decrement.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedInterface' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObjects()
{
    yang_name = "tracked-objects"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::~TrackedObjects()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::has_data() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::has_operation() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-objects";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedObjects' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tracked-object")
    {
        for(auto const & c : tracked_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject>();
        c->parent = this;
        tracked_object.push_back(std::move(c));
        children[segment_path] = tracked_object.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::get_children()
{
    for (auto const & c : tracked_object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::TrackedObject()
    :
    object_name{YType::str, "object-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{
    yang_name = "tracked-object"; yang_parent_name = "tracked-objects";
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::~TrackedObject()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::has_data() const
{
    return object_name.is_set
	|| priority_decrement.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(priority_decrement.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-object" <<"[object-name='" <<object_name <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedObject' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::Timers()
    :
    hello_msec{YType::uint32, "hello-msec"},
    hello_msec_flag{YType::boolean, "hello-msec-flag"},
    hello_sec{YType::uint32, "hello-sec"},
    hold_msec{YType::uint32, "hold-msec"},
    hold_msec_flag{YType::boolean, "hold-msec-flag"},
    hold_sec{YType::uint32, "hold-sec"}
{
    yang_name = "timers"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::~Timers()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::has_data() const
{
    return hello_msec.is_set
	|| hello_msec_flag.is_set
	|| hello_sec.is_set
	|| hold_msec.is_set
	|| hold_msec_flag.is_set
	|| hold_sec.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_msec.operation)
	|| is_set(hello_msec_flag.operation)
	|| is_set(hello_sec.operation)
	|| is_set(hold_msec.operation)
	|| is_set(hold_msec_flag.operation)
	|| is_set(hold_sec.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_msec.is_set || is_set(hello_msec.operation)) leaf_name_data.push_back(hello_msec.get_name_leafdata());
    if (hello_msec_flag.is_set || is_set(hello_msec_flag.operation)) leaf_name_data.push_back(hello_msec_flag.get_name_leafdata());
    if (hello_sec.is_set || is_set(hello_sec.operation)) leaf_name_data.push_back(hello_sec.get_name_leafdata());
    if (hold_msec.is_set || is_set(hold_msec.operation)) leaf_name_data.push_back(hold_msec.get_name_leafdata());
    if (hold_msec_flag.is_set || is_set(hold_msec_flag.operation)) leaf_name_data.push_back(hold_msec_flag.get_name_leafdata());
    if (hold_sec.is_set || is_set(hold_sec.operation)) leaf_name_data.push_back(hold_sec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-msec")
    {
        hello_msec = value;
    }
    if(value_path == "hello-msec-flag")
    {
        hello_msec_flag = value;
    }
    if(value_path == "hello-sec")
    {
        hello_sec = value;
    }
    if(value_path == "hold-msec")
    {
        hold_msec = value;
    }
    if(value_path == "hold-msec-flag")
    {
        hold_msec_flag = value;
    }
    if(value_path == "hold-sec")
    {
        hold_sec = value;
    }
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::LinkLocalIpv6Address()
    :
    address{YType::str, "address"},
    auto_configure{YType::enumeration, "auto-configure"}
{
    yang_name = "link-local-ipv6-address"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::~LinkLocalIpv6Address()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::has_data() const
{
    return address.is_set
	|| auto_configure.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(auto_configure.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-ipv6-address";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkLocalIpv6Address' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (auto_configure.is_set || is_set(auto_configure.operation)) leaf_name_data.push_back(auto_configure.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "auto-configure")
    {
        auto_configure = value;
    }
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Addresses()
{
    yang_name = "global-ipv6-addresses"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::~GlobalIpv6Addresses()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::has_data() const
{
    for (std::size_t index=0; index<global_ipv6_address.size(); index++)
    {
        if(global_ipv6_address[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::has_operation() const
{
    for (std::size_t index=0; index<global_ipv6_address.size(); index++)
    {
        if(global_ipv6_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-addresses";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalIpv6Addresses' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-ipv6-address")
    {
        for(auto const & c : global_ipv6_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address>();
        c->parent = this;
        global_ipv6_address.push_back(std::move(c));
        children[segment_path] = global_ipv6_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::get_children()
{
    for (auto const & c : global_ipv6_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::GlobalIpv6Address()
    :
    address{YType::str, "address"}
{
    yang_name = "global-ipv6-address"; yang_parent_name = "global-ipv6-addresses";
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::~GlobalIpv6Address()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::has_data() const
{
    return address.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalIpv6Address' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroups()
{
    yang_name = "slave-groups"; yang_parent_name = "ipv6";
}

Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::~SlaveGroups()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::has_data() const
{
    for (std::size_t index=0; index<slave_group.size(); index++)
    {
        if(slave_group[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::has_operation() const
{
    for (std::size_t index=0; index<slave_group.size(); index++)
    {
        if(slave_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-groups";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlaveGroups' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slave-group")
    {
        for(auto const & c : slave_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup>();
        c->parent = this;
        slave_group.push_back(std::move(c));
        children[segment_path] = slave_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::get_children()
{
    for (auto const & c : slave_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::SlaveGroup()
    :
    slave_group_number{YType::uint32, "slave-group-number"},
    follow{YType::str, "follow"},
    virtual_mac_address{YType::str, "virtual-mac-address"}
    	,
    global_ipv6_addresses(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses>())
	,link_local_ipv6_address(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address>())
{
    global_ipv6_addresses->parent = this;
    children["global-ipv6-addresses"] = global_ipv6_addresses;

    link_local_ipv6_address->parent = this;
    children["link-local-ipv6-address"] = link_local_ipv6_address;

    yang_name = "slave-group"; yang_parent_name = "slave-groups";
}

Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::~SlaveGroup()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::has_data() const
{
    return slave_group_number.is_set
	|| follow.is_set
	|| virtual_mac_address.is_set
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_data())
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_data());
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(slave_group_number.operation)
	|| is_set(follow.operation)
	|| is_set(virtual_mac_address.operation)
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_operation())
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-group" <<"[slave-group-number='" <<slave_group_number <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlaveGroup' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_group_number.is_set || is_set(slave_group_number.operation)) leaf_name_data.push_back(slave_group_number.get_name_leafdata());
    if (follow.is_set || is_set(follow.operation)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.operation)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-ipv6-addresses")
    {
        if(global_ipv6_addresses != nullptr)
        {
            children["global-ipv6-addresses"] = global_ipv6_addresses;
        }
        else
        {
            global_ipv6_addresses = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses>();
            global_ipv6_addresses->parent = this;
            children["global-ipv6-addresses"] = global_ipv6_addresses;
        }
        return children.at("global-ipv6-addresses");
    }

    if(child_yang_name == "link-local-ipv6-address")
    {
        if(link_local_ipv6_address != nullptr)
        {
            children["link-local-ipv6-address"] = link_local_ipv6_address;
        }
        else
        {
            link_local_ipv6_address = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address>();
            link_local_ipv6_address->parent = this;
            children["link-local-ipv6-address"] = link_local_ipv6_address;
        }
        return children.at("link-local-ipv6-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::get_children()
{
    if(children.find("global-ipv6-addresses") == children.end())
    {
        if(global_ipv6_addresses != nullptr)
        {
            children["global-ipv6-addresses"] = global_ipv6_addresses;
        }
    }

    if(children.find("link-local-ipv6-address") == children.end())
    {
        if(link_local_ipv6_address != nullptr)
        {
            children["link-local-ipv6-address"] = link_local_ipv6_address;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slave-group-number")
    {
        slave_group_number = value;
    }
    if(value_path == "follow")
    {
        follow = value;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
    }
}

Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::LinkLocalIpv6Address()
    :
    address{YType::str, "address"},
    auto_configure{YType::enumeration, "auto-configure"}
{
    yang_name = "link-local-ipv6-address"; yang_parent_name = "slave-group";
}

Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::~LinkLocalIpv6Address()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::has_data() const
{
    return address.is_set
	|| auto_configure.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(auto_configure.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-ipv6-address";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkLocalIpv6Address' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (auto_configure.is_set || is_set(auto_configure.operation)) leaf_name_data.push_back(auto_configure.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "auto-configure")
    {
        auto_configure = value;
    }
}

Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Addresses()
{
    yang_name = "global-ipv6-addresses"; yang_parent_name = "slave-group";
}

Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::~GlobalIpv6Addresses()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::has_data() const
{
    for (std::size_t index=0; index<global_ipv6_address.size(); index++)
    {
        if(global_ipv6_address[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::has_operation() const
{
    for (std::size_t index=0; index<global_ipv6_address.size(); index++)
    {
        if(global_ipv6_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-addresses";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalIpv6Addresses' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-ipv6-address")
    {
        for(auto const & c : global_ipv6_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address>();
        c->parent = this;
        global_ipv6_address.push_back(std::move(c));
        children[segment_path] = global_ipv6_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::get_children()
{
    for (auto const & c : global_ipv6_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::GlobalIpv6Address()
    :
    address{YType::str, "address"}
{
    yang_name = "global-ipv6-address"; yang_parent_name = "global-ipv6-addresses";
}

Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::~GlobalIpv6Address()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::has_data() const
{
    return address.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalIpv6Address' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Hsrp::Interfaces::Interface::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "interface";
}

Hsrp::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Hsrp::Interfaces::Interface::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| interval.is_set;
}

bool Hsrp::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation);
}

std::string Hsrp::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Bfd::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Hsrp::Interfaces::Interface::Delay::Delay()
    :
    minimum_delay{YType::uint32, "minimum-delay"},
    reload_delay{YType::uint32, "reload-delay"}
{
    yang_name = "delay"; yang_parent_name = "interface";
}

Hsrp::Interfaces::Interface::Delay::~Delay()
{
}

bool Hsrp::Interfaces::Interface::Delay::has_data() const
{
    return minimum_delay.is_set
	|| reload_delay.is_set;
}

bool Hsrp::Interfaces::Interface::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_delay.operation)
	|| is_set(reload_delay.operation);
}

std::string Hsrp::Interfaces::Interface::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_delay.is_set || is_set(minimum_delay.operation)) leaf_name_data.push_back(minimum_delay.get_name_leafdata());
    if (reload_delay.is_set || is_set(reload_delay.operation)) leaf_name_data.push_back(reload_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Delay::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-delay")
    {
        minimum_delay = value;
    }
    if(value_path == "reload-delay")
    {
        reload_delay = value;
    }
}

Hsrp::Interfaces::Interface::Ipv4::Ipv4()
    :
    slave_groups(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::SlaveGroups>())
	,version1(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1>())
	,version2(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2>())
{
    slave_groups->parent = this;
    children["slave-groups"] = slave_groups;

    version1->parent = this;
    children["version1"] = version1;

    version2->parent = this;
    children["version2"] = version2;

    yang_name = "ipv4"; yang_parent_name = "interface";
}

Hsrp::Interfaces::Interface::Ipv4::~Ipv4()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::has_data() const
{
    return (slave_groups !=  nullptr && slave_groups->has_data())
	|| (version1 !=  nullptr && version1->has_data())
	|| (version2 !=  nullptr && version2->has_data());
}

bool Hsrp::Interfaces::Interface::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (slave_groups !=  nullptr && slave_groups->has_operation())
	|| (version1 !=  nullptr && version1->has_operation())
	|| (version2 !=  nullptr && version2->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slave-groups")
    {
        if(slave_groups != nullptr)
        {
            children["slave-groups"] = slave_groups;
        }
        else
        {
            slave_groups = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::SlaveGroups>();
            slave_groups->parent = this;
            children["slave-groups"] = slave_groups;
        }
        return children.at("slave-groups");
    }

    if(child_yang_name == "version1")
    {
        if(version1 != nullptr)
        {
            children["version1"] = version1;
        }
        else
        {
            version1 = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1>();
            version1->parent = this;
            children["version1"] = version1;
        }
        return children.at("version1");
    }

    if(child_yang_name == "version2")
    {
        if(version2 != nullptr)
        {
            children["version2"] = version2;
        }
        else
        {
            version2 = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2>();
            version2->parent = this;
            children["version2"] = version2;
        }
        return children.at("version2");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::get_children()
{
    if(children.find("slave-groups") == children.end())
    {
        if(slave_groups != nullptr)
        {
            children["slave-groups"] = slave_groups;
        }
    }

    if(children.find("version1") == children.end())
    {
        if(version1 != nullptr)
        {
            children["version1"] = version1;
        }
    }

    if(children.find("version2") == children.end())
    {
        if(version2 != nullptr)
        {
            children["version2"] = version2;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroups()
{
    yang_name = "slave-groups"; yang_parent_name = "ipv4";
}

Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::~SlaveGroups()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::has_data() const
{
    for (std::size_t index=0; index<slave_group.size(); index++)
    {
        if(slave_group[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::has_operation() const
{
    for (std::size_t index=0; index<slave_group.size(); index++)
    {
        if(slave_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-groups";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlaveGroups' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slave-group")
    {
        for(auto const & c : slave_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup>();
        c->parent = this;
        slave_group.push_back(std::move(c));
        children[segment_path] = slave_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::get_children()
{
    for (auto const & c : slave_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SlaveGroup()
    :
    slave_group_number{YType::uint32, "slave-group-number"},
    follow{YType::str, "follow"},
    primary_ipv4_address{YType::str, "primary-ipv4-address"},
    virtual_mac_address{YType::str, "virtual-mac-address"}
    	,
    secondary_ipv4_addresses(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses>())
{
    secondary_ipv4_addresses->parent = this;
    children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;

    yang_name = "slave-group"; yang_parent_name = "slave-groups";
}

Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::~SlaveGroup()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::has_data() const
{
    return slave_group_number.is_set
	|| follow.is_set
	|| primary_ipv4_address.is_set
	|| virtual_mac_address.is_set
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_data());
}

bool Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(slave_group_number.operation)
	|| is_set(follow.operation)
	|| is_set(primary_ipv4_address.operation)
	|| is_set(virtual_mac_address.operation)
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-group" <<"[slave-group-number='" <<slave_group_number <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlaveGroup' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_group_number.is_set || is_set(slave_group_number.operation)) leaf_name_data.push_back(slave_group_number.get_name_leafdata());
    if (follow.is_set || is_set(follow.operation)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (primary_ipv4_address.is_set || is_set(primary_ipv4_address.operation)) leaf_name_data.push_back(primary_ipv4_address.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.operation)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "secondary-ipv4-addresses")
    {
        if(secondary_ipv4_addresses != nullptr)
        {
            children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
        }
        else
        {
            secondary_ipv4_addresses = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses>();
            secondary_ipv4_addresses->parent = this;
            children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
        }
        return children.at("secondary-ipv4-addresses");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::get_children()
{
    if(children.find("secondary-ipv4-addresses") == children.end())
    {
        if(secondary_ipv4_addresses != nullptr)
        {
            children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slave-group-number")
    {
        slave_group_number = value;
    }
    if(value_path == "follow")
    {
        follow = value;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address = value;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
    }
}

Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Addresses()
{
    yang_name = "secondary-ipv4-addresses"; yang_parent_name = "slave-group";
}

Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::~SecondaryIpv4Addresses()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::has_data() const
{
    for (std::size_t index=0; index<secondary_ipv4_address.size(); index++)
    {
        if(secondary_ipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::has_operation() const
{
    for (std::size_t index=0; index<secondary_ipv4_address.size(); index++)
    {
        if(secondary_ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-addresses";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryIpv4Addresses' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "secondary-ipv4-address")
    {
        for(auto const & c : secondary_ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address>();
        c->parent = this;
        secondary_ipv4_address.push_back(std::move(c));
        children[segment_path] = secondary_ipv4_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::get_children()
{
    for (auto const & c : secondary_ipv4_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::SecondaryIpv4Address()
    :
    address{YType::str, "address"}
{
    yang_name = "secondary-ipv4-address"; yang_parent_name = "secondary-ipv4-addresses";
}

Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::~SecondaryIpv4Address()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::has_data() const
{
    return address.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryIpv4Address' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Version1()
    :
    groups(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups>())
{
    groups->parent = this;
    children["groups"] = groups;

    yang_name = "version1"; yang_parent_name = "ipv4";
}

Hsrp::Interfaces::Interface::Ipv4::Version1::~Version1()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::has_data() const
{
    return (groups !=  nullptr && groups->has_data());
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::has_operation() const
{
    return is_set(operation)
	|| (groups !=  nullptr && groups->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version1";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Version1' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            groups = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups>();
            groups->parent = this;
            children["groups"] = groups;
        }
        return children.at("groups");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version1::get_children()
{
    if(children.find("groups") == children.end())
    {
        if(groups != nullptr)
        {
            children["groups"] = groups;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "version1";
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::~Groups()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Groups' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group>();
        c->parent = this;
        group.push_back(std::move(c));
        children[segment_path] = group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::get_children()
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

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Group()
    :
    group_number{YType::uint32, "group-number"},
    authentication{YType::str, "authentication"},
    preempt{YType::int32, "preempt"},
    priority{YType::uint32, "priority"},
    session_name{YType::str, "session-name"},
    virtual_mac_address{YType::str, "virtual-mac-address"}
    	,
    bfd(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd>())
	,primary_ipv4_address(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address>())
	,secondary_ipv4_addresses(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses>())
	,timers(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers>())
	,tracked_interfaces(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces>())
	,tracked_objects(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects>())
{
    bfd->parent = this;
    children["bfd"] = bfd;

    primary_ipv4_address->parent = this;
    children["primary-ipv4-address"] = primary_ipv4_address;

    secondary_ipv4_addresses->parent = this;
    children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;

    timers->parent = this;
    children["timers"] = timers;

    tracked_interfaces->parent = this;
    children["tracked-interfaces"] = tracked_interfaces;

    tracked_objects->parent = this;
    children["tracked-objects"] = tracked_objects;

    yang_name = "group"; yang_parent_name = "groups";
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::~Group()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::has_data() const
{
    return group_number.is_set
	|| authentication.is_set
	|| preempt.is_set
	|| priority.is_set
	|| session_name.is_set
	|| virtual_mac_address.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (primary_ipv4_address !=  nullptr && primary_ipv4_address->has_data())
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_data())
	|| (tracked_objects !=  nullptr && tracked_objects->has_data());
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(group_number.operation)
	|| is_set(authentication.operation)
	|| is_set(preempt.operation)
	|| is_set(priority.operation)
	|| is_set(session_name.operation)
	|| is_set(virtual_mac_address.operation)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (primary_ipv4_address !=  nullptr && primary_ipv4_address->has_operation())
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_operation())
	|| (tracked_objects !=  nullptr && tracked_objects->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-number='" <<group_number <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.operation)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (authentication.is_set || is_set(authentication.operation)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.operation)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.operation)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "primary-ipv4-address")
    {
        if(primary_ipv4_address != nullptr)
        {
            children["primary-ipv4-address"] = primary_ipv4_address;
        }
        else
        {
            primary_ipv4_address = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address>();
            primary_ipv4_address->parent = this;
            children["primary-ipv4-address"] = primary_ipv4_address;
        }
        return children.at("primary-ipv4-address");
    }

    if(child_yang_name == "secondary-ipv4-addresses")
    {
        if(secondary_ipv4_addresses != nullptr)
        {
            children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
        }
        else
        {
            secondary_ipv4_addresses = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses>();
            secondary_ipv4_addresses->parent = this;
            children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
        }
        return children.at("secondary-ipv4-addresses");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    if(child_yang_name == "tracked-interfaces")
    {
        if(tracked_interfaces != nullptr)
        {
            children["tracked-interfaces"] = tracked_interfaces;
        }
        else
        {
            tracked_interfaces = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces>();
            tracked_interfaces->parent = this;
            children["tracked-interfaces"] = tracked_interfaces;
        }
        return children.at("tracked-interfaces");
    }

    if(child_yang_name == "tracked-objects")
    {
        if(tracked_objects != nullptr)
        {
            children["tracked-objects"] = tracked_objects;
        }
        else
        {
            tracked_objects = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects>();
            tracked_objects->parent = this;
            children["tracked-objects"] = tracked_objects;
        }
        return children.at("tracked-objects");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::get_children()
{
    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("primary-ipv4-address") == children.end())
    {
        if(primary_ipv4_address != nullptr)
        {
            children["primary-ipv4-address"] = primary_ipv4_address;
        }
    }

    if(children.find("secondary-ipv4-addresses") == children.end())
    {
        if(secondary_ipv4_addresses != nullptr)
        {
            children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    if(children.find("tracked-interfaces") == children.end())
    {
        if(tracked_interfaces != nullptr)
        {
            children["tracked-interfaces"] = tracked_interfaces;
        }
    }

    if(children.find("tracked-objects") == children.end())
    {
        if(tracked_objects != nullptr)
        {
            children["tracked-objects"] = tracked_objects;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-number")
    {
        group_number = value;
    }
    if(value_path == "authentication")
    {
        authentication = value;
    }
    if(value_path == "preempt")
    {
        preempt = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
    }
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterfaces()
{
    yang_name = "tracked-interfaces"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::~TrackedInterfaces()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::has_data() const
{
    for (std::size_t index=0; index<tracked_interface.size(); index++)
    {
        if(tracked_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<tracked_interface.size(); index++)
    {
        if(tracked_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interfaces";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedInterfaces' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tracked-interface")
    {
        for(auto const & c : tracked_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface>();
        c->parent = this;
        tracked_interface.push_back(std::move(c));
        children[segment_path] = tracked_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::get_children()
{
    for (auto const & c : tracked_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::TrackedInterface()
    :
    interface_name{YType::str, "interface-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{
    yang_name = "tracked-interface"; yang_parent_name = "tracked-interfaces";
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::~TrackedInterface()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::has_data() const
{
    return interface_name.is_set
	|| priority_decrement.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(priority_decrement.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedInterface' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::Bfd()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "bfd"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::~Bfd()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::has_data() const
{
    return address.is_set
	|| interface_name.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(interface_name.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObjects()
{
    yang_name = "tracked-objects"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::~TrackedObjects()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::has_data() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::has_operation() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-objects";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedObjects' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tracked-object")
    {
        for(auto const & c : tracked_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject>();
        c->parent = this;
        tracked_object.push_back(std::move(c));
        children[segment_path] = tracked_object.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::get_children()
{
    for (auto const & c : tracked_object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::TrackedObject()
    :
    object_name{YType::str, "object-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{
    yang_name = "tracked-object"; yang_parent_name = "tracked-objects";
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::~TrackedObject()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::has_data() const
{
    return object_name.is_set
	|| priority_decrement.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(priority_decrement.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-object" <<"[object-name='" <<object_name <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedObject' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::Timers()
    :
    hello_msec{YType::uint32, "hello-msec"},
    hello_msec_flag{YType::boolean, "hello-msec-flag"},
    hello_sec{YType::uint32, "hello-sec"},
    hold_msec{YType::uint32, "hold-msec"},
    hold_msec_flag{YType::boolean, "hold-msec-flag"},
    hold_sec{YType::uint32, "hold-sec"}
{
    yang_name = "timers"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::~Timers()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::has_data() const
{
    return hello_msec.is_set
	|| hello_msec_flag.is_set
	|| hello_sec.is_set
	|| hold_msec.is_set
	|| hold_msec_flag.is_set
	|| hold_sec.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_msec.operation)
	|| is_set(hello_msec_flag.operation)
	|| is_set(hello_sec.operation)
	|| is_set(hold_msec.operation)
	|| is_set(hold_msec_flag.operation)
	|| is_set(hold_sec.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_msec.is_set || is_set(hello_msec.operation)) leaf_name_data.push_back(hello_msec.get_name_leafdata());
    if (hello_msec_flag.is_set || is_set(hello_msec_flag.operation)) leaf_name_data.push_back(hello_msec_flag.get_name_leafdata());
    if (hello_sec.is_set || is_set(hello_sec.operation)) leaf_name_data.push_back(hello_sec.get_name_leafdata());
    if (hold_msec.is_set || is_set(hold_msec.operation)) leaf_name_data.push_back(hold_msec.get_name_leafdata());
    if (hold_msec_flag.is_set || is_set(hold_msec_flag.operation)) leaf_name_data.push_back(hold_msec_flag.get_name_leafdata());
    if (hold_sec.is_set || is_set(hold_sec.operation)) leaf_name_data.push_back(hold_sec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-msec")
    {
        hello_msec = value;
    }
    if(value_path == "hello-msec-flag")
    {
        hello_msec_flag = value;
    }
    if(value_path == "hello-sec")
    {
        hello_sec = value;
    }
    if(value_path == "hold-msec")
    {
        hold_msec = value;
    }
    if(value_path == "hold-msec-flag")
    {
        hold_msec_flag = value;
    }
    if(value_path == "hold-sec")
    {
        hold_sec = value;
    }
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::PrimaryIpv4Address()
    :
    address{YType::str, "address"},
    virtual_ip_learn{YType::boolean, "virtual-ip-learn"}
{
    yang_name = "primary-ipv4-address"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::~PrimaryIpv4Address()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::has_data() const
{
    return address.is_set
	|| virtual_ip_learn.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(virtual_ip_learn.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-ipv4-address";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryIpv4Address' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (virtual_ip_learn.is_set || is_set(virtual_ip_learn.operation)) leaf_name_data.push_back(virtual_ip_learn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "virtual-ip-learn")
    {
        virtual_ip_learn = value;
    }
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Addresses()
{
    yang_name = "secondary-ipv4-addresses"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::~SecondaryIpv4Addresses()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::has_data() const
{
    for (std::size_t index=0; index<secondary_ipv4_address.size(); index++)
    {
        if(secondary_ipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::has_operation() const
{
    for (std::size_t index=0; index<secondary_ipv4_address.size(); index++)
    {
        if(secondary_ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-addresses";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryIpv4Addresses' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "secondary-ipv4-address")
    {
        for(auto const & c : secondary_ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address>();
        c->parent = this;
        secondary_ipv4_address.push_back(std::move(c));
        children[segment_path] = secondary_ipv4_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::get_children()
{
    for (auto const & c : secondary_ipv4_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::SecondaryIpv4Address()
    :
    address{YType::str, "address"}
{
    yang_name = "secondary-ipv4-address"; yang_parent_name = "secondary-ipv4-addresses";
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::~SecondaryIpv4Address()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::has_data() const
{
    return address.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryIpv4Address' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Version2()
    :
    groups(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups>())
{
    groups->parent = this;
    children["groups"] = groups;

    yang_name = "version2"; yang_parent_name = "ipv4";
}

Hsrp::Interfaces::Interface::Ipv4::Version2::~Version2()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::has_data() const
{
    return (groups !=  nullptr && groups->has_data());
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::has_operation() const
{
    return is_set(operation)
	|| (groups !=  nullptr && groups->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version2";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Version2' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            groups = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups>();
            groups->parent = this;
            children["groups"] = groups;
        }
        return children.at("groups");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version2::get_children()
{
    if(children.find("groups") == children.end())
    {
        if(groups != nullptr)
        {
            children["groups"] = groups;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "version2";
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::~Groups()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Groups' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group>();
        c->parent = this;
        group.push_back(std::move(c));
        children[segment_path] = group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::get_children()
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

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Group()
    :
    group_number{YType::uint32, "group-number"},
    preempt{YType::int32, "preempt"},
    priority{YType::uint32, "priority"},
    session_name{YType::str, "session-name"},
    virtual_mac_address{YType::str, "virtual-mac-address"}
    	,
    bfd(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd>())
	,primary_ipv4_address(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address>())
	,secondary_ipv4_addresses(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses>())
	,timers(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers>())
	,tracked_interfaces(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces>())
	,tracked_objects(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects>())
{
    bfd->parent = this;
    children["bfd"] = bfd;

    primary_ipv4_address->parent = this;
    children["primary-ipv4-address"] = primary_ipv4_address;

    secondary_ipv4_addresses->parent = this;
    children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;

    timers->parent = this;
    children["timers"] = timers;

    tracked_interfaces->parent = this;
    children["tracked-interfaces"] = tracked_interfaces;

    tracked_objects->parent = this;
    children["tracked-objects"] = tracked_objects;

    yang_name = "group"; yang_parent_name = "groups";
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::~Group()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::has_data() const
{
    return group_number.is_set
	|| preempt.is_set
	|| priority.is_set
	|| session_name.is_set
	|| virtual_mac_address.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (primary_ipv4_address !=  nullptr && primary_ipv4_address->has_data())
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_data())
	|| (tracked_objects !=  nullptr && tracked_objects->has_data());
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(group_number.operation)
	|| is_set(preempt.operation)
	|| is_set(priority.operation)
	|| is_set(session_name.operation)
	|| is_set(virtual_mac_address.operation)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (primary_ipv4_address !=  nullptr && primary_ipv4_address->has_operation())
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_operation())
	|| (tracked_objects !=  nullptr && tracked_objects->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-number='" <<group_number <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.operation)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.operation)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.operation)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "primary-ipv4-address")
    {
        if(primary_ipv4_address != nullptr)
        {
            children["primary-ipv4-address"] = primary_ipv4_address;
        }
        else
        {
            primary_ipv4_address = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address>();
            primary_ipv4_address->parent = this;
            children["primary-ipv4-address"] = primary_ipv4_address;
        }
        return children.at("primary-ipv4-address");
    }

    if(child_yang_name == "secondary-ipv4-addresses")
    {
        if(secondary_ipv4_addresses != nullptr)
        {
            children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
        }
        else
        {
            secondary_ipv4_addresses = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses>();
            secondary_ipv4_addresses->parent = this;
            children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
        }
        return children.at("secondary-ipv4-addresses");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    if(child_yang_name == "tracked-interfaces")
    {
        if(tracked_interfaces != nullptr)
        {
            children["tracked-interfaces"] = tracked_interfaces;
        }
        else
        {
            tracked_interfaces = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces>();
            tracked_interfaces->parent = this;
            children["tracked-interfaces"] = tracked_interfaces;
        }
        return children.at("tracked-interfaces");
    }

    if(child_yang_name == "tracked-objects")
    {
        if(tracked_objects != nullptr)
        {
            children["tracked-objects"] = tracked_objects;
        }
        else
        {
            tracked_objects = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects>();
            tracked_objects->parent = this;
            children["tracked-objects"] = tracked_objects;
        }
        return children.at("tracked-objects");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::get_children()
{
    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("primary-ipv4-address") == children.end())
    {
        if(primary_ipv4_address != nullptr)
        {
            children["primary-ipv4-address"] = primary_ipv4_address;
        }
    }

    if(children.find("secondary-ipv4-addresses") == children.end())
    {
        if(secondary_ipv4_addresses != nullptr)
        {
            children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    if(children.find("tracked-interfaces") == children.end())
    {
        if(tracked_interfaces != nullptr)
        {
            children["tracked-interfaces"] = tracked_interfaces;
        }
    }

    if(children.find("tracked-objects") == children.end())
    {
        if(tracked_objects != nullptr)
        {
            children["tracked-objects"] = tracked_objects;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-number")
    {
        group_number = value;
    }
    if(value_path == "preempt")
    {
        preempt = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
    }
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Addresses()
{
    yang_name = "secondary-ipv4-addresses"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::~SecondaryIpv4Addresses()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::has_data() const
{
    for (std::size_t index=0; index<secondary_ipv4_address.size(); index++)
    {
        if(secondary_ipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::has_operation() const
{
    for (std::size_t index=0; index<secondary_ipv4_address.size(); index++)
    {
        if(secondary_ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-addresses";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryIpv4Addresses' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "secondary-ipv4-address")
    {
        for(auto const & c : secondary_ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address>();
        c->parent = this;
        secondary_ipv4_address.push_back(std::move(c));
        children[segment_path] = secondary_ipv4_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::get_children()
{
    for (auto const & c : secondary_ipv4_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::SecondaryIpv4Address()
    :
    address{YType::str, "address"}
{
    yang_name = "secondary-ipv4-address"; yang_parent_name = "secondary-ipv4-addresses";
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::~SecondaryIpv4Address()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::has_data() const
{
    return address.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryIpv4Address' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::Bfd()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "bfd"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::~Bfd()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::has_data() const
{
    return address.is_set
	|| interface_name.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(interface_name.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::PrimaryIpv4Address()
    :
    address{YType::str, "address"},
    virtual_ip_learn{YType::boolean, "virtual-ip-learn"}
{
    yang_name = "primary-ipv4-address"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::~PrimaryIpv4Address()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::has_data() const
{
    return address.is_set
	|| virtual_ip_learn.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(virtual_ip_learn.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-ipv4-address";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryIpv4Address' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (virtual_ip_learn.is_set || is_set(virtual_ip_learn.operation)) leaf_name_data.push_back(virtual_ip_learn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "virtual-ip-learn")
    {
        virtual_ip_learn = value;
    }
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObjects()
{
    yang_name = "tracked-objects"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::~TrackedObjects()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::has_data() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::has_operation() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-objects";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedObjects' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tracked-object")
    {
        for(auto const & c : tracked_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject>();
        c->parent = this;
        tracked_object.push_back(std::move(c));
        children[segment_path] = tracked_object.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::get_children()
{
    for (auto const & c : tracked_object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::TrackedObject()
    :
    object_name{YType::str, "object-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{
    yang_name = "tracked-object"; yang_parent_name = "tracked-objects";
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::~TrackedObject()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::has_data() const
{
    return object_name.is_set
	|| priority_decrement.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(priority_decrement.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-object" <<"[object-name='" <<object_name <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedObject' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterfaces()
{
    yang_name = "tracked-interfaces"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::~TrackedInterfaces()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::has_data() const
{
    for (std::size_t index=0; index<tracked_interface.size(); index++)
    {
        if(tracked_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<tracked_interface.size(); index++)
    {
        if(tracked_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interfaces";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedInterfaces' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tracked-interface")
    {
        for(auto const & c : tracked_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface>();
        c->parent = this;
        tracked_interface.push_back(std::move(c));
        children[segment_path] = tracked_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::get_children()
{
    for (auto const & c : tracked_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::TrackedInterface()
    :
    interface_name{YType::str, "interface-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{
    yang_name = "tracked-interface"; yang_parent_name = "tracked-interfaces";
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::~TrackedInterface()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::has_data() const
{
    return interface_name.is_set
	|| priority_decrement.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(priority_decrement.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedInterface' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::Timers()
    :
    hello_msec{YType::uint32, "hello-msec"},
    hello_msec_flag{YType::boolean, "hello-msec-flag"},
    hello_sec{YType::uint32, "hello-sec"},
    hold_msec{YType::uint32, "hold-msec"},
    hold_msec_flag{YType::boolean, "hold-msec-flag"},
    hold_sec{YType::uint32, "hold-sec"}
{
    yang_name = "timers"; yang_parent_name = "group";
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::~Timers()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::has_data() const
{
    return hello_msec.is_set
	|| hello_msec_flag.is_set
	|| hello_sec.is_set
	|| hold_msec.is_set
	|| hold_msec_flag.is_set
	|| hold_sec.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_msec.operation)
	|| is_set(hello_msec_flag.operation)
	|| is_set(hello_sec.operation)
	|| is_set(hold_msec.operation)
	|| is_set(hold_msec_flag.operation)
	|| is_set(hold_sec.operation);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_ipv4_hsrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_msec.is_set || is_set(hello_msec.operation)) leaf_name_data.push_back(hello_msec.get_name_leafdata());
    if (hello_msec_flag.is_set || is_set(hello_msec_flag.operation)) leaf_name_data.push_back(hello_msec_flag.get_name_leafdata());
    if (hello_sec.is_set || is_set(hello_sec.operation)) leaf_name_data.push_back(hello_sec.get_name_leafdata());
    if (hold_msec.is_set || is_set(hold_msec.operation)) leaf_name_data.push_back(hold_msec.get_name_leafdata());
    if (hold_msec_flag.is_set || is_set(hold_msec_flag.operation)) leaf_name_data.push_back(hold_msec_flag.get_name_leafdata());
    if (hold_sec.is_set || is_set(hold_sec.operation)) leaf_name_data.push_back(hold_sec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::get_children()
{
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-msec")
    {
        hello_msec = value;
    }
    if(value_path == "hello-msec-flag")
    {
        hello_msec_flag = value;
    }
    if(value_path == "hello-sec")
    {
        hello_sec = value;
    }
    if(value_path == "hold-msec")
    {
        hold_msec = value;
    }
    if(value_path == "hold-msec-flag")
    {
        hold_msec_flag = value;
    }
    if(value_path == "hold-sec")
    {
        hold_sec = value;
    }
}

Hsrp::Logging::Logging()
    :
    state_change_disable{YType::empty, "state-change-disable"}
{
    yang_name = "logging"; yang_parent_name = "hsrp";
}

Hsrp::Logging::~Logging()
{
}

bool Hsrp::Logging::has_data() const
{
    return state_change_disable.is_set;
}

bool Hsrp::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(state_change_disable.operation);
}

std::string Hsrp::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath Hsrp::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-cfg:hsrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state_change_disable.is_set || is_set(state_change_disable.operation)) leaf_name_data.push_back(state_change_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Logging::get_children()
{
    return children;
}

void Hsrp::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "state-change-disable")
    {
        state_change_disable = value;
    }
}

const Enum::YLeaf HsrpLinklocalEnum::manual {0, "manual"};
const Enum::YLeaf HsrpLinklocalEnum::auto_ {1, "auto"};
const Enum::YLeaf HsrpLinklocalEnum::legacy {2, "legacy"};


}
}

