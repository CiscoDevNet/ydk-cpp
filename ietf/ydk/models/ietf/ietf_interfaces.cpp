
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_interfaces.hpp"

using namespace ydk;

namespace ietf {
namespace ietf_interfaces {

InterfaceType::InterfaceType()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-interfaces", "ietf-interfaces", "ietf-interfaces:interface-type")
{

}

InterfaceType::~InterfaceType()
{
}

Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "ietf-interfaces"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-interfaces:interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> Interfaces::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
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

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(link_up_down_trap_enable.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-interfaces:interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (link_up_down_trap_enable.is_set || is_set(link_up_down_trap_enable.yfilter)) leaf_name_data.push_back(link_up_down_trap_enable.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

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

void Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-up-down-trap-enable")
    {
        link_up_down_trap_enable = value;
        link_up_down_trap_enable.value_namespace = name_space;
        link_up_down_trap_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "link-up-down-trap-enable")
    {
        link_up_down_trap_enable.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffserv-target-entry" || name == "ipv4" || name == "ipv6" || name == "name" || name == "description" || name == "enabled" || name == "link-up-down-trap-enable" || name == "type")
        return true;
    return false;
}

Interfaces::Interface::DiffservTargetEntry::DiffservTargetEntry()
    :
    direction{YType::identityref, "direction"},
    policy_name{YType::str, "policy-name"}
{

    yang_name = "diffserv-target-entry"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string Interfaces::Interface::DiffservTargetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-target:diffserv-target-entry" <<"[direction='" <<direction <<"']" <<"[policy-name='" <<policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservTargetEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

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

void Interfaces::Interface::DiffservTargetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservTargetEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservTargetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "policy-name")
        return true;
    return false;
}

Interfaces::Interface::Ipv4::Ipv4()
    :
    enabled{YType::boolean, "enabled"},
    forwarding{YType::boolean, "forwarding"},
    mtu{YType::uint16, "mtu"}
{

    yang_name = "ipv4"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(forwarding.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Interfaces::Interface::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ip:ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

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

void Interfaces::Interface::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "neighbor" || name == "enabled" || name == "forwarding" || name == "mtu")
        return true;
    return false;
}

Interfaces::Interface::Ipv4::Address::Address()
    :
    ip{YType::str, "ip"},
    netmask{YType::str, "netmask"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "address"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Interfaces::Interface::Ipv4::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::Ipv4::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

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

void Interfaces::Interface::Ipv4::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv4::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv4::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "netmask" || name == "prefix-length")
        return true;
    return false;
}

Interfaces::Interface::Ipv4::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"}
{

    yang_name = "neighbor"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(link_layer_address.yfilter);
}

std::string Interfaces::Interface::Ipv4::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::Ipv4::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());

    return leaf_name_data;

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

void Interfaces::Interface::Ipv4::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv4::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv4::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "link-layer-address")
        return true;
    return false;
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

    yang_name = "ipv6"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(dup_addr_detect_transmits.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(forwarding.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (autoconf !=  nullptr && autoconf->has_operation())
	|| (ipv6_router_advertisements !=  nullptr && ipv6_router_advertisements->has_operation());
}

std::string Interfaces::Interface::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ip:ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dup_addr_detect_transmits.is_set || is_set(dup_addr_detect_transmits.yfilter)) leaf_name_data.push_back(dup_addr_detect_transmits.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

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

void Interfaces::Interface::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits = value;
        dup_addr_detect_transmits.value_namespace = name_space;
        dup_addr_detect_transmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "autoconf" || name == "ipv6-router-advertisements" || name == "neighbor" || name == "dup-addr-detect-transmits" || name == "enabled" || name == "forwarding" || name == "mtu")
        return true;
    return false;
}

Interfaces::Interface::Ipv6::Address::Address()
    :
    ip{YType::str, "ip"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Interfaces::Interface::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

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

void Interfaces::Interface::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "prefix-length")
        return true;
    return false;
}

Interfaces::Interface::Ipv6::Autoconf::Autoconf()
    :
    create_global_addresses{YType::boolean, "create-global-addresses"},
    create_temporary_addresses{YType::boolean, "create-temporary-addresses"},
    temporary_preferred_lifetime{YType::uint32, "temporary-preferred-lifetime"},
    temporary_valid_lifetime{YType::uint32, "temporary-valid-lifetime"}
{

    yang_name = "autoconf"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(create_global_addresses.yfilter)
	|| ydk::is_set(create_temporary_addresses.yfilter)
	|| ydk::is_set(temporary_preferred_lifetime.yfilter)
	|| ydk::is_set(temporary_valid_lifetime.yfilter);
}

