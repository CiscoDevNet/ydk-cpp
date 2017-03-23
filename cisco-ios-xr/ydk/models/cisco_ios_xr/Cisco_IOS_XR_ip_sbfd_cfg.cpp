
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_sbfd_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_sbfd_cfg {

Sbfd::Sbfd()
    :
    local_discriminator(std::make_shared<Sbfd::LocalDiscriminator>())
	,remote_target(std::make_shared<Sbfd::RemoteTarget>())
{
    local_discriminator->parent = this;
    children["local-discriminator"] = local_discriminator;

    remote_target->parent = this;
    children["remote-target"] = remote_target;

    yang_name = "sbfd"; yang_parent_name = "Cisco-IOS-XR-ip-sbfd-cfg";
}

Sbfd::~Sbfd()
{
}

bool Sbfd::has_data() const
{
    return (local_discriminator !=  nullptr && local_discriminator->has_data())
	|| (remote_target !=  nullptr && remote_target->has_data());
}

bool Sbfd::has_operation() const
{
    return is_set(operation)
	|| (local_discriminator !=  nullptr && local_discriminator->has_operation())
	|| (remote_target !=  nullptr && remote_target->has_operation());
}

std::string Sbfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd";

    return path_buffer.str();

}

EntityPath Sbfd::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Sbfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-discriminator")
    {
        if(local_discriminator != nullptr)
        {
            children["local-discriminator"] = local_discriminator;
        }
        else
        {
            local_discriminator = std::make_shared<Sbfd::LocalDiscriminator>();
            local_discriminator->parent = this;
            children["local-discriminator"] = local_discriminator;
        }
        return children.at("local-discriminator");
    }

    if(child_yang_name == "remote-target")
    {
        if(remote_target != nullptr)
        {
            children["remote-target"] = remote_target;
        }
        else
        {
            remote_target = std::make_shared<Sbfd::RemoteTarget>();
            remote_target->parent = this;
            children["remote-target"] = remote_target;
        }
        return children.at("remote-target");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::get_children()
{
    if(children.find("local-discriminator") == children.end())
    {
        if(local_discriminator != nullptr)
        {
            children["local-discriminator"] = local_discriminator;
        }
    }

    if(children.find("remote-target") == children.end())
    {
        if(remote_target != nullptr)
        {
            children["remote-target"] = remote_target;
        }
    }

    return children;
}

void Sbfd::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Sbfd::clone_ptr() const
{
    return std::make_shared<Sbfd>();
}

std::string Sbfd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Sbfd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Sbfd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Sbfd::RemoteTarget::RemoteTarget()
    :
    ipv4_addresses(std::make_shared<Sbfd::RemoteTarget::Ipv4Addresses>())
	,ipv6_addresses(std::make_shared<Sbfd::RemoteTarget::Ipv6Addresses>())
{
    ipv4_addresses->parent = this;
    children["ipv4-addresses"] = ipv4_addresses;

    ipv6_addresses->parent = this;
    children["ipv6-addresses"] = ipv6_addresses;

    yang_name = "remote-target"; yang_parent_name = "sbfd";
}

Sbfd::RemoteTarget::~RemoteTarget()
{
}

bool Sbfd::RemoteTarget::has_data() const
{
    return (ipv4_addresses !=  nullptr && ipv4_addresses->has_data())
	|| (ipv6_addresses !=  nullptr && ipv6_addresses->has_data());
}

bool Sbfd::RemoteTarget::has_operation() const
{
    return is_set(operation)
	|| (ipv4_addresses !=  nullptr && ipv4_addresses->has_operation())
	|| (ipv6_addresses !=  nullptr && ipv6_addresses->has_operation());
}

std::string Sbfd::RemoteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-target";

    return path_buffer.str();

}

