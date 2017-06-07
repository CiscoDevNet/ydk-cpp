
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_interfaces.hpp"

namespace ydk {
namespace ietf_interfaces {

InterfaceTypeIdentity::InterfaceTypeIdentity()
     : Identity("ietf-interfaces:interface-type")
{
}

InterfaceTypeIdentity::~InterfaceTypeIdentity()
{
}

Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ietf-interfaces";
}

Interfaces::~Interfaces()
{
}

bool Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-interfaces:interfaces";

    return path_buffer.str();

}

const EntityPath Interfaces::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Interfaces::clone_ptr() const
{
    return std::make_shared<Interfaces>();
}

std::string Interfaces::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string Interfaces::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function Interfaces::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

Interfaces::Interface::Interface()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    enabled{YType::boolean, "enabled"},
    link_up_down_trap_enable{YType::enumeration, "link-up-down-trap-enable"},
    type{YType::identityref, "type"}
    	,
    ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Interfaces::Interface::~Interface()
{
}

bool Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<diffserv_target_entry.size(); index++)
    {
        if(diffserv_target_entry[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| enabled.is_set
	|| link_up_down_trap_enable.is_set
	|| type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<diffserv_target_entry.size(); index++)
    {
        if(diffserv_target_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| is_set(enabled.operation)
	|| is_set(link_up_down_trap_enable.operation)
	|| is_set(type.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-interfaces:interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (link_up_down_trap_enable.is_set || is_set(link_up_down_trap_enable.operation)) leaf_name_data.push_back(link_up_down_trap_enable.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffserv-target-entry")
    {
        for(auto const & c : diffserv_target_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::DiffservTargetEntry>();
        c->parent = this;
        diffserv_target_entry.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Interfaces::Interface::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Interfaces::Interface::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffserv_target_entry)
    {
        children[c->get_segment_path()] = c;
    }

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

void Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "link-up-down-trap-enable")
    {
        link_up_down_trap_enable = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Interfaces::Interface::DiffservTargetEntry::DiffservTargetEntry()
    :
    direction{YType::identityref, "direction"},
    policy_name{YType::str, "policy-name"}
{
    yang_name = "diffserv-target-entry"; yang_parent_name = "interface";
}

Interfaces::Interface::DiffservTargetEntry::~DiffservTargetEntry()
{
}

bool Interfaces::Interface::DiffservTargetEntry::has_data() const
{
    return direction.is_set
	|| policy_name.is_set;
}

bool Interfaces::Interface::DiffservTargetEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(policy_name.operation);
}

std::string Interfaces::Interface::DiffservTargetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-target:diffserv-target-entry" <<"[direction='" <<direction <<"']" <<"[policy-name='" <<policy_name <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::DiffservTargetEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiffservTargetEntry' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::DiffservTargetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::DiffservTargetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::DiffservTargetEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

Interfaces::Interface::Ipv4::Ipv4()
    :
    enabled{YType::boolean, "enabled"},
    forwarding{YType::boolean, "forwarding"},
    mtu{YType::uint16, "mtu"}
{
    yang_name = "ipv4"; yang_parent_name = "interface";
}

Interfaces::Interface::Ipv4::~Ipv4()
{
}

bool Interfaces::Interface::Ipv4::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return enabled.is_set
	|| forwarding.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(forwarding.operation)
	|| is_set(mtu.operation);
}

std::string Interfaces::Interface::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ip:ipv4";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (forwarding.is_set || is_set(forwarding.operation)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Ipv4::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Ipv4::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "forwarding")
    {
        forwarding = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

Interfaces::Interface::Ipv4::Address::Address()
    :
    ip{YType::str, "ip"},
    netmask{YType::str, "netmask"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "address"; yang_parent_name = "ipv4";
}

Interfaces::Interface::Ipv4::Address::~Address()
{
}

bool Interfaces::Interface::Ipv4::Address::has_data() const
{
    return ip.is_set
	|| netmask.is_set
	|| prefix_length.is_set;
}

bool Interfaces::Interface::Ipv4::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(netmask.operation)
	|| is_set(prefix_length.operation);
}

std::string Interfaces::Interface::Ipv4::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv4::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv4::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv4::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ipv4::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "netmask")
    {
        netmask = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Interfaces::Interface::Ipv4::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"}
{
    yang_name = "neighbor"; yang_parent_name = "ipv4";
}

Interfaces::Interface::Ipv4::Neighbor::~Neighbor()
{
}

bool Interfaces::Interface::Ipv4::Neighbor::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set;
}

bool Interfaces::Interface::Ipv4::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(link_layer_address.operation);
}

std::string Interfaces::Interface::Ipv4::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv4::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.operation)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv4::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv4::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ipv4::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
    }
}

Interfaces::Interface::Ipv6::Ipv6()
    :
    dup_addr_detect_transmits{YType::uint32, "dup-addr-detect-transmits"},
    enabled{YType::boolean, "enabled"},
    forwarding{YType::boolean, "forwarding"},
    mtu{YType::uint32, "mtu"}
    	,
    autoconf(std::make_shared<Interfaces::Interface::Ipv6::Autoconf>())
	,ipv6_router_advertisements(std::make_shared<Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements>())
{
    autoconf->parent = this;

    ipv6_router_advertisements->parent = this;

    yang_name = "ipv6"; yang_parent_name = "interface";
}

Interfaces::Interface::Ipv6::~Ipv6()
{
}

bool Interfaces::Interface::Ipv6::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return dup_addr_detect_transmits.is_set
	|| enabled.is_set
	|| forwarding.is_set
	|| mtu.is_set
	|| (autoconf !=  nullptr && autoconf->has_data())
	|| (ipv6_router_advertisements !=  nullptr && ipv6_router_advertisements->has_data());
}

