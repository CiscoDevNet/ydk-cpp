
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_vrrp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_vrrp_cfg {

Vrrp::Vrrp()
    :
    interfaces(std::make_shared<Vrrp::Interfaces>())
	,logging(std::make_shared<Vrrp::Logging>())
{
    interfaces->parent = this;
    logging->parent = this;

    yang_name = "vrrp"; yang_parent_name = "Cisco-IOS-XR-ipv4-vrrp-cfg"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Vrrp::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Vrrp::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Vrrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> Vrrp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Vrrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "logging")
        return true;
    return false;
}

Vrrp::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Vrrp::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    mac_refresh{YType::uint32, "mac-refresh"}
    	,
    bfd(std::make_shared<Vrrp::Interfaces::Interface::Bfd>())
	,delay(nullptr) // presence node
	,ipv4(std::make_shared<Vrrp::Interfaces::Interface::Ipv4>())
	,ipv6(std::make_shared<Vrrp::Interfaces::Interface::Ipv6>())
{
    bfd->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_refresh.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Vrrp::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_refresh.is_set || is_set(mac_refresh.yfilter)) leaf_name_data.push_back(mac_refresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Vrrp::Interfaces::Interface::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Vrrp::Interfaces::Interface::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Vrrp::Interfaces::Interface::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Vrrp::Interfaces::Interface::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Vrrp::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Vrrp::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "delay" || name == "ipv4" || name == "ipv6" || name == "interface-name" || name == "mac-refresh")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Vrrp::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Vrrp::Interfaces::Interface::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Vrrp::Interfaces::Interface::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "interval")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Delay::Delay()
    :
    min_delay{YType::uint32, "min-delay"},
    reload_delay{YType::uint32, "reload-delay"}
{

    yang_name = "delay"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(min_delay.yfilter)
	|| ydk::is_set(reload_delay.yfilter);
}

