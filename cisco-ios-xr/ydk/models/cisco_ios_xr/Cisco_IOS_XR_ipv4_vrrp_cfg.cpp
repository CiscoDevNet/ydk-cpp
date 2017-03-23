
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_vrrp_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_vrrp_cfg {

Vrrp::Vrrp()
    :
    interfaces(std::make_shared<Vrrp::Interfaces>())
	,logging(std::make_shared<Vrrp::Logging>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces;

    logging->parent = this;
    children["logging"] = logging;

    yang_name = "vrrp"; yang_parent_name = "Cisco-IOS-XR-ipv4-vrrp-cfg";
}

Vrrp::~Vrrp()
{
}

bool Vrrp::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool Vrrp::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp";

    return path_buffer.str();

}

EntityPath Vrrp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            interfaces = std::make_shared<Vrrp::Interfaces>();
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
            logging = std::make_shared<Vrrp::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::get_children()
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

void Vrrp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Vrrp::clone_ptr() const
{
    return std::make_shared<Vrrp>();
}

std::string Vrrp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Vrrp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Vrrp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Vrrp::Logging::Logging()
    :
    state_change_disable{YType::empty, "state-change-disable"}
{
    yang_name = "logging"; yang_parent_name = "vrrp";
}

Vrrp::Logging::~Logging()
{
}

bool Vrrp::Logging::has_data() const
{
    return state_change_disable.is_set;
}

bool Vrrp::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(state_change_disable.operation);
}

std::string Vrrp::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath Vrrp::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp/" << get_segment_path();
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

std::shared_ptr<Entity> Vrrp::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Logging::get_children()
{
    return children;
}

void Vrrp::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "state-change-disable")
    {
        state_change_disable = value;
    }
}

Vrrp::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "vrrp";
}

Vrrp::Interfaces::~Interfaces()
{
}

bool Vrrp::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Vrrp::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::get_children()
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

void Vrrp::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    mac_refresh{YType::uint32, "mac-refresh"}
    	,
    bfd(std::make_shared<Vrrp::Interfaces::Interface::Bfd>())
	,delay(std::make_shared<Vrrp::Interfaces::Interface::Delay>())
	,ipv4(std::make_shared<Vrrp::Interfaces::Interface::Ipv4>())
	,ipv6(std::make_shared<Vrrp::Interfaces::Interface::Ipv6>())
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

Vrrp::Interfaces::Interface::~Interface()
{
}

bool Vrrp::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| mac_refresh.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Vrrp::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(mac_refresh.operation)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Vrrp::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_refresh.is_set || is_set(mac_refresh.operation)) leaf_name_data.push_back(mac_refresh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            bfd = std::make_shared<Vrrp::Interfaces::Interface::Bfd>();
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
            delay = std::make_shared<Vrrp::Interfaces::Interface::Delay>();
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
            ipv4 = std::make_shared<Vrrp::Interfaces::Interface::Ipv4>();
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
            ipv6 = std::make_shared<Vrrp::Interfaces::Interface::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::get_children()
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

void Vrrp::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh = value;
    }
}

Vrrp::Interfaces::Interface::Ipv6::Ipv6()
    :
    slave_virtual_routers(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters>())
	,version3(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3>())
{
    slave_virtual_routers->parent = this;
    children["slave-virtual-routers"] = slave_virtual_routers;

    version3->parent = this;
    children["version3"] = version3;

    yang_name = "ipv6"; yang_parent_name = "interface";
}