EntityPath Sbfd::RemoteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sbfd::RemoteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-addresses")
    {
        if(ipv4_addresses != nullptr)
        {
            children["ipv4-addresses"] = ipv4_addresses;
        }
        else
        {
            ipv4_addresses = std::make_shared<Sbfd::RemoteTarget::Ipv4Addresses>();
            ipv4_addresses->parent = this;
            children["ipv4-addresses"] = ipv4_addresses;
        }
        return children.at("ipv4-addresses");
    }

    if(child_yang_name == "ipv6-addresses")
    {
        if(ipv6_addresses != nullptr)
        {
            children["ipv6-addresses"] = ipv6_addresses;
        }
        else
        {
            ipv6_addresses = std::make_shared<Sbfd::RemoteTarget::Ipv6Addresses>();
            ipv6_addresses->parent = this;
            children["ipv6-addresses"] = ipv6_addresses;
        }
        return children.at("ipv6-addresses");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::RemoteTarget::get_children()
{
    if(children.find("ipv4-addresses") == children.end())
    {
        if(ipv4_addresses != nullptr)
        {
            children["ipv4-addresses"] = ipv4_addresses;
        }
    }

    if(children.find("ipv6-addresses") == children.end())
    {
        if(ipv6_addresses != nullptr)
        {
            children["ipv6-addresses"] = ipv6_addresses;
        }
    }

    return children;
}

void Sbfd::RemoteTarget::set_value(const std::string & value_path, std::string value)
{
}

Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Addresses()
{
    yang_name = "ipv4-addresses"; yang_parent_name = "remote-target";
}

Sbfd::RemoteTarget::Ipv4Addresses::~Ipv4Addresses()
{
}

bool Sbfd::RemoteTarget::Ipv4Addresses::has_data() const
{
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool Sbfd::RemoteTarget::Ipv4Addresses::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Sbfd::RemoteTarget::Ipv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addresses";

    return path_buffer.str();

}

EntityPath Sbfd::RemoteTarget::Ipv4Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/remote-target/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sbfd::RemoteTarget::Ipv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address")
    {
        for(auto const & c : ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address>();
        c->parent = this;
        ipv4_address.push_back(std::move(c));
        children[segment_path] = ipv4_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::RemoteTarget::Ipv4Addresses::get_children()
{
    for (auto const & c : ipv4_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Sbfd::RemoteTarget::Ipv4Addresses::set_value(const std::string & value_path, std::string value)
{
}

Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::Ipv4Address()
    :
    address{YType::str, "address"}
{
    yang_name = "ipv4-address"; yang_parent_name = "ipv4-addresses";
}

Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::~Ipv4Address()
{
}

bool Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::has_data() const
{
    for (std::size_t index=0; index<remote_discriminator.size(); index++)
    {
        if(remote_discriminator[index]->has_data())
            return true;
    }
    return address.is_set;
}

bool Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::has_operation() const
{
    for (std::size_t index=0; index<remote_discriminator.size(); index++)
    {
        if(remote_discriminator[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/remote-target/ipv4-addresses/" << get_segment_path();
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

std::shared_ptr<Entity> Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-discriminator")
    {
        for(auto const & c : remote_discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator>();
        c->parent = this;
        remote_discriminator.push_back(std::move(c));
        children[segment_path] = remote_discriminator.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::get_children()
{
    for (auto const & c : remote_discriminator)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::RemoteDiscriminator()
    :
    remote_discriminator{YType::uint32, "remote-discriminator"}
{
    yang_name = "remote-discriminator"; yang_parent_name = "ipv4-address";
}

Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::~RemoteDiscriminator()
{
}

bool Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::has_data() const
{
    return remote_discriminator.is_set;
}

bool Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(remote_discriminator.operation);
}

std::string Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-discriminator" <<"[remote-discriminator='" <<remote_discriminator <<"']";

    return path_buffer.str();

}

EntityPath Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteDiscriminator' in Cisco_IOS_XR_ip_sbfd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_discriminator.is_set || is_set(remote_discriminator.operation)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::get_children()
{
    return children;
}

void Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
    }
}

Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Addresses()
{
    yang_name = "ipv6-addresses"; yang_parent_name = "remote-target";
}

Sbfd::RemoteTarget::Ipv6Addresses::~Ipv6Addresses()
{
}

bool Sbfd::RemoteTarget::Ipv6Addresses::has_data() const
{
    for (std::size_t index=0; index<ipv6_address.size(); index++)
    {
        if(ipv6_address[index]->has_data())
            return true;
    }
    return false;
}

bool Sbfd::RemoteTarget::Ipv6Addresses::has_operation() const
{
    for (std::size_t index=0; index<ipv6_address.size(); index++)
    {
        if(ipv6_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Sbfd::RemoteTarget::Ipv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addresses";

    return path_buffer.str();

}

EntityPath Sbfd::RemoteTarget::Ipv6Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/remote-target/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sbfd::RemoteTarget::Ipv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-address")
    {
        for(auto const & c : ipv6_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address>();
        c->parent = this;
        ipv6_address.push_back(std::move(c));
        children[segment_path] = ipv6_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::RemoteTarget::Ipv6Addresses::get_children()
{
    for (auto const & c : ipv6_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Sbfd::RemoteTarget::Ipv6Addresses::set_value(const std::string & value_path, std::string value)
{
}

Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::Ipv6Address()
    :
    address{YType::str, "address"}
{
    yang_name = "ipv6-address"; yang_parent_name = "ipv6-addresses";
}

Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::~Ipv6Address()
{
}

bool Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::has_data() const
{
    for (std::size_t index=0; index<remote_discriminator.size(); index++)
    {
        if(remote_discriminator[index]->has_data())
            return true;
    }
    return address.is_set;
}

bool Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::has_operation() const
{
    for (std::size_t index=0; index<remote_discriminator.size(); index++)
    {
        if(remote_discriminator[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/remote-target/ipv6-addresses/" << get_segment_path();
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

std::shared_ptr<Entity> Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-discriminator")
    {
        for(auto const & c : remote_discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator>();
        c->parent = this;
        remote_discriminator.push_back(std::move(c));
        children[segment_path] = remote_discriminator.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::get_children()
{
    for (auto const & c : remote_discriminator)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::RemoteDiscriminator()
    :
    remote_discriminator{YType::uint32, "remote-discriminator"}
{
    yang_name = "remote-discriminator"; yang_parent_name = "ipv6-address";
}

Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::~RemoteDiscriminator()
{
}

bool Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::has_data() const
{
    return remote_discriminator.is_set;
}

bool Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(remote_discriminator.operation);
}

std::string Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-discriminator" <<"[remote-discriminator='" <<remote_discriminator <<"']";

    return path_buffer.str();

}

EntityPath Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteDiscriminator' in Cisco_IOS_XR_ip_sbfd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_discriminator.is_set || is_set(remote_discriminator.operation)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::get_children()
{
    return children;
}

void Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
    }
}

Sbfd::LocalDiscriminator::LocalDiscriminator()
    :
    dynamic_discriminators(std::make_shared<Sbfd::LocalDiscriminator::DynamicDiscriminators>())
	,intf_discriminators(std::make_shared<Sbfd::LocalDiscriminator::IntfDiscriminators>())
	,ipv4_discriminators(std::make_shared<Sbfd::LocalDiscriminator::Ipv4Discriminators>())
	,val32_discriminators(std::make_shared<Sbfd::LocalDiscriminator::Val32Discriminators>())
{
    dynamic_discriminators->parent = this;
    children["dynamic-discriminators"] = dynamic_discriminators;

    intf_discriminators->parent = this;
    children["intf-discriminators"] = intf_discriminators;

    ipv4_discriminators->parent = this;
    children["ipv4-discriminators"] = ipv4_discriminators;

    val32_discriminators->parent = this;
    children["val32-discriminators"] = val32_discriminators;

    yang_name = "local-discriminator"; yang_parent_name = "sbfd";
}

Sbfd::LocalDiscriminator::~LocalDiscriminator()
{
}

bool Sbfd::LocalDiscriminator::has_data() const
{
    return (dynamic_discriminators !=  nullptr && dynamic_discriminators->has_data())
	|| (intf_discriminators !=  nullptr && intf_discriminators->has_data())
	|| (ipv4_discriminators !=  nullptr && ipv4_discriminators->has_data())
	|| (val32_discriminators !=  nullptr && val32_discriminators->has_data());
}

bool Sbfd::LocalDiscriminator::has_operation() const
{
    return is_set(operation)
	|| (dynamic_discriminators !=  nullptr && dynamic_discriminators->has_operation())
	|| (intf_discriminators !=  nullptr && intf_discriminators->has_operation())
	|| (ipv4_discriminators !=  nullptr && ipv4_discriminators->has_operation())
	|| (val32_discriminators !=  nullptr && val32_discriminators->has_operation());
}

std::string Sbfd::LocalDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-discriminator";

    return path_buffer.str();

}

EntityPath Sbfd::LocalDiscriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dynamic-discriminators")
    {
        if(dynamic_discriminators != nullptr)
        {
            children["dynamic-discriminators"] = dynamic_discriminators;
        }
        else
        {
            dynamic_discriminators = std::make_shared<Sbfd::LocalDiscriminator::DynamicDiscriminators>();
            dynamic_discriminators->parent = this;
            children["dynamic-discriminators"] = dynamic_discriminators;
        }
        return children.at("dynamic-discriminators");
    }

    if(child_yang_name == "intf-discriminators")
    {
        if(intf_discriminators != nullptr)
        {
            children["intf-discriminators"] = intf_discriminators;
        }
        else
        {
            intf_discriminators = std::make_shared<Sbfd::LocalDiscriminator::IntfDiscriminators>();
            intf_discriminators->parent = this;
            children["intf-discriminators"] = intf_discriminators;
        }
        return children.at("intf-discriminators");
    }

    if(child_yang_name == "ipv4-discriminators")
    {
        if(ipv4_discriminators != nullptr)
        {
            children["ipv4-discriminators"] = ipv4_discriminators;
        }
        else
        {
            ipv4_discriminators = std::make_shared<Sbfd::LocalDiscriminator::Ipv4Discriminators>();
            ipv4_discriminators->parent = this;
            children["ipv4-discriminators"] = ipv4_discriminators;
        }
        return children.at("ipv4-discriminators");
    }

    if(child_yang_name == "val32-discriminators")
    {
        if(val32_discriminators != nullptr)
        {
            children["val32-discriminators"] = val32_discriminators;
        }
        else
        {
            val32_discriminators = std::make_shared<Sbfd::LocalDiscriminator::Val32Discriminators>();
            val32_discriminators->parent = this;
            children["val32-discriminators"] = val32_discriminators;
        }
        return children.at("val32-discriminators");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::LocalDiscriminator::get_children()
{
    if(children.find("dynamic-discriminators") == children.end())
    {
        if(dynamic_discriminators != nullptr)
        {
            children["dynamic-discriminators"] = dynamic_discriminators;
        }
    }

    if(children.find("intf-discriminators") == children.end())
    {
        if(intf_discriminators != nullptr)
        {
            children["intf-discriminators"] = intf_discriminators;
        }
    }

    if(children.find("ipv4-discriminators") == children.end())
    {
        if(ipv4_discriminators != nullptr)
        {
            children["ipv4-discriminators"] = ipv4_discriminators;
        }
    }

    if(children.find("val32-discriminators") == children.end())
    {
        if(val32_discriminators != nullptr)
        {
            children["val32-discriminators"] = val32_discriminators;
        }
    }

    return children;
}

void Sbfd::LocalDiscriminator::set_value(const std::string & value_path, std::string value)
{
}

Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminators()
{
    yang_name = "intf-discriminators"; yang_parent_name = "local-discriminator";
}

Sbfd::LocalDiscriminator::IntfDiscriminators::~IntfDiscriminators()
{
}

bool Sbfd::LocalDiscriminator::IntfDiscriminators::has_data() const
{
    for (std::size_t index=0; index<intf_discriminator.size(); index++)
    {
        if(intf_discriminator[index]->has_data())
            return true;
    }
    return false;
}

bool Sbfd::LocalDiscriminator::IntfDiscriminators::has_operation() const
{
    for (std::size_t index=0; index<intf_discriminator.size(); index++)
    {
        if(intf_discriminator[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Sbfd::LocalDiscriminator::IntfDiscriminators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-discriminators";

    return path_buffer.str();

}

EntityPath Sbfd::LocalDiscriminator::IntfDiscriminators::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/local-discriminator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::IntfDiscriminators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "intf-discriminator")
    {
        for(auto const & c : intf_discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator>();
        c->parent = this;
        intf_discriminator.push_back(std::move(c));
        children[segment_path] = intf_discriminator.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::LocalDiscriminator::IntfDiscriminators::get_children()
{
    for (auto const & c : intf_discriminator)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Sbfd::LocalDiscriminator::IntfDiscriminators::set_value(const std::string & value_path, std::string value)
{
}

Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::IntfDiscriminator()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "intf-discriminator"; yang_parent_name = "intf-discriminators";
}

Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::~IntfDiscriminator()
{
}

bool Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::has_data() const
{
    return interface_name.is_set;
}

bool Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-discriminator" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/local-discriminator/intf-discriminators/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::get_children()
{
    return children;
}

void Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminators()
{
    yang_name = "dynamic-discriminators"; yang_parent_name = "local-discriminator";
}

Sbfd::LocalDiscriminator::DynamicDiscriminators::~DynamicDiscriminators()
{
}

bool Sbfd::LocalDiscriminator::DynamicDiscriminators::has_data() const
{
    for (std::size_t index=0; index<dynamic_discriminator.size(); index++)
    {
        if(dynamic_discriminator[index]->has_data())
            return true;
    }
    return false;
}

bool Sbfd::LocalDiscriminator::DynamicDiscriminators::has_operation() const
{
    for (std::size_t index=0; index<dynamic_discriminator.size(); index++)
    {
        if(dynamic_discriminator[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Sbfd::LocalDiscriminator::DynamicDiscriminators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-discriminators";

    return path_buffer.str();

}

EntityPath Sbfd::LocalDiscriminator::DynamicDiscriminators::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/local-discriminator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::DynamicDiscriminators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dynamic-discriminator")
    {
        for(auto const & c : dynamic_discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator>();
        c->parent = this;
        dynamic_discriminator.push_back(std::move(c));
        children[segment_path] = dynamic_discriminator.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::LocalDiscriminator::DynamicDiscriminators::get_children()
{
    for (auto const & c : dynamic_discriminator)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Sbfd::LocalDiscriminator::DynamicDiscriminators::set_value(const std::string & value_path, std::string value)
{
}

Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::DynamicDiscriminator()
    :
    discriminator{YType::uint32, "discriminator"}
{
    yang_name = "dynamic-discriminator"; yang_parent_name = "dynamic-discriminators";
}

Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::~DynamicDiscriminator()
{
}

bool Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::has_data() const
{
    return discriminator.is_set;
}

bool Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(discriminator.operation);
}

std::string Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-discriminator" <<"[discriminator='" <<discriminator <<"']";

    return path_buffer.str();

}

EntityPath Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/local-discriminator/dynamic-discriminators/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminator.is_set || is_set(discriminator.operation)) leaf_name_data.push_back(discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::get_children()
{
    return children;
}

void Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discriminator")
    {
        discriminator = value;
    }
}

Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminators()
{
    yang_name = "ipv4-discriminators"; yang_parent_name = "local-discriminator";
}

Sbfd::LocalDiscriminator::Ipv4Discriminators::~Ipv4Discriminators()
{
}

bool Sbfd::LocalDiscriminator::Ipv4Discriminators::has_data() const
{
    for (std::size_t index=0; index<ipv4_discriminator.size(); index++)
    {
        if(ipv4_discriminator[index]->has_data())
            return true;
    }
    return false;
}

bool Sbfd::LocalDiscriminator::Ipv4Discriminators::has_operation() const
{
    for (std::size_t index=0; index<ipv4_discriminator.size(); index++)
    {
        if(ipv4_discriminator[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Sbfd::LocalDiscriminator::Ipv4Discriminators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-discriminators";

    return path_buffer.str();

}

EntityPath Sbfd::LocalDiscriminator::Ipv4Discriminators::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/local-discriminator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::Ipv4Discriminators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-discriminator")
    {
        for(auto const & c : ipv4_discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator>();
        c->parent = this;
        ipv4_discriminator.push_back(std::move(c));
        children[segment_path] = ipv4_discriminator.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::LocalDiscriminator::Ipv4Discriminators::get_children()
{
    for (auto const & c : ipv4_discriminator)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Sbfd::LocalDiscriminator::Ipv4Discriminators::set_value(const std::string & value_path, std::string value)
{
}

Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::Ipv4Discriminator()
    :
    address{YType::str, "address"}
{
    yang_name = "ipv4-discriminator"; yang_parent_name = "ipv4-discriminators";
}

Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::~Ipv4Discriminator()
{
}

bool Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::has_data() const
{
    return address.is_set;
}

bool Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-discriminator" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/local-discriminator/ipv4-discriminators/" << get_segment_path();
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

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::get_children()
{
    return children;
}

void Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminators()
{
    yang_name = "val32-discriminators"; yang_parent_name = "local-discriminator";
}

Sbfd::LocalDiscriminator::Val32Discriminators::~Val32Discriminators()
{
}

bool Sbfd::LocalDiscriminator::Val32Discriminators::has_data() const
{
    for (std::size_t index=0; index<val32_discriminator.size(); index++)
    {
        if(val32_discriminator[index]->has_data())
            return true;
    }
    return false;
}

bool Sbfd::LocalDiscriminator::Val32Discriminators::has_operation() const
{
    for (std::size_t index=0; index<val32_discriminator.size(); index++)
    {
        if(val32_discriminator[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Sbfd::LocalDiscriminator::Val32Discriminators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "val32-discriminators";

    return path_buffer.str();

}

EntityPath Sbfd::LocalDiscriminator::Val32Discriminators::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/local-discriminator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::Val32Discriminators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "val32-discriminator")
    {
        for(auto const & c : val32_discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator>();
        c->parent = this;
        val32_discriminator.push_back(std::move(c));
        children[segment_path] = val32_discriminator.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::LocalDiscriminator::Val32Discriminators::get_children()
{
    for (auto const & c : val32_discriminator)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Sbfd::LocalDiscriminator::Val32Discriminators::set_value(const std::string & value_path, std::string value)
{
}

Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::Val32Discriminator()
    :
    discriminator{YType::uint32, "discriminator"}
{
    yang_name = "val32-discriminator"; yang_parent_name = "val32-discriminators";
}

Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::~Val32Discriminator()
{
}

bool Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::has_data() const
{
    return discriminator.is_set;
}

bool Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(discriminator.operation);
}

std::string Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "val32-discriminator" <<"[discriminator='" <<discriminator <<"']";

    return path_buffer.str();

}

EntityPath Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/local-discriminator/val32-discriminators/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminator.is_set || is_set(discriminator.operation)) leaf_name_data.push_back(discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::get_children()
{
    return children;
}

void Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discriminator")
    {
        discriminator = value;
    }
}


}
}