bool Interfaces::Interface::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dup_addr_detect_transmits.operation)
	|| is_set(enabled.operation)
	|| is_set(forwarding.operation)
	|| is_set(mtu.operation)
	|| (autoconf !=  nullptr && autoconf->has_operation())
	|| (ipv6_router_advertisements !=  nullptr && ipv6_router_advertisements->has_operation());
}

std::string Interfaces::Interface::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ip:ipv6";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dup_addr_detect_transmits.is_set || is_set(dup_addr_detect_transmits.operation)) leaf_name_data.push_back(dup_addr_detect_transmits.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (forwarding.is_set || is_set(forwarding.operation)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Ipv6::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "autoconf")
    {
        if(autoconf == nullptr)
        {
            autoconf = std::make_shared<Interfaces::Interface::Ipv6::Autoconf>();
        }
        return autoconf;
    }

    if(child_yang_name == "ipv6-router-advertisements")
    {
        if(ipv6_router_advertisements == nullptr)
        {
            ipv6_router_advertisements = std::make_shared<Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements>();
        }
        return ipv6_router_advertisements;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Ipv6::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    if(autoconf != nullptr)
    {
        children["autoconf"] = autoconf;
    }

    if(ipv6_router_advertisements != nullptr)
    {
        children["ipv6-router-advertisements"] = ipv6_router_advertisements;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "forwarding")
    {
        forwarding = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

Interfaces::Interface::Ipv6::Address::Address()
    :
    ip{YType::str, "ip"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "address"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Ipv6::Address::~Address()
{
}

bool Interfaces::Interface::Ipv6::Address::has_data() const
{
    return ip.is_set
	|| prefix_length.is_set;
}

bool Interfaces::Interface::Ipv6::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(prefix_length.operation);
}

std::string Interfaces::Interface::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv6::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ipv6::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Interfaces::Interface::Ipv6::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"}
{
    yang_name = "neighbor"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Ipv6::Neighbor::~Neighbor()
{
}

bool Interfaces::Interface::Ipv6::Neighbor::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set;
}

bool Interfaces::Interface::Ipv6::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(link_layer_address.operation);
}

std::string Interfaces::Interface::Ipv6::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv6::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.operation)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv6::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv6::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ipv6::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
    }
}