std::string Interfaces::Interface::Ipv6::Autoconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::Ipv6::Autoconf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create_global_addresses.is_set || is_set(create_global_addresses.yfilter)) leaf_name_data.push_back(create_global_addresses.get_name_leafdata());
    if (create_temporary_addresses.is_set || is_set(create_temporary_addresses.yfilter)) leaf_name_data.push_back(create_temporary_addresses.get_name_leafdata());
    if (temporary_preferred_lifetime.is_set || is_set(temporary_preferred_lifetime.yfilter)) leaf_name_data.push_back(temporary_preferred_lifetime.get_name_leafdata());
    if (temporary_valid_lifetime.is_set || is_set(temporary_valid_lifetime.yfilter)) leaf_name_data.push_back(temporary_valid_lifetime.get_name_leafdata());

    return leaf_name_data;

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

void Interfaces::Interface::Ipv6::Autoconf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "create-global-addresses")
    {
        create_global_addresses = value;
        create_global_addresses.value_namespace = name_space;
        create_global_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create-temporary-addresses")
    {
        create_temporary_addresses = value;
        create_temporary_addresses.value_namespace = name_space;
        create_temporary_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temporary-preferred-lifetime")
    {
        temporary_preferred_lifetime = value;
        temporary_preferred_lifetime.value_namespace = name_space;
        temporary_preferred_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temporary-valid-lifetime")
    {
        temporary_valid_lifetime = value;
        temporary_valid_lifetime.value_namespace = name_space;
        temporary_valid_lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv6::Autoconf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "create-global-addresses")
    {
        create_global_addresses.yfilter = yfilter;
    }
    if(value_path == "create-temporary-addresses")
    {
        create_temporary_addresses.yfilter = yfilter;
    }
    if(value_path == "temporary-preferred-lifetime")
    {
        temporary_preferred_lifetime.yfilter = yfilter;
    }
    if(value_path == "temporary-valid-lifetime")
    {
        temporary_valid_lifetime.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv6::Autoconf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "create-global-addresses" || name == "create-temporary-addresses" || name == "temporary-preferred-lifetime" || name == "temporary-valid-lifetime")
        return true;
    return false;
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

    yang_name = "ipv6-router-advertisements"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(cur_hop_limit.yfilter)
	|| ydk::is_set(default_lifetime.yfilter)
	|| ydk::is_set(link_mtu.yfilter)
	|| ydk::is_set(managed_flag.yfilter)
	|| ydk::is_set(max_rtr_adv_interval.yfilter)
	|| ydk::is_set(min_rtr_adv_interval.yfilter)
	|| ydk::is_set(other_config_flag.yfilter)
	|| ydk::is_set(reachable_time.yfilter)
	|| ydk::is_set(retrans_timer.yfilter)
	|| ydk::is_set(send_advertisements.yfilter)
	|| (prefix_list !=  nullptr && prefix_list->has_operation());
}

std::string Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ipv6-unicast-routing:ipv6-router-advertisements";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cur_hop_limit.is_set || is_set(cur_hop_limit.yfilter)) leaf_name_data.push_back(cur_hop_limit.get_name_leafdata());
    if (default_lifetime.is_set || is_set(default_lifetime.yfilter)) leaf_name_data.push_back(default_lifetime.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.yfilter)) leaf_name_data.push_back(link_mtu.get_name_leafdata());
    if (managed_flag.is_set || is_set(managed_flag.yfilter)) leaf_name_data.push_back(managed_flag.get_name_leafdata());
    if (max_rtr_adv_interval.is_set || is_set(max_rtr_adv_interval.yfilter)) leaf_name_data.push_back(max_rtr_adv_interval.get_name_leafdata());
    if (min_rtr_adv_interval.is_set || is_set(min_rtr_adv_interval.yfilter)) leaf_name_data.push_back(min_rtr_adv_interval.get_name_leafdata());
    if (other_config_flag.is_set || is_set(other_config_flag.yfilter)) leaf_name_data.push_back(other_config_flag.get_name_leafdata());
    if (reachable_time.is_set || is_set(reachable_time.yfilter)) leaf_name_data.push_back(reachable_time.get_name_leafdata());
    if (retrans_timer.is_set || is_set(retrans_timer.yfilter)) leaf_name_data.push_back(retrans_timer.get_name_leafdata());
    if (send_advertisements.is_set || is_set(send_advertisements.yfilter)) leaf_name_data.push_back(send_advertisements.get_name_leafdata());

    return leaf_name_data;

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

void Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cur-hop-limit")
    {
        cur_hop_limit = value;
        cur_hop_limit.value_namespace = name_space;
        cur_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-lifetime")
    {
        default_lifetime = value;
        default_lifetime.value_namespace = name_space;
        default_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
        link_mtu.value_namespace = name_space;
        link_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managed-flag")
    {
        managed_flag = value;
        managed_flag.value_namespace = name_space;
        managed_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-rtr-adv-interval")
    {
        max_rtr_adv_interval = value;
        max_rtr_adv_interval.value_namespace = name_space;
        max_rtr_adv_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-rtr-adv-interval")
    {
        min_rtr_adv_interval = value;
        min_rtr_adv_interval.value_namespace = name_space;
        min_rtr_adv_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-config-flag")
    {
        other_config_flag = value;
        other_config_flag.value_namespace = name_space;
        other_config_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachable-time")
    {
        reachable_time = value;
        reachable_time.value_namespace = name_space;
        reachable_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retrans-timer")
    {
        retrans_timer = value;
        retrans_timer.value_namespace = name_space;
        retrans_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-advertisements")
    {
        send_advertisements = value;
        send_advertisements.value_namespace = name_space;
        send_advertisements.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cur-hop-limit")
    {
        cur_hop_limit.yfilter = yfilter;
    }
    if(value_path == "default-lifetime")
    {
        default_lifetime.yfilter = yfilter;
    }
    if(value_path == "link-mtu")
    {
        link_mtu.yfilter = yfilter;
    }
    if(value_path == "managed-flag")
    {
        managed_flag.yfilter = yfilter;
    }
    if(value_path == "max-rtr-adv-interval")
    {
        max_rtr_adv_interval.yfilter = yfilter;
    }
    if(value_path == "min-rtr-adv-interval")
    {
        min_rtr_adv_interval.yfilter = yfilter;
    }
    if(value_path == "other-config-flag")
    {
        other_config_flag.yfilter = yfilter;
    }
    if(value_path == "reachable-time")
    {
        reachable_time.yfilter = yfilter;
    }
    if(value_path == "retrans-timer")
    {
        retrans_timer.yfilter = yfilter;
    }
    if(value_path == "send-advertisements")
    {
        send_advertisements.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list" || name == "cur-hop-limit" || name == "default-lifetime" || name == "link-mtu" || name == "managed-flag" || name == "max-rtr-adv-interval" || name == "min-rtr-adv-interval" || name == "other-config-flag" || name == "reachable-time" || name == "retrans-timer" || name == "send-advertisements")
        return true;
    return false;
}

Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::PrefixList()
{

    yang_name = "prefix-list"; yang_parent_name = "ipv6-router-advertisements"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
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

    yang_name = "prefix"; yang_parent_name = "prefix-list"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(prefix_spec.yfilter)
	|| ydk::is_set(autonomous_flag.yfilter)
	|| ydk::is_set(no_advertise.yfilter)
	|| ydk::is_set(on_link_flag.yfilter)
	|| ydk::is_set(preferred_lifetime.yfilter)
	|| ydk::is_set(valid_lifetime.yfilter);
}

std::string Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix" <<"[prefix-spec='" <<prefix_spec <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_spec.is_set || is_set(prefix_spec.yfilter)) leaf_name_data.push_back(prefix_spec.get_name_leafdata());
    if (autonomous_flag.is_set || is_set(autonomous_flag.yfilter)) leaf_name_data.push_back(autonomous_flag.get_name_leafdata());
    if (no_advertise.is_set || is_set(no_advertise.yfilter)) leaf_name_data.push_back(no_advertise.get_name_leafdata());
    if (on_link_flag.is_set || is_set(on_link_flag.yfilter)) leaf_name_data.push_back(on_link_flag.get_name_leafdata());
    if (preferred_lifetime.is_set || is_set(preferred_lifetime.yfilter)) leaf_name_data.push_back(preferred_lifetime.get_name_leafdata());
    if (valid_lifetime.is_set || is_set(valid_lifetime.yfilter)) leaf_name_data.push_back(valid_lifetime.get_name_leafdata());

    return leaf_name_data;

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

void Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-spec")
    {
        prefix_spec = value;
        prefix_spec.value_namespace = name_space;
        prefix_spec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous-flag")
    {
        autonomous_flag = value;
        autonomous_flag.value_namespace = name_space;
        autonomous_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-advertise")
    {
        no_advertise = value;
        no_advertise.value_namespace = name_space;
        no_advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-link-flag")
    {
        on_link_flag = value;
        on_link_flag.value_namespace = name_space;
        on_link_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime = value;
        preferred_lifetime.value_namespace = name_space;
        preferred_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime = value;
        valid_lifetime.value_namespace = name_space;
        valid_lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-spec")
    {
        prefix_spec.yfilter = yfilter;
    }
    if(value_path == "autonomous-flag")
    {
        autonomous_flag.yfilter = yfilter;
    }
    if(value_path == "no-advertise")
    {
        no_advertise.yfilter = yfilter;
    }
    if(value_path == "on-link-flag")
    {
        on_link_flag.yfilter = yfilter;
    }
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime.yfilter = yfilter;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-spec" || name == "autonomous-flag" || name == "no-advertise" || name == "on-link-flag" || name == "preferred-lifetime" || name == "valid-lifetime")
        return true;
    return false;
}

Interfaces::Interface::Ipv6::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"}
{

    yang_name = "neighbor"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(link_layer_address.yfilter);
}

std::string Interfaces::Interface::Ipv6::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::Ipv6::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());

    return leaf_name_data;

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

void Interfaces::Interface::Ipv6::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv6::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv6::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "link-layer-address")
        return true;
    return false;
}

InterfacesState::InterfacesState()
{

    yang_name = "interfaces-state"; yang_parent_name = "ietf-interfaces"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string InterfacesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-interfaces:interfaces-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfacesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void InterfacesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfacesState::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> InterfacesState::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool InterfacesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
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
    ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
	,statistics(std::make_shared<InterfacesState::Interface::Statistics>())
{
    statistics->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces-state"; is_top_level_class = false; has_list_ancestor = false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : lower_layer_if.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(higher_layer_if.yfilter)
	|| ydk::is_set(if_index.yfilter)
	|| ydk::is_set(last_change.yfilter)
	|| ydk::is_set(lower_layer_if.yfilter)
	|| ydk::is_set(oper_status.yfilter)
	|| ydk::is_set(phys_address.yfilter)
	|| ydk::is_set(routing_instance.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string InterfacesState::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-interfaces:interfaces-state/" << get_segment_path();
    return path_buffer.str();
}

std::string InterfacesState::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfacesState::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (last_change.is_set || is_set(last_change.yfilter)) leaf_name_data.push_back(last_change.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.yfilter)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (phys_address.is_set || is_set(phys_address.yfilter)) leaf_name_data.push_back(phys_address.get_name_leafdata());
    if (routing_instance.is_set || is_set(routing_instance.yfilter)) leaf_name_data.push_back(routing_instance.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    auto higher_layer_if_name_datas = higher_layer_if.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), higher_layer_if_name_datas.begin(), higher_layer_if_name_datas.end());
    auto lower_layer_if_name_datas = lower_layer_if.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lower_layer_if_name_datas.begin(), lower_layer_if_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> InterfacesState::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

void InterfacesState::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "higher-layer-if")
    {
        higher_layer_if.append(value);
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-change")
    {
        last_change = value;
        last_change.value_namespace = name_space;
        last_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-layer-if")
    {
        lower_layer_if.append(value);
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
        oper_status.value_namespace = name_space;
        oper_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phys-address")
    {
        phys_address = value;
        phys_address.value_namespace = name_space;
        phys_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-instance")
    {
        routing_instance = value;
        routing_instance.value_namespace = name_space;
        routing_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "higher-layer-if")
    {
        higher_layer_if.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
    if(value_path == "last-change")
    {
        last_change.yfilter = yfilter;
    }
    if(value_path == "lower-layer-if")
    {
        lower_layer_if.yfilter = yfilter;
    }
    if(value_path == "oper-status")
    {
        oper_status.yfilter = yfilter;
    }
    if(value_path == "phys-address")
    {
        phys_address.yfilter = yfilter;
    }
    if(value_path == "routing-instance")
    {
        routing_instance.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffserv-target-entry" || name == "ipv4" || name == "ipv6" || name == "statistics" || name == "name" || name == "admin-status" || name == "higher-layer-if" || name == "if-index" || name == "last-change" || name == "lower-layer-if" || name == "oper-status" || name == "phys-address" || name == "routing-instance" || name == "speed" || name == "type")
        return true;
    return false;
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetEntry()
    :
    direction{YType::identityref, "direction"},
    policy_name{YType::str, "policy-name"}
{

    yang_name = "diffserv-target-entry"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string InterfacesState::Interface::DiffservTargetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-target:diffserv-target-entry" <<"[direction='" <<direction <<"']" <<"[policy-name='" <<policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfacesState::Interface::DiffservTargetEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

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

void InterfacesState::Interface::DiffservTargetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::DiffservTargetEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::DiffservTargetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffserv-target-classifier-statistics" || name == "direction" || name == "policy-name")
        return true;
    return false;
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

    yang_name = "diffserv-target-classifier-statistics"; yang_parent_name = "diffserv-target-entry"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(classifier_entry_name.yfilter)
	|| ydk::is_set(parent_path.yfilter)
	|| (classifier_entry_statistics !=  nullptr && classifier_entry_statistics->has_operation())
	|| (queuing_statistics !=  nullptr && queuing_statistics->has_operation());
}

std::string InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffserv-target-classifier-statistics" <<"[classifier-entry-name='" <<classifier_entry_name <<"']" <<"[parent-path='" <<parent_path <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classifier_entry_name.is_set || is_set(classifier_entry_name.yfilter)) leaf_name_data.push_back(classifier_entry_name.get_name_leafdata());
    if (parent_path.is_set || is_set(parent_path.yfilter)) leaf_name_data.push_back(parent_path.get_name_leafdata());

    return leaf_name_data;

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

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classifier-entry-name")
    {
        classifier_entry_name = value;
        classifier_entry_name.value_namespace = name_space;
        classifier_entry_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-path")
    {
        parent_path = value;
        parent_path.value_namespace = name_space;
        parent_path.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classifier-entry-name")
    {
        classifier_entry_name.yfilter = yfilter;
    }
    if(value_path == "parent-path")
    {
        parent_path.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classifier-entry-statistics" || name == "meter-statistics" || name == "queuing-statistics" || name == "classifier-entry-name" || name == "parent-path")
        return true;
    return false;
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::ClassifierEntryStatistics()
    :
    classified_bytes{YType::uint64, "classified-bytes"},
    classified_pkts{YType::uint64, "classified-pkts"},
    classified_rate{YType::uint64, "classified-rate"}
{

    yang_name = "classifier-entry-statistics"; yang_parent_name = "diffserv-target-classifier-statistics"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(classified_bytes.yfilter)
	|| ydk::is_set(classified_pkts.yfilter)
	|| ydk::is_set(classified_rate.yfilter);
}

std::string InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classifier-entry-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classified_bytes.is_set || is_set(classified_bytes.yfilter)) leaf_name_data.push_back(classified_bytes.get_name_leafdata());
    if (classified_pkts.is_set || is_set(classified_pkts.yfilter)) leaf_name_data.push_back(classified_pkts.get_name_leafdata());
    if (classified_rate.is_set || is_set(classified_rate.yfilter)) leaf_name_data.push_back(classified_rate.get_name_leafdata());

    return leaf_name_data;

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

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classified-bytes")
    {
        classified_bytes = value;
        classified_bytes.value_namespace = name_space;
        classified_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classified-pkts")
    {
        classified_pkts = value;
        classified_pkts.value_namespace = name_space;
        classified_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classified-rate")
    {
        classified_rate = value;
        classified_rate.value_namespace = name_space;
        classified_rate.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classified-bytes")
    {
        classified_bytes.yfilter = yfilter;
    }
    if(value_path == "classified-pkts")
    {
        classified_pkts.yfilter = yfilter;
    }
    if(value_path == "classified-rate")
    {
        classified_rate.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classified-bytes" || name == "classified-pkts" || name == "classified-rate")
        return true;
    return false;
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::MeterStatistics()
    :
    meter_id{YType::uint16, "meter-id"},
    meter_failed_bytes{YType::uint64, "meter-failed-bytes"},
    meter_failed_pkts{YType::uint64, "meter-failed-pkts"},
    meter_succeed_bytes{YType::uint64, "meter-succeed-bytes"},
    meter_succeed_pkts{YType::uint64, "meter-succeed-pkts"}
{

    yang_name = "meter-statistics"; yang_parent_name = "diffserv-target-classifier-statistics"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(meter_id.yfilter)
	|| ydk::is_set(meter_failed_bytes.yfilter)
	|| ydk::is_set(meter_failed_pkts.yfilter)
	|| ydk::is_set(meter_succeed_bytes.yfilter)
	|| ydk::is_set(meter_succeed_pkts.yfilter);
}

std::string InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "meter-statistics" <<"[meter-id='" <<meter_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (meter_id.is_set || is_set(meter_id.yfilter)) leaf_name_data.push_back(meter_id.get_name_leafdata());
    if (meter_failed_bytes.is_set || is_set(meter_failed_bytes.yfilter)) leaf_name_data.push_back(meter_failed_bytes.get_name_leafdata());
    if (meter_failed_pkts.is_set || is_set(meter_failed_pkts.yfilter)) leaf_name_data.push_back(meter_failed_pkts.get_name_leafdata());
    if (meter_succeed_bytes.is_set || is_set(meter_succeed_bytes.yfilter)) leaf_name_data.push_back(meter_succeed_bytes.get_name_leafdata());
    if (meter_succeed_pkts.is_set || is_set(meter_succeed_pkts.yfilter)) leaf_name_data.push_back(meter_succeed_pkts.get_name_leafdata());

    return leaf_name_data;

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

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "meter-id")
    {
        meter_id = value;
        meter_id.value_namespace = name_space;
        meter_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-failed-bytes")
    {
        meter_failed_bytes = value;
        meter_failed_bytes.value_namespace = name_space;
        meter_failed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-failed-pkts")
    {
        meter_failed_pkts = value;
        meter_failed_pkts.value_namespace = name_space;
        meter_failed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-succeed-bytes")
    {
        meter_succeed_bytes = value;
        meter_succeed_bytes.value_namespace = name_space;
        meter_succeed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-succeed-pkts")
    {
        meter_succeed_pkts = value;
        meter_succeed_pkts.value_namespace = name_space;
        meter_succeed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "meter-id")
    {
        meter_id.yfilter = yfilter;
    }
    if(value_path == "meter-failed-bytes")
    {
        meter_failed_bytes.yfilter = yfilter;
    }
    if(value_path == "meter-failed-pkts")
    {
        meter_failed_pkts.yfilter = yfilter;
    }
    if(value_path == "meter-succeed-bytes")
    {
        meter_succeed_bytes.yfilter = yfilter;
    }
    if(value_path == "meter-succeed-pkts")
    {
        meter_succeed_pkts.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "meter-id" || name == "meter-failed-bytes" || name == "meter-failed-pkts" || name == "meter-succeed-bytes" || name == "meter-succeed-pkts")
        return true;
    return false;
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

    yang_name = "queuing-statistics"; yang_parent_name = "diffserv-target-classifier-statistics"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(drop_bytes.yfilter)
	|| ydk::is_set(drop_pkts.yfilter)
	|| ydk::is_set(output_bytes.yfilter)
	|| ydk::is_set(output_pkts.yfilter)
	|| ydk::is_set(queue_size_bytes.yfilter)
	|| ydk::is_set(queue_size_pkts.yfilter)
	|| (wred_stats !=  nullptr && wred_stats->has_operation());
}

std::string InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queuing-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_bytes.is_set || is_set(drop_bytes.yfilter)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_pkts.is_set || is_set(drop_pkts.yfilter)) leaf_name_data.push_back(drop_pkts.get_name_leafdata());
    if (output_bytes.is_set || is_set(output_bytes.yfilter)) leaf_name_data.push_back(output_bytes.get_name_leafdata());
    if (output_pkts.is_set || is_set(output_pkts.yfilter)) leaf_name_data.push_back(output_pkts.get_name_leafdata());
    if (queue_size_bytes.is_set || is_set(queue_size_bytes.yfilter)) leaf_name_data.push_back(queue_size_bytes.get_name_leafdata());
    if (queue_size_pkts.is_set || is_set(queue_size_pkts.yfilter)) leaf_name_data.push_back(queue_size_pkts.get_name_leafdata());

    return leaf_name_data;

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

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
        drop_bytes.value_namespace = name_space;
        drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-pkts")
    {
        drop_pkts = value;
        drop_pkts.value_namespace = name_space;
        drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-bytes")
    {
        output_bytes = value;
        output_bytes.value_namespace = name_space;
        output_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-pkts")
    {
        output_pkts = value;
        output_pkts.value_namespace = name_space;
        output_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes = value;
        queue_size_bytes.value_namespace = name_space;
        queue_size_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-pkts")
    {
        queue_size_pkts = value;
        queue_size_pkts.value_namespace = name_space;
        queue_size_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop-bytes")
    {
        drop_bytes.yfilter = yfilter;
    }
    if(value_path == "drop-pkts")
    {
        drop_pkts.yfilter = yfilter;
    }
    if(value_path == "output-bytes")
    {
        output_bytes.yfilter = yfilter;
    }
    if(value_path == "output-pkts")
    {
        output_pkts.yfilter = yfilter;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes.yfilter = yfilter;
    }
    if(value_path == "queue-size-pkts")
    {
        queue_size_pkts.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-stats" || name == "drop-bytes" || name == "drop-pkts" || name == "output-bytes" || name == "output-pkts" || name == "queue-size-bytes" || name == "queue-size-pkts")
        return true;
    return false;
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::WredStats()
    :
    early_drop_bytes{YType::uint64, "early-drop-bytes"},
    early_drop_pkts{YType::uint64, "early-drop-pkts"}
{

    yang_name = "wred-stats"; yang_parent_name = "queuing-statistics"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(early_drop_bytes.yfilter)
	|| ydk::is_set(early_drop_pkts.yfilter);
}

std::string InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (early_drop_bytes.is_set || is_set(early_drop_bytes.yfilter)) leaf_name_data.push_back(early_drop_bytes.get_name_leafdata());
    if (early_drop_pkts.is_set || is_set(early_drop_pkts.yfilter)) leaf_name_data.push_back(early_drop_pkts.get_name_leafdata());

    return leaf_name_data;

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

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "early-drop-bytes")
    {
        early_drop_bytes = value;
        early_drop_bytes.value_namespace = name_space;
        early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "early-drop-pkts")
    {
        early_drop_pkts = value;
        early_drop_pkts.value_namespace = name_space;
        early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "early-drop-bytes")
    {
        early_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "early-drop-pkts")
    {
        early_drop_pkts.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "early-drop-bytes" || name == "early-drop-pkts")
        return true;
    return false;
}

InterfacesState::Interface::Ipv4::Ipv4()
    :
    forwarding{YType::boolean, "forwarding"},
    mtu{YType::uint16, "mtu"}
{

    yang_name = "ipv4"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string InterfacesState::Interface::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ip:ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfacesState::Interface::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

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

void InterfacesState::Interface::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "neighbor" || name == "forwarding" || name == "mtu")
        return true;
    return false;
}

InterfacesState::Interface::Ipv4::Address::Address()
    :
    ip{YType::str, "ip"},
    netmask{YType::str, "netmask"},
    origin{YType::enumeration, "origin"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "address"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string InterfacesState::Interface::Ipv4::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfacesState::Interface::Ipv4::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

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

void InterfacesState::Interface::Ipv4::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Ipv4::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Ipv4::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "netmask" || name == "origin" || name == "prefix-length")
        return true;
    return false;
}

InterfacesState::Interface::Ipv4::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"},
    origin{YType::enumeration, "origin"}
{

    yang_name = "neighbor"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(link_layer_address.yfilter)
	|| ydk::is_set(origin.yfilter);
}

std::string InterfacesState::Interface::Ipv4::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfacesState::Interface::Ipv4::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());

    return leaf_name_data;

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

void InterfacesState::Interface::Ipv4::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Ipv4::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Ipv4::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "link-layer-address" || name == "origin")
        return true;
    return false;
}

InterfacesState::Interface::Ipv6::Ipv6()
    :
    forwarding{YType::boolean, "forwarding"},
    mtu{YType::uint32, "mtu"}
{

    yang_name = "ipv6"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string InterfacesState::Interface::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ip:ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfacesState::Interface::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

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

void InterfacesState::Interface::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "neighbor" || name == "forwarding" || name == "mtu")
        return true;
    return false;
}

InterfacesState::Interface::Ipv6::Address::Address()
    :
    ip{YType::str, "ip"},
    origin{YType::enumeration, "origin"},
    prefix_length{YType::uint8, "prefix-length"},
    status{YType::enumeration, "status"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string InterfacesState::Interface::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfacesState::Interface::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

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

void InterfacesState::Interface::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "origin" || name == "prefix-length" || name == "status")
        return true;
    return false;
}

InterfacesState::Interface::Ipv6::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"},
    is_router{YType::empty, "is-router"},
    link_layer_address{YType::str, "link-layer-address"},
    origin{YType::enumeration, "origin"},
    state{YType::enumeration, "state"}
{

    yang_name = "neighbor"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(is_router.yfilter)
	|| ydk::is_set(link_layer_address.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string InterfacesState::Interface::Ipv6::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfacesState::Interface::Ipv6::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (is_router.is_set || is_set(is_router.yfilter)) leaf_name_data.push_back(is_router.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

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

void InterfacesState::Interface::Ipv6::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-router")
    {
        is_router = value;
        is_router.value_namespace = name_space;
        is_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Ipv6::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "is-router")
    {
        is_router.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Ipv6::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "is-router" || name == "link-layer-address" || name == "origin" || name == "state")
        return true;
    return false;
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

    yang_name = "statistics"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(discontinuity_time.yfilter)
	|| ydk::is_set(in_broadcast_pkts.yfilter)
	|| ydk::is_set(in_discards.yfilter)
	|| ydk::is_set(in_errors.yfilter)
	|| ydk::is_set(in_multicast_pkts.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(in_pkts.yfilter)
	|| ydk::is_set(in_unicast_pkts.yfilter)
	|| ydk::is_set(in_unknown_protos.yfilter)
	|| ydk::is_set(out_broadcast_pkts.yfilter)
	|| ydk::is_set(out_discards.yfilter)
	|| ydk::is_set(out_errors.yfilter)
	|| ydk::is_set(out_multicast_pkts.yfilter)
	|| ydk::is_set(out_octets.yfilter)
	|| ydk::is_set(out_pkts.yfilter)
	|| ydk::is_set(out_unicast_pkts.yfilter);
}

std::string InterfacesState::Interface::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfacesState::Interface::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discontinuity_time.is_set || is_set(discontinuity_time.yfilter)) leaf_name_data.push_back(discontinuity_time.get_name_leafdata());
    if (in_broadcast_pkts.is_set || is_set(in_broadcast_pkts.yfilter)) leaf_name_data.push_back(in_broadcast_pkts.get_name_leafdata());
    if (in_discards.is_set || is_set(in_discards.yfilter)) leaf_name_data.push_back(in_discards.get_name_leafdata());
    if (in_errors.is_set || is_set(in_errors.yfilter)) leaf_name_data.push_back(in_errors.get_name_leafdata());
    if (in_multicast_pkts.is_set || is_set(in_multicast_pkts.yfilter)) leaf_name_data.push_back(in_multicast_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_pkts.is_set || is_set(in_pkts.yfilter)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (in_unicast_pkts.is_set || is_set(in_unicast_pkts.yfilter)) leaf_name_data.push_back(in_unicast_pkts.get_name_leafdata());
    if (in_unknown_protos.is_set || is_set(in_unknown_protos.yfilter)) leaf_name_data.push_back(in_unknown_protos.get_name_leafdata());
    if (out_broadcast_pkts.is_set || is_set(out_broadcast_pkts.yfilter)) leaf_name_data.push_back(out_broadcast_pkts.get_name_leafdata());
    if (out_discards.is_set || is_set(out_discards.yfilter)) leaf_name_data.push_back(out_discards.get_name_leafdata());
    if (out_errors.is_set || is_set(out_errors.yfilter)) leaf_name_data.push_back(out_errors.get_name_leafdata());
    if (out_multicast_pkts.is_set || is_set(out_multicast_pkts.yfilter)) leaf_name_data.push_back(out_multicast_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.yfilter)) leaf_name_data.push_back(out_pkts.get_name_leafdata());
    if (out_unicast_pkts.is_set || is_set(out_unicast_pkts.yfilter)) leaf_name_data.push_back(out_unicast_pkts.get_name_leafdata());

    return leaf_name_data;

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

void InterfacesState::Interface::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discontinuity-time")
    {
        discontinuity_time = value;
        discontinuity_time.value_namespace = name_space;
        discontinuity_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts = value;
        in_broadcast_pkts.value_namespace = name_space;
        in_broadcast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-discards")
    {
        in_discards = value;
        in_discards.value_namespace = name_space;
        in_discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-errors")
    {
        in_errors = value;
        in_errors.value_namespace = name_space;
        in_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts = value;
        in_multicast_pkts.value_namespace = name_space;
        in_multicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts")
    {
        in_pkts = value;
        in_pkts.value_namespace = name_space;
        in_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-unicast-pkts")
    {
        in_unicast_pkts = value;
        in_unicast_pkts.value_namespace = name_space;
        in_unicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-unknown-protos")
    {
        in_unknown_protos = value;
        in_unknown_protos.value_namespace = name_space;
        in_unknown_protos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts = value;
        out_broadcast_pkts.value_namespace = name_space;
        out_broadcast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-discards")
    {
        out_discards = value;
        out_discards.value_namespace = name_space;
        out_discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-errors")
    {
        out_errors = value;
        out_errors.value_namespace = name_space;
        out_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts = value;
        out_multicast_pkts.value_namespace = name_space;
        out_multicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
        out_pkts.value_namespace = name_space;
        out_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-unicast-pkts")
    {
        out_unicast_pkts = value;
        out_unicast_pkts.value_namespace = name_space;
        out_unicast_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discontinuity-time")
    {
        discontinuity_time.yfilter = yfilter;
    }
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-discards")
    {
        in_discards.yfilter = yfilter;
    }
    if(value_path == "in-errors")
    {
        in_errors.yfilter = yfilter;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "in-pkts")
    {
        in_pkts.yfilter = yfilter;
    }
    if(value_path == "in-unicast-pkts")
    {
        in_unicast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-unknown-protos")
    {
        in_unknown_protos.yfilter = yfilter;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-discards")
    {
        out_discards.yfilter = yfilter;
    }
    if(value_path == "out-errors")
    {
        out_errors.yfilter = yfilter;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
    if(value_path == "out-pkts")
    {
        out_pkts.yfilter = yfilter;
    }
    if(value_path == "out-unicast-pkts")
    {
        out_unicast_pkts.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discontinuity-time" || name == "in-broadcast-pkts" || name == "in-discards" || name == "in-errors" || name == "in-multicast-pkts" || name == "in-octets" || name == "in-pkts" || name == "in-unicast-pkts" || name == "in-unknown-protos" || name == "out-broadcast-pkts" || name == "out-discards" || name == "out-errors" || name == "out-multicast-pkts" || name == "out-octets" || name == "out-pkts" || name == "out-unicast-pkts")
        return true;
    return false;
}

const Enum::YLeaf Interfaces::Interface::LinkUpDownTrapEnable::enabled {1, "enabled"};
const Enum::YLeaf Interfaces::Interface::LinkUpDownTrapEnable::disabled {2, "disabled"};

const Enum::YLeaf InterfacesState::Interface::AdminStatus::up {1, "up"};
const Enum::YLeaf InterfacesState::Interface::AdminStatus::down {2, "down"};
const Enum::YLeaf InterfacesState::Interface::AdminStatus::testing {3, "testing"};

const Enum::YLeaf InterfacesState::Interface::OperStatus::up {1, "up"};
const Enum::YLeaf InterfacesState::Interface::OperStatus::down {2, "down"};
const Enum::YLeaf InterfacesState::Interface::OperStatus::testing {3, "testing"};
const Enum::YLeaf InterfacesState::Interface::OperStatus::unknown {4, "unknown"};
const Enum::YLeaf InterfacesState::Interface::OperStatus::dormant {5, "dormant"};
const Enum::YLeaf InterfacesState::Interface::OperStatus::not_present {6, "not-present"};
const Enum::YLeaf InterfacesState::Interface::OperStatus::lower_layer_down {7, "lower-layer-down"};

const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::Status::preferred {0, "preferred"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::Status::deprecated {1, "deprecated"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::Status::invalid {2, "invalid"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::Status::inaccessible {3, "inaccessible"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::Status::unknown {4, "unknown"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::Status::tentative {5, "tentative"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::Status::duplicate {6, "duplicate"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::Status::optimistic {7, "optimistic"};

const Enum::YLeaf InterfacesState::Interface::Ipv6::Neighbor::State::incomplete {0, "incomplete"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Neighbor::State::reachable {1, "reachable"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Neighbor::State::stale {2, "stale"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Neighbor::State::delay {3, "delay"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Neighbor::State::probe {4, "probe"};


}
}

