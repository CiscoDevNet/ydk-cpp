
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_sbfd_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_sbfd_cfg {

Sbfd::Sbfd()
    :
    remote_target(std::make_shared<Sbfd::RemoteTarget>())
	,local_discriminator(std::make_shared<Sbfd::LocalDiscriminator>())
{
    remote_target->parent = this;
    local_discriminator->parent = this;

    yang_name = "sbfd"; yang_parent_name = "Cisco-IOS-XR-ip-sbfd-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Sbfd::~Sbfd()
{
}

bool Sbfd::has_data() const
{
    return (remote_target !=  nullptr && remote_target->has_data())
	|| (local_discriminator !=  nullptr && local_discriminator->has_data());
}

bool Sbfd::has_operation() const
{
    return is_set(yfilter)
	|| (remote_target !=  nullptr && remote_target->has_operation())
	|| (local_discriminator !=  nullptr && local_discriminator->has_operation());
}

std::string Sbfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-target")
    {
        if(remote_target == nullptr)
        {
            remote_target = std::make_shared<Sbfd::RemoteTarget>();
        }
        return remote_target;
    }

    if(child_yang_name == "local-discriminator")
    {
        if(local_discriminator == nullptr)
        {
            local_discriminator = std::make_shared<Sbfd::LocalDiscriminator>();
        }
        return local_discriminator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_target != nullptr)
    {
        children["remote-target"] = remote_target;
    }

    if(local_discriminator != nullptr)
    {
        children["local-discriminator"] = local_discriminator;
    }

    return children;
}

void Sbfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sbfd::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> Sbfd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Sbfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-target" || name == "local-discriminator")
        return true;
    return false;
}

Sbfd::RemoteTarget::RemoteTarget()
    :
    ipv4_addresses(std::make_shared<Sbfd::RemoteTarget::Ipv4Addresses>())
	,ipv6_addresses(std::make_shared<Sbfd::RemoteTarget::Ipv6Addresses>())
{
    ipv4_addresses->parent = this;
    ipv6_addresses->parent = this;

    yang_name = "remote-target"; yang_parent_name = "sbfd"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (ipv4_addresses !=  nullptr && ipv4_addresses->has_operation())
	|| (ipv6_addresses !=  nullptr && ipv6_addresses->has_operation());
}

std::string Sbfd::RemoteTarget::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::RemoteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::RemoteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::RemoteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addresses")
    {
        if(ipv4_addresses == nullptr)
        {
            ipv4_addresses = std::make_shared<Sbfd::RemoteTarget::Ipv4Addresses>();
        }
        return ipv4_addresses;
    }

    if(child_yang_name == "ipv6-addresses")
    {
        if(ipv6_addresses == nullptr)
        {
            ipv6_addresses = std::make_shared<Sbfd::RemoteTarget::Ipv6Addresses>();
        }
        return ipv6_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::RemoteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_addresses != nullptr)
    {
        children["ipv4-addresses"] = ipv4_addresses;
    }

    if(ipv6_addresses != nullptr)
    {
        children["ipv6-addresses"] = ipv6_addresses;
    }

    return children;
}