Interfaces::Interface::Ipv6::Autoconf::Autoconf()
    :
    create_global_addresses{YType::boolean, "create-global-addresses"},
    create_temporary_addresses{YType::boolean, "create-temporary-addresses"},
    temporary_preferred_lifetime{YType::uint32, "temporary-preferred-lifetime"},
    temporary_valid_lifetime{YType::uint32, "temporary-valid-lifetime"}
{
    yang_name = "autoconf"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Ipv6::Autoconf::~Autoconf()
{
}

bool Interfaces::Interface::Ipv6::Autoconf::has_data() const
{
    return create_global_addresses.is_set
	|| create_temporary_addresses.is_set
	|| temporary_preferred_lifetime.is_set
	|| temporary_valid_lifetime.is_set;
}

bool Interfaces::Interface::Ipv6::Autoconf::has_operation() const
{
    return is_set(operation)
	|| is_set(create_global_addresses.operation)
	|| is_set(create_temporary_addresses.operation)
	|| is_set(temporary_preferred_lifetime.operation)
	|| is_set(temporary_valid_lifetime.operation);
}

std::string Interfaces::Interface::Ipv6::Autoconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconf";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv6::Autoconf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autoconf' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create_global_addresses.is_set || is_set(create_global_addresses.operation)) leaf_name_data.push_back(create_global_addresses.get_name_leafdata());
    if (create_temporary_addresses.is_set || is_set(create_temporary_addresses.operation)) leaf_name_data.push_back(create_temporary_addresses.get_name_leafdata());
    if (temporary_preferred_lifetime.is_set || is_set(temporary_preferred_lifetime.operation)) leaf_name_data.push_back(temporary_preferred_lifetime.get_name_leafdata());
    if (temporary_valid_lifetime.is_set || is_set(temporary_valid_lifetime.operation)) leaf_name_data.push_back(temporary_valid_lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv6::Autoconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv6::Autoconf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ipv6::Autoconf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "create-global-addresses")
    {
        create_global_addresses = value;
    }
    if(value_path == "create-temporary-addresses")
    {
        create_temporary_addresses = value;
    }
    if(value_path == "temporary-preferred-lifetime")
    {
        temporary_preferred_lifetime = value;
    }
    if(value_path == "temporary-valid-lifetime")
    {
        temporary_valid_lifetime = value;
    }
}

Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::Ipv6RouterAdvertisements()
    :
    cur_hop_limit{YType::uint8, "cur-hop-limit"},
    default_lifetime{YType::uint16, "default-lifetime"},
    link_mtu{YType::uint32, "link-mtu"},
    managed_flag{YType::boolean, "managed-flag"},
    max_rtr_adv_interval{YType::uint16, "max-rtr-adv-interval"},
    min_rtr_adv_interval{YType::uint16, "min-rtr-adv-interval"},
    other_config_flag{YType::boolean, "other-config-flag"},
    reachable_time{YType::uint32, "reachable-time"},
    retrans_timer{YType::uint32, "retrans-timer"},
    send_advertisements{YType::boolean, "send-advertisements"}
    	,
    prefix_list(std::make_shared<Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList>())
{
    prefix_list->parent = this;

    yang_name = "ipv6-router-advertisements"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::~Ipv6RouterAdvertisements()
{
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::has_data() const
{
    return cur_hop_limit.is_set
	|| default_lifetime.is_set
	|| link_mtu.is_set
	|| managed_flag.is_set
	|| max_rtr_adv_interval.is_set
	|| min_rtr_adv_interval.is_set
	|| other_config_flag.is_set
	|| reachable_time.is_set
	|| retrans_timer.is_set
	|| send_advertisements.is_set
	|| (prefix_list !=  nullptr && prefix_list->has_data());
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::has_operation() const
{
    return is_set(operation)
	|| is_set(cur_hop_limit.operation)
	|| is_set(default_lifetime.operation)
	|| is_set(link_mtu.operation)
	|| is_set(managed_flag.operation)
	|| is_set(max_rtr_adv_interval.operation)
	|| is_set(min_rtr_adv_interval.operation)
	|| is_set(other_config_flag.operation)
	|| is_set(reachable_time.operation)
	|| is_set(retrans_timer.operation)
	|| is_set(send_advertisements.operation)
	|| (prefix_list !=  nullptr && prefix_list->has_operation());
}

std::string Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ipv6-unicast-routing:ipv6-router-advertisements";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RouterAdvertisements' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cur_hop_limit.is_set || is_set(cur_hop_limit.operation)) leaf_name_data.push_back(cur_hop_limit.get_name_leafdata());
    if (default_lifetime.is_set || is_set(default_lifetime.operation)) leaf_name_data.push_back(default_lifetime.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.operation)) leaf_name_data.push_back(link_mtu.get_name_leafdata());
    if (managed_flag.is_set || is_set(managed_flag.operation)) leaf_name_data.push_back(managed_flag.get_name_leafdata());
    if (max_rtr_adv_interval.is_set || is_set(max_rtr_adv_interval.operation)) leaf_name_data.push_back(max_rtr_adv_interval.get_name_leafdata());
    if (min_rtr_adv_interval.is_set || is_set(min_rtr_adv_interval.operation)) leaf_name_data.push_back(min_rtr_adv_interval.get_name_leafdata());
    if (other_config_flag.is_set || is_set(other_config_flag.operation)) leaf_name_data.push_back(other_config_flag.get_name_leafdata());
    if (reachable_time.is_set || is_set(reachable_time.operation)) leaf_name_data.push_back(reachable_time.get_name_leafdata());
    if (retrans_timer.is_set || is_set(retrans_timer.operation)) leaf_name_data.push_back(retrans_timer.get_name_leafdata());
    if (send_advertisements.is_set || is_set(send_advertisements.operation)) leaf_name_data.push_back(send_advertisements.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        if(prefix_list == nullptr)
        {
            prefix_list = std::make_shared<Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList>();
        }
        return prefix_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_list != nullptr)
    {
        children["prefix-list"] = prefix_list;
    }

    return children;
}

void Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cur-hop-limit")
    {
        cur_hop_limit = value;
    }
    if(value_path == "default-lifetime")
    {
        default_lifetime = value;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
    }
    if(value_path == "managed-flag")
    {
        managed_flag = value;
    }
    if(value_path == "max-rtr-adv-interval")
    {
        max_rtr_adv_interval = value;
    }
    if(value_path == "min-rtr-adv-interval")
    {
        min_rtr_adv_interval = value;
    }
    if(value_path == "other-config-flag")
    {
        other_config_flag = value;
    }
    if(value_path == "reachable-time")
    {
        reachable_time = value;
    }
    if(value_path == "retrans-timer")
    {
        retrans_timer = value;
    }
    if(value_path == "send-advertisements")
    {
        send_advertisements = value;
    }
}

Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::PrefixList()
{
    yang_name = "prefix-list"; yang_parent_name = "ipv6-router-advertisements";
}

Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::~PrefixList()
{
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        for(auto const & c : prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix>();
        c->parent = this;
        prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::Prefix()
    :
    prefix_spec{YType::str, "prefix-spec"},
    autonomous_flag{YType::boolean, "autonomous-flag"},
    no_advertise{YType::empty, "no-advertise"},
    on_link_flag{YType::boolean, "on-link-flag"},
    preferred_lifetime{YType::uint32, "preferred-lifetime"},
    valid_lifetime{YType::uint32, "valid-lifetime"}
{
    yang_name = "prefix"; yang_parent_name = "prefix-list";
}

Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::~Prefix()
{
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::has_data() const
{
    return prefix_spec.is_set
	|| autonomous_flag.is_set
	|| no_advertise.is_set
	|| on_link_flag.is_set
	|| preferred_lifetime.is_set
	|| valid_lifetime.is_set;
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_spec.operation)
	|| is_set(autonomous_flag.operation)
	|| is_set(no_advertise.operation)
	|| is_set(on_link_flag.operation)
	|| is_set(preferred_lifetime.operation)
	|| is_set(valid_lifetime.operation);
}

std::string Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix" <<"[prefix-spec='" <<prefix_spec <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_spec.is_set || is_set(prefix_spec.operation)) leaf_name_data.push_back(prefix_spec.get_name_leafdata());
    if (autonomous_flag.is_set || is_set(autonomous_flag.operation)) leaf_name_data.push_back(autonomous_flag.get_name_leafdata());
    if (no_advertise.is_set || is_set(no_advertise.operation)) leaf_name_data.push_back(no_advertise.get_name_leafdata());
    if (on_link_flag.is_set || is_set(on_link_flag.operation)) leaf_name_data.push_back(on_link_flag.get_name_leafdata());
    if (preferred_lifetime.is_set || is_set(preferred_lifetime.operation)) leaf_name_data.push_back(preferred_lifetime.get_name_leafdata());
    if (valid_lifetime.is_set || is_set(valid_lifetime.operation)) leaf_name_data.push_back(valid_lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-spec")
    {
        prefix_spec = value;
    }
    if(value_path == "autonomous-flag")
    {
        autonomous_flag = value;
    }
    if(value_path == "no-advertise")
    {
        no_advertise = value;
    }
    if(value_path == "on-link-flag")
    {
        on_link_flag = value;
    }
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime = value;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime = value;
    }
}

InterfacesState::InterfacesState()
{
    yang_name = "interfaces-state"; yang_parent_name = "ietf-interfaces";
}

InterfacesState::~InterfacesState()
{
}

bool InterfacesState::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool InterfacesState::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfacesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-interfaces:interfaces-state";

    return path_buffer.str();

}

const EntityPath InterfacesState::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> InterfacesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<InterfacesState::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfacesState::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> InterfacesState::clone_ptr() const
{
    return std::make_shared<InterfacesState>();
}

std::string InterfacesState::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string InterfacesState::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function InterfacesState::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

InterfacesState::Interface::Interface()
    :
    name{YType::str, "name"},
    admin_status{YType::enumeration, "admin-status"},
    higher_layer_if{YType::str, "higher-layer-if"},
    if_index{YType::int32, "if-index"},
    last_change{YType::str, "last-change"},
    lower_layer_if{YType::str, "lower-layer-if"},
    oper_status{YType::enumeration, "oper-status"},
    phys_address{YType::str, "phys-address"},
    routing_instance{YType::str, "ietf-routing:routing-instance"},
    speed{YType::uint64, "speed"},
    type{YType::identityref, "type"}
    	,
    bandwidth(std::make_shared<InterfacesState::Interface::Bandwidth>())
	,ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
	,statistics(std::make_shared<InterfacesState::Interface::Statistics>())
{
    bandwidth->parent = this;

    statistics->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces-state";
}

InterfacesState::Interface::~Interface()
{
}

bool InterfacesState::Interface::has_data() const
{
    for (std::size_t index=0; index<diffserv_target_entry.size(); index++)
    {
        if(diffserv_target_entry[index]->has_data())
            return true;
    }
    for (auto const & leaf : higher_layer_if.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lower_layer_if.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| admin_status.is_set
	|| if_index.is_set
	|| last_change.is_set
	|| oper_status.is_set
	|| phys_address.is_set
	|| routing_instance.is_set
	|| speed.is_set
	|| type.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool InterfacesState::Interface::has_operation() const
{
    for (std::size_t index=0; index<diffserv_target_entry.size(); index++)
    {
        if(diffserv_target_entry[index]->has_operation())
            return true;
    }
    for (auto const & leaf : higher_layer_if.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : lower_layer_if.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(admin_status.operation)
	|| is_set(higher_layer_if.operation)
	|| is_set(if_index.operation)
	|| is_set(last_change.operation)
	|| is_set(lower_layer_if.operation)
	|| is_set(oper_status.operation)
	|| is_set(phys_address.operation)
	|| is_set(routing_instance.operation)
	|| is_set(speed.operation)
	|| is_set(type.operation)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string InterfacesState::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-interfaces:interfaces-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.operation)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (last_change.is_set || is_set(last_change.operation)) leaf_name_data.push_back(last_change.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.operation)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (phys_address.is_set || is_set(phys_address.operation)) leaf_name_data.push_back(phys_address.get_name_leafdata());
    if (routing_instance.is_set || is_set(routing_instance.operation)) leaf_name_data.push_back(routing_instance.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());

    auto higher_layer_if_name_datas = higher_layer_if.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), higher_layer_if_name_datas.begin(), higher_layer_if_name_datas.end());
    auto lower_layer_if_name_datas = lower_layer_if.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lower_layer_if_name_datas.begin(), lower_layer_if_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<InterfacesState::Interface::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "diffserv-target-entry")
    {
        for(auto const & c : diffserv_target_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfacesState::Interface::DiffservTargetEntry>();
        c->parent = this;
        diffserv_target_entry.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<InterfacesState::Interface::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<InterfacesState::Interface::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<InterfacesState::Interface::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    for (auto const & c : diffserv_target_entry)
    {
        children[c->get_segment_path()] = c;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void InterfacesState::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
    }
    if(value_path == "higher-layer-if")
    {
        higher_layer_if.append(value);
    }
    if(value_path == "if-index")
    {
        if_index = value;
    }
    if(value_path == "last-change")
    {
        last_change = value;
    }
    if(value_path == "lower-layer-if")
    {
        lower_layer_if.append(value);
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
    }
    if(value_path == "phys-address")
    {
        phys_address = value;
    }
    if(value_path == "routing-instance")
    {
        routing_instance = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

InterfacesState::Interface::Statistics::Statistics()
    :
    discontinuity_time{YType::str, "discontinuity-time"},
    in_broadcast_pkts{YType::uint64, "in-broadcast-pkts"},
    in_discards{YType::uint32, "in-discards"},
    in_errors{YType::uint32, "in-errors"},
    in_multicast_pkts{YType::uint64, "in-multicast-pkts"},
    in_octets{YType::uint64, "in-octets"},
    in_pkts{YType::uint64, "ietf-interfaces-ext:in-pkts"},
    in_unicast_pkts{YType::uint64, "in-unicast-pkts"},
    in_unknown_protos{YType::uint32, "in-unknown-protos"},
    out_broadcast_pkts{YType::uint64, "out-broadcast-pkts"},
    out_discards{YType::uint32, "out-discards"},
    out_errors{YType::uint32, "out-errors"},
    out_multicast_pkts{YType::uint64, "out-multicast-pkts"},
    out_octets{YType::uint64, "out-octets"},
    out_pkts{YType::uint64, "ietf-interfaces-ext:out-pkts"},
    out_unicast_pkts{YType::uint64, "out-unicast-pkts"}
{
    yang_name = "statistics"; yang_parent_name = "interface";
}

InterfacesState::Interface::Statistics::~Statistics()
{
}

bool InterfacesState::Interface::Statistics::has_data() const
{
    return discontinuity_time.is_set
	|| in_broadcast_pkts.is_set
	|| in_discards.is_set
	|| in_errors.is_set
	|| in_multicast_pkts.is_set
	|| in_octets.is_set
	|| in_pkts.is_set
	|| in_unicast_pkts.is_set
	|| in_unknown_protos.is_set
	|| out_broadcast_pkts.is_set
	|| out_discards.is_set
	|| out_errors.is_set
	|| out_multicast_pkts.is_set
	|| out_octets.is_set
	|| out_pkts.is_set
	|| out_unicast_pkts.is_set;
}

bool InterfacesState::Interface::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(discontinuity_time.operation)
	|| is_set(in_broadcast_pkts.operation)
	|| is_set(in_discards.operation)
	|| is_set(in_errors.operation)
	|| is_set(in_multicast_pkts.operation)
	|| is_set(in_octets.operation)
	|| is_set(in_pkts.operation)
	|| is_set(in_unicast_pkts.operation)
	|| is_set(in_unknown_protos.operation)
	|| is_set(out_broadcast_pkts.operation)
	|| is_set(out_discards.operation)
	|| is_set(out_errors.operation)
	|| is_set(out_multicast_pkts.operation)
	|| is_set(out_octets.operation)
	|| is_set(out_pkts.operation)
	|| is_set(out_unicast_pkts.operation);
}

std::string InterfacesState::Interface::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discontinuity_time.is_set || is_set(discontinuity_time.operation)) leaf_name_data.push_back(discontinuity_time.get_name_leafdata());
    if (in_broadcast_pkts.is_set || is_set(in_broadcast_pkts.operation)) leaf_name_data.push_back(in_broadcast_pkts.get_name_leafdata());
    if (in_discards.is_set || is_set(in_discards.operation)) leaf_name_data.push_back(in_discards.get_name_leafdata());
    if (in_errors.is_set || is_set(in_errors.operation)) leaf_name_data.push_back(in_errors.get_name_leafdata());
    if (in_multicast_pkts.is_set || is_set(in_multicast_pkts.operation)) leaf_name_data.push_back(in_multicast_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.operation)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_pkts.is_set || is_set(in_pkts.operation)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (in_unicast_pkts.is_set || is_set(in_unicast_pkts.operation)) leaf_name_data.push_back(in_unicast_pkts.get_name_leafdata());
    if (in_unknown_protos.is_set || is_set(in_unknown_protos.operation)) leaf_name_data.push_back(in_unknown_protos.get_name_leafdata());
    if (out_broadcast_pkts.is_set || is_set(out_broadcast_pkts.operation)) leaf_name_data.push_back(out_broadcast_pkts.get_name_leafdata());
    if (out_discards.is_set || is_set(out_discards.operation)) leaf_name_data.push_back(out_discards.get_name_leafdata());
    if (out_errors.is_set || is_set(out_errors.operation)) leaf_name_data.push_back(out_errors.get_name_leafdata());
    if (out_multicast_pkts.is_set || is_set(out_multicast_pkts.operation)) leaf_name_data.push_back(out_multicast_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.operation)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.operation)) leaf_name_data.push_back(out_pkts.get_name_leafdata());
    if (out_unicast_pkts.is_set || is_set(out_unicast_pkts.operation)) leaf_name_data.push_back(out_unicast_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discontinuity-time")
    {
        discontinuity_time = value;
    }
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts = value;
    }
    if(value_path == "in-discards")
    {
        in_discards = value;
    }
    if(value_path == "in-errors")
    {
        in_errors = value;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts = value;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
    }
    if(value_path == "in-pkts")
    {
        in_pkts = value;
    }
    if(value_path == "in-unicast-pkts")
    {
        in_unicast_pkts = value;
    }
    if(value_path == "in-unknown-protos")
    {
        in_unknown_protos = value;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts = value;
    }
    if(value_path == "out-discards")
    {
        out_discards = value;
    }
    if(value_path == "out-errors")
    {
        out_errors = value;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts = value;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
    }
    if(value_path == "out-unicast-pkts")
    {
        out_unicast_pkts = value;
    }
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetEntry()
    :
    direction{YType::identityref, "direction"},
    policy_name{YType::str, "policy-name"}
{
    yang_name = "diffserv-target-entry"; yang_parent_name = "interface";
}