Vrrp::Interfaces::Interface::Ipv6::~Ipv6()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::has_data() const
{
    return (slave_virtual_routers !=  nullptr && slave_virtual_routers->has_data())
	|| (version3 !=  nullptr && version3->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (slave_virtual_routers !=  nullptr && slave_virtual_routers->has_operation())
	|| (version3 !=  nullptr && version3->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slave-virtual-routers")
    {
        if(slave_virtual_routers != nullptr)
        {
            children["slave-virtual-routers"] = slave_virtual_routers;
        }
        else
        {
            slave_virtual_routers = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters>();
            slave_virtual_routers->parent = this;
            children["slave-virtual-routers"] = slave_virtual_routers;
        }
        return children.at("slave-virtual-routers");
    }

    if(child_yang_name == "version3")
    {
        if(version3 != nullptr)
        {
            children["version3"] = version3;
        }
        else
        {
            version3 = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3>();
            version3->parent = this;
            children["version3"] = version3;
        }
        return children.at("version3");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::get_children()
{
    if(children.find("slave-virtual-routers") == children.end())
    {
        if(slave_virtual_routers != nullptr)
        {
            children["slave-virtual-routers"] = slave_virtual_routers;
        }
    }

    if(children.find("version3") == children.end())
    {
        if(version3 != nullptr)
        {
            children["version3"] = version3;
        }
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv6::Version3::Version3()
    :
    virtual_routers(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters>())
{
    virtual_routers->parent = this;
    children["virtual-routers"] = virtual_routers;

    yang_name = "version3"; yang_parent_name = "ipv6";
}

Vrrp::Interfaces::Interface::Ipv6::Version3::~Version3()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::has_data() const
{
    return (virtual_routers !=  nullptr && virtual_routers->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::has_operation() const
{
    return is_set(operation)
	|| (virtual_routers !=  nullptr && virtual_routers->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version3";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::Version3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Version3' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "virtual-routers")
    {
        if(virtual_routers != nullptr)
        {
            children["virtual-routers"] = virtual_routers;
        }
        else
        {
            virtual_routers = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters>();
            virtual_routers->parent = this;
            children["virtual-routers"] = virtual_routers;
        }
        return children.at("virtual-routers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::Version3::get_children()
{
    if(children.find("virtual-routers") == children.end())
    {
        if(virtual_routers != nullptr)
        {
            children["virtual-routers"] = virtual_routers;
        }
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouters()
{
    yang_name = "virtual-routers"; yang_parent_name = "version3";
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::~VirtualRouters()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::has_data() const
{
    for (std::size_t index=0; index<virtual_router.size(); index++)
    {
        if(virtual_router[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::has_operation() const
{
    for (std::size_t index=0; index<virtual_router.size(); index++)
    {
        if(virtual_router[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-routers";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualRouters' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "virtual-router")
    {
        for(auto const & c : virtual_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter>();
        c->parent = this;
        virtual_router.push_back(std::move(c));
        children[segment_path] = virtual_router.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::get_children()
{
    for (auto const & c : virtual_router)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::VirtualRouter()
    :
    vr_id{YType::uint32, "vr-id"},
    accept_mode_disable{YType::empty, "accept-mode-disable"},
    bfd{YType::str, "bfd"},
    preempt{YType::uint32, "preempt"},
    priority{YType::uint32, "priority"},
    session_name{YType::str, "session-name"}
    	,
    global_ipv6_addresses(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses>())
	,link_local_ipv6_address(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address>())
	,timer(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer>())
	,tracked_objects(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects>())
	,tracks(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks>())
{
    global_ipv6_addresses->parent = this;
    children["global-ipv6-addresses"] = global_ipv6_addresses;

    link_local_ipv6_address->parent = this;
    children["link-local-ipv6-address"] = link_local_ipv6_address;

    timer->parent = this;
    children["timer"] = timer;

    tracked_objects->parent = this;
    children["tracked-objects"] = tracked_objects;

    tracks->parent = this;
    children["tracks"] = tracks;

    yang_name = "virtual-router"; yang_parent_name = "virtual-routers";
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::~VirtualRouter()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::has_data() const
{
    return vr_id.is_set
	|| accept_mode_disable.is_set
	|| bfd.is_set
	|| preempt.is_set
	|| priority.is_set
	|| session_name.is_set
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_data())
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (tracked_objects !=  nullptr && tracked_objects->has_data())
	|| (tracks !=  nullptr && tracks->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::has_operation() const
{
    return is_set(operation)
	|| is_set(vr_id.operation)
	|| is_set(accept_mode_disable.operation)
	|| is_set(bfd.operation)
	|| is_set(preempt.operation)
	|| is_set(priority.operation)
	|| is_set(session_name.operation)
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_operation())
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (tracked_objects !=  nullptr && tracked_objects->has_operation())
	|| (tracks !=  nullptr && tracks->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-router" <<"[vr-id='" <<vr_id <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualRouter' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vr_id.is_set || is_set(vr_id.operation)) leaf_name_data.push_back(vr_id.get_name_leafdata());
    if (accept_mode_disable.is_set || is_set(accept_mode_disable.operation)) leaf_name_data.push_back(accept_mode_disable.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.operation)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.operation)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            global_ipv6_addresses = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses>();
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
            link_local_ipv6_address = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address>();
            link_local_ipv6_address->parent = this;
            children["link-local-ipv6-address"] = link_local_ipv6_address;
        }
        return children.at("link-local-ipv6-address");
    }

    if(child_yang_name == "timer")
    {
        if(timer != nullptr)
        {
            children["timer"] = timer;
        }
        else
        {
            timer = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer>();
            timer->parent = this;
            children["timer"] = timer;
        }
        return children.at("timer");
    }

    if(child_yang_name == "tracked-objects")
    {
        if(tracked_objects != nullptr)
        {
            children["tracked-objects"] = tracked_objects;
        }
        else
        {
            tracked_objects = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects>();
            tracked_objects->parent = this;
            children["tracked-objects"] = tracked_objects;
        }
        return children.at("tracked-objects");
    }

    if(child_yang_name == "tracks")
    {
        if(tracks != nullptr)
        {
            children["tracks"] = tracks;
        }
        else
        {
            tracks = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks>();
            tracks->parent = this;
            children["tracks"] = tracks;
        }
        return children.at("tracks");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::get_children()
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

    if(children.find("timer") == children.end())
    {
        if(timer != nullptr)
        {
            children["timer"] = timer;
        }
    }

    if(children.find("tracked-objects") == children.end())
    {
        if(tracked_objects != nullptr)
        {
            children["tracked-objects"] = tracked_objects;
        }
    }

    if(children.find("tracks") == children.end())
    {
        if(tracks != nullptr)
        {
            children["tracks"] = tracks;
        }
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vr-id")
    {
        vr_id = value;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable = value;
    }
    if(value_path == "bfd")
    {
        bfd = value;
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
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Addresses()
{
    yang_name = "global-ipv6-addresses"; yang_parent_name = "virtual-router";
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::~GlobalIpv6Addresses()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::has_data() const
{
    for (std::size_t index=0; index<global_ipv6_address.size(); index++)
    {
        if(global_ipv6_address[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::has_operation() const
{
    for (std::size_t index=0; index<global_ipv6_address.size(); index++)
    {
        if(global_ipv6_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-addresses";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalIpv6Addresses' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address>();
        c->parent = this;
        global_ipv6_address.push_back(std::move(c));
        children[segment_path] = global_ipv6_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::get_children()
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

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::GlobalIpv6Address()
    :
    ip_address{YType::str, "ip-address"}
{
    yang_name = "global-ipv6-address"; yang_parent_name = "global-ipv6-addresses";
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::~GlobalIpv6Address()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::has_data() const
{
    return ip_address.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-address" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalIpv6Address' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Tracks()
{
    yang_name = "tracks"; yang_parent_name = "virtual-router";
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::~Tracks()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::has_data() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::has_operation() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracks";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tracks' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track")
    {
        for(auto const & c : track)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track>();
        c->parent = this;
        track.push_back(std::move(c));
        children[segment_path] = track.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::get_children()
{
    for (auto const & c : track)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::Track()
    :
    interface_name{YType::str, "interface-name"},
    priority{YType::uint32, "priority"}
{
    yang_name = "track"; yang_parent_name = "tracks";
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::~Track()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::has_data() const
{
    return interface_name.is_set
	|| priority.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(priority.operation);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Track' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::Timer()
    :
    advertisement_time_in_msec{YType::uint32, "advertisement-time-in-msec"},
    advertisement_time_in_sec{YType::uint32, "advertisement-time-in-sec"},
    forced{YType::boolean, "forced"},
    in_msec{YType::boolean, "in-msec"}
{
    yang_name = "timer"; yang_parent_name = "virtual-router";
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::~Timer()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::has_data() const
{
    return advertisement_time_in_msec.is_set
	|| advertisement_time_in_sec.is_set
	|| forced.is_set
	|| in_msec.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::has_operation() const
{
    return is_set(operation)
	|| is_set(advertisement_time_in_msec.operation)
	|| is_set(advertisement_time_in_sec.operation)
	|| is_set(forced.operation)
	|| is_set(in_msec.operation);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timer' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement_time_in_msec.is_set || is_set(advertisement_time_in_msec.operation)) leaf_name_data.push_back(advertisement_time_in_msec.get_name_leafdata());
    if (advertisement_time_in_sec.is_set || is_set(advertisement_time_in_sec.operation)) leaf_name_data.push_back(advertisement_time_in_sec.get_name_leafdata());
    if (forced.is_set || is_set(forced.operation)) leaf_name_data.push_back(forced.get_name_leafdata());
    if (in_msec.is_set || is_set(in_msec.operation)) leaf_name_data.push_back(in_msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertisement-time-in-msec")
    {
        advertisement_time_in_msec = value;
    }
    if(value_path == "advertisement-time-in-sec")
    {
        advertisement_time_in_sec = value;
    }
    if(value_path == "forced")
    {
        forced = value;
    }
    if(value_path == "in-msec")
    {
        in_msec = value;
    }
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObjects()
{
    yang_name = "tracked-objects"; yang_parent_name = "virtual-router";
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::~TrackedObjects()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::has_data() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::has_operation() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-objects";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedObjects' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject>();
        c->parent = this;
        tracked_object.push_back(std::move(c));
        children[segment_path] = tracked_object.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_children()
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

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::TrackedObject()
    :
    object_name{YType::str, "object-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{
    yang_name = "tracked-object"; yang_parent_name = "tracked-objects";
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::~TrackedObject()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_data() const
{
    return object_name.is_set
	|| priority_decrement.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(priority_decrement.operation);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-object" <<"[object-name='" <<object_name <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedObject' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::set_value(const std::string & value_path, std::string value)
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

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::LinkLocalIpv6Address()
    :
    auto_configure{YType::boolean, "auto-configure"},
    ip_address{YType::str, "ip-address"}
{
    yang_name = "link-local-ipv6-address"; yang_parent_name = "virtual-router";
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::~LinkLocalIpv6Address()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::has_data() const
{
    return auto_configure.is_set
	|| ip_address.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_configure.operation)
	|| is_set(ip_address.operation);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-ipv6-address";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkLocalIpv6Address' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_configure.is_set || is_set(auto_configure.operation)) leaf_name_data.push_back(auto_configure.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-configure")
    {
        auto_configure = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouters()
{
    yang_name = "slave-virtual-routers"; yang_parent_name = "ipv6";
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::~SlaveVirtualRouters()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::has_data() const
{
    for (std::size_t index=0; index<slave_virtual_router.size(); index++)
    {
        if(slave_virtual_router[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::has_operation() const
{
    for (std::size_t index=0; index<slave_virtual_router.size(); index++)
    {
        if(slave_virtual_router[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-virtual-routers";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlaveVirtualRouters' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slave-virtual-router")
    {
        for(auto const & c : slave_virtual_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter>();
        c->parent = this;
        slave_virtual_router.push_back(std::move(c));
        children[segment_path] = slave_virtual_router.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::get_children()
{
    for (auto const & c : slave_virtual_router)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::SlaveVirtualRouter()
    :
    slave_virtual_router_id{YType::uint32, "slave-virtual-router-id"},
    accept_mode_disable{YType::empty, "accept-mode-disable"},
    follow{YType::str, "follow"}
    	,
    global_ipv6_addresses(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses>())
	,link_local_ipv6_address(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address>())
{
    global_ipv6_addresses->parent = this;
    children["global-ipv6-addresses"] = global_ipv6_addresses;

    link_local_ipv6_address->parent = this;
    children["link-local-ipv6-address"] = link_local_ipv6_address;

    yang_name = "slave-virtual-router"; yang_parent_name = "slave-virtual-routers";
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::~SlaveVirtualRouter()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::has_data() const
{
    return slave_virtual_router_id.is_set
	|| accept_mode_disable.is_set
	|| follow.is_set
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_data())
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::has_operation() const
{
    return is_set(operation)
	|| is_set(slave_virtual_router_id.operation)
	|| is_set(accept_mode_disable.operation)
	|| is_set(follow.operation)
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_operation())
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-virtual-router" <<"[slave-virtual-router-id='" <<slave_virtual_router_id <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlaveVirtualRouter' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_virtual_router_id.is_set || is_set(slave_virtual_router_id.operation)) leaf_name_data.push_back(slave_virtual_router_id.get_name_leafdata());
    if (accept_mode_disable.is_set || is_set(accept_mode_disable.operation)) leaf_name_data.push_back(accept_mode_disable.get_name_leafdata());
    if (follow.is_set || is_set(follow.operation)) leaf_name_data.push_back(follow.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            global_ipv6_addresses = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses>();
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
            link_local_ipv6_address = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address>();
            link_local_ipv6_address->parent = this;
            children["link-local-ipv6-address"] = link_local_ipv6_address;
        }
        return children.at("link-local-ipv6-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::get_children()
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

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slave-virtual-router-id")
    {
        slave_virtual_router_id = value;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable = value;
    }
    if(value_path == "follow")
    {
        follow = value;
    }
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::LinkLocalIpv6Address()
    :
    auto_configure{YType::boolean, "auto-configure"},
    ip_address{YType::str, "ip-address"}
{
    yang_name = "link-local-ipv6-address"; yang_parent_name = "slave-virtual-router";
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::~LinkLocalIpv6Address()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::has_data() const
{
    return auto_configure.is_set
	|| ip_address.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_configure.operation)
	|| is_set(ip_address.operation);
}

std::string Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-ipv6-address";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkLocalIpv6Address' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_configure.is_set || is_set(auto_configure.operation)) leaf_name_data.push_back(auto_configure.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-configure")
    {
        auto_configure = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Addresses()
{
    yang_name = "global-ipv6-addresses"; yang_parent_name = "slave-virtual-router";
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::~GlobalIpv6Addresses()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::has_data() const
{
    for (std::size_t index=0; index<global_ipv6_address.size(); index++)
    {
        if(global_ipv6_address[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::has_operation() const
{
    for (std::size_t index=0; index<global_ipv6_address.size(); index++)
    {
        if(global_ipv6_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-addresses";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalIpv6Addresses' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address>();
        c->parent = this;
        global_ipv6_address.push_back(std::move(c));
        children[segment_path] = global_ipv6_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::get_children()
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

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::GlobalIpv6Address()
    :
    ip_address{YType::str, "ip-address"}
{
    yang_name = "global-ipv6-address"; yang_parent_name = "global-ipv6-addresses";
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::~GlobalIpv6Address()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::has_data() const
{
    return ip_address.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation);
}

std::string Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-address" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalIpv6Address' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Vrrp::Interfaces::Interface::Delay::Delay()
    :
    min_delay{YType::uint32, "min-delay"},
    reload_delay{YType::uint32, "reload-delay"}
{
    yang_name = "delay"; yang_parent_name = "interface";
}

Vrrp::Interfaces::Interface::Delay::~Delay()
{
}

bool Vrrp::Interfaces::Interface::Delay::has_data() const
{
    return min_delay.is_set
	|| reload_delay.is_set;
}

bool Vrrp::Interfaces::Interface::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(min_delay.operation)
	|| is_set(reload_delay.operation);
}

std::string Vrrp::Interfaces::Interface::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_delay.is_set || is_set(min_delay.operation)) leaf_name_data.push_back(min_delay.get_name_leafdata());
    if (reload_delay.is_set || is_set(reload_delay.operation)) leaf_name_data.push_back(reload_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Delay::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "min-delay")
    {
        min_delay = value;
    }
    if(value_path == "reload-delay")
    {
        reload_delay = value;
    }
}

Vrrp::Interfaces::Interface::Ipv4::Ipv4()
    :
    slave_virtual_routers(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters>())
	,version2(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2>())
	,version3(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3>())
{
    slave_virtual_routers->parent = this;
    children["slave-virtual-routers"] = slave_virtual_routers;

    version2->parent = this;
    children["version2"] = version2;

    version3->parent = this;
    children["version3"] = version3;

    yang_name = "ipv4"; yang_parent_name = "interface";
}

Vrrp::Interfaces::Interface::Ipv4::~Ipv4()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::has_data() const
{
    return (slave_virtual_routers !=  nullptr && slave_virtual_routers->has_data())
	|| (version2 !=  nullptr && version2->has_data())
	|| (version3 !=  nullptr && version3->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (slave_virtual_routers !=  nullptr && slave_virtual_routers->has_operation())
	|| (version2 !=  nullptr && version2->has_operation())
	|| (version3 !=  nullptr && version3->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slave-virtual-routers")
    {
        if(slave_virtual_routers != nullptr)
        {
            children["slave-virtual-routers"] = slave_virtual_routers;
        }
        else
        {
            slave_virtual_routers = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters>();
            slave_virtual_routers->parent = this;
            children["slave-virtual-routers"] = slave_virtual_routers;
        }
        return children.at("slave-virtual-routers");
    }

    if(child_yang_name == "version2")
    {
        if(version2 != nullptr)
        {
            children["version2"] = version2;
        }
        else
        {
            version2 = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2>();
            version2->parent = this;
            children["version2"] = version2;
        }
        return children.at("version2");
    }

    if(child_yang_name == "version3")
    {
        if(version3 != nullptr)
        {
            children["version3"] = version3;
        }
        else
        {
            version3 = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3>();
            version3->parent = this;
            children["version3"] = version3;
        }
        return children.at("version3");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::get_children()
{
    if(children.find("slave-virtual-routers") == children.end())
    {
        if(slave_virtual_routers != nullptr)
        {
            children["slave-virtual-routers"] = slave_virtual_routers;
        }
    }

    if(children.find("version2") == children.end())
    {
        if(version2 != nullptr)
        {
            children["version2"] = version2;
        }
    }

    if(children.find("version3") == children.end())
    {
        if(version3 != nullptr)
        {
            children["version3"] = version3;
        }
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv4::Version3::Version3()
    :
    virtual_routers(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters>())
{
    virtual_routers->parent = this;
    children["virtual-routers"] = virtual_routers;

    yang_name = "version3"; yang_parent_name = "ipv4";
}

Vrrp::Interfaces::Interface::Ipv4::Version3::~Version3()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::has_data() const
{
    return (virtual_routers !=  nullptr && virtual_routers->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::has_operation() const
{
    return is_set(operation)
	|| (virtual_routers !=  nullptr && virtual_routers->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version3";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Version3' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "virtual-routers")
    {
        if(virtual_routers != nullptr)
        {
            children["virtual-routers"] = virtual_routers;
        }
        else
        {
            virtual_routers = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters>();
            virtual_routers->parent = this;
            children["virtual-routers"] = virtual_routers;
        }
        return children.at("virtual-routers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version3::get_children()
{
    if(children.find("virtual-routers") == children.end())
    {
        if(virtual_routers != nullptr)
        {
            children["virtual-routers"] = virtual_routers;
        }
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouters()
{
    yang_name = "virtual-routers"; yang_parent_name = "version3";
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::~VirtualRouters()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::has_data() const
{
    for (std::size_t index=0; index<virtual_router.size(); index++)
    {
        if(virtual_router[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::has_operation() const
{
    for (std::size_t index=0; index<virtual_router.size(); index++)
    {
        if(virtual_router[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-routers";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualRouters' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "virtual-router")
    {
        for(auto const & c : virtual_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter>();
        c->parent = this;
        virtual_router.push_back(std::move(c));
        children[segment_path] = virtual_router.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::get_children()
{
    for (auto const & c : virtual_router)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::VirtualRouter()
    :
    vr_id{YType::uint32, "vr-id"},
    accept_mode_disable{YType::empty, "accept-mode-disable"},
    bfd{YType::str, "bfd"},
    preempt{YType::uint32, "preempt"},
    primary_ipv4_address{YType::str, "primary-ipv4-address"},
    priority{YType::uint32, "priority"},
    session_name{YType::str, "session-name"}
    	,
    secondary_ipv4_addresses(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses>())
	,timer(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer>())
	,tracked_objects(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects>())
	,tracks(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks>())
{
    secondary_ipv4_addresses->parent = this;
    children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;

    timer->parent = this;
    children["timer"] = timer;

    tracked_objects->parent = this;
    children["tracked-objects"] = tracked_objects;

    tracks->parent = this;
    children["tracks"] = tracks;

    yang_name = "virtual-router"; yang_parent_name = "virtual-routers";
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::~VirtualRouter()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::has_data() const
{
    return vr_id.is_set
	|| accept_mode_disable.is_set
	|| bfd.is_set
	|| preempt.is_set
	|| primary_ipv4_address.is_set
	|| priority.is_set
	|| session_name.is_set
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (tracked_objects !=  nullptr && tracked_objects->has_data())
	|| (tracks !=  nullptr && tracks->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::has_operation() const
{
    return is_set(operation)
	|| is_set(vr_id.operation)
	|| is_set(accept_mode_disable.operation)
	|| is_set(bfd.operation)
	|| is_set(preempt.operation)
	|| is_set(primary_ipv4_address.operation)
	|| is_set(priority.operation)
	|| is_set(session_name.operation)
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (tracked_objects !=  nullptr && tracked_objects->has_operation())
	|| (tracks !=  nullptr && tracks->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-router" <<"[vr-id='" <<vr_id <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualRouter' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vr_id.is_set || is_set(vr_id.operation)) leaf_name_data.push_back(vr_id.get_name_leafdata());
    if (accept_mode_disable.is_set || is_set(accept_mode_disable.operation)) leaf_name_data.push_back(accept_mode_disable.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.operation)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.operation)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (primary_ipv4_address.is_set || is_set(primary_ipv4_address.operation)) leaf_name_data.push_back(primary_ipv4_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            secondary_ipv4_addresses = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses>();
            secondary_ipv4_addresses->parent = this;
            children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
        }
        return children.at("secondary-ipv4-addresses");
    }

    if(child_yang_name == "timer")
    {
        if(timer != nullptr)
        {
            children["timer"] = timer;
        }
        else
        {
            timer = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer>();
            timer->parent = this;
            children["timer"] = timer;
        }
        return children.at("timer");
    }

    if(child_yang_name == "tracked-objects")
    {
        if(tracked_objects != nullptr)
        {
            children["tracked-objects"] = tracked_objects;
        }
        else
        {
            tracked_objects = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects>();
            tracked_objects->parent = this;
            children["tracked-objects"] = tracked_objects;
        }
        return children.at("tracked-objects");
    }

    if(child_yang_name == "tracks")
    {
        if(tracks != nullptr)
        {
            children["tracks"] = tracks;
        }
        else
        {
            tracks = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks>();
            tracks->parent = this;
            children["tracks"] = tracks;
        }
        return children.at("tracks");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::get_children()
{
    if(children.find("secondary-ipv4-addresses") == children.end())
    {
        if(secondary_ipv4_addresses != nullptr)
        {
            children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
        }
    }

    if(children.find("timer") == children.end())
    {
        if(timer != nullptr)
        {
            children["timer"] = timer;
        }
    }

    if(children.find("tracked-objects") == children.end())
    {
        if(tracked_objects != nullptr)
        {
            children["tracked-objects"] = tracked_objects;
        }
    }

    if(children.find("tracks") == children.end())
    {
        if(tracks != nullptr)
        {
            children["tracks"] = tracks;
        }
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vr-id")
    {
        vr_id = value;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable = value;
    }
    if(value_path == "bfd")
    {
        bfd = value;
    }
    if(value_path == "preempt")
    {
        preempt = value;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::Timer()
    :
    advertisement_time_in_msec{YType::uint32, "advertisement-time-in-msec"},
    advertisement_time_in_sec{YType::uint32, "advertisement-time-in-sec"},
    forced{YType::boolean, "forced"},
    in_msec{YType::boolean, "in-msec"}
{
    yang_name = "timer"; yang_parent_name = "virtual-router";
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::~Timer()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::has_data() const
{
    return advertisement_time_in_msec.is_set
	|| advertisement_time_in_sec.is_set
	|| forced.is_set
	|| in_msec.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::has_operation() const
{
    return is_set(operation)
	|| is_set(advertisement_time_in_msec.operation)
	|| is_set(advertisement_time_in_sec.operation)
	|| is_set(forced.operation)
	|| is_set(in_msec.operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timer' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement_time_in_msec.is_set || is_set(advertisement_time_in_msec.operation)) leaf_name_data.push_back(advertisement_time_in_msec.get_name_leafdata());
    if (advertisement_time_in_sec.is_set || is_set(advertisement_time_in_sec.operation)) leaf_name_data.push_back(advertisement_time_in_sec.get_name_leafdata());
    if (forced.is_set || is_set(forced.operation)) leaf_name_data.push_back(forced.get_name_leafdata());
    if (in_msec.is_set || is_set(in_msec.operation)) leaf_name_data.push_back(in_msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertisement-time-in-msec")
    {
        advertisement_time_in_msec = value;
    }
    if(value_path == "advertisement-time-in-sec")
    {
        advertisement_time_in_sec = value;
    }
    if(value_path == "forced")
    {
        forced = value;
    }
    if(value_path == "in-msec")
    {
        in_msec = value;
    }
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Addresses()
{
    yang_name = "secondary-ipv4-addresses"; yang_parent_name = "virtual-router";
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::~SecondaryIpv4Addresses()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::has_data() const
{
    for (std::size_t index=0; index<secondary_ipv4_address.size(); index++)
    {
        if(secondary_ipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::has_operation() const
{
    for (std::size_t index=0; index<secondary_ipv4_address.size(); index++)
    {
        if(secondary_ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-addresses";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryIpv4Addresses' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address>();
        c->parent = this;
        secondary_ipv4_address.push_back(std::move(c));
        children[segment_path] = secondary_ipv4_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_children()
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

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::SecondaryIpv4Address()
    :
    ip_address{YType::str, "ip-address"}
{
    yang_name = "secondary-ipv4-address"; yang_parent_name = "secondary-ipv4-addresses";
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::~SecondaryIpv4Address()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_data() const
{
    return ip_address.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-address" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryIpv4Address' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObjects()
{
    yang_name = "tracked-objects"; yang_parent_name = "virtual-router";
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::~TrackedObjects()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::has_data() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::has_operation() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-objects";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedObjects' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject>();
        c->parent = this;
        tracked_object.push_back(std::move(c));
        children[segment_path] = tracked_object.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_children()
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

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::TrackedObject()
    :
    object_name{YType::str, "object-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{
    yang_name = "tracked-object"; yang_parent_name = "tracked-objects";
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::~TrackedObject()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_data() const
{
    return object_name.is_set
	|| priority_decrement.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(priority_decrement.operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-object" <<"[object-name='" <<object_name <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedObject' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::set_value(const std::string & value_path, std::string value)
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

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Tracks()
{
    yang_name = "tracks"; yang_parent_name = "virtual-router";
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::~Tracks()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::has_data() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::has_operation() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracks";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tracks' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track")
    {
        for(auto const & c : track)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track>();
        c->parent = this;
        track.push_back(std::move(c));
        children[segment_path] = track.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::get_children()
{
    for (auto const & c : track)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::Track()
    :
    interface_name{YType::str, "interface-name"},
    priority{YType::uint32, "priority"}
{
    yang_name = "track"; yang_parent_name = "tracks";
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::~Track()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::has_data() const
{
    return interface_name.is_set
	|| priority.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(priority.operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Track' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouters()
{
    yang_name = "slave-virtual-routers"; yang_parent_name = "ipv4";
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::~SlaveVirtualRouters()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::has_data() const
{
    for (std::size_t index=0; index<slave_virtual_router.size(); index++)
    {
        if(slave_virtual_router[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::has_operation() const
{
    for (std::size_t index=0; index<slave_virtual_router.size(); index++)
    {
        if(slave_virtual_router[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-virtual-routers";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlaveVirtualRouters' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slave-virtual-router")
    {
        for(auto const & c : slave_virtual_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter>();
        c->parent = this;
        slave_virtual_router.push_back(std::move(c));
        children[segment_path] = slave_virtual_router.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::get_children()
{
    for (auto const & c : slave_virtual_router)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SlaveVirtualRouter()
    :
    slave_virtual_router_id{YType::uint32, "slave-virtual-router-id"},
    accept_mode_disable{YType::empty, "accept-mode-disable"},
    follow{YType::str, "follow"},
    primary_ipv4_address{YType::str, "primary-ipv4-address"}
    	,
    secondary_ipv4_addresses(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses>())
{
    secondary_ipv4_addresses->parent = this;
    children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;

    yang_name = "slave-virtual-router"; yang_parent_name = "slave-virtual-routers";
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::~SlaveVirtualRouter()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::has_data() const
{
    return slave_virtual_router_id.is_set
	|| accept_mode_disable.is_set
	|| follow.is_set
	|| primary_ipv4_address.is_set
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::has_operation() const
{
    return is_set(operation)
	|| is_set(slave_virtual_router_id.operation)
	|| is_set(accept_mode_disable.operation)
	|| is_set(follow.operation)
	|| is_set(primary_ipv4_address.operation)
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-virtual-router" <<"[slave-virtual-router-id='" <<slave_virtual_router_id <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlaveVirtualRouter' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_virtual_router_id.is_set || is_set(slave_virtual_router_id.operation)) leaf_name_data.push_back(slave_virtual_router_id.get_name_leafdata());
    if (accept_mode_disable.is_set || is_set(accept_mode_disable.operation)) leaf_name_data.push_back(accept_mode_disable.get_name_leafdata());
    if (follow.is_set || is_set(follow.operation)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (primary_ipv4_address.is_set || is_set(primary_ipv4_address.operation)) leaf_name_data.push_back(primary_ipv4_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            secondary_ipv4_addresses = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses>();
            secondary_ipv4_addresses->parent = this;
            children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
        }
        return children.at("secondary-ipv4-addresses");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::get_children()
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

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slave-virtual-router-id")
    {
        slave_virtual_router_id = value;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable = value;
    }
    if(value_path == "follow")
    {
        follow = value;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address = value;
    }
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Addresses()
{
    yang_name = "secondary-ipv4-addresses"; yang_parent_name = "slave-virtual-router";
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::~SecondaryIpv4Addresses()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::has_data() const
{
    for (std::size_t index=0; index<secondary_ipv4_address.size(); index++)
    {
        if(secondary_ipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::has_operation() const
{
    for (std::size_t index=0; index<secondary_ipv4_address.size(); index++)
    {
        if(secondary_ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-addresses";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryIpv4Addresses' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address>();
        c->parent = this;
        secondary_ipv4_address.push_back(std::move(c));
        children[segment_path] = secondary_ipv4_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::get_children()
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

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::SecondaryIpv4Address()
    :
    ip_address{YType::str, "ip-address"}
{
    yang_name = "secondary-ipv4-address"; yang_parent_name = "secondary-ipv4-addresses";
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::~SecondaryIpv4Address()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_data() const
{
    return ip_address.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-address" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryIpv4Address' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Vrrp::Interfaces::Interface::Ipv4::Version2::Version2()
    :
    virtual_routers(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters>())
{
    virtual_routers->parent = this;
    children["virtual-routers"] = virtual_routers;

    yang_name = "version2"; yang_parent_name = "ipv4";
}

Vrrp::Interfaces::Interface::Ipv4::Version2::~Version2()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::has_data() const
{
    return (virtual_routers !=  nullptr && virtual_routers->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::has_operation() const
{
    return is_set(operation)
	|| (virtual_routers !=  nullptr && virtual_routers->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version2";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Version2' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "virtual-routers")
    {
        if(virtual_routers != nullptr)
        {
            children["virtual-routers"] = virtual_routers;
        }
        else
        {
            virtual_routers = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters>();
            virtual_routers->parent = this;
            children["virtual-routers"] = virtual_routers;
        }
        return children.at("virtual-routers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version2::get_children()
{
    if(children.find("virtual-routers") == children.end())
    {
        if(virtual_routers != nullptr)
        {
            children["virtual-routers"] = virtual_routers;
        }
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouters()
{
    yang_name = "virtual-routers"; yang_parent_name = "version2";
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::~VirtualRouters()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::has_data() const
{
    for (std::size_t index=0; index<virtual_router.size(); index++)
    {
        if(virtual_router[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::has_operation() const
{
    for (std::size_t index=0; index<virtual_router.size(); index++)
    {
        if(virtual_router[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-routers";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualRouters' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "virtual-router")
    {
        for(auto const & c : virtual_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter>();
        c->parent = this;
        virtual_router.push_back(std::move(c));
        children[segment_path] = virtual_router.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::get_children()
{
    for (auto const & c : virtual_router)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::VirtualRouter()
    :
    vr_id{YType::uint32, "vr-id"},
    accept_mode_disable{YType::empty, "accept-mode-disable"},
    bfd{YType::str, "bfd"},
    preempt{YType::uint32, "preempt"},
    primary_ipv4_address{YType::str, "primary-ipv4-address"},
    priority{YType::uint32, "priority"},
    session_name{YType::str, "session-name"},
    text_password{YType::str, "text-password"}
    	,
    secondary_ipv4_addresses(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses>())
	,timer(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer>())
	,tracked_objects(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects>())
	,tracks(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks>())
{
    secondary_ipv4_addresses->parent = this;
    children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;

    timer->parent = this;
    children["timer"] = timer;

    tracked_objects->parent = this;
    children["tracked-objects"] = tracked_objects;

    tracks->parent = this;
    children["tracks"] = tracks;

    yang_name = "virtual-router"; yang_parent_name = "virtual-routers";
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::~VirtualRouter()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::has_data() const
{
    return vr_id.is_set
	|| accept_mode_disable.is_set
	|| bfd.is_set
	|| preempt.is_set
	|| primary_ipv4_address.is_set
	|| priority.is_set
	|| session_name.is_set
	|| text_password.is_set
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (tracked_objects !=  nullptr && tracked_objects->has_data())
	|| (tracks !=  nullptr && tracks->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::has_operation() const
{
    return is_set(operation)
	|| is_set(vr_id.operation)
	|| is_set(accept_mode_disable.operation)
	|| is_set(bfd.operation)
	|| is_set(preempt.operation)
	|| is_set(primary_ipv4_address.operation)
	|| is_set(priority.operation)
	|| is_set(session_name.operation)
	|| is_set(text_password.operation)
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (tracked_objects !=  nullptr && tracked_objects->has_operation())
	|| (tracks !=  nullptr && tracks->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-router" <<"[vr-id='" <<vr_id <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualRouter' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vr_id.is_set || is_set(vr_id.operation)) leaf_name_data.push_back(vr_id.get_name_leafdata());
    if (accept_mode_disable.is_set || is_set(accept_mode_disable.operation)) leaf_name_data.push_back(accept_mode_disable.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.operation)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.operation)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (primary_ipv4_address.is_set || is_set(primary_ipv4_address.operation)) leaf_name_data.push_back(primary_ipv4_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (text_password.is_set || is_set(text_password.operation)) leaf_name_data.push_back(text_password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            secondary_ipv4_addresses = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses>();
            secondary_ipv4_addresses->parent = this;
            children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
        }
        return children.at("secondary-ipv4-addresses");
    }

    if(child_yang_name == "timer")
    {
        if(timer != nullptr)
        {
            children["timer"] = timer;
        }
        else
        {
            timer = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer>();
            timer->parent = this;
            children["timer"] = timer;
        }
        return children.at("timer");
    }

    if(child_yang_name == "tracked-objects")
    {
        if(tracked_objects != nullptr)
        {
            children["tracked-objects"] = tracked_objects;
        }
        else
        {
            tracked_objects = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects>();
            tracked_objects->parent = this;
            children["tracked-objects"] = tracked_objects;
        }
        return children.at("tracked-objects");
    }

    if(child_yang_name == "tracks")
    {
        if(tracks != nullptr)
        {
            children["tracks"] = tracks;
        }
        else
        {
            tracks = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks>();
            tracks->parent = this;
            children["tracks"] = tracks;
        }
        return children.at("tracks");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::get_children()
{
    if(children.find("secondary-ipv4-addresses") == children.end())
    {
        if(secondary_ipv4_addresses != nullptr)
        {
            children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
        }
    }

    if(children.find("timer") == children.end())
    {
        if(timer != nullptr)
        {
            children["timer"] = timer;
        }
    }

    if(children.find("tracked-objects") == children.end())
    {
        if(tracked_objects != nullptr)
        {
            children["tracked-objects"] = tracked_objects;
        }
    }

    if(children.find("tracks") == children.end())
    {
        if(tracks != nullptr)
        {
            children["tracks"] = tracks;
        }
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vr-id")
    {
        vr_id = value;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable = value;
    }
    if(value_path == "bfd")
    {
        bfd = value;
    }
    if(value_path == "preempt")
    {
        preempt = value;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
    if(value_path == "text-password")
    {
        text_password = value;
    }
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::Timer()
    :
    advertisement_time_in_msec{YType::uint32, "advertisement-time-in-msec"},
    advertisement_time_in_sec{YType::uint32, "advertisement-time-in-sec"},
    forced{YType::boolean, "forced"},
    in_msec{YType::boolean, "in-msec"}
{
    yang_name = "timer"; yang_parent_name = "virtual-router";
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::~Timer()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::has_data() const
{
    return advertisement_time_in_msec.is_set
	|| advertisement_time_in_sec.is_set
	|| forced.is_set
	|| in_msec.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::has_operation() const
{
    return is_set(operation)
	|| is_set(advertisement_time_in_msec.operation)
	|| is_set(advertisement_time_in_sec.operation)
	|| is_set(forced.operation)
	|| is_set(in_msec.operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timer' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement_time_in_msec.is_set || is_set(advertisement_time_in_msec.operation)) leaf_name_data.push_back(advertisement_time_in_msec.get_name_leafdata());
    if (advertisement_time_in_sec.is_set || is_set(advertisement_time_in_sec.operation)) leaf_name_data.push_back(advertisement_time_in_sec.get_name_leafdata());
    if (forced.is_set || is_set(forced.operation)) leaf_name_data.push_back(forced.get_name_leafdata());
    if (in_msec.is_set || is_set(in_msec.operation)) leaf_name_data.push_back(in_msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertisement-time-in-msec")
    {
        advertisement_time_in_msec = value;
    }
    if(value_path == "advertisement-time-in-sec")
    {
        advertisement_time_in_sec = value;
    }
    if(value_path == "forced")
    {
        forced = value;
    }
    if(value_path == "in-msec")
    {
        in_msec = value;
    }
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Addresses()
{
    yang_name = "secondary-ipv4-addresses"; yang_parent_name = "virtual-router";
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::~SecondaryIpv4Addresses()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::has_data() const
{
    for (std::size_t index=0; index<secondary_ipv4_address.size(); index++)
    {
        if(secondary_ipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::has_operation() const
{
    for (std::size_t index=0; index<secondary_ipv4_address.size(); index++)
    {
        if(secondary_ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-addresses";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryIpv4Addresses' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address>();
        c->parent = this;
        secondary_ipv4_address.push_back(std::move(c));
        children[segment_path] = secondary_ipv4_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_children()
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

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::SecondaryIpv4Address()
    :
    ip_address{YType::str, "ip-address"}
{
    yang_name = "secondary-ipv4-address"; yang_parent_name = "secondary-ipv4-addresses";
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::~SecondaryIpv4Address()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_data() const
{
    return ip_address.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-address" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryIpv4Address' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Tracks()
{
    yang_name = "tracks"; yang_parent_name = "virtual-router";
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::~Tracks()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::has_data() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::has_operation() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracks";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tracks' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track")
    {
        for(auto const & c : track)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track>();
        c->parent = this;
        track.push_back(std::move(c));
        children[segment_path] = track.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::get_children()
{
    for (auto const & c : track)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::Track()
    :
    interface_name{YType::str, "interface-name"},
    priority{YType::uint32, "priority"}
{
    yang_name = "track"; yang_parent_name = "tracks";
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::~Track()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::has_data() const
{
    return interface_name.is_set
	|| priority.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(priority.operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Track' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObjects()
{
    yang_name = "tracked-objects"; yang_parent_name = "virtual-router";
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::~TrackedObjects()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::has_data() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::has_operation() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-objects";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedObjects' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject>();
        c->parent = this;
        tracked_object.push_back(std::move(c));
        children[segment_path] = tracked_object.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::get_children()
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

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::TrackedObject()
    :
    object_name{YType::str, "object-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{
    yang_name = "tracked-object"; yang_parent_name = "tracked-objects";
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::~TrackedObject()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_data() const
{
    return object_name.is_set
	|| priority_decrement.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(priority_decrement.operation);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-object" <<"[object-name='" <<object_name <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrackedObject' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::set_value(const std::string & value_path, std::string value)
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

Vrrp::Interfaces::Interface::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "interface";
}

Vrrp::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Vrrp::Interfaces::Interface::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| interval.is_set;
}

bool Vrrp::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation);
}

std::string Vrrp::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Vrrp::Interfaces::Interface::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv4_vrrp_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vrrp::Interfaces::Interface::Bfd::get_children()
{
    return children;
}

void Vrrp::Interfaces::Interface::Bfd::set_value(const std::string & value_path, std::string value)
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


}
}