std::string Vrrp::Interfaces::Interface::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_delay.is_set || is_set(min_delay.yfilter)) leaf_name_data.push_back(min_delay.get_name_leafdata());
    if (reload_delay.is_set || is_set(reload_delay.yfilter)) leaf_name_data.push_back(reload_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-delay")
    {
        min_delay = value;
        min_delay.value_namespace = name_space;
        min_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload-delay")
    {
        reload_delay = value;
        reload_delay.value_namespace = name_space;
        reload_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-delay")
    {
        min_delay.yfilter = yfilter;
    }
    if(value_path == "reload-delay")
    {
        reload_delay.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-delay" || name == "reload-delay")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Ipv4()
    :
    slave_virtual_routers(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters>())
	,version2(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2>())
	,version3(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3>())
{
    slave_virtual_routers->parent = this;
    version2->parent = this;
    version3->parent = this;

    yang_name = "ipv4"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
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

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-virtual-routers")
    {
        if(slave_virtual_routers == nullptr)
        {
            slave_virtual_routers = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters>();
        }
        return slave_virtual_routers;
    }

    if(child_yang_name == "version2")
    {
        if(version2 == nullptr)
        {
            version2 = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2>();
        }
        return version2;
    }

    if(child_yang_name == "version3")
    {
        if(version3 == nullptr)
        {
            version3 = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3>();
        }
        return version3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(slave_virtual_routers != nullptr)
    {
        children["slave-virtual-routers"] = slave_virtual_routers;
    }

    if(version2 != nullptr)
    {
        children["version2"] = version2;
    }

    if(version3 != nullptr)
    {
        children["version3"] = version3;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-virtual-routers" || name == "version2" || name == "version3")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouters()
{

    yang_name = "slave-virtual-routers"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-virtual-routers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-virtual-router")
    {
        for(auto const & c : slave_virtual_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter>();
        c->parent = this;
        slave_virtual_router.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slave_virtual_router)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-virtual-router")
        return true;
    return false;
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

    yang_name = "slave-virtual-router"; yang_parent_name = "slave-virtual-routers"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(slave_virtual_router_id.yfilter)
	|| ydk::is_set(accept_mode_disable.yfilter)
	|| ydk::is_set(follow.yfilter)
	|| ydk::is_set(primary_ipv4_address.yfilter)
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-virtual-router" <<"[slave-virtual-router-id='" <<slave_virtual_router_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_virtual_router_id.is_set || is_set(slave_virtual_router_id.yfilter)) leaf_name_data.push_back(slave_virtual_router_id.get_name_leafdata());
    if (accept_mode_disable.is_set || is_set(accept_mode_disable.yfilter)) leaf_name_data.push_back(accept_mode_disable.get_name_leafdata());
    if (follow.is_set || is_set(follow.yfilter)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (primary_ipv4_address.is_set || is_set(primary_ipv4_address.yfilter)) leaf_name_data.push_back(primary_ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-ipv4-addresses")
    {
        if(secondary_ipv4_addresses == nullptr)
        {
            secondary_ipv4_addresses = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses>();
        }
        return secondary_ipv4_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(secondary_ipv4_addresses != nullptr)
    {
        children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slave-virtual-router-id")
    {
        slave_virtual_router_id = value;
        slave_virtual_router_id.value_namespace = name_space;
        slave_virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable = value;
        accept_mode_disable.value_namespace = name_space;
        accept_mode_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow")
    {
        follow = value;
        follow.value_namespace = name_space;
        follow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address = value;
        primary_ipv4_address.value_namespace = name_space;
        primary_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slave-virtual-router-id")
    {
        slave_virtual_router_id.yfilter = yfilter;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable.yfilter = yfilter;
    }
    if(value_path == "follow")
    {
        follow.yfilter = yfilter;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-ipv4-addresses" || name == "slave-virtual-router-id" || name == "accept-mode-disable" || name == "follow" || name == "primary-ipv4-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Addresses()
{

    yang_name = "secondary-ipv4-addresses"; yang_parent_name = "slave-virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-ipv4-address")
    {
        for(auto const & c : secondary_ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address>();
        c->parent = this;
        secondary_ipv4_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : secondary_ipv4_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-ipv4-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::SecondaryIpv4Address()
    :
    ip_address{YType::str, "ip-address"}
{

    yang_name = "secondary-ipv4-address"; yang_parent_name = "secondary-ipv4-addresses"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::Version2()
    :
    virtual_routers(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters>())
{
    virtual_routers->parent = this;

    yang_name = "version2"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (virtual_routers !=  nullptr && virtual_routers->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-routers")
    {
        if(virtual_routers == nullptr)
        {
            virtual_routers = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters>();
        }
        return virtual_routers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(virtual_routers != nullptr)
    {
        children["virtual-routers"] = virtual_routers;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-routers")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouters()
{

    yang_name = "virtual-routers"; yang_parent_name = "version2"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-routers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-router")
    {
        for(auto const & c : virtual_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter>();
        c->parent = this;
        virtual_router.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_router)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-router")
        return true;
    return false;
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
    timer->parent = this;
    tracked_objects->parent = this;
    tracks->parent = this;

    yang_name = "virtual-router"; yang_parent_name = "virtual-routers"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(vr_id.yfilter)
	|| ydk::is_set(accept_mode_disable.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(primary_ipv4_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(text_password.yfilter)
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

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vr_id.is_set || is_set(vr_id.yfilter)) leaf_name_data.push_back(vr_id.get_name_leafdata());
    if (accept_mode_disable.is_set || is_set(accept_mode_disable.yfilter)) leaf_name_data.push_back(accept_mode_disable.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (primary_ipv4_address.is_set || is_set(primary_ipv4_address.yfilter)) leaf_name_data.push_back(primary_ipv4_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (text_password.is_set || is_set(text_password.yfilter)) leaf_name_data.push_back(text_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-ipv4-addresses")
    {
        if(secondary_ipv4_addresses == nullptr)
        {
            secondary_ipv4_addresses = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses>();
        }
        return secondary_ipv4_addresses;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "tracked-objects")
    {
        if(tracked_objects == nullptr)
        {
            tracked_objects = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects>();
        }
        return tracked_objects;
    }

    if(child_yang_name == "tracks")
    {
        if(tracks == nullptr)
        {
            tracks = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks>();
        }
        return tracks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(secondary_ipv4_addresses != nullptr)
    {
        children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    if(tracked_objects != nullptr)
    {
        children["tracked-objects"] = tracked_objects;
    }

    if(tracks != nullptr)
    {
        children["tracks"] = tracks;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vr-id")
    {
        vr_id = value;
        vr_id.value_namespace = name_space;
        vr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable = value;
        accept_mode_disable.value_namespace = name_space;
        accept_mode_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address = value;
        primary_ipv4_address.value_namespace = name_space;
        primary_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text-password")
    {
        text_password = value;
        text_password.value_namespace = name_space;
        text_password.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vr-id")
    {
        vr_id.yfilter = yfilter;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "text-password")
    {
        text_password.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-ipv4-addresses" || name == "timer" || name == "tracked-objects" || name == "tracks" || name == "vr-id" || name == "accept-mode-disable" || name == "bfd" || name == "preempt" || name == "primary-ipv4-address" || name == "priority" || name == "session-name" || name == "text-password")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Addresses()
{

    yang_name = "secondary-ipv4-addresses"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-ipv4-address")
    {
        for(auto const & c : secondary_ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address>();
        c->parent = this;
        secondary_ipv4_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : secondary_ipv4_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-ipv4-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::SecondaryIpv4Address()
    :
    ip_address{YType::str, "ip-address"}
{

    yang_name = "secondary-ipv4-address"; yang_parent_name = "secondary-ipv4-addresses"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::Timer()
    :
    advertisement_time_in_msec{YType::uint32, "advertisement-time-in-msec"},
    advertisement_time_in_sec{YType::uint32, "advertisement-time-in-sec"},
    forced{YType::boolean, "forced"},
    in_msec{YType::boolean, "in-msec"}
{

    yang_name = "timer"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(advertisement_time_in_msec.yfilter)
	|| ydk::is_set(advertisement_time_in_sec.yfilter)
	|| ydk::is_set(forced.yfilter)
	|| ydk::is_set(in_msec.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement_time_in_msec.is_set || is_set(advertisement_time_in_msec.yfilter)) leaf_name_data.push_back(advertisement_time_in_msec.get_name_leafdata());
    if (advertisement_time_in_sec.is_set || is_set(advertisement_time_in_sec.yfilter)) leaf_name_data.push_back(advertisement_time_in_sec.get_name_leafdata());
    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());
    if (in_msec.is_set || is_set(in_msec.yfilter)) leaf_name_data.push_back(in_msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertisement-time-in-msec")
    {
        advertisement_time_in_msec = value;
        advertisement_time_in_msec.value_namespace = name_space;
        advertisement_time_in_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-time-in-sec")
    {
        advertisement_time_in_sec = value;
        advertisement_time_in_sec.value_namespace = name_space;
        advertisement_time_in_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-msec")
    {
        in_msec = value;
        in_msec.value_namespace = name_space;
        in_msec.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertisement-time-in-msec")
    {
        advertisement_time_in_msec.yfilter = yfilter;
    }
    if(value_path == "advertisement-time-in-sec")
    {
        advertisement_time_in_sec.yfilter = yfilter;
    }
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
    if(value_path == "in-msec")
    {
        in_msec.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement-time-in-msec" || name == "advertisement-time-in-sec" || name == "forced" || name == "in-msec")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObjects()
{

    yang_name = "tracked-objects"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracked-object")
    {
        for(auto const & c : tracked_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject>();
        c->parent = this;
        tracked_object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tracked_object)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-object")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::TrackedObject()
    :
    object_name{YType::str, "object-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{

    yang_name = "tracked-object"; yang_parent_name = "tracked-objects"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(priority_decrement.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-object" <<"[object-name='" <<object_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "priority-decrement")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Tracks()
{

    yang_name = "tracks"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track")
    {
        for(auto const & c : track)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track>();
        c->parent = this;
        track.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : track)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::Track()
    :
    interface_name{YType::str, "interface-name"},
    priority{YType::uint32, "priority"}
{

    yang_name = "track"; yang_parent_name = "tracks"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "priority")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::Version3()
    :
    virtual_routers(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters>())
{
    virtual_routers->parent = this;

    yang_name = "version3"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (virtual_routers !=  nullptr && virtual_routers->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-routers")
    {
        if(virtual_routers == nullptr)
        {
            virtual_routers = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters>();
        }
        return virtual_routers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(virtual_routers != nullptr)
    {
        children["virtual-routers"] = virtual_routers;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-routers")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouters()
{

    yang_name = "virtual-routers"; yang_parent_name = "version3"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-routers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-router")
    {
        for(auto const & c : virtual_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter>();
        c->parent = this;
        virtual_router.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_router)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-router")
        return true;
    return false;
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
    timer->parent = this;
    tracked_objects->parent = this;
    tracks->parent = this;

    yang_name = "virtual-router"; yang_parent_name = "virtual-routers"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(vr_id.yfilter)
	|| ydk::is_set(accept_mode_disable.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(primary_ipv4_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(session_name.yfilter)
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

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vr_id.is_set || is_set(vr_id.yfilter)) leaf_name_data.push_back(vr_id.get_name_leafdata());
    if (accept_mode_disable.is_set || is_set(accept_mode_disable.yfilter)) leaf_name_data.push_back(accept_mode_disable.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (primary_ipv4_address.is_set || is_set(primary_ipv4_address.yfilter)) leaf_name_data.push_back(primary_ipv4_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-ipv4-addresses")
    {
        if(secondary_ipv4_addresses == nullptr)
        {
            secondary_ipv4_addresses = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses>();
        }
        return secondary_ipv4_addresses;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "tracked-objects")
    {
        if(tracked_objects == nullptr)
        {
            tracked_objects = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects>();
        }
        return tracked_objects;
    }

    if(child_yang_name == "tracks")
    {
        if(tracks == nullptr)
        {
            tracks = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks>();
        }
        return tracks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(secondary_ipv4_addresses != nullptr)
    {
        children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    if(tracked_objects != nullptr)
    {
        children["tracked-objects"] = tracked_objects;
    }

    if(tracks != nullptr)
    {
        children["tracks"] = tracks;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vr-id")
    {
        vr_id = value;
        vr_id.value_namespace = name_space;
        vr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable = value;
        accept_mode_disable.value_namespace = name_space;
        accept_mode_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address = value;
        primary_ipv4_address.value_namespace = name_space;
        primary_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vr-id")
    {
        vr_id.yfilter = yfilter;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-ipv4-addresses" || name == "timer" || name == "tracked-objects" || name == "tracks" || name == "vr-id" || name == "accept-mode-disable" || name == "bfd" || name == "preempt" || name == "primary-ipv4-address" || name == "priority" || name == "session-name")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Addresses()
{

    yang_name = "secondary-ipv4-addresses"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-ipv4-address")
    {
        for(auto const & c : secondary_ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address>();
        c->parent = this;
        secondary_ipv4_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : secondary_ipv4_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-ipv4-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::SecondaryIpv4Address()
    :
    ip_address{YType::str, "ip-address"}
{

    yang_name = "secondary-ipv4-address"; yang_parent_name = "secondary-ipv4-addresses"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::Timer()
    :
    advertisement_time_in_msec{YType::uint32, "advertisement-time-in-msec"},
    advertisement_time_in_sec{YType::uint32, "advertisement-time-in-sec"},
    forced{YType::boolean, "forced"},
    in_msec{YType::boolean, "in-msec"}
{

    yang_name = "timer"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(advertisement_time_in_msec.yfilter)
	|| ydk::is_set(advertisement_time_in_sec.yfilter)
	|| ydk::is_set(forced.yfilter)
	|| ydk::is_set(in_msec.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement_time_in_msec.is_set || is_set(advertisement_time_in_msec.yfilter)) leaf_name_data.push_back(advertisement_time_in_msec.get_name_leafdata());
    if (advertisement_time_in_sec.is_set || is_set(advertisement_time_in_sec.yfilter)) leaf_name_data.push_back(advertisement_time_in_sec.get_name_leafdata());
    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());
    if (in_msec.is_set || is_set(in_msec.yfilter)) leaf_name_data.push_back(in_msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertisement-time-in-msec")
    {
        advertisement_time_in_msec = value;
        advertisement_time_in_msec.value_namespace = name_space;
        advertisement_time_in_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-time-in-sec")
    {
        advertisement_time_in_sec = value;
        advertisement_time_in_sec.value_namespace = name_space;
        advertisement_time_in_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-msec")
    {
        in_msec = value;
        in_msec.value_namespace = name_space;
        in_msec.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertisement-time-in-msec")
    {
        advertisement_time_in_msec.yfilter = yfilter;
    }
    if(value_path == "advertisement-time-in-sec")
    {
        advertisement_time_in_sec.yfilter = yfilter;
    }
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
    if(value_path == "in-msec")
    {
        in_msec.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement-time-in-msec" || name == "advertisement-time-in-sec" || name == "forced" || name == "in-msec")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObjects()
{

    yang_name = "tracked-objects"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracked-object")
    {
        for(auto const & c : tracked_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject>();
        c->parent = this;
        tracked_object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tracked_object)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-object")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::TrackedObject()
    :
    object_name{YType::str, "object-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{

    yang_name = "tracked-object"; yang_parent_name = "tracked-objects"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(priority_decrement.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-object" <<"[object-name='" <<object_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "priority-decrement")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Tracks()
{

    yang_name = "tracks"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track")
    {
        for(auto const & c : track)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track>();
        c->parent = this;
        track.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : track)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::Track()
    :
    interface_name{YType::str, "interface-name"},
    priority{YType::uint32, "priority"}
{

    yang_name = "track"; yang_parent_name = "tracks"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "priority")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Ipv6()
    :
    slave_virtual_routers(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters>())
	,version3(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3>())
{
    slave_virtual_routers->parent = this;
    version3->parent = this;

    yang_name = "ipv6"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (slave_virtual_routers !=  nullptr && slave_virtual_routers->has_operation())
	|| (version3 !=  nullptr && version3->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-virtual-routers")
    {
        if(slave_virtual_routers == nullptr)
        {
            slave_virtual_routers = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters>();
        }
        return slave_virtual_routers;
    }

    if(child_yang_name == "version3")
    {
        if(version3 == nullptr)
        {
            version3 = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3>();
        }
        return version3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(slave_virtual_routers != nullptr)
    {
        children["slave-virtual-routers"] = slave_virtual_routers;
    }

    if(version3 != nullptr)
    {
        children["version3"] = version3;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-virtual-routers" || name == "version3")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouters()
{

    yang_name = "slave-virtual-routers"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-virtual-routers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-virtual-router")
    {
        for(auto const & c : slave_virtual_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter>();
        c->parent = this;
        slave_virtual_router.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slave_virtual_router)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-virtual-router")
        return true;
    return false;
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
    link_local_ipv6_address->parent = this;

    yang_name = "slave-virtual-router"; yang_parent_name = "slave-virtual-routers"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(slave_virtual_router_id.yfilter)
	|| ydk::is_set(accept_mode_disable.yfilter)
	|| ydk::is_set(follow.yfilter)
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_operation())
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-virtual-router" <<"[slave-virtual-router-id='" <<slave_virtual_router_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_virtual_router_id.is_set || is_set(slave_virtual_router_id.yfilter)) leaf_name_data.push_back(slave_virtual_router_id.get_name_leafdata());
    if (accept_mode_disable.is_set || is_set(accept_mode_disable.yfilter)) leaf_name_data.push_back(accept_mode_disable.get_name_leafdata());
    if (follow.is_set || is_set(follow.yfilter)) leaf_name_data.push_back(follow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-ipv6-addresses")
    {
        if(global_ipv6_addresses == nullptr)
        {
            global_ipv6_addresses = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses>();
        }
        return global_ipv6_addresses;
    }

    if(child_yang_name == "link-local-ipv6-address")
    {
        if(link_local_ipv6_address == nullptr)
        {
            link_local_ipv6_address = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address>();
        }
        return link_local_ipv6_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global_ipv6_addresses != nullptr)
    {
        children["global-ipv6-addresses"] = global_ipv6_addresses;
    }

    if(link_local_ipv6_address != nullptr)
    {
        children["link-local-ipv6-address"] = link_local_ipv6_address;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slave-virtual-router-id")
    {
        slave_virtual_router_id = value;
        slave_virtual_router_id.value_namespace = name_space;
        slave_virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable = value;
        accept_mode_disable.value_namespace = name_space;
        accept_mode_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow")
    {
        follow = value;
        follow.value_namespace = name_space;
        follow.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slave-virtual-router-id")
    {
        slave_virtual_router_id.yfilter = yfilter;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable.yfilter = yfilter;
    }
    if(value_path == "follow")
    {
        follow.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-ipv6-addresses" || name == "link-local-ipv6-address" || name == "slave-virtual-router-id" || name == "accept-mode-disable" || name == "follow")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Addresses()
{

    yang_name = "global-ipv6-addresses"; yang_parent_name = "slave-virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-ipv6-address")
    {
        for(auto const & c : global_ipv6_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address>();
        c->parent = this;
        global_ipv6_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : global_ipv6_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-ipv6-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::GlobalIpv6Address()
    :
    ip_address{YType::str, "ip-address"}
{

    yang_name = "global-ipv6-address"; yang_parent_name = "global-ipv6-addresses"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::LinkLocalIpv6Address()
    :
    auto_configure{YType::boolean, "auto-configure"},
    ip_address{YType::str, "ip-address"}
{

    yang_name = "link-local-ipv6-address"; yang_parent_name = "slave-virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(auto_configure.yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_configure.is_set || is_set(auto_configure.yfilter)) leaf_name_data.push_back(auto_configure.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-configure")
    {
        auto_configure = value;
        auto_configure.value_namespace = name_space;
        auto_configure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-configure")
    {
        auto_configure.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-configure" || name == "ip-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::Version3()
    :
    virtual_routers(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters>())
{
    virtual_routers->parent = this;

    yang_name = "version3"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (virtual_routers !=  nullptr && virtual_routers->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-routers")
    {
        if(virtual_routers == nullptr)
        {
            virtual_routers = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters>();
        }
        return virtual_routers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(virtual_routers != nullptr)
    {
        children["virtual-routers"] = virtual_routers;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-routers")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouters()
{

    yang_name = "virtual-routers"; yang_parent_name = "version3"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-routers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-router")
    {
        for(auto const & c : virtual_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter>();
        c->parent = this;
        virtual_router.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_router)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-router")
        return true;
    return false;
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
    link_local_ipv6_address->parent = this;
    timer->parent = this;
    tracked_objects->parent = this;
    tracks->parent = this;

    yang_name = "virtual-router"; yang_parent_name = "virtual-routers"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(vr_id.yfilter)
	|| ydk::is_set(accept_mode_disable.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(session_name.yfilter)
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

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vr_id.is_set || is_set(vr_id.yfilter)) leaf_name_data.push_back(vr_id.get_name_leafdata());
    if (accept_mode_disable.is_set || is_set(accept_mode_disable.yfilter)) leaf_name_data.push_back(accept_mode_disable.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-ipv6-addresses")
    {
        if(global_ipv6_addresses == nullptr)
        {
            global_ipv6_addresses = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses>();
        }
        return global_ipv6_addresses;
    }

    if(child_yang_name == "link-local-ipv6-address")
    {
        if(link_local_ipv6_address == nullptr)
        {
            link_local_ipv6_address = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address>();
        }
        return link_local_ipv6_address;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "tracked-objects")
    {
        if(tracked_objects == nullptr)
        {
            tracked_objects = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects>();
        }
        return tracked_objects;
    }

    if(child_yang_name == "tracks")
    {
        if(tracks == nullptr)
        {
            tracks = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks>();
        }
        return tracks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global_ipv6_addresses != nullptr)
    {
        children["global-ipv6-addresses"] = global_ipv6_addresses;
    }

    if(link_local_ipv6_address != nullptr)
    {
        children["link-local-ipv6-address"] = link_local_ipv6_address;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    if(tracked_objects != nullptr)
    {
        children["tracked-objects"] = tracked_objects;
    }

    if(tracks != nullptr)
    {
        children["tracks"] = tracks;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vr-id")
    {
        vr_id = value;
        vr_id.value_namespace = name_space;
        vr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable = value;
        accept_mode_disable.value_namespace = name_space;
        accept_mode_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vr-id")
    {
        vr_id.yfilter = yfilter;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-ipv6-addresses" || name == "link-local-ipv6-address" || name == "timer" || name == "tracked-objects" || name == "tracks" || name == "vr-id" || name == "accept-mode-disable" || name == "bfd" || name == "preempt" || name == "priority" || name == "session-name")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Addresses()
{

    yang_name = "global-ipv6-addresses"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-ipv6-address")
    {
        for(auto const & c : global_ipv6_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address>();
        c->parent = this;
        global_ipv6_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : global_ipv6_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-ipv6-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::GlobalIpv6Address()
    :
    ip_address{YType::str, "ip-address"}
{

    yang_name = "global-ipv6-address"; yang_parent_name = "global-ipv6-addresses"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::LinkLocalIpv6Address()
    :
    auto_configure{YType::boolean, "auto-configure"},
    ip_address{YType::str, "ip-address"}
{

    yang_name = "link-local-ipv6-address"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(auto_configure.yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_configure.is_set || is_set(auto_configure.yfilter)) leaf_name_data.push_back(auto_configure.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-configure")
    {
        auto_configure = value;
        auto_configure.value_namespace = name_space;
        auto_configure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-configure")
    {
        auto_configure.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-configure" || name == "ip-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::Timer()
    :
    advertisement_time_in_msec{YType::uint32, "advertisement-time-in-msec"},
    advertisement_time_in_sec{YType::uint32, "advertisement-time-in-sec"},
    forced{YType::boolean, "forced"},
    in_msec{YType::boolean, "in-msec"}
{

    yang_name = "timer"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(advertisement_time_in_msec.yfilter)
	|| ydk::is_set(advertisement_time_in_sec.yfilter)
	|| ydk::is_set(forced.yfilter)
	|| ydk::is_set(in_msec.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement_time_in_msec.is_set || is_set(advertisement_time_in_msec.yfilter)) leaf_name_data.push_back(advertisement_time_in_msec.get_name_leafdata());
    if (advertisement_time_in_sec.is_set || is_set(advertisement_time_in_sec.yfilter)) leaf_name_data.push_back(advertisement_time_in_sec.get_name_leafdata());
    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());
    if (in_msec.is_set || is_set(in_msec.yfilter)) leaf_name_data.push_back(in_msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertisement-time-in-msec")
    {
        advertisement_time_in_msec = value;
        advertisement_time_in_msec.value_namespace = name_space;
        advertisement_time_in_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-time-in-sec")
    {
        advertisement_time_in_sec = value;
        advertisement_time_in_sec.value_namespace = name_space;
        advertisement_time_in_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-msec")
    {
        in_msec = value;
        in_msec.value_namespace = name_space;
        in_msec.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertisement-time-in-msec")
    {
        advertisement_time_in_msec.yfilter = yfilter;
    }
    if(value_path == "advertisement-time-in-sec")
    {
        advertisement_time_in_sec.yfilter = yfilter;
    }
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
    if(value_path == "in-msec")
    {
        in_msec.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement-time-in-msec" || name == "advertisement-time-in-sec" || name == "forced" || name == "in-msec")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObjects()
{

    yang_name = "tracked-objects"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracked-object")
    {
        for(auto const & c : tracked_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject>();
        c->parent = this;
        tracked_object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tracked_object)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-object")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::TrackedObject()
    :
    object_name{YType::str, "object-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{

    yang_name = "tracked-object"; yang_parent_name = "tracked-objects"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(priority_decrement.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-object" <<"[object-name='" <<object_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "priority-decrement")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Tracks()
{

    yang_name = "tracks"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track")
    {
        for(auto const & c : track)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track>();
        c->parent = this;
        track.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : track)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::Track()
    :
    interface_name{YType::str, "interface-name"},
    priority{YType::uint32, "priority"}
{

    yang_name = "track"; yang_parent_name = "tracks"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "priority")
        return true;
    return false;
}

Vrrp::Logging::Logging()
    :
    state_change_disable{YType::empty, "state-change-disable"}
{

    yang_name = "logging"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(state_change_disable.yfilter);
}

std::string Vrrp::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state_change_disable.is_set || is_set(state_change_disable.yfilter)) leaf_name_data.push_back(state_change_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state-change-disable")
    {
        state_change_disable = value;
        state_change_disable.value_namespace = name_space;
        state_change_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state-change-disable")
    {
        state_change_disable.yfilter = yfilter;
    }
}

bool Vrrp::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-change-disable")
        return true;
    return false;
}


}
}