InterfacesState::Interface::DiffservTargetEntry::~DiffservTargetEntry()
{
}

bool InterfacesState::Interface::DiffservTargetEntry::has_data() const
{
    for (std::size_t index=0; index<diffserv_target_classifier_statistics.size(); index++)
    {
        if(diffserv_target_classifier_statistics[index]->has_data())
            return true;
    }
    return direction.is_set
	|| policy_name.is_set;
}

bool InterfacesState::Interface::DiffservTargetEntry::has_operation() const
{
    for (std::size_t index=0; index<diffserv_target_classifier_statistics.size(); index++)
    {
        if(diffserv_target_classifier_statistics[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(policy_name.operation);
}

std::string InterfacesState::Interface::DiffservTargetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-target:diffserv-target-entry" <<"[direction='" <<direction <<"']" <<"[policy-name='" <<policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::DiffservTargetEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiffservTargetEntry' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::DiffservTargetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffserv-target-classifier-statistics")
    {
        for(auto const & c : diffserv_target_classifier_statistics)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics>();
        c->parent = this;
        diffserv_target_classifier_statistics.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::DiffservTargetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffserv_target_classifier_statistics)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfacesState::Interface::DiffservTargetEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::DiffservTargetClassifierStatistics()
    :
    classifier_entry_name{YType::str, "classifier-entry-name"},
    parent_path{YType::str, "parent-path"}
    	,
    classifier_entry_statistics(std::make_shared<InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics>())
	,queuing_statistics(std::make_shared<InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics>())
{
    classifier_entry_statistics->parent = this;

    queuing_statistics->parent = this;

    yang_name = "diffserv-target-classifier-statistics"; yang_parent_name = "diffserv-target-entry";
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::~DiffservTargetClassifierStatistics()
{
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::has_data() const
{
    for (std::size_t index=0; index<meter_statistics.size(); index++)
    {
        if(meter_statistics[index]->has_data())
            return true;
    }
    return classifier_entry_name.is_set
	|| parent_path.is_set
	|| (classifier_entry_statistics !=  nullptr && classifier_entry_statistics->has_data())
	|| (queuing_statistics !=  nullptr && queuing_statistics->has_data());
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::has_operation() const
{
    for (std::size_t index=0; index<meter_statistics.size(); index++)
    {
        if(meter_statistics[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(classifier_entry_name.operation)
	|| is_set(parent_path.operation)
	|| (classifier_entry_statistics !=  nullptr && classifier_entry_statistics->has_operation())
	|| (queuing_statistics !=  nullptr && queuing_statistics->has_operation());
}

std::string InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffserv-target-classifier-statistics" <<"[classifier-entry-name='" <<classifier_entry_name <<"']" <<"[parent-path='" <<parent_path <<"']";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiffservTargetClassifierStatistics' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classifier_entry_name.is_set || is_set(classifier_entry_name.operation)) leaf_name_data.push_back(classifier_entry_name.get_name_leafdata());
    if (parent_path.is_set || is_set(parent_path.operation)) leaf_name_data.push_back(parent_path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classifier-entry-statistics")
    {
        if(classifier_entry_statistics == nullptr)
        {
            classifier_entry_statistics = std::make_shared<InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics>();
        }
        return classifier_entry_statistics;
    }

    if(child_yang_name == "meter-statistics")
    {
        for(auto const & c : meter_statistics)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics>();
        c->parent = this;
        meter_statistics.push_back(c);
        return c;
    }

    if(child_yang_name == "queuing-statistics")
    {
        if(queuing_statistics == nullptr)
        {
            queuing_statistics = std::make_shared<InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics>();
        }
        return queuing_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(classifier_entry_statistics != nullptr)
    {
        children["classifier-entry-statistics"] = classifier_entry_statistics;
    }

    for (auto const & c : meter_statistics)
    {
        children[c->get_segment_path()] = c;
    }

    if(queuing_statistics != nullptr)
    {
        children["queuing-statistics"] = queuing_statistics;
    }

    return children;
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classifier-entry-name")
    {
        classifier_entry_name = value;
    }
    if(value_path == "parent-path")
    {
        parent_path = value;
    }
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::ClassifierEntryStatistics()
    :
    classified_bytes{YType::uint64, "classified-bytes"},
    classified_pkts{YType::uint64, "classified-pkts"},
    classified_rate{YType::uint64, "classified-rate"}
{
    yang_name = "classifier-entry-statistics"; yang_parent_name = "diffserv-target-classifier-statistics";
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::~ClassifierEntryStatistics()
{
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::has_data() const
{
    return classified_bytes.is_set
	|| classified_pkts.is_set
	|| classified_rate.is_set;
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(classified_bytes.operation)
	|| is_set(classified_pkts.operation)
	|| is_set(classified_rate.operation);
}

std::string InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classifier-entry-statistics";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassifierEntryStatistics' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classified_bytes.is_set || is_set(classified_bytes.operation)) leaf_name_data.push_back(classified_bytes.get_name_leafdata());
    if (classified_pkts.is_set || is_set(classified_pkts.operation)) leaf_name_data.push_back(classified_pkts.get_name_leafdata());
    if (classified_rate.is_set || is_set(classified_rate.operation)) leaf_name_data.push_back(classified_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classified-bytes")
    {
        classified_bytes = value;
    }
    if(value_path == "classified-pkts")
    {
        classified_pkts = value;
    }
    if(value_path == "classified-rate")
    {
        classified_rate = value;
    }
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::MeterStatistics()
    :
    meter_id{YType::uint16, "meter-id"},
    meter_failed_bytes{YType::uint64, "meter-failed-bytes"},
    meter_failed_pkts{YType::uint64, "meter-failed-pkts"},
    meter_succeed_bytes{YType::uint64, "meter-succeed-bytes"},
    meter_succeed_pkts{YType::uint64, "meter-succeed-pkts"}
{
    yang_name = "meter-statistics"; yang_parent_name = "diffserv-target-classifier-statistics";
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::~MeterStatistics()
{
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::has_data() const
{
    return meter_id.is_set
	|| meter_failed_bytes.is_set
	|| meter_failed_pkts.is_set
	|| meter_succeed_bytes.is_set
	|| meter_succeed_pkts.is_set;
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(meter_id.operation)
	|| is_set(meter_failed_bytes.operation)
	|| is_set(meter_failed_pkts.operation)
	|| is_set(meter_succeed_bytes.operation)
	|| is_set(meter_succeed_pkts.operation);
}

std::string InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "meter-statistics" <<"[meter-id='" <<meter_id <<"']";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MeterStatistics' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (meter_id.is_set || is_set(meter_id.operation)) leaf_name_data.push_back(meter_id.get_name_leafdata());
    if (meter_failed_bytes.is_set || is_set(meter_failed_bytes.operation)) leaf_name_data.push_back(meter_failed_bytes.get_name_leafdata());
    if (meter_failed_pkts.is_set || is_set(meter_failed_pkts.operation)) leaf_name_data.push_back(meter_failed_pkts.get_name_leafdata());
    if (meter_succeed_bytes.is_set || is_set(meter_succeed_bytes.operation)) leaf_name_data.push_back(meter_succeed_bytes.get_name_leafdata());
    if (meter_succeed_pkts.is_set || is_set(meter_succeed_pkts.operation)) leaf_name_data.push_back(meter_succeed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "meter-id")
    {
        meter_id = value;
    }
    if(value_path == "meter-failed-bytes")
    {
        meter_failed_bytes = value;
    }
    if(value_path == "meter-failed-pkts")
    {
        meter_failed_pkts = value;
    }
    if(value_path == "meter-succeed-bytes")
    {
        meter_succeed_bytes = value;
    }
    if(value_path == "meter-succeed-pkts")
    {
        meter_succeed_pkts = value;
    }
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::QueuingStatistics()
    :
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_pkts{YType::uint64, "drop-pkts"},
    output_bytes{YType::uint64, "output-bytes"},
    output_pkts{YType::uint64, "output-pkts"},
    queue_size_bytes{YType::uint64, "queue-size-bytes"},
    queue_size_pkts{YType::uint64, "queue-size-pkts"}
    	,
    wred_stats(std::make_shared<InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats>())
{
    wred_stats->parent = this;

    yang_name = "queuing-statistics"; yang_parent_name = "diffserv-target-classifier-statistics";
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::~QueuingStatistics()
{
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::has_data() const
{
    return drop_bytes.is_set
	|| drop_pkts.is_set
	|| output_bytes.is_set
	|| output_pkts.is_set
	|| queue_size_bytes.is_set
	|| queue_size_pkts.is_set
	|| (wred_stats !=  nullptr && wred_stats->has_data());
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_pkts.operation)
	|| is_set(output_bytes.operation)
	|| is_set(output_pkts.operation)
	|| is_set(queue_size_bytes.operation)
	|| is_set(queue_size_pkts.operation)
	|| (wred_stats !=  nullptr && wred_stats->has_operation());
}

std::string InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queuing-statistics";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueuingStatistics' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_pkts.is_set || is_set(drop_pkts.operation)) leaf_name_data.push_back(drop_pkts.get_name_leafdata());
    if (output_bytes.is_set || is_set(output_bytes.operation)) leaf_name_data.push_back(output_bytes.get_name_leafdata());
    if (output_pkts.is_set || is_set(output_pkts.operation)) leaf_name_data.push_back(output_pkts.get_name_leafdata());
    if (queue_size_bytes.is_set || is_set(queue_size_bytes.operation)) leaf_name_data.push_back(queue_size_bytes.get_name_leafdata());
    if (queue_size_pkts.is_set || is_set(queue_size_pkts.operation)) leaf_name_data.push_back(queue_size_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred-stats")
    {
        if(wred_stats == nullptr)
        {
            wred_stats = std::make_shared<InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats>();
        }
        return wred_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(wred_stats != nullptr)
    {
        children["wred-stats"] = wred_stats;
    }

    return children;
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-pkts")
    {
        drop_pkts = value;
    }
    if(value_path == "output-bytes")
    {
        output_bytes = value;
    }
    if(value_path == "output-pkts")
    {
        output_pkts = value;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes = value;
    }
    if(value_path == "queue-size-pkts")
    {
        queue_size_pkts = value;
    }
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::WredStats()
    :
    early_drop_bytes{YType::uint64, "early-drop-bytes"},
    early_drop_pkts{YType::uint64, "early-drop-pkts"}
{
    yang_name = "wred-stats"; yang_parent_name = "queuing-statistics";
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::~WredStats()
{
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::has_data() const
{
    return early_drop_bytes.is_set
	|| early_drop_pkts.is_set;
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::has_operation() const
{
    return is_set(operation)
	|| is_set(early_drop_bytes.operation)
	|| is_set(early_drop_pkts.operation);
}

std::string InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-stats";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WredStats' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (early_drop_bytes.is_set || is_set(early_drop_bytes.operation)) leaf_name_data.push_back(early_drop_bytes.get_name_leafdata());
    if (early_drop_pkts.is_set || is_set(early_drop_pkts.operation)) leaf_name_data.push_back(early_drop_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "early-drop-bytes")
    {
        early_drop_bytes = value;
    }
    if(value_path == "early-drop-pkts")
    {
        early_drop_pkts = value;
    }
}

InterfacesState::Interface::Bandwidth::Bandwidth()
    :
    units{YType::str, "units"},
    value_{YType::uint64, "value"}
{
    yang_name = "bandwidth"; yang_parent_name = "interface";
}

InterfacesState::Interface::Bandwidth::~Bandwidth()
{
}

bool InterfacesState::Interface::Bandwidth::has_data() const
{
    return units.is_set
	|| value_.is_set;
}

bool InterfacesState::Interface::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(units.operation)
	|| is_set(value_.operation);
}

std::string InterfacesState::Interface::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-interfaces-ext:bandwidth";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

InterfacesState::Interface::Ipv4::Ipv4()
    :
    forwarding{YType::boolean, "forwarding"},
    mtu{YType::uint16, "mtu"}
{
    yang_name = "ipv4"; yang_parent_name = "interface";
}

InterfacesState::Interface::Ipv4::~Ipv4()
{
}

bool InterfacesState::Interface::Ipv4::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return forwarding.is_set
	|| mtu.is_set;
}

bool InterfacesState::Interface::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(forwarding.operation)
	|| is_set(mtu.operation);
}

std::string InterfacesState::Interface::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ip:ipv4";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.operation)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfacesState::Interface::Ipv4::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfacesState::Interface::Ipv4::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfacesState::Interface::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

InterfacesState::Interface::Ipv4::Address::Address()
    :
    ip{YType::str, "ip"},
    netmask{YType::str, "netmask"},
    origin{YType::enumeration, "origin"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "address"; yang_parent_name = "ipv4";
}

InterfacesState::Interface::Ipv4::Address::~Address()
{
}

bool InterfacesState::Interface::Ipv4::Address::has_data() const
{
    return ip.is_set
	|| netmask.is_set
	|| origin.is_set
	|| prefix_length.is_set;
}

bool InterfacesState::Interface::Ipv4::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(netmask.operation)
	|| is_set(origin.operation)
	|| is_set(prefix_length.operation);
}

std::string InterfacesState::Interface::Ipv4::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Ipv4::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Ipv4::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Ipv4::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::Ipv4::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "netmask")
    {
        netmask = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

InterfacesState::Interface::Ipv4::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"},
    origin{YType::enumeration, "origin"}
{
    yang_name = "neighbor"; yang_parent_name = "ipv4";
}

InterfacesState::Interface::Ipv4::Neighbor::~Neighbor()
{
}

bool InterfacesState::Interface::Ipv4::Neighbor::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set
	|| origin.is_set;
}

bool InterfacesState::Interface::Ipv4::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(link_layer_address.operation)
	|| is_set(origin.operation);
}

std::string InterfacesState::Interface::Ipv4::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Ipv4::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.operation)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Ipv4::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Ipv4::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::Ipv4::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
}

InterfacesState::Interface::Ipv6::Ipv6()
    :
    forwarding{YType::boolean, "forwarding"},
    mtu{YType::uint32, "mtu"}
{
    yang_name = "ipv6"; yang_parent_name = "interface";
}

InterfacesState::Interface::Ipv6::~Ipv6()
{
}

bool InterfacesState::Interface::Ipv6::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return forwarding.is_set
	|| mtu.is_set;
}

bool InterfacesState::Interface::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(forwarding.operation)
	|| is_set(mtu.operation);
}

std::string InterfacesState::Interface::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ip:ipv6";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.operation)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfacesState::Interface::Ipv6::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfacesState::Interface::Ipv6::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfacesState::Interface::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

InterfacesState::Interface::Ipv6::Address::Address()
    :
    ip{YType::str, "ip"},
    origin{YType::enumeration, "origin"},
    prefix_length{YType::uint8, "prefix-length"},
    status{YType::enumeration, "status"}
{
    yang_name = "address"; yang_parent_name = "ipv6";
}

InterfacesState::Interface::Ipv6::Address::~Address()
{
}

bool InterfacesState::Interface::Ipv6::Address::has_data() const
{
    return ip.is_set
	|| origin.is_set
	|| prefix_length.is_set
	|| status.is_set;
}

bool InterfacesState::Interface::Ipv6::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(origin.operation)
	|| is_set(prefix_length.operation)
	|| is_set(status.operation);
}

std::string InterfacesState::Interface::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Ipv6::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::Ipv6::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

InterfacesState::Interface::Ipv6::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"},
    is_router{YType::empty, "is-router"},
    link_layer_address{YType::str, "link-layer-address"},
    origin{YType::enumeration, "origin"},
    state{YType::enumeration, "state"}
{
    yang_name = "neighbor"; yang_parent_name = "ipv6";
}

InterfacesState::Interface::Ipv6::Neighbor::~Neighbor()
{
}

bool InterfacesState::Interface::Ipv6::Neighbor::has_data() const
{
    return ip.is_set
	|| is_router.is_set
	|| link_layer_address.is_set
	|| origin.is_set
	|| state.is_set;
}

bool InterfacesState::Interface::Ipv6::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(is_router.operation)
	|| is_set(link_layer_address.operation)
	|| is_set(origin.operation)
	|| is_set(state.operation);
}

std::string InterfacesState::Interface::Ipv6::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Ipv6::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (is_router.is_set || is_set(is_router.operation)) leaf_name_data.push_back(is_router.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.operation)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Ipv6::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Ipv6::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::Ipv6::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "is-router")
    {
        is_router = value;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

const Enum::YLeaf Interfaces::Interface::LinkUpDownTrapEnableEnum::enabled {1, "enabled"};
const Enum::YLeaf Interfaces::Interface::LinkUpDownTrapEnableEnum::disabled {2, "disabled"};

const Enum::YLeaf InterfacesState::Interface::AdminStatusEnum::up {1, "up"};
const Enum::YLeaf InterfacesState::Interface::AdminStatusEnum::down {2, "down"};
const Enum::YLeaf InterfacesState::Interface::AdminStatusEnum::testing {3, "testing"};

const Enum::YLeaf InterfacesState::Interface::OperStatusEnum::up {1, "up"};
const Enum::YLeaf InterfacesState::Interface::OperStatusEnum::down {2, "down"};
const Enum::YLeaf InterfacesState::Interface::OperStatusEnum::testing {3, "testing"};
const Enum::YLeaf InterfacesState::Interface::OperStatusEnum::unknown {4, "unknown"};
const Enum::YLeaf InterfacesState::Interface::OperStatusEnum::dormant {5, "dormant"};
const Enum::YLeaf InterfacesState::Interface::OperStatusEnum::not_present {6, "not-present"};
const Enum::YLeaf InterfacesState::Interface::OperStatusEnum::lower_layer_down {7, "lower-layer-down"};

const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::StatusEnum::preferred {0, "preferred"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::StatusEnum::deprecated {1, "deprecated"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::StatusEnum::invalid {2, "invalid"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::StatusEnum::inaccessible {3, "inaccessible"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::StatusEnum::unknown {4, "unknown"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::StatusEnum::tentative {5, "tentative"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::StatusEnum::duplicate {6, "duplicate"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::StatusEnum::optimistic {7, "optimistic"};

const Enum::YLeaf InterfacesState::Interface::Ipv6::Neighbor::StateEnum::incomplete {0, "incomplete"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Neighbor::StateEnum::reachable {1, "reachable"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Neighbor::StateEnum::stale {2, "stale"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Neighbor::StateEnum::delay {3, "delay"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Neighbor::StateEnum::probe {4, "probe"};


}
}