void Sbfd::RemoteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sbfd::RemoteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sbfd::RemoteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addresses" || name == "ipv6-addresses")
        return true;
    return false;
}

Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Addresses()
{

    yang_name = "ipv4-addresses"; yang_parent_name = "remote-target"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Sbfd::RemoteTarget::Ipv4Addresses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/remote-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::RemoteTarget::Ipv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::RemoteTarget::Ipv4Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::RemoteTarget::Ipv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address")
    {
        for(auto const & c : ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address>();
        c->parent = this;
        ipv4_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::RemoteTarget::Ipv4Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sbfd::RemoteTarget::Ipv4Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sbfd::RemoteTarget::Ipv4Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sbfd::RemoteTarget::Ipv4Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address")
        return true;
    return false;
}

Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::Ipv4Address()
    :
    address{YType::str, "address"}
{

    yang_name = "ipv4-address"; yang_parent_name = "ipv4-addresses"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/remote-target/ipv4-addresses/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-discriminator")
    {
        for(auto const & c : remote_discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator>();
        c->parent = this;
        remote_discriminator.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote_discriminator)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-discriminator" || name == "address")
        return true;
    return false;
}

Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::RemoteDiscriminator()
    :
    remote_discriminator{YType::uint32, "remote-discriminator"}
{

    yang_name = "remote-discriminator"; yang_parent_name = "ipv4-address"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(remote_discriminator.yfilter);
}

std::string Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-discriminator" <<"[remote-discriminator='" <<remote_discriminator <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
}

bool Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-discriminator")
        return true;
    return false;
}

Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Addresses()
{

    yang_name = "ipv6-addresses"; yang_parent_name = "remote-target"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Sbfd::RemoteTarget::Ipv6Addresses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/remote-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::RemoteTarget::Ipv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::RemoteTarget::Ipv6Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::RemoteTarget::Ipv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-address")
    {
        for(auto const & c : ipv6_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address>();
        c->parent = this;
        ipv6_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::RemoteTarget::Ipv6Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sbfd::RemoteTarget::Ipv6Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sbfd::RemoteTarget::Ipv6Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sbfd::RemoteTarget::Ipv6Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::Ipv6Address()
    :
    address{YType::str, "address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "ipv6-addresses"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/remote-target/ipv6-addresses/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-discriminator")
    {
        for(auto const & c : remote_discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator>();
        c->parent = this;
        remote_discriminator.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote_discriminator)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-discriminator" || name == "address")
        return true;
    return false;
}

Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::RemoteDiscriminator()
    :
    remote_discriminator{YType::uint32, "remote-discriminator"}
{

    yang_name = "remote-discriminator"; yang_parent_name = "ipv6-address"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(remote_discriminator.yfilter);
}

std::string Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-discriminator" <<"[remote-discriminator='" <<remote_discriminator <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
}

bool Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-discriminator")
        return true;
    return false;
}

Sbfd::LocalDiscriminator::LocalDiscriminator()
    :
    intf_discriminators(std::make_shared<Sbfd::LocalDiscriminator::IntfDiscriminators>())
	,dynamic_discriminators(std::make_shared<Sbfd::LocalDiscriminator::DynamicDiscriminators>())
	,ipv4_discriminators(std::make_shared<Sbfd::LocalDiscriminator::Ipv4Discriminators>())
	,val32_discriminators(std::make_shared<Sbfd::LocalDiscriminator::Val32Discriminators>())
{
    intf_discriminators->parent = this;
    dynamic_discriminators->parent = this;
    ipv4_discriminators->parent = this;
    val32_discriminators->parent = this;

    yang_name = "local-discriminator"; yang_parent_name = "sbfd"; is_top_level_class = false; has_list_ancestor = false;
}

Sbfd::LocalDiscriminator::~LocalDiscriminator()
{
}

bool Sbfd::LocalDiscriminator::has_data() const
{
    return (intf_discriminators !=  nullptr && intf_discriminators->has_data())
	|| (dynamic_discriminators !=  nullptr && dynamic_discriminators->has_data())
	|| (ipv4_discriminators !=  nullptr && ipv4_discriminators->has_data())
	|| (val32_discriminators !=  nullptr && val32_discriminators->has_data());
}

bool Sbfd::LocalDiscriminator::has_operation() const
{
    return is_set(yfilter)
	|| (intf_discriminators !=  nullptr && intf_discriminators->has_operation())
	|| (dynamic_discriminators !=  nullptr && dynamic_discriminators->has_operation())
	|| (ipv4_discriminators !=  nullptr && ipv4_discriminators->has_operation())
	|| (val32_discriminators !=  nullptr && val32_discriminators->has_operation());
}

std::string Sbfd::LocalDiscriminator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::LocalDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-discriminator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::LocalDiscriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-discriminators")
    {
        if(intf_discriminators == nullptr)
        {
            intf_discriminators = std::make_shared<Sbfd::LocalDiscriminator::IntfDiscriminators>();
        }
        return intf_discriminators;
    }

    if(child_yang_name == "dynamic-discriminators")
    {
        if(dynamic_discriminators == nullptr)
        {
            dynamic_discriminators = std::make_shared<Sbfd::LocalDiscriminator::DynamicDiscriminators>();
        }
        return dynamic_discriminators;
    }

    if(child_yang_name == "ipv4-discriminators")
    {
        if(ipv4_discriminators == nullptr)
        {
            ipv4_discriminators = std::make_shared<Sbfd::LocalDiscriminator::Ipv4Discriminators>();
        }
        return ipv4_discriminators;
    }

    if(child_yang_name == "val32-discriminators")
    {
        if(val32_discriminators == nullptr)
        {
            val32_discriminators = std::make_shared<Sbfd::LocalDiscriminator::Val32Discriminators>();
        }
        return val32_discriminators;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::LocalDiscriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(intf_discriminators != nullptr)
    {
        children["intf-discriminators"] = intf_discriminators;
    }

    if(dynamic_discriminators != nullptr)
    {
        children["dynamic-discriminators"] = dynamic_discriminators;
    }

    if(ipv4_discriminators != nullptr)
    {
        children["ipv4-discriminators"] = ipv4_discriminators;
    }

    if(val32_discriminators != nullptr)
    {
        children["val32-discriminators"] = val32_discriminators;
    }

    return children;
}

void Sbfd::LocalDiscriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sbfd::LocalDiscriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sbfd::LocalDiscriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-discriminators" || name == "dynamic-discriminators" || name == "ipv4-discriminators" || name == "val32-discriminators")
        return true;
    return false;
}

Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminators()
{

    yang_name = "intf-discriminators"; yang_parent_name = "local-discriminator"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Sbfd::LocalDiscriminator::IntfDiscriminators::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/local-discriminator/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::LocalDiscriminator::IntfDiscriminators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-discriminators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::LocalDiscriminator::IntfDiscriminators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::IntfDiscriminators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-discriminator")
    {
        for(auto const & c : intf_discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator>();
        c->parent = this;
        intf_discriminator.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::LocalDiscriminator::IntfDiscriminators::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : intf_discriminator)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sbfd::LocalDiscriminator::IntfDiscriminators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sbfd::LocalDiscriminator::IntfDiscriminators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sbfd::LocalDiscriminator::IntfDiscriminators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-discriminator")
        return true;
    return false;
}

Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::IntfDiscriminator()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "intf-discriminator"; yang_parent_name = "intf-discriminators"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/local-discriminator/intf-discriminators/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-discriminator" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminators()
{

    yang_name = "dynamic-discriminators"; yang_parent_name = "local-discriminator"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Sbfd::LocalDiscriminator::DynamicDiscriminators::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/local-discriminator/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::LocalDiscriminator::DynamicDiscriminators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-discriminators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::LocalDiscriminator::DynamicDiscriminators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::DynamicDiscriminators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-discriminator")
    {
        for(auto const & c : dynamic_discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator>();
        c->parent = this;
        dynamic_discriminator.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::LocalDiscriminator::DynamicDiscriminators::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dynamic_discriminator)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sbfd::LocalDiscriminator::DynamicDiscriminators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sbfd::LocalDiscriminator::DynamicDiscriminators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sbfd::LocalDiscriminator::DynamicDiscriminators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-discriminator")
        return true;
    return false;
}

Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::DynamicDiscriminator()
    :
    discriminator{YType::uint32, "discriminator"}
{

    yang_name = "dynamic-discriminator"; yang_parent_name = "dynamic-discriminators"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(discriminator.yfilter);
}

std::string Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/local-discriminator/dynamic-discriminators/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-discriminator" <<"[discriminator='" <<discriminator <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminator.is_set || is_set(discriminator.yfilter)) leaf_name_data.push_back(discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discriminator")
    {
        discriminator = value;
        discriminator.value_namespace = name_space;
        discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discriminator")
    {
        discriminator.yfilter = yfilter;
    }
}

bool Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discriminator")
        return true;
    return false;
}

Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminators()
{

    yang_name = "ipv4-discriminators"; yang_parent_name = "local-discriminator"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Sbfd::LocalDiscriminator::Ipv4Discriminators::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/local-discriminator/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::LocalDiscriminator::Ipv4Discriminators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-discriminators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::LocalDiscriminator::Ipv4Discriminators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::Ipv4Discriminators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-discriminator")
    {
        for(auto const & c : ipv4_discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator>();
        c->parent = this;
        ipv4_discriminator.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::LocalDiscriminator::Ipv4Discriminators::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_discriminator)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sbfd::LocalDiscriminator::Ipv4Discriminators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sbfd::LocalDiscriminator::Ipv4Discriminators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sbfd::LocalDiscriminator::Ipv4Discriminators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-discriminator")
        return true;
    return false;
}

Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::Ipv4Discriminator()
    :
    address{YType::str, "address"}
{

    yang_name = "ipv4-discriminator"; yang_parent_name = "ipv4-discriminators"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/local-discriminator/ipv4-discriminators/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-discriminator" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminators()
{

    yang_name = "val32-discriminators"; yang_parent_name = "local-discriminator"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Sbfd::LocalDiscriminator::Val32Discriminators::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/local-discriminator/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::LocalDiscriminator::Val32Discriminators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "val32-discriminators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::LocalDiscriminator::Val32Discriminators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::Val32Discriminators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "val32-discriminator")
    {
        for(auto const & c : val32_discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator>();
        c->parent = this;
        val32_discriminator.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::LocalDiscriminator::Val32Discriminators::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : val32_discriminator)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sbfd::LocalDiscriminator::Val32Discriminators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sbfd::LocalDiscriminator::Val32Discriminators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sbfd::LocalDiscriminator::Val32Discriminators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val32-discriminator")
        return true;
    return false;
}

Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::Val32Discriminator()
    :
    discriminator{YType::uint32, "discriminator"}
{

    yang_name = "val32-discriminator"; yang_parent_name = "val32-discriminators"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(discriminator.yfilter);
}

std::string Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-cfg:sbfd/local-discriminator/val32-discriminators/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "val32-discriminator" <<"[discriminator='" <<discriminator <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminator.is_set || is_set(discriminator.yfilter)) leaf_name_data.push_back(discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discriminator")
    {
        discriminator = value;
        discriminator.value_namespace = name_space;
        discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discriminator")
    {
        discriminator.yfilter = yfilter;
    }
}

bool Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discriminator")
        return true;
    return false;
}


}
}

