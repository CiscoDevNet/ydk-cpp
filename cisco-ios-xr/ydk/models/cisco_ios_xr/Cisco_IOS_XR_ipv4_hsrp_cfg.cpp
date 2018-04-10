
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_hsrp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_hsrp_cfg {

Hsrp::Hsrp()
    :
    interfaces(std::make_shared<Hsrp::Interfaces>())
	,logging(std::make_shared<Hsrp::Logging>())
{
    interfaces->parent = this;
    logging->parent = this;

    yang_name = "hsrp"; yang_parent_name = "Cisco-IOS-XR-ipv4-hsrp-cfg"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Hsrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-cfg:hsrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Hsrp::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Hsrp::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void Hsrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> Hsrp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Hsrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "logging")
        return true;
    return false;
}

Hsrp::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "hsrp"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-cfg:hsrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    mac_refresh{YType::uint32, "mac-refresh"},
    use_bia{YType::empty, "use-bia"},
    redirects_disable{YType::empty, "redirects-disable"}
    	,
    ipv6(std::make_shared<Hsrp::Interfaces::Interface::Ipv6>())
	,bfd(std::make_shared<Hsrp::Interfaces::Interface::Bfd>())
	,delay(nullptr) // presence node
	,ipv4(std::make_shared<Hsrp::Interfaces::Interface::Ipv4>())
{
    ipv6->parent = this;
    bfd->parent = this;
    ipv4->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Hsrp::Interfaces::Interface::~Interface()
{
}

bool Hsrp::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| mac_refresh.is_set
	|| use_bia.is_set
	|| redirects_disable.is_set
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Hsrp::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_refresh.yfilter)
	|| ydk::is_set(use_bia.yfilter)
	|| ydk::is_set(redirects_disable.yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Hsrp::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-cfg:hsrp/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_refresh.is_set || is_set(mac_refresh.yfilter)) leaf_name_data.push_back(mac_refresh.get_name_leafdata());
    if (use_bia.is_set || is_set(use_bia.yfilter)) leaf_name_data.push_back(use_bia.get_name_leafdata());
    if (redirects_disable.is_set || is_set(redirects_disable.yfilter)) leaf_name_data.push_back(redirects_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Hsrp::Interfaces::Interface::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Hsrp::Interfaces::Interface::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Hsrp::Interfaces::Interface::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Hsrp::Interfaces::Interface::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Hsrp::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh = value;
        mac_refresh.value_namespace = name_space;
        mac_refresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-bia")
    {
        use_bia = value;
        use_bia.value_namespace = name_space;
        use_bia.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects-disable")
    {
        redirects_disable = value;
        redirects_disable.value_namespace = name_space;
        redirects_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh.yfilter = yfilter;
    }
    if(value_path == "use-bia")
    {
        use_bia.yfilter = yfilter;
    }
    if(value_path == "redirects-disable")
    {
        redirects_disable.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "bfd" || name == "delay" || name == "ipv4" || name == "interface-name" || name == "mac-refresh" || name == "use-bia" || name == "redirects-disable")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::Ipv6()
    :
    version2(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2>())
	,slave_groups(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::SlaveGroups>())
{
    version2->parent = this;
    slave_groups->parent = this;

    yang_name = "ipv6"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Hsrp::Interfaces::Interface::Ipv6::~Ipv6()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::has_data() const
{
    return (version2 !=  nullptr && version2->has_data())
	|| (slave_groups !=  nullptr && slave_groups->has_data());
}

bool Hsrp::Interfaces::Interface::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (version2 !=  nullptr && version2->has_operation())
	|| (slave_groups !=  nullptr && slave_groups->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "version2")
    {
        if(version2 == nullptr)
        {
            version2 = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2>();
        }
        return version2;
    }

    if(child_yang_name == "slave-groups")
    {
        if(slave_groups == nullptr)
        {
            slave_groups = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::SlaveGroups>();
        }
        return slave_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(version2 != nullptr)
    {
        children["version2"] = version2;
    }

    if(slave_groups != nullptr)
    {
        children["slave-groups"] = slave_groups;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version2" || name == "slave-groups")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Version2()
    :
    groups(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups>())
{
    groups->parent = this;

    yang_name = "version2"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (groups !=  nullptr && groups->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::Version2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups>();
        }
        return groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::Version2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Groups()
{

    yang_name = "groups"; yang_parent_name = "version2"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Group()
    :
    group_number{YType::uint32, "group-number"},
    priority{YType::uint32, "priority"},
    preempt{YType::int32, "preempt"},
    session_name{YType::str, "session-name"},
    virtual_mac_address{YType::str, "virtual-mac-address"}
    	,
    bfd(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd>())
	,tracked_interfaces(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces>())
	,tracked_objects(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects>())
	,timers(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers>())
	,link_local_ipv6_address(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address>())
	,global_ipv6_addresses(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses>())
{
    bfd->parent = this;
    tracked_interfaces->parent = this;
    tracked_objects->parent = this;
    timers->parent = this;
    link_local_ipv6_address->parent = this;
    global_ipv6_addresses->parent = this;

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = true;
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::~Group()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::has_data() const
{
    return group_number.is_set
	|| priority.is_set
	|| preempt.is_set
	|| session_name.is_set
	|| virtual_mac_address.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_data())
	|| (tracked_objects !=  nullptr && tracked_objects->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_data())
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_data());
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(virtual_mac_address.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_operation())
	|| (tracked_objects !=  nullptr && tracked_objects->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_operation())
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-number='" <<group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.yfilter)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "tracked-interfaces")
    {
        if(tracked_interfaces == nullptr)
        {
            tracked_interfaces = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces>();
        }
        return tracked_interfaces;
    }

    if(child_yang_name == "tracked-objects")
    {
        if(tracked_objects == nullptr)
        {
            tracked_objects = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects>();
        }
        return tracked_objects;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "link-local-ipv6-address")
    {
        if(link_local_ipv6_address == nullptr)
        {
            link_local_ipv6_address = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address>();
        }
        return link_local_ipv6_address;
    }

    if(child_yang_name == "global-ipv6-addresses")
    {
        if(global_ipv6_addresses == nullptr)
        {
            global_ipv6_addresses = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses>();
        }
        return global_ipv6_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(tracked_interfaces != nullptr)
    {
        children["tracked-interfaces"] = tracked_interfaces;
    }

    if(tracked_objects != nullptr)
    {
        children["tracked-objects"] = tracked_objects;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(link_local_ipv6_address != nullptr)
    {
        children["link-local-ipv6-address"] = link_local_ipv6_address;
    }

    if(global_ipv6_addresses != nullptr)
    {
        children["global-ipv6-addresses"] = global_ipv6_addresses;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
        virtual_mac_address.value_namespace = name_space;
        virtual_mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "tracked-interfaces" || name == "tracked-objects" || name == "timers" || name == "link-local-ipv6-address" || name == "global-ipv6-addresses" || name == "group-number" || name == "priority" || name == "preempt" || name == "session-name" || name == "virtual-mac-address")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::Bfd()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "bfd"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "interface-name")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterfaces()
{

    yang_name = "tracked-interfaces"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracked-interface")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface>();
        c->parent = this;
        tracked_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tracked_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-interface")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::TrackedInterface()
    :
    interface_name{YType::str, "interface-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{

    yang_name = "tracked-interface"; yang_parent_name = "tracked-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(priority_decrement.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "priority-decrement")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObjects()
{

    yang_name = "tracked-objects"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracked-object")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject>();
        c->parent = this;
        tracked_object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tracked_object)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-object")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::TrackedObject()
    :
    object_name{YType::str, "object-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{

    yang_name = "tracked-object"; yang_parent_name = "tracked-objects"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(priority_decrement.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-object" <<"[object-name='" <<object_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "priority-decrement")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::Timers()
    :
    hello_msec_flag{YType::boolean, "hello-msec-flag"},
    hello_msec{YType::uint32, "hello-msec"},
    hello_sec{YType::uint32, "hello-sec"},
    hold_msec_flag{YType::boolean, "hold-msec-flag"},
    hold_msec{YType::uint32, "hold-msec"},
    hold_sec{YType::uint32, "hold-sec"}
{

    yang_name = "timers"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::~Timers()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::has_data() const
{
    return hello_msec_flag.is_set
	|| hello_msec.is_set
	|| hello_sec.is_set
	|| hold_msec_flag.is_set
	|| hold_msec.is_set
	|| hold_sec.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_msec_flag.yfilter)
	|| ydk::is_set(hello_msec.yfilter)
	|| ydk::is_set(hello_sec.yfilter)
	|| ydk::is_set(hold_msec_flag.yfilter)
	|| ydk::is_set(hold_msec.yfilter)
	|| ydk::is_set(hold_sec.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_msec_flag.is_set || is_set(hello_msec_flag.yfilter)) leaf_name_data.push_back(hello_msec_flag.get_name_leafdata());
    if (hello_msec.is_set || is_set(hello_msec.yfilter)) leaf_name_data.push_back(hello_msec.get_name_leafdata());
    if (hello_sec.is_set || is_set(hello_sec.yfilter)) leaf_name_data.push_back(hello_sec.get_name_leafdata());
    if (hold_msec_flag.is_set || is_set(hold_msec_flag.yfilter)) leaf_name_data.push_back(hold_msec_flag.get_name_leafdata());
    if (hold_msec.is_set || is_set(hold_msec.yfilter)) leaf_name_data.push_back(hold_msec.get_name_leafdata());
    if (hold_sec.is_set || is_set(hold_sec.yfilter)) leaf_name_data.push_back(hold_sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-msec-flag")
    {
        hello_msec_flag = value;
        hello_msec_flag.value_namespace = name_space;
        hello_msec_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-msec")
    {
        hello_msec = value;
        hello_msec.value_namespace = name_space;
        hello_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-sec")
    {
        hello_sec = value;
        hello_sec.value_namespace = name_space;
        hello_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-msec-flag")
    {
        hold_msec_flag = value;
        hold_msec_flag.value_namespace = name_space;
        hold_msec_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-msec")
    {
        hold_msec = value;
        hold_msec.value_namespace = name_space;
        hold_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-sec")
    {
        hold_sec = value;
        hold_sec.value_namespace = name_space;
        hold_sec.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-msec-flag")
    {
        hello_msec_flag.yfilter = yfilter;
    }
    if(value_path == "hello-msec")
    {
        hello_msec.yfilter = yfilter;
    }
    if(value_path == "hello-sec")
    {
        hello_sec.yfilter = yfilter;
    }
    if(value_path == "hold-msec-flag")
    {
        hold_msec_flag.yfilter = yfilter;
    }
    if(value_path == "hold-msec")
    {
        hold_msec.yfilter = yfilter;
    }
    if(value_path == "hold-sec")
    {
        hold_sec.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-msec-flag" || name == "hello-msec" || name == "hello-sec" || name == "hold-msec-flag" || name == "hold-msec" || name == "hold-sec")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::LinkLocalIpv6Address()
    :
    address{YType::str, "address"},
    auto_configure{YType::enumeration, "auto-configure"}
{

    yang_name = "link-local-ipv6-address"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(auto_configure.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (auto_configure.is_set || is_set(auto_configure.yfilter)) leaf_name_data.push_back(auto_configure.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-configure")
    {
        auto_configure = value;
        auto_configure.value_namespace = name_space;
        auto_configure.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "auto-configure")
    {
        auto_configure.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "auto-configure")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Addresses()
{

    yang_name = "global-ipv6-addresses"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-ipv6-address")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address>();
        c->parent = this;
        global_ipv6_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : global_ipv6_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-ipv6-address")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::GlobalIpv6Address()
    :
    address{YType::str, "address"}
{

    yang_name = "global-ipv6-address"; yang_parent_name = "global-ipv6-addresses"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroups()
{

    yang_name = "slave-groups"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-group")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup>();
        c->parent = this;
        slave_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : slave_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-group")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::SlaveGroup()
    :
    slave_group_number{YType::uint32, "slave-group-number"},
    follow{YType::str, "follow"},
    virtual_mac_address{YType::str, "virtual-mac-address"}
    	,
    link_local_ipv6_address(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address>())
	,global_ipv6_addresses(std::make_shared<Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses>())
{
    link_local_ipv6_address->parent = this;
    global_ipv6_addresses->parent = this;

    yang_name = "slave-group"; yang_parent_name = "slave-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::~SlaveGroup()
{
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::has_data() const
{
    return slave_group_number.is_set
	|| follow.is_set
	|| virtual_mac_address.is_set
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_data())
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_data());
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slave_group_number.yfilter)
	|| ydk::is_set(follow.yfilter)
	|| ydk::is_set(virtual_mac_address.yfilter)
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_operation())
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-group" <<"[slave-group-number='" <<slave_group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_group_number.is_set || is_set(slave_group_number.yfilter)) leaf_name_data.push_back(slave_group_number.get_name_leafdata());
    if (follow.is_set || is_set(follow.yfilter)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.yfilter)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-local-ipv6-address")
    {
        if(link_local_ipv6_address == nullptr)
        {
            link_local_ipv6_address = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address>();
        }
        return link_local_ipv6_address;
    }

    if(child_yang_name == "global-ipv6-addresses")
    {
        if(global_ipv6_addresses == nullptr)
        {
            global_ipv6_addresses = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses>();
        }
        return global_ipv6_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_local_ipv6_address != nullptr)
    {
        children["link-local-ipv6-address"] = link_local_ipv6_address;
    }

    if(global_ipv6_addresses != nullptr)
    {
        children["global-ipv6-addresses"] = global_ipv6_addresses;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slave-group-number")
    {
        slave_group_number = value;
        slave_group_number.value_namespace = name_space;
        slave_group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow")
    {
        follow = value;
        follow.value_namespace = name_space;
        follow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
        virtual_mac_address.value_namespace = name_space;
        virtual_mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slave-group-number")
    {
        slave_group_number.yfilter = yfilter;
    }
    if(value_path == "follow")
    {
        follow.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-local-ipv6-address" || name == "global-ipv6-addresses" || name == "slave-group-number" || name == "follow" || name == "virtual-mac-address")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::LinkLocalIpv6Address()
    :
    address{YType::str, "address"},
    auto_configure{YType::enumeration, "auto-configure"}
{

    yang_name = "link-local-ipv6-address"; yang_parent_name = "slave-group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(auto_configure.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (auto_configure.is_set || is_set(auto_configure.yfilter)) leaf_name_data.push_back(auto_configure.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-configure")
    {
        auto_configure = value;
        auto_configure.value_namespace = name_space;
        auto_configure.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "auto-configure")
    {
        auto_configure.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "auto-configure")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Addresses()
{

    yang_name = "global-ipv6-addresses"; yang_parent_name = "slave-group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-ipv6-address")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address>();
        c->parent = this;
        global_ipv6_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : global_ipv6_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-ipv6-address")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::GlobalIpv6Address()
    :
    address{YType::str, "address"}
{

    yang_name = "global-ipv6-address"; yang_parent_name = "global-ipv6-addresses"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Hsrp::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "interval")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Delay::Delay()
    :
    minimum_delay{YType::uint32, "minimum-delay"},
    reload_delay{YType::uint32, "reload-delay"}
{

    yang_name = "delay"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(minimum_delay.yfilter)
	|| ydk::is_set(reload_delay.yfilter);
}

std::string Hsrp::Interfaces::Interface::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_delay.is_set || is_set(minimum_delay.yfilter)) leaf_name_data.push_back(minimum_delay.get_name_leafdata());
    if (reload_delay.is_set || is_set(reload_delay.yfilter)) leaf_name_data.push_back(reload_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-delay")
    {
        minimum_delay = value;
        minimum_delay.value_namespace = name_space;
        minimum_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload-delay")
    {
        reload_delay = value;
        reload_delay.value_namespace = name_space;
        reload_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-delay")
    {
        minimum_delay.yfilter = yfilter;
    }
    if(value_path == "reload-delay")
    {
        reload_delay.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-delay" || name == "reload-delay")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Ipv4()
    :
    slave_groups(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::SlaveGroups>())
	,version1(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1>())
	,version2(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2>())
{
    slave_groups->parent = this;
    version1->parent = this;
    version2->parent = this;

    yang_name = "ipv4"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
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

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-groups")
    {
        if(slave_groups == nullptr)
        {
            slave_groups = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::SlaveGroups>();
        }
        return slave_groups;
    }

    if(child_yang_name == "version1")
    {
        if(version1 == nullptr)
        {
            version1 = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1>();
        }
        return version1;
    }

    if(child_yang_name == "version2")
    {
        if(version2 == nullptr)
        {
            version2 = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2>();
        }
        return version2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(slave_groups != nullptr)
    {
        children["slave-groups"] = slave_groups;
    }

    if(version1 != nullptr)
    {
        children["version1"] = version1;
    }

    if(version2 != nullptr)
    {
        children["version2"] = version2;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-groups" || name == "version1" || name == "version2")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroups()
{

    yang_name = "slave-groups"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-group")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup>();
        c->parent = this;
        slave_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : slave_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-group")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SlaveGroup()
    :
    slave_group_number{YType::uint32, "slave-group-number"},
    follow{YType::str, "follow"},
    virtual_mac_address{YType::str, "virtual-mac-address"},
    primary_ipv4_address{YType::str, "primary-ipv4-address"}
    	,
    secondary_ipv4_addresses(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses>())
{
    secondary_ipv4_addresses->parent = this;

    yang_name = "slave-group"; yang_parent_name = "slave-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::~SlaveGroup()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::has_data() const
{
    return slave_group_number.is_set
	|| follow.is_set
	|| virtual_mac_address.is_set
	|| primary_ipv4_address.is_set
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_data());
}

bool Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slave_group_number.yfilter)
	|| ydk::is_set(follow.yfilter)
	|| ydk::is_set(virtual_mac_address.yfilter)
	|| ydk::is_set(primary_ipv4_address.yfilter)
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-group" <<"[slave-group-number='" <<slave_group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_group_number.is_set || is_set(slave_group_number.yfilter)) leaf_name_data.push_back(slave_group_number.get_name_leafdata());
    if (follow.is_set || is_set(follow.yfilter)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.yfilter)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());
    if (primary_ipv4_address.is_set || is_set(primary_ipv4_address.yfilter)) leaf_name_data.push_back(primary_ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-ipv4-addresses")
    {
        if(secondary_ipv4_addresses == nullptr)
        {
            secondary_ipv4_addresses = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses>();
        }
        return secondary_ipv4_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(secondary_ipv4_addresses != nullptr)
    {
        children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slave-group-number")
    {
        slave_group_number = value;
        slave_group_number.value_namespace = name_space;
        slave_group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow")
    {
        follow = value;
        follow.value_namespace = name_space;
        follow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
        virtual_mac_address.value_namespace = name_space;
        virtual_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address = value;
        primary_ipv4_address.value_namespace = name_space;
        primary_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slave-group-number")
    {
        slave_group_number.yfilter = yfilter;
    }
    if(value_path == "follow")
    {
        follow.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address.yfilter = yfilter;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-ipv4-addresses" || name == "slave-group-number" || name == "follow" || name == "virtual-mac-address" || name == "primary-ipv4-address")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Addresses()
{

    yang_name = "secondary-ipv4-addresses"; yang_parent_name = "slave-group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-ipv4-address")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address>();
        c->parent = this;
        secondary_ipv4_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : secondary_ipv4_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-ipv4-address")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::SecondaryIpv4Address()
    :
    address{YType::str, "address"}
{

    yang_name = "secondary-ipv4-address"; yang_parent_name = "secondary-ipv4-addresses"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Version1()
    :
    groups(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups>())
{
    groups->parent = this;

    yang_name = "version1"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (groups !=  nullptr && groups->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups>();
        }
        return groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Groups()
{

    yang_name = "groups"; yang_parent_name = "version1"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Group()
    :
    group_number{YType::uint32, "group-number"},
    authentication{YType::str, "authentication"},
    session_name{YType::str, "session-name"},
    priority{YType::uint32, "priority"},
    preempt{YType::int32, "preempt"},
    virtual_mac_address{YType::str, "virtual-mac-address"}
    	,
    tracked_interfaces(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces>())
	,bfd(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd>())
	,tracked_objects(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects>())
	,timers(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers>())
	,primary_ipv4_address(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address>())
	,secondary_ipv4_addresses(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses>())
{
    tracked_interfaces->parent = this;
    bfd->parent = this;
    tracked_objects->parent = this;
    timers->parent = this;
    primary_ipv4_address->parent = this;
    secondary_ipv4_addresses->parent = this;

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = true;
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::~Group()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::has_data() const
{
    return group_number.is_set
	|| authentication.is_set
	|| session_name.is_set
	|| priority.is_set
	|| preempt.is_set
	|| virtual_mac_address.is_set
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (tracked_objects !=  nullptr && tracked_objects->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (primary_ipv4_address !=  nullptr && primary_ipv4_address->has_data())
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_data());
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(virtual_mac_address.yfilter)
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (tracked_objects !=  nullptr && tracked_objects->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (primary_ipv4_address !=  nullptr && primary_ipv4_address->has_operation())
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-number='" <<group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.yfilter)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracked-interfaces")
    {
        if(tracked_interfaces == nullptr)
        {
            tracked_interfaces = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces>();
        }
        return tracked_interfaces;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "tracked-objects")
    {
        if(tracked_objects == nullptr)
        {
            tracked_objects = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects>();
        }
        return tracked_objects;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "primary-ipv4-address")
    {
        if(primary_ipv4_address == nullptr)
        {
            primary_ipv4_address = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address>();
        }
        return primary_ipv4_address;
    }

    if(child_yang_name == "secondary-ipv4-addresses")
    {
        if(secondary_ipv4_addresses == nullptr)
        {
            secondary_ipv4_addresses = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses>();
        }
        return secondary_ipv4_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tracked_interfaces != nullptr)
    {
        children["tracked-interfaces"] = tracked_interfaces;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(tracked_objects != nullptr)
    {
        children["tracked-objects"] = tracked_objects;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(primary_ipv4_address != nullptr)
    {
        children["primary-ipv4-address"] = primary_ipv4_address;
    }

    if(secondary_ipv4_addresses != nullptr)
    {
        children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
        virtual_mac_address.value_namespace = name_space;
        virtual_mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-interfaces" || name == "bfd" || name == "tracked-objects" || name == "timers" || name == "primary-ipv4-address" || name == "secondary-ipv4-addresses" || name == "group-number" || name == "authentication" || name == "session-name" || name == "priority" || name == "preempt" || name == "virtual-mac-address")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterfaces()
{

    yang_name = "tracked-interfaces"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracked-interface")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface>();
        c->parent = this;
        tracked_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tracked_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-interface")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::TrackedInterface()
    :
    interface_name{YType::str, "interface-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{

    yang_name = "tracked-interface"; yang_parent_name = "tracked-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(priority_decrement.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "priority-decrement")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::Bfd()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "bfd"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "interface-name")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObjects()
{

    yang_name = "tracked-objects"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracked-object")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject>();
        c->parent = this;
        tracked_object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tracked_object)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-object")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::TrackedObject()
    :
    object_name{YType::str, "object-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{

    yang_name = "tracked-object"; yang_parent_name = "tracked-objects"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(priority_decrement.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-object" <<"[object-name='" <<object_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "priority-decrement")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::Timers()
    :
    hello_msec_flag{YType::boolean, "hello-msec-flag"},
    hello_msec{YType::uint32, "hello-msec"},
    hello_sec{YType::uint32, "hello-sec"},
    hold_msec_flag{YType::boolean, "hold-msec-flag"},
    hold_msec{YType::uint32, "hold-msec"},
    hold_sec{YType::uint32, "hold-sec"}
{

    yang_name = "timers"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::~Timers()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::has_data() const
{
    return hello_msec_flag.is_set
	|| hello_msec.is_set
	|| hello_sec.is_set
	|| hold_msec_flag.is_set
	|| hold_msec.is_set
	|| hold_sec.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_msec_flag.yfilter)
	|| ydk::is_set(hello_msec.yfilter)
	|| ydk::is_set(hello_sec.yfilter)
	|| ydk::is_set(hold_msec_flag.yfilter)
	|| ydk::is_set(hold_msec.yfilter)
	|| ydk::is_set(hold_sec.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_msec_flag.is_set || is_set(hello_msec_flag.yfilter)) leaf_name_data.push_back(hello_msec_flag.get_name_leafdata());
    if (hello_msec.is_set || is_set(hello_msec.yfilter)) leaf_name_data.push_back(hello_msec.get_name_leafdata());
    if (hello_sec.is_set || is_set(hello_sec.yfilter)) leaf_name_data.push_back(hello_sec.get_name_leafdata());
    if (hold_msec_flag.is_set || is_set(hold_msec_flag.yfilter)) leaf_name_data.push_back(hold_msec_flag.get_name_leafdata());
    if (hold_msec.is_set || is_set(hold_msec.yfilter)) leaf_name_data.push_back(hold_msec.get_name_leafdata());
    if (hold_sec.is_set || is_set(hold_sec.yfilter)) leaf_name_data.push_back(hold_sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-msec-flag")
    {
        hello_msec_flag = value;
        hello_msec_flag.value_namespace = name_space;
        hello_msec_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-msec")
    {
        hello_msec = value;
        hello_msec.value_namespace = name_space;
        hello_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-sec")
    {
        hello_sec = value;
        hello_sec.value_namespace = name_space;
        hello_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-msec-flag")
    {
        hold_msec_flag = value;
        hold_msec_flag.value_namespace = name_space;
        hold_msec_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-msec")
    {
        hold_msec = value;
        hold_msec.value_namespace = name_space;
        hold_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-sec")
    {
        hold_sec = value;
        hold_sec.value_namespace = name_space;
        hold_sec.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-msec-flag")
    {
        hello_msec_flag.yfilter = yfilter;
    }
    if(value_path == "hello-msec")
    {
        hello_msec.yfilter = yfilter;
    }
    if(value_path == "hello-sec")
    {
        hello_sec.yfilter = yfilter;
    }
    if(value_path == "hold-msec-flag")
    {
        hold_msec_flag.yfilter = yfilter;
    }
    if(value_path == "hold-msec")
    {
        hold_msec.yfilter = yfilter;
    }
    if(value_path == "hold-sec")
    {
        hold_sec.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-msec-flag" || name == "hello-msec" || name == "hello-sec" || name == "hold-msec-flag" || name == "hold-msec" || name == "hold-sec")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::PrimaryIpv4Address()
    :
    virtual_ip_learn{YType::boolean, "virtual-ip-learn"},
    address{YType::str, "address"}
{

    yang_name = "primary-ipv4-address"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::~PrimaryIpv4Address()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::has_data() const
{
    return virtual_ip_learn.is_set
	|| address.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_ip_learn.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-ipv4-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_ip_learn.is_set || is_set(virtual_ip_learn.yfilter)) leaf_name_data.push_back(virtual_ip_learn.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtual-ip-learn")
    {
        virtual_ip_learn = value;
        virtual_ip_learn.value_namespace = name_space;
        virtual_ip_learn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtual-ip-learn")
    {
        virtual_ip_learn.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-ip-learn" || name == "address")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Addresses()
{

    yang_name = "secondary-ipv4-addresses"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-ipv4-address")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address>();
        c->parent = this;
        secondary_ipv4_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : secondary_ipv4_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-ipv4-address")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::SecondaryIpv4Address()
    :
    address{YType::str, "address"}
{

    yang_name = "secondary-ipv4-address"; yang_parent_name = "secondary-ipv4-addresses"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Version2()
    :
    groups(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups>())
{
    groups->parent = this;

    yang_name = "version2"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (groups !=  nullptr && groups->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups>();
        }
        return groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Groups()
{

    yang_name = "groups"; yang_parent_name = "version2"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Group()
    :
    group_number{YType::uint32, "group-number"},
    preempt{YType::int32, "preempt"},
    priority{YType::uint32, "priority"},
    virtual_mac_address{YType::str, "virtual-mac-address"},
    session_name{YType::str, "session-name"}
    	,
    secondary_ipv4_addresses(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses>())
	,bfd(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd>())
	,primary_ipv4_address(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address>())
	,tracked_objects(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects>())
	,tracked_interfaces(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces>())
	,timers(std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers>())
{
    secondary_ipv4_addresses->parent = this;
    bfd->parent = this;
    primary_ipv4_address->parent = this;
    tracked_objects->parent = this;
    tracked_interfaces->parent = this;
    timers->parent = this;

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = true;
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::~Group()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::has_data() const
{
    return group_number.is_set
	|| preempt.is_set
	|| priority.is_set
	|| virtual_mac_address.is_set
	|| session_name.is_set
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (primary_ipv4_address !=  nullptr && primary_ipv4_address->has_data())
	|| (tracked_objects !=  nullptr && tracked_objects->has_data())
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(virtual_mac_address.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (primary_ipv4_address !=  nullptr && primary_ipv4_address->has_operation())
	|| (tracked_objects !=  nullptr && tracked_objects->has_operation())
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-number='" <<group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.yfilter)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-ipv4-addresses")
    {
        if(secondary_ipv4_addresses == nullptr)
        {
            secondary_ipv4_addresses = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses>();
        }
        return secondary_ipv4_addresses;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "primary-ipv4-address")
    {
        if(primary_ipv4_address == nullptr)
        {
            primary_ipv4_address = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address>();
        }
        return primary_ipv4_address;
    }

    if(child_yang_name == "tracked-objects")
    {
        if(tracked_objects == nullptr)
        {
            tracked_objects = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects>();
        }
        return tracked_objects;
    }

    if(child_yang_name == "tracked-interfaces")
    {
        if(tracked_interfaces == nullptr)
        {
            tracked_interfaces = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces>();
        }
        return tracked_interfaces;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(secondary_ipv4_addresses != nullptr)
    {
        children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(primary_ipv4_address != nullptr)
    {
        children["primary-ipv4-address"] = primary_ipv4_address;
    }

    if(tracked_objects != nullptr)
    {
        children["tracked-objects"] = tracked_objects;
    }

    if(tracked_interfaces != nullptr)
    {
        children["tracked-interfaces"] = tracked_interfaces;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
        virtual_mac_address.value_namespace = name_space;
        virtual_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-ipv4-addresses" || name == "bfd" || name == "primary-ipv4-address" || name == "tracked-objects" || name == "tracked-interfaces" || name == "timers" || name == "group-number" || name == "preempt" || name == "priority" || name == "virtual-mac-address" || name == "session-name")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Addresses()
{

    yang_name = "secondary-ipv4-addresses"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-ipv4-address")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address>();
        c->parent = this;
        secondary_ipv4_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : secondary_ipv4_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-ipv4-address")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::SecondaryIpv4Address()
    :
    address{YType::str, "address"}
{

    yang_name = "secondary-ipv4-address"; yang_parent_name = "secondary-ipv4-addresses"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::Bfd()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "bfd"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "interface-name")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::PrimaryIpv4Address()
    :
    virtual_ip_learn{YType::boolean, "virtual-ip-learn"},
    address{YType::str, "address"}
{

    yang_name = "primary-ipv4-address"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::~PrimaryIpv4Address()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::has_data() const
{
    return virtual_ip_learn.is_set
	|| address.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_ip_learn.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-ipv4-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_ip_learn.is_set || is_set(virtual_ip_learn.yfilter)) leaf_name_data.push_back(virtual_ip_learn.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtual-ip-learn")
    {
        virtual_ip_learn = value;
        virtual_ip_learn.value_namespace = name_space;
        virtual_ip_learn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtual-ip-learn")
    {
        virtual_ip_learn.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-ip-learn" || name == "address")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObjects()
{

    yang_name = "tracked-objects"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracked-object")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject>();
        c->parent = this;
        tracked_object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tracked_object)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-object")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::TrackedObject()
    :
    object_name{YType::str, "object-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{

    yang_name = "tracked-object"; yang_parent_name = "tracked-objects"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(priority_decrement.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-object" <<"[object-name='" <<object_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "priority-decrement")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterfaces()
{

    yang_name = "tracked-interfaces"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracked-interface")
    {
        auto c = std::make_shared<Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface>();
        c->parent = this;
        tracked_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tracked_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-interface")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::TrackedInterface()
    :
    interface_name{YType::str, "interface-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{

    yang_name = "tracked-interface"; yang_parent_name = "tracked-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(priority_decrement.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "priority-decrement")
        return true;
    return false;
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::Timers()
    :
    hello_msec_flag{YType::boolean, "hello-msec-flag"},
    hello_msec{YType::uint32, "hello-msec"},
    hello_sec{YType::uint32, "hello-sec"},
    hold_msec_flag{YType::boolean, "hold-msec-flag"},
    hold_msec{YType::uint32, "hold-msec"},
    hold_sec{YType::uint32, "hold-sec"}
{

    yang_name = "timers"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::~Timers()
{
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::has_data() const
{
    return hello_msec_flag.is_set
	|| hello_msec.is_set
	|| hello_sec.is_set
	|| hold_msec_flag.is_set
	|| hold_msec.is_set
	|| hold_sec.is_set;
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_msec_flag.yfilter)
	|| ydk::is_set(hello_msec.yfilter)
	|| ydk::is_set(hello_sec.yfilter)
	|| ydk::is_set(hold_msec_flag.yfilter)
	|| ydk::is_set(hold_msec.yfilter)
	|| ydk::is_set(hold_sec.yfilter);
}

std::string Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_msec_flag.is_set || is_set(hello_msec_flag.yfilter)) leaf_name_data.push_back(hello_msec_flag.get_name_leafdata());
    if (hello_msec.is_set || is_set(hello_msec.yfilter)) leaf_name_data.push_back(hello_msec.get_name_leafdata());
    if (hello_sec.is_set || is_set(hello_sec.yfilter)) leaf_name_data.push_back(hello_sec.get_name_leafdata());
    if (hold_msec_flag.is_set || is_set(hold_msec_flag.yfilter)) leaf_name_data.push_back(hold_msec_flag.get_name_leafdata());
    if (hold_msec.is_set || is_set(hold_msec.yfilter)) leaf_name_data.push_back(hold_msec.get_name_leafdata());
    if (hold_sec.is_set || is_set(hold_sec.yfilter)) leaf_name_data.push_back(hold_sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-msec-flag")
    {
        hello_msec_flag = value;
        hello_msec_flag.value_namespace = name_space;
        hello_msec_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-msec")
    {
        hello_msec = value;
        hello_msec.value_namespace = name_space;
        hello_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-sec")
    {
        hello_sec = value;
        hello_sec.value_namespace = name_space;
        hello_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-msec-flag")
    {
        hold_msec_flag = value;
        hold_msec_flag.value_namespace = name_space;
        hold_msec_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-msec")
    {
        hold_msec = value;
        hold_msec.value_namespace = name_space;
        hold_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-sec")
    {
        hold_sec = value;
        hold_sec.value_namespace = name_space;
        hold_sec.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-msec-flag")
    {
        hello_msec_flag.yfilter = yfilter;
    }
    if(value_path == "hello-msec")
    {
        hello_msec.yfilter = yfilter;
    }
    if(value_path == "hello-sec")
    {
        hello_sec.yfilter = yfilter;
    }
    if(value_path == "hold-msec-flag")
    {
        hold_msec_flag.yfilter = yfilter;
    }
    if(value_path == "hold-msec")
    {
        hold_msec.yfilter = yfilter;
    }
    if(value_path == "hold-sec")
    {
        hold_sec.yfilter = yfilter;
    }
}

bool Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-msec-flag" || name == "hello-msec" || name == "hello-sec" || name == "hold-msec-flag" || name == "hold-msec" || name == "hold-sec")
        return true;
    return false;
}

Hsrp::Logging::Logging()
    :
    state_change_disable{YType::empty, "state-change-disable"}
{

    yang_name = "logging"; yang_parent_name = "hsrp"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(state_change_disable.yfilter);
}

std::string Hsrp::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-cfg:hsrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state_change_disable.is_set || is_set(state_change_disable.yfilter)) leaf_name_data.push_back(state_change_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Hsrp::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hsrp::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Hsrp::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state-change-disable")
    {
        state_change_disable = value;
        state_change_disable.value_namespace = name_space;
        state_change_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state-change-disable")
    {
        state_change_disable.yfilter = yfilter;
    }
}

bool Hsrp::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-change-disable")
        return true;
    return false;
}

const Enum::YLeaf HsrpLinklocal::manual {0, "manual"};
const Enum::YLeaf HsrpLinklocal::auto_ {1, "auto"};
const Enum::YLeaf HsrpLinklocal::legacy {2, "legacy"};


}
}

