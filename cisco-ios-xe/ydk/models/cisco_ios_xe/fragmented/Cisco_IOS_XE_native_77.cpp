
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_77.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Redundancy::Interchassis::Group::Member::Member()
    :
    ip{YType::str, "ip"}
{

    yang_name = "member"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Member::~Member()
{
}

bool Native::Redundancy::Interchassis::Group::Member::has_data() const
{
    return ip.is_set;
}

bool Native::Redundancy::Interchassis::Group::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Backbone()
    :
    interface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface>())
{
    interface->parent = this;

    yang_name = "backbone"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::~Backbone()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::Backbone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Interchassis::Group::Backbone::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backbone"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::~Interface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Scheduler::Scheduler()
    :
    runtime(std::make_shared<Native::Scheduler::Runtime>())
	,allocate(std::make_shared<Native::Scheduler::Allocate>())
{
    runtime->parent = this;
    allocate->parent = this;

    yang_name = "scheduler"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Scheduler::~Scheduler()
{
}

bool Native::Scheduler::has_data() const
{
    return (runtime !=  nullptr && runtime->has_data())
	|| (allocate !=  nullptr && allocate->has_data());
}

bool Native::Scheduler::has_operation() const
{
    return is_set(yfilter)
	|| (runtime !=  nullptr && runtime->has_operation())
	|| (allocate !=  nullptr && allocate->has_operation());
}

std::string Native::Scheduler::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Scheduler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduler";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Scheduler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Scheduler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "runtime")
    {
        if(runtime == nullptr)
        {
            runtime = std::make_shared<Native::Scheduler::Runtime>();
        }
        return runtime;
    }

    if(child_yang_name == "allocate")
    {
        if(allocate == nullptr)
        {
            allocate = std::make_shared<Native::Scheduler::Allocate>();
        }
        return allocate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Scheduler::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(runtime != nullptr)
    {
        children["runtime"] = runtime;
    }

    if(allocate != nullptr)
    {
        children["allocate"] = allocate;
    }

    return children;
}

void Native::Scheduler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Scheduler::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Scheduler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "runtime" || name == "allocate")
        return true;
    return false;
}

Native::Scheduler::Runtime::Runtime()
    :
    netinput{YType::uint16, "netinput"}
{

    yang_name = "runtime"; yang_parent_name = "scheduler"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Scheduler::Runtime::~Runtime()
{
}

bool Native::Scheduler::Runtime::has_data() const
{
    return netinput.is_set;
}

bool Native::Scheduler::Runtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(netinput.yfilter);
}

std::string Native::Scheduler::Runtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/scheduler/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Scheduler::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Scheduler::Runtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netinput.is_set || is_set(netinput.yfilter)) leaf_name_data.push_back(netinput.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Scheduler::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Scheduler::Runtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Scheduler::Runtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "netinput")
    {
        netinput = value;
        netinput.value_namespace = name_space;
        netinput.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Scheduler::Runtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "netinput")
    {
        netinput.yfilter = yfilter;
    }
}

bool Native::Scheduler::Runtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netinput")
        return true;
    return false;
}

Native::Scheduler::Allocate::Allocate()
    :
    interrupt_time{YType::uint16, "interrupt-time"},
    process_time{YType::uint16, "process-time"}
{

    yang_name = "allocate"; yang_parent_name = "scheduler"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Scheduler::Allocate::~Allocate()
{
}

bool Native::Scheduler::Allocate::has_data() const
{
    return interrupt_time.is_set
	|| process_time.is_set;
}

bool Native::Scheduler::Allocate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interrupt_time.yfilter)
	|| ydk::is_set(process_time.yfilter);
}

std::string Native::Scheduler::Allocate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/scheduler/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Scheduler::Allocate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Scheduler::Allocate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interrupt_time.is_set || is_set(interrupt_time.yfilter)) leaf_name_data.push_back(interrupt_time.get_name_leafdata());
    if (process_time.is_set || is_set(process_time.yfilter)) leaf_name_data.push_back(process_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Scheduler::Allocate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Scheduler::Allocate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Scheduler::Allocate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interrupt-time")
    {
        interrupt_time = value;
        interrupt_time.value_namespace = name_space;
        interrupt_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-time")
    {
        process_time = value;
        process_time.value_namespace = name_space;
        process_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Scheduler::Allocate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interrupt-time")
    {
        interrupt_time.yfilter = yfilter;
    }
    if(value_path == "process-time")
    {
        process_time.yfilter = yfilter;
    }
}

bool Native::Scheduler::Allocate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interrupt-time" || name == "process-time")
        return true;
    return false;
}

Native::Epm::Epm()
    :
    logging{YType::empty, "logging"}
{

    yang_name = "epm"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Epm::~Epm()
{
}

bool Native::Epm::has_data() const
{
    return logging.is_set;
}

bool Native::Epm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string Native::Epm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Epm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Epm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Epm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Epm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Epm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Epm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool Native::Epm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

Native::SpanningTree::SpanningTree()
    :
    backbonefast{YType::empty, "Cisco-IOS-XE-spanning-tree:backbonefast"},
    logging{YType::empty, "Cisco-IOS-XE-spanning-tree:logging"},
    mode{YType::enumeration, "Cisco-IOS-XE-spanning-tree:mode"}
    	,
    bridge(std::make_shared<Native::SpanningTree::Bridge>())
	,etherchannel(std::make_shared<Native::SpanningTree::Etherchannel>())
	,extend(std::make_shared<Native::SpanningTree::Extend>())
	,loopguard(std::make_shared<Native::SpanningTree::Loopguard>())
	,mst(std::make_shared<Native::SpanningTree::Mst>())
	,optimize(std::make_shared<Native::SpanningTree::Optimize>())
	,pathcost(std::make_shared<Native::SpanningTree::Pathcost>())
	,portfast(std::make_shared<Native::SpanningTree::Portfast>())
	,transmit(std::make_shared<Native::SpanningTree::Transmit>())
	,uplinkfast(nullptr) // presence node
{
    bridge->parent = this;
    etherchannel->parent = this;
    extend->parent = this;
    loopguard->parent = this;
    mst->parent = this;
    optimize->parent = this;
    pathcost->parent = this;
    portfast->parent = this;
    transmit->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::~SpanningTree()
{
}

bool Native::SpanningTree::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return backbonefast.is_set
	|| logging.is_set
	|| mode.is_set
	|| (bridge !=  nullptr && bridge->has_data())
	|| (etherchannel !=  nullptr && etherchannel->has_data())
	|| (extend !=  nullptr && extend->has_data())
	|| (loopguard !=  nullptr && loopguard->has_data())
	|| (mst !=  nullptr && mst->has_data())
	|| (optimize !=  nullptr && optimize->has_data())
	|| (pathcost !=  nullptr && pathcost->has_data())
	|| (portfast !=  nullptr && portfast->has_data())
	|| (transmit !=  nullptr && transmit->has_data())
	|| (uplinkfast !=  nullptr && uplinkfast->has_data());
}

bool Native::SpanningTree::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backbonefast.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (bridge !=  nullptr && bridge->has_operation())
	|| (etherchannel !=  nullptr && etherchannel->has_operation())
	|| (extend !=  nullptr && extend->has_operation())
	|| (loopguard !=  nullptr && loopguard->has_operation())
	|| (mst !=  nullptr && mst->has_operation())
	|| (optimize !=  nullptr && optimize->has_operation())
	|| (pathcost !=  nullptr && pathcost->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation())
	|| (transmit !=  nullptr && transmit->has_operation())
	|| (uplinkfast !=  nullptr && uplinkfast->has_operation());
}

std::string Native::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbonefast.is_set || is_set(backbonefast.yfilter)) leaf_name_data.push_back(backbonefast.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge")
    {
        if(bridge == nullptr)
        {
            bridge = std::make_shared<Native::SpanningTree::Bridge>();
        }
        return bridge;
    }

    if(child_yang_name == "etherchannel")
    {
        if(etherchannel == nullptr)
        {
            etherchannel = std::make_shared<Native::SpanningTree::Etherchannel>();
        }
        return etherchannel;
    }

    if(child_yang_name == "extend")
    {
        if(extend == nullptr)
        {
            extend = std::make_shared<Native::SpanningTree::Extend>();
        }
        return extend;
    }

    if(child_yang_name == "loopguard")
    {
        if(loopguard == nullptr)
        {
            loopguard = std::make_shared<Native::SpanningTree::Loopguard>();
        }
        return loopguard;
    }

    if(child_yang_name == "mst")
    {
        if(mst == nullptr)
        {
            mst = std::make_shared<Native::SpanningTree::Mst>();
        }
        return mst;
    }

    if(child_yang_name == "optimize")
    {
        if(optimize == nullptr)
        {
            optimize = std::make_shared<Native::SpanningTree::Optimize>();
        }
        return optimize;
    }

    if(child_yang_name == "pathcost")
    {
        if(pathcost == nullptr)
        {
            pathcost = std::make_shared<Native::SpanningTree::Pathcost>();
        }
        return pathcost;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::SpanningTree::Portfast>();
        }
        return portfast;
    }

    if(child_yang_name == "transmit")
    {
        if(transmit == nullptr)
        {
            transmit = std::make_shared<Native::SpanningTree::Transmit>();
        }
        return transmit;
    }

    if(child_yang_name == "uplinkfast")
    {
        if(uplinkfast == nullptr)
        {
            uplinkfast = std::make_shared<Native::SpanningTree::Uplinkfast>();
        }
        return uplinkfast;
    }

    if(child_yang_name == "vlan")
    {
        for(auto const & c : vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SpanningTree::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge != nullptr)
    {
        children["bridge"] = bridge;
    }

    if(etherchannel != nullptr)
    {
        children["etherchannel"] = etherchannel;
    }

    if(extend != nullptr)
    {
        children["extend"] = extend;
    }

    if(loopguard != nullptr)
    {
        children["loopguard"] = loopguard;
    }

    if(mst != nullptr)
    {
        children["mst"] = mst;
    }

    if(optimize != nullptr)
    {
        children["optimize"] = optimize;
    }

    if(pathcost != nullptr)
    {
        children["pathcost"] = pathcost;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    if(transmit != nullptr)
    {
        children["transmit"] = transmit;
    }

    if(uplinkfast != nullptr)
    {
        children["uplinkfast"] = uplinkfast;
    }

    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backbonefast")
    {
        backbonefast = value;
        backbonefast.value_namespace = name_space;
        backbonefast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backbonefast")
    {
        backbonefast.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge" || name == "etherchannel" || name == "extend" || name == "loopguard" || name == "mst" || name == "optimize" || name == "pathcost" || name == "portfast" || name == "transmit" || name == "uplinkfast" || name == "vlan" || name == "backbonefast" || name == "logging" || name == "mode")
        return true;
    return false;
}

Native::SpanningTree::Bridge::Bridge()
    :
    priority{YType::uint8, "priority"},
    id{YType::str, "ID"}
{

    yang_name = "bridge"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Bridge::~Bridge()
{
}

bool Native::SpanningTree::Bridge::has_data() const
{
    return priority.is_set
	|| id.is_set;
}

bool Native::SpanningTree::Bridge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::SpanningTree::Bridge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Bridge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:bridge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Bridge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Bridge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Bridge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Bridge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ID")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Bridge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "ID")
    {
        id.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Bridge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "ID")
        return true;
    return false;
}

Native::SpanningTree::Etherchannel::Etherchannel()
    :
    guard(std::make_shared<Native::SpanningTree::Etherchannel::Guard>())
{
    guard->parent = this;

    yang_name = "etherchannel"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Etherchannel::~Etherchannel()
{
}

bool Native::SpanningTree::Etherchannel::has_data() const
{
    return (guard !=  nullptr && guard->has_data());
}

bool Native::SpanningTree::Etherchannel::has_operation() const
{
    return is_set(yfilter)
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::SpanningTree::Etherchannel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Etherchannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:etherchannel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Etherchannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Etherchannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::SpanningTree::Etherchannel::Guard>();
        }
        return guard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Etherchannel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(guard != nullptr)
    {
        children["guard"] = guard;
    }

    return children;
}

void Native::SpanningTree::Etherchannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Etherchannel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Etherchannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guard")
        return true;
    return false;
}

Native::SpanningTree::Etherchannel::Guard::Guard()
    :
    misconfig{YType::empty, "misconfig"}
{

    yang_name = "guard"; yang_parent_name = "etherchannel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Etherchannel::Guard::~Guard()
{
}

bool Native::SpanningTree::Etherchannel::Guard::has_data() const
{
    return misconfig.is_set;
}

bool Native::SpanningTree::Etherchannel::Guard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(misconfig.yfilter);
}

std::string Native::SpanningTree::Etherchannel::Guard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:etherchannel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Etherchannel::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Etherchannel::Guard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (misconfig.is_set || is_set(misconfig.yfilter)) leaf_name_data.push_back(misconfig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Etherchannel::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Etherchannel::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Etherchannel::Guard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "misconfig")
    {
        misconfig = value;
        misconfig.value_namespace = name_space;
        misconfig.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Etherchannel::Guard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "misconfig")
    {
        misconfig.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Etherchannel::Guard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "misconfig")
        return true;
    return false;
}

Native::SpanningTree::Extend::Extend()
    :
    system_id{YType::empty, "system-id"}
{

    yang_name = "extend"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Extend::~Extend()
{
}

bool Native::SpanningTree::Extend::has_data() const
{
    return system_id.is_set;
}

bool Native::SpanningTree::Extend::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string Native::SpanningTree::Extend::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Extend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:extend";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Extend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Extend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Extend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Extend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Extend::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Extend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id")
        return true;
    return false;
}

Native::SpanningTree::Loopguard::Loopguard()
    :
    default_{YType::empty, "default"}
{

    yang_name = "loopguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Loopguard::~Loopguard()
{
}

bool Native::SpanningTree::Loopguard::has_data() const
{
    return default_.is_set;
}

bool Native::SpanningTree::Loopguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::SpanningTree::Loopguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Loopguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:loopguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Loopguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Loopguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Loopguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Loopguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Loopguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Loopguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::SpanningTree::Mst::Mst()
    :
    forward_time{YType::uint8, "forward-time"},
    hello_time{YType::uint8, "hello-time"},
    max_age{YType::uint8, "max-age"},
    max_hops{YType::uint8, "max-hops"}
    	,
    configuration(std::make_shared<Native::SpanningTree::Mst::Configuration>())
{
    configuration->parent = this;

    yang_name = "mst"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Mst::~Mst()
{
}

bool Native::SpanningTree::Mst::has_data() const
{
    for (std::size_t index=0; index<instance_range.size(); index++)
    {
        if(instance_range[index]->has_data())
            return true;
    }
    return forward_time.is_set
	|| hello_time.is_set
	|| max_age.is_set
	|| max_hops.is_set
	|| (configuration !=  nullptr && configuration->has_data());
}

bool Native::SpanningTree::Mst::has_operation() const
{
    for (std::size_t index=0; index<instance_range.size(); index++)
    {
        if(instance_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(forward_time.yfilter)
	|| ydk::is_set(hello_time.yfilter)
	|| ydk::is_set(max_age.yfilter)
	|| ydk::is_set(max_hops.yfilter)
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Native::SpanningTree::Mst::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:mst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward_time.is_set || is_set(forward_time.yfilter)) leaf_name_data.push_back(forward_time.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (max_age.is_set || is_set(max_age.yfilter)) leaf_name_data.push_back(max_age.get_name_leafdata());
    if (max_hops.is_set || is_set(max_hops.yfilter)) leaf_name_data.push_back(max_hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-range")
    {
        for(auto const & c : instance_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SpanningTree::Mst::InstanceRange>();
        c->parent = this;
        instance_range.push_back(c);
        return c;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::SpanningTree::Mst::Configuration>();
        }
        return configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance_range)
    {
        children[c->get_segment_path()] = c;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    return children;
}

void Native::SpanningTree::Mst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forward-time")
    {
        forward_time = value;
        forward_time.value_namespace = name_space;
        forward_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-age")
    {
        max_age = value;
        max_age.value_namespace = name_space;
        max_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-hops")
    {
        max_hops = value;
        max_hops.value_namespace = name_space;
        max_hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forward-time")
    {
        forward_time.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
    if(value_path == "max-age")
    {
        max_age.yfilter = yfilter;
    }
    if(value_path == "max-hops")
    {
        max_hops.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-range" || name == "configuration" || name == "forward-time" || name == "hello-time" || name == "max-age" || name == "max-hops")
        return true;
    return false;
}

Native::SpanningTree::Mst::InstanceRange::InstanceRange()
    :
    id{YType::str, "id"},
    priority{YType::uint16, "priority"},
    root{YType::enumeration, "root"}
{

    yang_name = "instance-range"; yang_parent_name = "mst"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Mst::InstanceRange::~InstanceRange()
{
}

bool Native::SpanningTree::Mst::InstanceRange::has_data() const
{
    return id.is_set
	|| priority.is_set
	|| root.is_set;
}

bool Native::SpanningTree::Mst::InstanceRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(root.yfilter);
}

std::string Native::SpanningTree::Mst::InstanceRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::InstanceRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-range" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::InstanceRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (root.is_set || is_set(root.yfilter)) leaf_name_data.push_back(root.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::InstanceRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::InstanceRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Mst::InstanceRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root")
    {
        root = value;
        root.value_namespace = name_space;
        root.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::InstanceRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "root")
    {
        root.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::InstanceRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "priority" || name == "root")
        return true;
    return false;
}

Native::SpanningTree::Mst::Configuration::Configuration()
    :
    name{YType::str, "name"},
    revision{YType::uint16, "revision"}
    	,
    private_vlan(std::make_shared<Native::SpanningTree::Mst::Configuration::PrivateVlan>())
{
    private_vlan->parent = this;

    yang_name = "configuration"; yang_parent_name = "mst"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Mst::Configuration::~Configuration()
{
}

bool Native::SpanningTree::Mst::Configuration::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return name.is_set
	|| revision.is_set
	|| (private_vlan !=  nullptr && private_vlan->has_data());
}

bool Native::SpanningTree::Mst::Configuration::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(revision.yfilter)
	|| (private_vlan !=  nullptr && private_vlan->has_operation());
}

std::string Native::SpanningTree::Mst::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (revision.is_set || is_set(revision.yfilter)) leaf_name_data.push_back(revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SpanningTree::Mst::Configuration::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::SpanningTree::Mst::Configuration::PrivateVlan>();
        }
        return private_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    if(private_vlan != nullptr)
    {
        children["private-vlan"] = private_vlan;
    }

    return children;
}

void Native::SpanningTree::Mst::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revision")
    {
        revision = value;
        revision.value_namespace = name_space;
        revision.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "revision")
    {
        revision.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "private-vlan" || name == "name" || name == "revision")
        return true;
    return false;
}

Native::SpanningTree::Mst::Configuration::Instance::Instance()
    :
    id{YType::uint16, "id"},
    vlan{YType::str, "vlan"}
{

    yang_name = "instance"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Mst::Configuration::Instance::~Instance()
{
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_data() const
{
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_operation() const
{
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::SpanningTree::Mst::Configuration::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::Configuration::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::Configuration::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto vlan_name_datas = vlan.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlan_name_datas.begin(), vlan_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::Configuration::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::Configuration::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Mst::Configuration::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan.append(value);
    }
}

void Native::SpanningTree::Mst::Configuration::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vlan")
        return true;
    return false;
}

Native::SpanningTree::Mst::Configuration::PrivateVlan::PrivateVlan()
    :
    synchronize{YType::empty, "synchronize"}
{

    yang_name = "private-vlan"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Mst::Configuration::PrivateVlan::~PrivateVlan()
{
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_data() const
{
    return synchronize.is_set;
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(synchronize.yfilter);
}

std::string Native::SpanningTree::Mst::Configuration::PrivateVlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::Configuration::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::Configuration::PrivateVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (synchronize.is_set || is_set(synchronize.yfilter)) leaf_name_data.push_back(synchronize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::Configuration::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::Configuration::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Mst::Configuration::PrivateVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "synchronize")
    {
        synchronize = value;
        synchronize.value_namespace = name_space;
        synchronize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::Configuration::PrivateVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "synchronize")
    {
        synchronize.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synchronize")
        return true;
    return false;
}

Native::SpanningTree::Optimize::Optimize()
    :
    bpdu(std::make_shared<Native::SpanningTree::Optimize::Bpdu>())
{
    bpdu->parent = this;

    yang_name = "optimize"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Optimize::~Optimize()
{
}

bool Native::SpanningTree::Optimize::has_data() const
{
    return (bpdu !=  nullptr && bpdu->has_data());
}

bool Native::SpanningTree::Optimize::has_operation() const
{
    return is_set(yfilter)
	|| (bpdu !=  nullptr && bpdu->has_operation());
}

std::string Native::SpanningTree::Optimize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Optimize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:optimize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Optimize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Optimize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpdu")
    {
        if(bpdu == nullptr)
        {
            bpdu = std::make_shared<Native::SpanningTree::Optimize::Bpdu>();
        }
        return bpdu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Optimize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpdu != nullptr)
    {
        children["bpdu"] = bpdu;
    }

    return children;
}

void Native::SpanningTree::Optimize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Optimize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Optimize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpdu")
        return true;
    return false;
}

Native::SpanningTree::Optimize::Bpdu::Bpdu()
    :
    transmission{YType::boolean, "transmission"}
{

    yang_name = "bpdu"; yang_parent_name = "optimize"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Optimize::Bpdu::~Bpdu()
{
}

bool Native::SpanningTree::Optimize::Bpdu::has_data() const
{
    return transmission.is_set;
}

bool Native::SpanningTree::Optimize::Bpdu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmission.yfilter);
}

std::string Native::SpanningTree::Optimize::Bpdu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:optimize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Optimize::Bpdu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpdu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Optimize::Bpdu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmission.is_set || is_set(transmission.yfilter)) leaf_name_data.push_back(transmission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Optimize::Bpdu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Optimize::Bpdu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Optimize::Bpdu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmission")
    {
        transmission = value;
        transmission.value_namespace = name_space;
        transmission.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Optimize::Bpdu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmission")
    {
        transmission.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Optimize::Bpdu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmission")
        return true;
    return false;
}

Native::SpanningTree::Pathcost::Pathcost()
    :
    method(std::make_shared<Native::SpanningTree::Pathcost::Method>())
{
    method->parent = this;

    yang_name = "pathcost"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Pathcost::~Pathcost()
{
}

bool Native::SpanningTree::Pathcost::has_data() const
{
    return (method !=  nullptr && method->has_data());
}

bool Native::SpanningTree::Pathcost::has_operation() const
{
    return is_set(yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::SpanningTree::Pathcost::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Pathcost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:pathcost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Pathcost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Pathcost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::SpanningTree::Pathcost::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Pathcost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::SpanningTree::Pathcost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Pathcost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Pathcost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method")
        return true;
    return false;
}

Native::SpanningTree::Pathcost::Method::Method()
    :
    long_{YType::empty, "long"},
    short_{YType::empty, "short"}
{

    yang_name = "method"; yang_parent_name = "pathcost"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Pathcost::Method::~Method()
{
}

bool Native::SpanningTree::Pathcost::Method::has_data() const
{
    return long_.is_set
	|| short_.is_set;
}

bool Native::SpanningTree::Pathcost::Method::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(short_.yfilter);
}

std::string Native::SpanningTree::Pathcost::Method::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:pathcost/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Pathcost::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Pathcost::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (short_.is_set || is_set(short_.yfilter)) leaf_name_data.push_back(short_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Pathcost::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Pathcost::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Pathcost::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short")
    {
        short_ = value;
        short_.value_namespace = name_space;
        short_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Pathcost::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "short")
    {
        short_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Pathcost::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long" || name == "short")
        return true;
    return false;
}

Native::SpanningTree::Portfast::Portfast()
    :
    bdpu{YType::enumeration, "bdpu"},
    default_{YType::empty, "default"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Portfast::~Portfast()
{
}

bool Native::SpanningTree::Portfast::has_data() const
{
    return bdpu.is_set
	|| default_.is_set;
}

bool Native::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bdpu.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::SpanningTree::Portfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bdpu.is_set || is_set(bdpu.yfilter)) leaf_name_data.push_back(bdpu.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bdpu")
    {
        bdpu = value;
        bdpu.value_namespace = name_space;
        bdpu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bdpu")
    {
        bdpu.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdpu" || name == "default")
        return true;
    return false;
}

Native::SpanningTree::Transmit::Transmit()
    :
    hold_count{YType::uint8, "hold-count"}
{

    yang_name = "transmit"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Transmit::~Transmit()
{
}

bool Native::SpanningTree::Transmit::has_data() const
{
    return hold_count.is_set;
}

bool Native::SpanningTree::Transmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_count.yfilter);
}

std::string Native::SpanningTree::Transmit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Transmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_count.is_set || is_set(hold_count.yfilter)) leaf_name_data.push_back(hold_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Transmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Transmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-count")
    {
        hold_count = value;
        hold_count.value_namespace = name_space;
        hold_count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Transmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-count")
    {
        hold_count.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Transmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-count")
        return true;
    return false;
}

Native::SpanningTree::Uplinkfast::Uplinkfast()
    :
    max_update_rate{YType::uint32, "max-update-rate"}
{

    yang_name = "uplinkfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Uplinkfast::~Uplinkfast()
{
}

bool Native::SpanningTree::Uplinkfast::has_data() const
{
    return max_update_rate.is_set;
}

bool Native::SpanningTree::Uplinkfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_update_rate.yfilter);
}

std::string Native::SpanningTree::Uplinkfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Uplinkfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:uplinkfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Uplinkfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_update_rate.is_set || is_set(max_update_rate.yfilter)) leaf_name_data.push_back(max_update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Uplinkfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Uplinkfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Uplinkfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-update-rate")
    {
        max_update_rate = value;
        max_update_rate.value_namespace = name_space;
        max_update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Uplinkfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-update-rate")
    {
        max_update_rate.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Uplinkfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-update-rate")
        return true;
    return false;
}

Native::SpanningTree::Vlan::Vlan()
    :
    id{YType::str, "id"},
    max_age{YType::uint8, "max-age"},
    forward_time{YType::uint8, "forward-time"},
    hello_time{YType::uint8, "hello-time"},
    priority{YType::uint16, "priority"}
    	,
    root(std::make_shared<Native::SpanningTree::Vlan::Root>())
{
    root->parent = this;

    yang_name = "vlan"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Vlan::~Vlan()
{
}

bool Native::SpanningTree::Vlan::has_data() const
{
    return id.is_set
	|| max_age.is_set
	|| forward_time.is_set
	|| hello_time.is_set
	|| priority.is_set
	|| (root !=  nullptr && root->has_data());
}

bool Native::SpanningTree::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(max_age.yfilter)
	|| ydk::is_set(forward_time.yfilter)
	|| ydk::is_set(hello_time.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (root !=  nullptr && root->has_operation());
}

std::string Native::SpanningTree::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:vlan" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (max_age.is_set || is_set(max_age.yfilter)) leaf_name_data.push_back(max_age.get_name_leafdata());
    if (forward_time.is_set || is_set(forward_time.yfilter)) leaf_name_data.push_back(forward_time.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "root")
    {
        if(root == nullptr)
        {
            root = std::make_shared<Native::SpanningTree::Vlan::Root>();
        }
        return root;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(root != nullptr)
    {
        children["root"] = root;
    }

    return children;
}

void Native::SpanningTree::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-age")
    {
        max_age = value;
        max_age.value_namespace = name_space;
        max_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-time")
    {
        forward_time = value;
        forward_time.value_namespace = name_space;
        forward_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "max-age")
    {
        max_age.yfilter = yfilter;
    }
    if(value_path == "forward-time")
    {
        forward_time.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "root" || name == "id" || name == "max-age" || name == "forward-time" || name == "hello-time" || name == "priority")
        return true;
    return false;
}

Native::SpanningTree::Vlan::Root::Root()
    :
    primary(std::make_shared<Native::SpanningTree::Vlan::Root::Primary>())
	,secondary(std::make_shared<Native::SpanningTree::Vlan::Root::Secondary>())
{
    primary->parent = this;
    secondary->parent = this;

    yang_name = "root"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SpanningTree::Vlan::Root::~Root()
{
}

bool Native::SpanningTree::Vlan::Root::has_data() const
{
    return (primary !=  nullptr && primary->has_data())
	|| (secondary !=  nullptr && secondary->has_data());
}

bool Native::SpanningTree::Vlan::Root::has_operation() const
{
    return is_set(yfilter)
	|| (primary !=  nullptr && primary->has_operation())
	|| (secondary !=  nullptr && secondary->has_operation());
}

std::string Native::SpanningTree::Vlan::Root::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::Root::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Vlan::Root::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::SpanningTree::Vlan::Root::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        if(secondary == nullptr)
        {
            secondary = std::make_shared<Native::SpanningTree::Vlan::Root::Secondary>();
        }
        return secondary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Vlan::Root::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    if(secondary != nullptr)
    {
        children["secondary"] = secondary;
    }

    return children;
}

void Native::SpanningTree::Vlan::Root::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Vlan::Root::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Vlan::Root::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::SpanningTree::Vlan::Root::Primary::Primary()
    :
    diameter{YType::uint8, "diameter"},
    hello_time{YType::uint8, "hello-time"}
{

    yang_name = "primary"; yang_parent_name = "root"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SpanningTree::Vlan::Root::Primary::~Primary()
{
}

bool Native::SpanningTree::Vlan::Root::Primary::has_data() const
{
    return diameter.is_set
	|| hello_time.is_set;
}

bool Native::SpanningTree::Vlan::Root::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diameter.yfilter)
	|| ydk::is_set(hello_time.yfilter);
}

std::string Native::SpanningTree::Vlan::Root::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::Root::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diameter.is_set || is_set(diameter.yfilter)) leaf_name_data.push_back(diameter.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Vlan::Root::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Vlan::Root::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Vlan::Root::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diameter")
    {
        diameter = value;
        diameter.value_namespace = name_space;
        diameter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Vlan::Root::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diameter")
    {
        diameter.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Vlan::Root::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diameter" || name == "hello-time")
        return true;
    return false;
}

Native::SpanningTree::Vlan::Root::Secondary::Secondary()
    :
    diameter{YType::uint8, "diameter"},
    hello_time{YType::uint8, "hello-time"}
{

    yang_name = "secondary"; yang_parent_name = "root"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SpanningTree::Vlan::Root::Secondary::~Secondary()
{
}

bool Native::SpanningTree::Vlan::Root::Secondary::has_data() const
{
    return diameter.is_set
	|| hello_time.is_set;
}

bool Native::SpanningTree::Vlan::Root::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diameter.yfilter)
	|| ydk::is_set(hello_time.yfilter);
}

std::string Native::SpanningTree::Vlan::Root::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::Root::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diameter.is_set || is_set(diameter.yfilter)) leaf_name_data.push_back(diameter.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Vlan::Root::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Vlan::Root::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Vlan::Root::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diameter")
    {
        diameter = value;
        diameter.value_namespace = name_space;
        diameter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Vlan::Root::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diameter")
    {
        diameter.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Vlan::Root::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diameter" || name == "hello-time")
        return true;
    return false;
}

Native::Subscriber::Subscriber()
    :
    templating{YType::empty, "templating"}
{

    yang_name = "subscriber"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Subscriber::~Subscriber()
{
}

bool Native::Subscriber::has_data() const
{
    return templating.is_set;
}

bool Native::Subscriber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(templating.yfilter);
}

std::string Native::Subscriber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Subscriber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (templating.is_set || is_set(templating.yfilter)) leaf_name_data.push_back(templating.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Subscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Subscriber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "templating")
    {
        templating = value;
        templating.value_namespace = name_space;
        templating.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Subscriber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "templating")
    {
        templating.yfilter = yfilter;
    }
}

bool Native::Subscriber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templating")
        return true;
    return false;
}

Native::Track::Track()
    :
    resolution(std::make_shared<Native::Track::Resolution>())
	,timer(std::make_shared<Native::Track::Timer>())
{
    resolution->parent = this;
    timer->parent = this;

    yang_name = "track"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::~Track()
{
}

bool Native::Track::has_data() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_data())
            return true;
    }
    return (resolution !=  nullptr && resolution->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Track::has_operation() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (resolution !=  nullptr && resolution->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Track::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Track::TrackedObject>();
        c->parent = this;
        tracked_object.push_back(c);
        return c;
    }

    if(child_yang_name == "resolution")
    {
        if(resolution == nullptr)
        {
            resolution = std::make_shared<Native::Track::Resolution>();
        }
        return resolution;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Track::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tracked_object)
    {
        children[c->get_segment_path()] = c;
    }

    if(resolution != nullptr)
    {
        children["resolution"] = resolution;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    return children;
}

void Native::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-object" || name == "resolution" || name == "timer")
        return true;
    return false;
}

Native::Track::TrackedObject::TrackedObject()
    :
    object_number{YType::uint32, "object-number"},
    stub_object{YType::empty, "stub-object"},
    default_state{YType::enumeration, "default-state"}
    	,
    interface(std::make_shared<Native::Track::TrackedObject::Interface>())
	,ip(std::make_shared<Native::Track::TrackedObject::Ip>())
	,ipv6(std::make_shared<Native::Track::TrackedObject::Ipv6>())
	,list(std::make_shared<Native::Track::TrackedObject::List>())
	,default_(std::make_shared<Native::Track::TrackedObject::Default_>())
	,delay(std::make_shared<Native::Track::TrackedObject::Delay>())
	,ipv6_object(std::make_shared<Native::Track::TrackedObject::Ipv6Object>())
	,ip_object(std::make_shared<Native::Track::TrackedObject::IpObject>())
{
    interface->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    list->parent = this;
    default_->parent = this;
    delay->parent = this;
    ipv6_object->parent = this;
    ip_object->parent = this;

    yang_name = "tracked-object"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::TrackedObject::~TrackedObject()
{
}

bool Native::Track::TrackedObject::has_data() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return object_number.is_set
	|| stub_object.is_set
	|| default_state.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (list !=  nullptr && list->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (ipv6_object !=  nullptr && ipv6_object->has_data())
	|| (ip_object !=  nullptr && ip_object->has_data());
}

bool Native::Track::TrackedObject::has_operation() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object_number.yfilter)
	|| ydk::is_set(stub_object.yfilter)
	|| ydk::is_set(default_state.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (list !=  nullptr && list->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (ipv6_object !=  nullptr && ipv6_object->has_operation())
	|| (ip_object !=  nullptr && ip_object->has_operation());
}

std::string Native::Track::TrackedObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-track:tracked-object" <<"[object-number='" <<object_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_number.is_set || is_set(object_number.yfilter)) leaf_name_data.push_back(object_number.get_name_leafdata());
    if (stub_object.is_set || is_set(stub_object.yfilter)) leaf_name_data.push_back(stub_object.get_name_leafdata());
    if (default_state.is_set || is_set(default_state.yfilter)) leaf_name_data.push_back(default_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Track::TrackedObject::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::TrackedObject::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Track::TrackedObject::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Track::TrackedObject::List>();
        }
        return list;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Track::TrackedObject::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Track::TrackedObject::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Track::TrackedObject::Object>();
        c->parent = this;
        object.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-object")
    {
        if(ipv6_object == nullptr)
        {
            ipv6_object = std::make_shared<Native::Track::TrackedObject::Ipv6Object>();
        }
        return ipv6_object;
    }

    if(child_yang_name == "ip-object")
    {
        if(ip_object == nullptr)
        {
            ip_object = std::make_shared<Native::Track::TrackedObject::IpObject>();
        }
        return ip_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    for (auto const & c : object)
    {
        children[c->get_segment_path()] = c;
    }

    if(ipv6_object != nullptr)
    {
        children["ipv6-object"] = ipv6_object;
    }

    if(ip_object != nullptr)
    {
        children["ip-object"] = ip_object;
    }

    return children;
}

void Native::Track::TrackedObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-number")
    {
        object_number = value;
        object_number.value_namespace = name_space;
        object_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-object")
    {
        stub_object = value;
        stub_object.value_namespace = name_space;
        stub_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-state")
    {
        default_state = value;
        default_state.value_namespace = name_space;
        default_state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-number")
    {
        object_number.yfilter = yfilter;
    }
    if(value_path == "stub-object")
    {
        stub_object.yfilter = yfilter;
    }
    if(value_path == "default-state")
    {
        default_state.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ip" || name == "ipv6" || name == "list" || name == "default" || name == "delay" || name == "object" || name == "ipv6-object" || name == "ip-object" || name == "object-number" || name == "stub-object" || name == "default-state")
        return true;
    return false;
}

Native::Track::TrackedObject::Interface::Interface()
    :
    name{YType::str, "name"},
    protocol{YType::enumeration, "protocol"},
    routing{YType::empty, "routing"}
{

    yang_name = "interface"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Interface::~Interface()
{
}

bool Native::Track::TrackedObject::Interface::has_data() const
{
    return name.is_set
	|| protocol.is_set
	|| routing.is_set;
}

bool Native::Track::TrackedObject::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(routing.yfilter);
}

std::string Native::Track::TrackedObject::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing")
    {
        routing = value;
        routing.value_namespace = name_space;
        routing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "protocol" || name == "routing")
        return true;
    return false;
}

Native::Track::TrackedObject::Ip::Ip()
    :
    route(std::make_shared<Native::Track::TrackedObject::Ip::Route>())
	,sla(std::make_shared<Native::Track::TrackedObject::Ip::Sla>())
{
    route->parent = this;
    sla->parent = this;

    yang_name = "ip"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ip::~Ip()
{
}

bool Native::Track::TrackedObject::Ip::has_data() const
{
    return (route !=  nullptr && route->has_data())
	|| (sla !=  nullptr && sla->has_data());
}

bool Native::Track::TrackedObject::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation())
	|| (sla !=  nullptr && sla->has_operation());
}

std::string Native::Track::TrackedObject::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::TrackedObject::Ip::Route>();
        }
        return route;
    }

    if(child_yang_name == "sla")
    {
        if(sla == nullptr)
        {
            sla = std::make_shared<Native::Track::TrackedObject::Ip::Sla>();
        }
        return sla;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(sla != nullptr)
    {
        children["sla"] = sla;
    }

    return children;
}

void Native::Track::TrackedObject::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::TrackedObject::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::TrackedObject::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route" || name == "sla")
        return true;
    return false;
}

Native::Track::TrackedObject::Ip::Route::Route()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    reachability{YType::empty, "reachability"},
    metric{YType::enumeration, "metric"}
{

    yang_name = "route"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ip::Route::~Route()
{
}

bool Native::Track::TrackedObject::Ip::Route::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| reachability.is_set
	|| metric.is_set;
}

bool Native::Track::TrackedObject::Ip::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(reachability.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Track::TrackedObject::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ip::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.yfilter)) leaf_name_data.push_back(reachability.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability")
    {
        reachability = value;
        reachability.value_namespace = name_space;
        reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "reachability")
    {
        reachability.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "reachability" || name == "metric")
        return true;
    return false;
}

Native::Track::TrackedObject::Ip::Sla::Sla()
    :
    number{YType::uint32, "number"},
    reachability{YType::empty, "reachability"},
    state{YType::empty, "state"}
{

    yang_name = "sla"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ip::Sla::~Sla()
{
}

bool Native::Track::TrackedObject::Ip::Sla::has_data() const
{
    return number.is_set
	|| reachability.is_set
	|| state.is_set;
}

bool Native::Track::TrackedObject::Ip::Sla::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(reachability.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Native::Track::TrackedObject::Ip::Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ip::Sla::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.yfilter)) leaf_name_data.push_back(reachability.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ip::Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ip::Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Ip::Sla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability")
    {
        reachability = value;
        reachability.value_namespace = name_space;
        reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Ip::Sla::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "reachability")
    {
        reachability.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Ip::Sla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "reachability" || name == "state")
        return true;
    return false;
}

Native::Track::TrackedObject::Ipv6::Ipv6()
    :
    route(std::make_shared<Native::Track::TrackedObject::Ipv6::Route>())
{
    route->parent = this;

    yang_name = "ipv6"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ipv6::~Ipv6()
{
}

bool Native::Track::TrackedObject::Ipv6::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Track::TrackedObject::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Track::TrackedObject::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::TrackedObject::Ipv6::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Track::TrackedObject::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::TrackedObject::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::TrackedObject::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Track::TrackedObject::Ipv6::Route::Route()
    :
    address{YType::str, "address"},
    reachability{YType::empty, "reachability"},
    metric{YType::enumeration, "metric"}
{

    yang_name = "route"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ipv6::Route::~Route()
{
}

bool Native::Track::TrackedObject::Ipv6::Route::has_data() const
{
    return address.is_set
	|| reachability.is_set
	|| metric.is_set;
}

bool Native::Track::TrackedObject::Ipv6::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(reachability.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Track::TrackedObject::Ipv6::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ipv6::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.yfilter)) leaf_name_data.push_back(reachability.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ipv6::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ipv6::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Ipv6::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability")
    {
        reachability = value;
        reachability.value_namespace = name_space;
        reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Ipv6::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "reachability")
    {
        reachability.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Ipv6::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "reachability" || name == "metric")
        return true;
    return false;
}

Native::Track::TrackedObject::List::List()
    :
    boolean{YType::enumeration, "boolean"},
    threshold{YType::enumeration, "threshold"}
{

    yang_name = "list"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::List::~List()
{
}

bool Native::Track::TrackedObject::List::has_data() const
{
    return boolean.is_set
	|| threshold.is_set;
}

bool Native::Track::TrackedObject::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boolean.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Track::TrackedObject::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boolean.is_set || is_set(boolean.yfilter)) leaf_name_data.push_back(boolean.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boolean")
    {
        boolean = value;
        boolean.value_namespace = name_space;
        boolean.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boolean")
    {
        boolean.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boolean" || name == "threshold")
        return true;
    return false;
}

Native::Track::TrackedObject::Default_::Default_()
    :
    default_state{YType::enumeration, "default-state"}
    	,
    delay(nullptr) // presence node
	,ip(std::make_shared<Native::Track::TrackedObject::Default_::Ip>())
	,ipv6(std::make_shared<Native::Track::TrackedObject::Default_::Ipv6>())
{
    ip->parent = this;
    ipv6->parent = this;

    yang_name = "default"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Default_::~Default_()
{
}

bool Native::Track::TrackedObject::Default_::has_data() const
{
    return default_state.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Track::TrackedObject::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_state.yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Track::TrackedObject::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_state.is_set || is_set(default_state.yfilter)) leaf_name_data.push_back(default_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Track::TrackedObject::Default_::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::TrackedObject::Default_::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Track::TrackedObject::Default_::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Track::TrackedObject::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-state")
    {
        default_state = value;
        default_state.value_namespace = name_space;
        default_state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-state")
    {
        default_state.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "ip" || name == "ipv6" || name == "default-state")
        return true;
    return false;
}

Native::Track::TrackedObject::Default_::Delay::Delay()
{

    yang_name = "delay"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Default_::Delay::~Delay()
{
}

bool Native::Track::TrackedObject::Default_::Delay::has_data() const
{
    return false;
}

bool Native::Track::TrackedObject::Default_::Delay::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Track::TrackedObject::Default_::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Default_::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Default_::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Default_::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Default_::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::TrackedObject::Default_::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::TrackedObject::Default_::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Track::TrackedObject::Default_::Ip::Ip()
    :
    vrf{YType::empty, "vrf"}
{

    yang_name = "ip"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Default_::Ip::~Ip()
{
}

bool Native::Track::TrackedObject::Default_::Ip::has_data() const
{
    return vrf.is_set;
}

bool Native::Track::TrackedObject::Default_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Track::TrackedObject::Default_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Default_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Default_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Default_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Default_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Default_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Default_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Track::TrackedObject::Default_::Ipv6::Ipv6()
    :
    vrf{YType::empty, "vrf"}
{

    yang_name = "ipv6"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Default_::Ipv6::~Ipv6()
{
}

bool Native::Track::TrackedObject::Default_::Ipv6::has_data() const
{
    return vrf.is_set;
}

bool Native::Track::TrackedObject::Default_::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Track::TrackedObject::Default_::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Default_::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Default_::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Default_::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Default_::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Default_::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Default_::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Track::TrackedObject::Delay::Delay()
    :
    down{YType::uint32, "down"},
    up{YType::uint32, "up"}
{

    yang_name = "delay"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Delay::~Delay()
{
}

bool Native::Track::TrackedObject::Delay::has_data() const
{
    return down.is_set
	|| up.is_set;
}

bool Native::Track::TrackedObject::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string Native::Track::TrackedObject::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "up")
        return true;
    return false;
}

Native::Track::TrackedObject::Object::Object()
    :
    number{YType::uint32, "number"},
    not_{YType::empty, "not"}
{

    yang_name = "object"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Object::~Object()
{
}

bool Native::Track::TrackedObject::Object::has_data() const
{
    return number.is_set
	|| not_.is_set;
}

bool Native::Track::TrackedObject::Object::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(not_.yfilter);
}

std::string Native::Track::TrackedObject::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Object::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (not_.is_set || is_set(not_.yfilter)) leaf_name_data.push_back(not_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Object::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not")
    {
        not_ = value;
        not_.value_namespace = name_space;
        not_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Object::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "not")
    {
        not_.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Object::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "not")
        return true;
    return false;
}

Native::Track::TrackedObject::Ipv6Object::Ipv6Object()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "ipv6-object"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ipv6Object::~Ipv6Object()
{
}

bool Native::Track::TrackedObject::Ipv6Object::has_data() const
{
    return vrf.is_set;
}

bool Native::Track::TrackedObject::Ipv6Object::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Track::TrackedObject::Ipv6Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ipv6Object::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ipv6Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ipv6Object::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Ipv6Object::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Ipv6Object::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Ipv6Object::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Track::TrackedObject::IpObject::IpObject()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "ip-object"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::IpObject::~IpObject()
{
}

bool Native::Track::TrackedObject::IpObject::has_data() const
{
    return vrf.is_set;
}

bool Native::Track::TrackedObject::IpObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Track::TrackedObject::IpObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::IpObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::IpObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::IpObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::IpObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::IpObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::IpObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Track::Resolution::Resolution()
    :
    ip(std::make_shared<Native::Track::Resolution::Ip>())
{
    ip->parent = this;

    yang_name = "resolution"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Resolution::~Resolution()
{
}

bool Native::Track::Resolution::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Track::Resolution::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Track::Resolution::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Resolution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-track:resolution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Resolution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Resolution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::Resolution::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Resolution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Track::Resolution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Resolution::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Resolution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Track::Resolution::Ip::Ip()
    :
    route(std::make_shared<Native::Track::Resolution::Ip::Route>())
{
    route->parent = this;

    yang_name = "ip"; yang_parent_name = "resolution"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Resolution::Ip::~Ip()
{
}

bool Native::Track::Resolution::Ip::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Track::Resolution::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Track::Resolution::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:resolution/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Resolution::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Resolution::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Resolution::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::Resolution::Ip::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Resolution::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Track::Resolution::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Resolution::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Resolution::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Track::Resolution::Ip::Route::Route()
    :
    bgp{YType::uint32, "bgp"},
    eigrp{YType::uint32, "eigrp"},
    isis{YType::uint32, "isis"},
    ospf{YType::uint32, "ospf"},
    static_{YType::uint32, "static"}
{

    yang_name = "route"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Resolution::Ip::Route::~Route()
{
}

bool Native::Track::Resolution::Ip::Route::has_data() const
{
    return bgp.is_set
	|| eigrp.is_set
	|| isis.is_set
	|| ospf.is_set
	|| static_.is_set;
}

bool Native::Track::Resolution::Ip::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(isis.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::Track::Resolution::Ip::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:resolution/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Resolution::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Resolution::Ip::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (isis.is_set || is_set(isis.yfilter)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Resolution::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Resolution::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Resolution::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis")
    {
        isis = value;
        isis.value_namespace = name_space;
        isis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Resolution::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "isis")
    {
        isis.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Track::Resolution::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "eigrp" || name == "isis" || name == "ospf" || name == "static")
        return true;
    return false;
}

Native::Track::Timer::Timer()
    :
    interface(std::make_shared<Native::Track::Timer::Interface>())
	,ip(std::make_shared<Native::Track::Timer::Ip>())
	,ipv6(std::make_shared<Native::Track::Timer::Ipv6>())
	,list(std::make_shared<Native::Track::Timer::List>())
	,stub_object(std::make_shared<Native::Track::Timer::StubObject>())
{
    interface->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    list->parent = this;
    stub_object->parent = this;

    yang_name = "timer"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::~Timer()
{
}

bool Native::Track::Timer::has_data() const
{
    return (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (list !=  nullptr && list->has_data())
	|| (stub_object !=  nullptr && stub_object->has_data());
}

bool Native::Track::Timer::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (list !=  nullptr && list->has_operation())
	|| (stub_object !=  nullptr && stub_object->has_operation());
}

std::string Native::Track::Timer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-track:timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Track::Timer::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::Timer::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Track::Timer::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Track::Timer::List>();
        }
        return list;
    }

    if(child_yang_name == "stub-object")
    {
        if(stub_object == nullptr)
        {
            stub_object = std::make_shared<Native::Track::Timer::StubObject>();
        }
        return stub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(stub_object != nullptr)
    {
        children["stub-object"] = stub_object;
    }

    return children;
}

void Native::Track::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ip" || name == "ipv6" || name == "list" || name == "stub-object")
        return true;
    return false;
}

Native::Track::Timer::Interface::Interface()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "interface"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Interface::~Interface()
{
}

bool Native::Track::Timer::Interface::has_data() const
{
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Track::Timer::Ip::Ip()
    :
    route(std::make_shared<Native::Track::Timer::Ip::Route>())
	,sla(std::make_shared<Native::Track::Timer::Ip::Sla>())
{
    route->parent = this;
    sla->parent = this;

    yang_name = "ip"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Ip::~Ip()
{
}

bool Native::Track::Timer::Ip::has_data() const
{
    return (route !=  nullptr && route->has_data())
	|| (sla !=  nullptr && sla->has_data());
}

bool Native::Track::Timer::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation())
	|| (sla !=  nullptr && sla->has_operation());
}

std::string Native::Track::Timer::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::Timer::Ip::Route>();
        }
        return route;
    }

    if(child_yang_name == "sla")
    {
        if(sla == nullptr)
        {
            sla = std::make_shared<Native::Track::Timer::Ip::Sla>();
        }
        return sla;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(sla != nullptr)
    {
        children["sla"] = sla;
    }

    return children;
}

void Native::Track::Timer::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Timer::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Timer::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route" || name == "sla")
        return true;
    return false;
}

Native::Track::Timer::Ip::Route::Route()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "route"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Ip::Route::~Route()
{
}

bool Native::Track::Timer::Ip::Route::has_data() const
{
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::Ip::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::Ip::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ip::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Track::Timer::Ip::Sla::Sla()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "sla"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Ip::Sla::~Sla()
{
}

bool Native::Track::Timer::Ip::Sla::has_data() const
{
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::Ip::Sla::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::Ip::Sla::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ip::Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ip::Sla::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Ip::Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ip::Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::Ip::Sla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::Ip::Sla::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::Ip::Sla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Track::Timer::Ipv6::Ipv6()
    :
    route(std::make_shared<Native::Track::Timer::Ipv6::Route>())
{
    route->parent = this;

    yang_name = "ipv6"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Ipv6::~Ipv6()
{
}

bool Native::Track::Timer::Ipv6::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Track::Timer::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Track::Timer::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::Timer::Ipv6::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Track::Timer::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Timer::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Timer::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Track::Timer::Ipv6::Route::Route()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "route"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Ipv6::Route::~Route()
{
}

bool Native::Track::Timer::Ipv6::Route::has_data() const
{
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::Ipv6::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::Ipv6::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ipv6::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ipv6::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Ipv6::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ipv6::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::Ipv6::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::Ipv6::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::Ipv6::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Track::Timer::List::List()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "list"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::List::~List()
{
}

bool Native::Track::Timer::List::has_data() const
{
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Track::Timer::StubObject::StubObject()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "stub-object"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::StubObject::~StubObject()
{
}

bool Native::Track::Timer::StubObject::has_data() const
{
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::StubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::StubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::StubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::StubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::StubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::StubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::StubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::StubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::StubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Dot1X::Dot1X()
    :
    system_auth_control{YType::empty, "Cisco-IOS-XE-dot1x:system-auth-control"}
    	,
    critical(std::make_shared<Native::Dot1X::Critical>())
	,test(std::make_shared<Native::Dot1X::Test>())
	,supplicant(std::make_shared<Native::Dot1X::Supplicant>())
{
    critical->parent = this;
    test->parent = this;
    supplicant->parent = this;

    yang_name = "dot1x"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::~Dot1X()
{
}

bool Native::Dot1X::has_data() const
{
    for (std::size_t index=0; index<credentials.size(); index++)
    {
        if(credentials[index]->has_data())
            return true;
    }
    return system_auth_control.is_set
	|| (critical !=  nullptr && critical->has_data())
	|| (test !=  nullptr && test->has_data())
	|| (supplicant !=  nullptr && supplicant->has_data());
}

bool Native::Dot1X::has_operation() const
{
    for (std::size_t index=0; index<credentials.size(); index++)
    {
        if(credentials[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(system_auth_control.yfilter)
	|| (critical !=  nullptr && critical->has_operation())
	|| (test !=  nullptr && test->has_operation())
	|| (supplicant !=  nullptr && supplicant->has_operation());
}

std::string Native::Dot1X::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_auth_control.is_set || is_set(system_auth_control.yfilter)) leaf_name_data.push_back(system_auth_control.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "credentials")
    {
        for(auto const & c : credentials)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Dot1X::Credentials>();
        c->parent = this;
        credentials.push_back(c);
        return c;
    }

    if(child_yang_name == "critical")
    {
        if(critical == nullptr)
        {
            critical = std::make_shared<Native::Dot1X::Critical>();
        }
        return critical;
    }

    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Dot1X::Test>();
        }
        return test;
    }

    if(child_yang_name == "supplicant")
    {
        if(supplicant == nullptr)
        {
            supplicant = std::make_shared<Native::Dot1X::Supplicant>();
        }
        return supplicant;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : credentials)
    {
        children[c->get_segment_path()] = c;
    }

    if(critical != nullptr)
    {
        children["critical"] = critical;
    }

    if(test != nullptr)
    {
        children["test"] = test;
    }

    if(supplicant != nullptr)
    {
        children["supplicant"] = supplicant;
    }

    return children;
}

void Native::Dot1X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-auth-control")
    {
        system_auth_control = value;
        system_auth_control.value_namespace = name_space;
        system_auth_control.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-auth-control")
    {
        system_auth_control.yfilter = yfilter;
    }
}

bool Native::Dot1X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "credentials" || name == "critical" || name == "test" || name == "supplicant" || name == "system-auth-control")
        return true;
    return false;
}

Native::Dot1X::Credentials::Credentials()
    :
    profile_name{YType::str, "profile-name"},
    username{YType::str, "username"},
    pki_trustpoint{YType::str, "pki-trustpoint"}
    	,
    password(std::make_shared<Native::Dot1X::Credentials::Password>())
{
    password->parent = this;

    yang_name = "credentials"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::Credentials::~Credentials()
{
}

bool Native::Dot1X::Credentials::has_data() const
{
    return profile_name.is_set
	|| username.is_set
	|| pki_trustpoint.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Dot1X::Credentials::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(pki_trustpoint.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Dot1X::Credentials::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::Credentials::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:credentials" <<"[profile-name='" <<profile_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Credentials::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (pki_trustpoint.is_set || is_set(pki_trustpoint.yfilter)) leaf_name_data.push_back(pki_trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Credentials::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Dot1X::Credentials::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Credentials::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Dot1X::Credentials::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pki-trustpoint")
    {
        pki_trustpoint = value;
        pki_trustpoint.value_namespace = name_space;
        pki_trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Credentials::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "pki-trustpoint")
    {
        pki_trustpoint.yfilter = yfilter;
    }
}

bool Native::Dot1X::Credentials::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "profile-name" || name == "username" || name == "pki-trustpoint")
        return true;
    return false;
}

Native::Dot1X::Credentials::Password::Password()
    :
    type{YType::enumeration, "type"},
    secret{YType::str, "secret"}
{

    yang_name = "password"; yang_parent_name = "credentials"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Dot1X::Credentials::Password::~Password()
{
}

bool Native::Dot1X::Credentials::Password::has_data() const
{
    return type.is_set
	|| secret.is_set;
}

bool Native::Dot1X::Credentials::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Dot1X::Credentials::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Credentials::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Credentials::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Credentials::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Dot1X::Credentials::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Credentials::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Dot1X::Credentials::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "secret")
        return true;
    return false;
}

Native::Dot1X::Critical::Critical()
    :
    eapol{YType::empty, "eapol"}
    	,
    recovery(std::make_shared<Native::Dot1X::Critical::Recovery>())
{
    recovery->parent = this;

    yang_name = "critical"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::Critical::~Critical()
{
}

bool Native::Dot1X::Critical::has_data() const
{
    return eapol.is_set
	|| (recovery !=  nullptr && recovery->has_data());
}

bool Native::Dot1X::Critical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eapol.yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Dot1X::Critical::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:critical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Critical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eapol.is_set || is_set(eapol.yfilter)) leaf_name_data.push_back(eapol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Dot1X::Critical::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Dot1X::Critical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eapol")
    {
        eapol = value;
        eapol.value_namespace = name_space;
        eapol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Critical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eapol")
    {
        eapol.yfilter = yfilter;
    }
}

bool Native::Dot1X::Critical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery" || name == "eapol")
        return true;
    return false;
}

Native::Dot1X::Critical::Recovery::Recovery()
    :
    delay{YType::uint16, "delay"}
{

    yang_name = "recovery"; yang_parent_name = "critical"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::Critical::Recovery::~Recovery()
{
}

bool Native::Dot1X::Critical::Recovery::has_data() const
{
    return delay.is_set;
}

bool Native::Dot1X::Critical::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Dot1X::Critical::Recovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/Cisco-IOS-XE-dot1x:critical/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::Critical::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Critical::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Critical::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Critical::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Dot1X::Critical::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Critical::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Dot1X::Critical::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Dot1X::Test::Test()
    :
    timeout{YType::uint16, "timeout"}
{

    yang_name = "test"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::Test::~Test()
{
}

bool Native::Dot1X::Test::has_data() const
{
    return timeout.is_set;
}

bool Native::Dot1X::Test::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Dot1X::Test::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Dot1X::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Dot1X::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Dot1X::Supplicant::Supplicant()
    :
    force_multicast{YType::empty, "force-multicast"}
{

    yang_name = "supplicant"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::Supplicant::~Supplicant()
{
}

bool Native::Dot1X::Supplicant::has_data() const
{
    return force_multicast.is_set;
}

bool Native::Dot1X::Supplicant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(force_multicast.yfilter);
}

std::string Native::Dot1X::Supplicant::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::Supplicant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:supplicant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Supplicant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force_multicast.is_set || is_set(force_multicast.yfilter)) leaf_name_data.push_back(force_multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Supplicant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Supplicant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Dot1X::Supplicant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "force-multicast")
    {
        force_multicast = value;
        force_multicast.value_namespace = name_space;
        force_multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Supplicant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "force-multicast")
    {
        force_multicast.yfilter = yfilter;
    }
}

bool Native::Dot1X::Supplicant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "force-multicast")
        return true;
    return false;
}

Native::Fallback::Fallback()
    :
    profile(std::make_shared<Native::Fallback::Profile>())
{
    profile->parent = this;

    yang_name = "fallback"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fallback::~Fallback()
{
}

bool Native::Fallback::has_data() const
{
    return (profile !=  nullptr && profile->has_data());
}

bool Native::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Native::Fallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Fallback::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    return children;
}

void Native::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Fallback::Profile::Profile()
{

    yang_name = "profile"; yang_parent_name = "fallback"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fallback::Profile::~Profile()
{
}

bool Native::Fallback::Profile::has_data() const
{
    for (std::size_t index=0; index<fallback_list.size(); index++)
    {
        if(fallback_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Fallback::Profile::has_operation() const
{
    for (std::size_t index=0; index<fallback_list.size(); index++)
    {
        if(fallback_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Fallback::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fallback/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fallback::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fallback::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback-list")
    {
        for(auto const & c : fallback_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Fallback::Profile::FallbackList>();
        c->parent = this;
        fallback_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fallback_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Fallback::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fallback::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fallback::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback-list")
        return true;
    return false;
}

Native::Fallback::Profile::FallbackList::FallbackList()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    ip(std::make_shared<Native::Fallback::Profile::FallbackList::Ip>())
{
    ip->parent = this;

    yang_name = "fallback-list"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fallback::Profile::FallbackList::~FallbackList()
{
}

bool Native::Fallback::Profile::FallbackList::has_data() const
{
    return name.is_set
	|| description.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Fallback::Profile::FallbackList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Fallback::Profile::FallbackList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fallback/Cisco-IOS-XE-dot1x:profile/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fallback::Profile::FallbackList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback-list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::Profile::FallbackList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fallback::Profile::FallbackList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Fallback::Profile::FallbackList::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::Profile::FallbackList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Fallback::Profile::FallbackList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Fallback::Profile::FallbackList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Fallback::Profile::FallbackList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "name" || name == "description")
        return true;
    return false;
}

Native::Fallback::Profile::FallbackList::Ip::Ip()
    :
    admission{YType::str, "admission"}
{

    yang_name = "ip"; yang_parent_name = "fallback-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Fallback::Profile::FallbackList::Ip::~Ip()
{
}

bool Native::Fallback::Profile::FallbackList::Ip::has_data() const
{
    for (std::size_t index=0; index<access_group.size(); index++)
    {
        if(access_group[index]->has_data())
            return true;
    }
    return admission.is_set;
}

bool Native::Fallback::Profile::FallbackList::Ip::has_operation() const
{
    for (std::size_t index=0; index<access_group.size(); index++)
    {
        if(access_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admission.yfilter);
}

std::string Native::Fallback::Profile::FallbackList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::Profile::FallbackList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.yfilter)) leaf_name_data.push_back(admission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fallback::Profile::FallbackList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        for(auto const & c : access_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Fallback::Profile::FallbackList::Ip::AccessGroup>();
        c->parent = this;
        access_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::Profile::FallbackList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Fallback::Profile::FallbackList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admission")
    {
        admission = value;
        admission.value_namespace = name_space;
        admission.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fallback::Profile::FallbackList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admission")
    {
        admission.yfilter = yfilter;
    }
}

bool Native::Fallback::Profile::FallbackList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "admission")
        return true;
    return false;
}

Native::Fallback::Profile::FallbackList::Ip::AccessGroup::AccessGroup()
    :
    name{YType::str, "name"},
    in{YType::empty, "in"}
{

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Fallback::Profile::FallbackList::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Fallback::Profile::FallbackList::Ip::AccessGroup::has_data() const
{
    return name.is_set
	|| in.is_set;
}

bool Native::Fallback::Profile::FallbackList::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Fallback::Profile::FallbackList::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fallback::Profile::FallbackList::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Fallback::Profile::FallbackList::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "in")
        return true;
    return false;
}

Native::ParameterMap::ParameterMap()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    parameter_map_type{YType::enumeration, "parameter-map-type"},
    alert{YType::enumeration, "Cisco-IOS-XE-policy:alert"},
    application_inspect{YType::enumeration, "Cisco-IOS-XE-policy:application-inspect"},
    audit_trail{YType::enumeration, "Cisco-IOS-XE-policy:audit-trail"},
    dns_timeout{YType::uint32, "Cisco-IOS-XE-policy:dns-timeout"},
    max_destination{YType::uint32, "Cisco-IOS-XE-policy:max-destination"},
    zone_mismatch{YType::enumeration, "Cisco-IOS-XE-policy:zone-mismatch"}
    	,
    timeout(std::make_shared<Native::ParameterMap::Timeout>())
	,watch_list(std::make_shared<Native::ParameterMap::WatchList>())
	,aggressive_aging(std::make_shared<Native::ParameterMap::AggressiveAging>())
	,global(std::make_shared<Native::ParameterMap::Global>())
	,icmp(std::make_shared<Native::ParameterMap::Icmp>())
	,lisp(std::make_shared<Native::ParameterMap::Lisp>())
	,log(std::make_shared<Native::ParameterMap::Log>())
	,max_incomplete(std::make_shared<Native::ParameterMap::MaxIncomplete>())
	,one_minute(std::make_shared<Native::ParameterMap::OneMinute>())
	,sessions(std::make_shared<Native::ParameterMap::Sessions>())
	,tcp_inspect(std::make_shared<Native::ParameterMap::TcpInspect>())
	,tcp_inspect_zone(std::make_shared<Native::ParameterMap::TcpInspectZone>())
	,threat_detection(std::make_shared<Native::ParameterMap::ThreatDetection>())
	,udp(std::make_shared<Native::ParameterMap::Udp>())
	,vrf(std::make_shared<Native::ParameterMap::Vrf>())
{
    timeout->parent = this;
    watch_list->parent = this;
    aggressive_aging->parent = this;
    global->parent = this;
    icmp->parent = this;
    lisp->parent = this;
    log->parent = this;
    max_incomplete->parent = this;
    one_minute->parent = this;
    sessions->parent = this;
    tcp_inspect->parent = this;
    tcp_inspect_zone->parent = this;
    threat_detection->parent = this;
    udp->parent = this;
    vrf->parent = this;

    yang_name = "parameter-map"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ParameterMap::~ParameterMap()
{
}

bool Native::ParameterMap::has_data() const
{
    return name.is_set
	|| type.is_set
	|| parameter_map_type.is_set
	|| alert.is_set
	|| application_inspect.is_set
	|| audit_trail.is_set
	|| dns_timeout.is_set
	|| max_destination.is_set
	|| zone_mismatch.is_set
	|| (timeout !=  nullptr && timeout->has_data())
	|| (watch_list !=  nullptr && watch_list->has_data())
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (log !=  nullptr && log->has_data())
	|| (max_incomplete !=  nullptr && max_incomplete->has_data())
	|| (one_minute !=  nullptr && one_minute->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (tcp_inspect !=  nullptr && tcp_inspect->has_data())
	|| (tcp_inspect_zone !=  nullptr && tcp_inspect_zone->has_data())
	|| (threat_detection !=  nullptr && threat_detection->has_data())
	|| (udp !=  nullptr && udp->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::ParameterMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(parameter_map_type.yfilter)
	|| ydk::is_set(alert.yfilter)
	|| ydk::is_set(application_inspect.yfilter)
	|| ydk::is_set(audit_trail.yfilter)
	|| ydk::is_set(dns_timeout.yfilter)
	|| ydk::is_set(max_destination.yfilter)
	|| ydk::is_set(zone_mismatch.yfilter)
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (watch_list !=  nullptr && watch_list->has_operation())
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (log !=  nullptr && log->has_operation())
	|| (max_incomplete !=  nullptr && max_incomplete->has_operation())
	|| (one_minute !=  nullptr && one_minute->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (tcp_inspect !=  nullptr && tcp_inspect->has_operation())
	|| (tcp_inspect_zone !=  nullptr && tcp_inspect_zone->has_operation())
	|| (threat_detection !=  nullptr && threat_detection->has_operation())
	|| (udp !=  nullptr && udp->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::ParameterMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (parameter_map_type.is_set || is_set(parameter_map_type.yfilter)) leaf_name_data.push_back(parameter_map_type.get_name_leafdata());
    if (alert.is_set || is_set(alert.yfilter)) leaf_name_data.push_back(alert.get_name_leafdata());
    if (application_inspect.is_set || is_set(application_inspect.yfilter)) leaf_name_data.push_back(application_inspect.get_name_leafdata());
    if (audit_trail.is_set || is_set(audit_trail.yfilter)) leaf_name_data.push_back(audit_trail.get_name_leafdata());
    if (dns_timeout.is_set || is_set(dns_timeout.yfilter)) leaf_name_data.push_back(dns_timeout.get_name_leafdata());
    if (max_destination.is_set || is_set(max_destination.yfilter)) leaf_name_data.push_back(max_destination.get_name_leafdata());
    if (zone_mismatch.is_set || is_set(zone_mismatch.yfilter)) leaf_name_data.push_back(zone_mismatch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::ParameterMap::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "watch-list")
    {
        if(watch_list == nullptr)
        {
            watch_list = std::make_shared<Native::ParameterMap::WatchList>();
        }
        return watch_list;
    }

    if(child_yang_name == "aggressive-aging")
    {
        if(aggressive_aging == nullptr)
        {
            aggressive_aging = std::make_shared<Native::ParameterMap::AggressiveAging>();
        }
        return aggressive_aging;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::ParameterMap::Global>();
        }
        return global;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::ParameterMap::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::ParameterMap::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::ParameterMap::Log>();
        }
        return log;
    }

    if(child_yang_name == "max-incomplete")
    {
        if(max_incomplete == nullptr)
        {
            max_incomplete = std::make_shared<Native::ParameterMap::MaxIncomplete>();
        }
        return max_incomplete;
    }

    if(child_yang_name == "one-minute")
    {
        if(one_minute == nullptr)
        {
            one_minute = std::make_shared<Native::ParameterMap::OneMinute>();
        }
        return one_minute;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Native::ParameterMap::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "tcp-inspect")
    {
        if(tcp_inspect == nullptr)
        {
            tcp_inspect = std::make_shared<Native::ParameterMap::TcpInspect>();
        }
        return tcp_inspect;
    }

    if(child_yang_name == "tcp-inspect-zone")
    {
        if(tcp_inspect_zone == nullptr)
        {
            tcp_inspect_zone = std::make_shared<Native::ParameterMap::TcpInspectZone>();
        }
        return tcp_inspect_zone;
    }

    if(child_yang_name == "threat-detection")
    {
        if(threat_detection == nullptr)
        {
            threat_detection = std::make_shared<Native::ParameterMap::ThreatDetection>();
        }
        return threat_detection;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::ParameterMap::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::ParameterMap::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    if(watch_list != nullptr)
    {
        children["watch-list"] = watch_list;
    }

    if(aggressive_aging != nullptr)
    {
        children["aggressive-aging"] = aggressive_aging;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(log != nullptr)
    {
        children["log"] = log;
    }

    if(max_incomplete != nullptr)
    {
        children["max-incomplete"] = max_incomplete;
    }

    if(one_minute != nullptr)
    {
        children["one-minute"] = one_minute;
    }

    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    if(tcp_inspect != nullptr)
    {
        children["tcp-inspect"] = tcp_inspect;
    }

    if(tcp_inspect_zone != nullptr)
    {
        children["tcp-inspect-zone"] = tcp_inspect_zone;
    }

    if(threat_detection != nullptr)
    {
        children["threat-detection"] = threat_detection;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::ParameterMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parameter-map-type")
    {
        parameter_map_type = value;
        parameter_map_type.value_namespace = name_space;
        parameter_map_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alert")
    {
        alert = value;
        alert.value_namespace = name_space;
        alert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-inspect")
    {
        application_inspect = value;
        application_inspect.value_namespace = name_space;
        application_inspect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "audit-trail")
    {
        audit_trail = value;
        audit_trail.value_namespace = name_space;
        audit_trail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dns-timeout")
    {
        dns_timeout = value;
        dns_timeout.value_namespace = name_space;
        dns_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-destination")
    {
        max_destination = value;
        max_destination.value_namespace = name_space;
        max_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone-mismatch")
    {
        zone_mismatch = value;
        zone_mismatch.value_namespace = name_space;
        zone_mismatch.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "parameter-map-type")
    {
        parameter_map_type.yfilter = yfilter;
    }
    if(value_path == "alert")
    {
        alert.yfilter = yfilter;
    }
    if(value_path == "application-inspect")
    {
        application_inspect.yfilter = yfilter;
    }
    if(value_path == "audit-trail")
    {
        audit_trail.yfilter = yfilter;
    }
    if(value_path == "dns-timeout")
    {
        dns_timeout.yfilter = yfilter;
    }
    if(value_path == "max-destination")
    {
        max_destination.yfilter = yfilter;
    }
    if(value_path == "zone-mismatch")
    {
        zone_mismatch.yfilter = yfilter;
    }
}

bool Native::ParameterMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "watch-list" || name == "aggressive-aging" || name == "global" || name == "icmp" || name == "lisp" || name == "log" || name == "max-incomplete" || name == "one-minute" || name == "sessions" || name == "tcp-inspect" || name == "tcp-inspect-zone" || name == "threat-detection" || name == "udp" || name == "vrf" || name == "name" || name == "type" || name == "parameter-map-type" || name == "alert" || name == "application-inspect" || name == "audit-trail" || name == "dns-timeout" || name == "max-destination" || name == "zone-mismatch")
        return true;
    return false;
}

Native::ParameterMap::Timeout::Timeout()
    :
    init_state(nullptr) // presence node
	,fin_wait(std::make_shared<Native::ParameterMap::Timeout::FinWait>())
{
    fin_wait->parent = this;

    yang_name = "timeout"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Timeout::~Timeout()
{
}

bool Native::ParameterMap::Timeout::has_data() const
{
    return (init_state !=  nullptr && init_state->has_data())
	|| (fin_wait !=  nullptr && fin_wait->has_data());
}

bool Native::ParameterMap::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| (init_state !=  nullptr && init_state->has_operation())
	|| (fin_wait !=  nullptr && fin_wait->has_operation());
}

std::string Native::ParameterMap::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "init-state")
    {
        if(init_state == nullptr)
        {
            init_state = std::make_shared<Native::ParameterMap::Timeout::InitState>();
        }
        return init_state;
    }

    if(child_yang_name == "fin-wait")
    {
        if(fin_wait == nullptr)
        {
            fin_wait = std::make_shared<Native::ParameterMap::Timeout::FinWait>();
        }
        return fin_wait;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(init_state != nullptr)
    {
        children["init-state"] = init_state;
    }

    if(fin_wait != nullptr)
    {
        children["fin-wait"] = fin_wait;
    }

    return children;
}

void Native::ParameterMap::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-state" || name == "fin-wait")
        return true;
    return false;
}

Native::ParameterMap::Timeout::InitState::InitState()
    :
    sec{YType::uint32, "sec"}
{

    yang_name = "init-state"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Timeout::InitState::~InitState()
{
}

bool Native::ParameterMap::Timeout::InitState::has_data() const
{
    return sec.is_set;
}

bool Native::ParameterMap::Timeout::InitState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sec.yfilter);
}

std::string Native::ParameterMap::Timeout::InitState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Timeout::InitState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sec.is_set || is_set(sec.yfilter)) leaf_name_data.push_back(sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Timeout::InitState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Timeout::InitState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Timeout::InitState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sec")
    {
        sec = value;
        sec.value_namespace = name_space;
        sec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Timeout::InitState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sec")
    {
        sec.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Timeout::InitState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sec")
        return true;
    return false;
}

Native::ParameterMap::Timeout::FinWait::FinWait()
    :
    msec{YType::uint32, "msec"}
{

    yang_name = "fin-wait"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Timeout::FinWait::~FinWait()
{
}

bool Native::ParameterMap::Timeout::FinWait::has_data() const
{
    return msec.is_set;
}

bool Native::ParameterMap::Timeout::FinWait::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::ParameterMap::Timeout::FinWait::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fin-wait";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Timeout::FinWait::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Timeout::FinWait::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Timeout::FinWait::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Timeout::FinWait::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Timeout::FinWait::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Timeout::FinWait::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec")
        return true;
    return false;
}

Native::ParameterMap::WatchList::WatchList()
    :
    enabled{YType::empty, "enabled"},
    dynamic_expiry_timeout{YType::uint32, "dynamic-expiry-timeout"}
    	,
    add_item(std::make_shared<Native::ParameterMap::WatchList::AddItem>())
{
    add_item->parent = this;

    yang_name = "watch-list"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::WatchList::~WatchList()
{
}

bool Native::ParameterMap::WatchList::has_data() const
{
    return enabled.is_set
	|| dynamic_expiry_timeout.is_set
	|| (add_item !=  nullptr && add_item->has_data());
}

bool Native::ParameterMap::WatchList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(dynamic_expiry_timeout.yfilter)
	|| (add_item !=  nullptr && add_item->has_operation());
}

std::string Native::ParameterMap::WatchList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:watch-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::WatchList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (dynamic_expiry_timeout.is_set || is_set(dynamic_expiry_timeout.yfilter)) leaf_name_data.push_back(dynamic_expiry_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::WatchList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "add-item")
    {
        if(add_item == nullptr)
        {
            add_item = std::make_shared<Native::ParameterMap::WatchList::AddItem>();
        }
        return add_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::WatchList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(add_item != nullptr)
    {
        children["add-item"] = add_item;
    }

    return children;
}

void Native::ParameterMap::WatchList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic-expiry-timeout")
    {
        dynamic_expiry_timeout = value;
        dynamic_expiry_timeout.value_namespace = name_space;
        dynamic_expiry_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::WatchList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "dynamic-expiry-timeout")
    {
        dynamic_expiry_timeout.yfilter = yfilter;
    }
}

bool Native::ParameterMap::WatchList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add-item" || name == "enabled" || name == "dynamic-expiry-timeout")
        return true;
    return false;
}

Native::ParameterMap::WatchList::AddItem::AddItem()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "add-item"; yang_parent_name = "watch-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::WatchList::AddItem::~AddItem()
{
}

bool Native::ParameterMap::WatchList::AddItem::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::ParameterMap::WatchList::AddItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::ParameterMap::WatchList::AddItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "add-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::WatchList::AddItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::WatchList::AddItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::WatchList::AddItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::WatchList::AddItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::WatchList::AddItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::ParameterMap::WatchList::AddItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::ParameterMap::AggressiveAging::AggressiveAging()
    :
    high(std::make_shared<Native::ParameterMap::AggressiveAging::High>())
{
    high->parent = this;

    yang_name = "aggressive-aging"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::AggressiveAging::~AggressiveAging()
{
}

bool Native::ParameterMap::AggressiveAging::has_data() const
{
    return (high !=  nullptr && high->has_data());
}

bool Native::ParameterMap::AggressiveAging::has_operation() const
{
    return is_set(yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::ParameterMap::AggressiveAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:aggressive-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::AggressiveAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::AggressiveAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::ParameterMap::AggressiveAging::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::AggressiveAging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::ParameterMap::AggressiveAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::AggressiveAging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::AggressiveAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high")
        return true;
    return false;
}

Native::ParameterMap::AggressiveAging::High::High()
    :
    absolute(std::make_shared<Native::ParameterMap::AggressiveAging::High::Absolute>())
	,percent(std::make_shared<Native::ParameterMap::AggressiveAging::High::Percent>())
{
    absolute->parent = this;
    percent->parent = this;

    yang_name = "high"; yang_parent_name = "aggressive-aging"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::AggressiveAging::High::~High()
{
}

bool Native::ParameterMap::AggressiveAging::High::has_data() const
{
    return (absolute !=  nullptr && absolute->has_data())
	|| (percent !=  nullptr && percent->has_data());
}

bool Native::ParameterMap::AggressiveAging::High::has_operation() const
{
    return is_set(yfilter)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (percent !=  nullptr && percent->has_operation());
}

std::string Native::ParameterMap::AggressiveAging::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::AggressiveAging::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::AggressiveAging::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::ParameterMap::AggressiveAging::High::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "percent")
    {
        if(percent == nullptr)
        {
            percent = std::make_shared<Native::ParameterMap::AggressiveAging::High::Percent>();
        }
        return percent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::AggressiveAging::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(percent != nullptr)
    {
        children["percent"] = percent;
    }

    return children;
}

void Native::ParameterMap::AggressiveAging::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::AggressiveAging::High::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::AggressiveAging::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "percent")
        return true;
    return false;
}

Native::ParameterMap::AggressiveAging::High::Absolute::Absolute()
    :
    value_{YType::uint64, "value"},
    low{YType::uint64, "low"}
{

    yang_name = "absolute"; yang_parent_name = "high"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::AggressiveAging::High::Absolute::~Absolute()
{
}

bool Native::ParameterMap::AggressiveAging::High::Absolute::has_data() const
{
    return value_.is_set
	|| low.is_set;
}

bool Native::ParameterMap::AggressiveAging::High::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Native::ParameterMap::AggressiveAging::High::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::AggressiveAging::High::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::AggressiveAging::High::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::AggressiveAging::High::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::AggressiveAging::High::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::AggressiveAging::High::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::ParameterMap::AggressiveAging::High::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "low")
        return true;
    return false;
}

Native::ParameterMap::AggressiveAging::High::Percent::Percent()
    :
    value_{YType::uint8, "value"},
    low_percent{YType::uint8, "low_percent"}
{

    yang_name = "percent"; yang_parent_name = "high"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::AggressiveAging::High::Percent::~Percent()
{
}

bool Native::ParameterMap::AggressiveAging::High::Percent::has_data() const
{
    return value_.is_set
	|| low_percent.is_set;
}

bool Native::ParameterMap::AggressiveAging::High::Percent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(low_percent.yfilter);
}

std::string Native::ParameterMap::AggressiveAging::High::Percent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "percent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::AggressiveAging::High::Percent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (low_percent.is_set || is_set(low_percent.yfilter)) leaf_name_data.push_back(low_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::AggressiveAging::High::Percent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::AggressiveAging::High::Percent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::AggressiveAging::High::Percent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low_percent")
    {
        low_percent = value;
        low_percent.value_namespace = name_space;
        low_percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::AggressiveAging::High::Percent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "low_percent")
    {
        low_percent.yfilter = yfilter;
    }
}

bool Native::ParameterMap::AggressiveAging::High::Percent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "low_percent")
        return true;
    return false;
}

Native::ParameterMap::Global::Global()
    :
    fail_open{YType::empty, "fail-open"},
    logging{YType::empty, "logging"},
    redirect_list{YType::str, "redirect-list"}
    	,
    license(std::make_shared<Native::ParameterMap::Global::License>())
	,primary(nullptr) // presence node
	,secondary(nullptr) // presence node
	,whitelist(nullptr) // presence node
{
    license->parent = this;

    yang_name = "global"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::~Global()
{
}

bool Native::ParameterMap::Global::has_data() const
{
    return fail_open.is_set
	|| logging.is_set
	|| redirect_list.is_set
	|| (license !=  nullptr && license->has_data())
	|| (primary !=  nullptr && primary->has_data())
	|| (secondary !=  nullptr && secondary->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::ParameterMap::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fail_open.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(redirect_list.yfilter)
	|| (license !=  nullptr && license->has_operation())
	|| (primary !=  nullptr && primary->has_operation())
	|| (secondary !=  nullptr && secondary->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::ParameterMap::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fail_open.is_set || is_set(fail_open.yfilter)) leaf_name_data.push_back(fail_open.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.yfilter)) leaf_name_data.push_back(redirect_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "license")
    {
        if(license == nullptr)
        {
            license = std::make_shared<Native::ParameterMap::Global::License>();
        }
        return license;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::ParameterMap::Global::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        if(secondary == nullptr)
        {
            secondary = std::make_shared<Native::ParameterMap::Global::Secondary>();
        }
        return secondary;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::ParameterMap::Global::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(license != nullptr)
    {
        children["license"] = license;
    }

    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    if(secondary != nullptr)
    {
        children["secondary"] = secondary;
    }

    if(whitelist != nullptr)
    {
        children["whitelist"] = whitelist;
    }

    return children;
}

void Native::ParameterMap::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fail-open")
    {
        fail_open = value;
        fail_open.value_namespace = name_space;
        fail_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect-list")
    {
        redirect_list = value;
        redirect_list.value_namespace = name_space;
        redirect_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fail-open")
    {
        fail_open.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "redirect-list")
    {
        redirect_list.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "license" || name == "primary" || name == "secondary" || name == "whitelist" || name == "fail-open" || name == "logging" || name == "redirect-list")
        return true;
    return false;
}

Native::ParameterMap::Global::License::License()
    :
    unencypted(std::make_shared<Native::ParameterMap::Global::License::Unencypted>())
	,encrypted(std::make_shared<Native::ParameterMap::Global::License::Encrypted>())
{
    unencypted->parent = this;
    encrypted->parent = this;

    yang_name = "license"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::License::~License()
{
}

bool Native::ParameterMap::Global::License::has_data() const
{
    return (unencypted !=  nullptr && unencypted->has_data())
	|| (encrypted !=  nullptr && encrypted->has_data());
}

bool Native::ParameterMap::Global::License::has_operation() const
{
    return is_set(yfilter)
	|| (unencypted !=  nullptr && unencypted->has_operation())
	|| (encrypted !=  nullptr && encrypted->has_operation());
}

std::string Native::ParameterMap::Global::License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::License::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Unencypted")
    {
        if(unencypted == nullptr)
        {
            unencypted = std::make_shared<Native::ParameterMap::Global::License::Unencypted>();
        }
        return unencypted;
    }

    if(child_yang_name == "Encrypted")
    {
        if(encrypted == nullptr)
        {
            encrypted = std::make_shared<Native::ParameterMap::Global::License::Encrypted>();
        }
        return encrypted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::License::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(unencypted != nullptr)
    {
        children["Unencypted"] = unencypted;
    }

    if(encrypted != nullptr)
    {
        children["Encrypted"] = encrypted;
    }

    return children;
}

void Native::ParameterMap::Global::License::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Global::License::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Global::License::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Unencypted" || name == "Encrypted")
        return true;
    return false;
}

Native::ParameterMap::Global::License::Unencypted::Unencypted()
    :
    hex_string{YType::str, "Hex-string"}
{

    yang_name = "Unencypted"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::License::Unencypted::~Unencypted()
{
}

bool Native::ParameterMap::Global::License::Unencypted::has_data() const
{
    return hex_string.is_set;
}

bool Native::ParameterMap::Global::License::Unencypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string Native::ParameterMap::Global::License::Unencypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Unencypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::License::Unencypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::License::Unencypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::License::Unencypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::License::Unencypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::License::Unencypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::License::Unencypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Hex-string")
        return true;
    return false;
}

Native::ParameterMap::Global::License::Encrypted::Encrypted()
    :
    hex_string{YType::str, "Hex-string"}
{

    yang_name = "Encrypted"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::License::Encrypted::~Encrypted()
{
}

bool Native::ParameterMap::Global::License::Encrypted::has_data() const
{
    return hex_string.is_set;
}

bool Native::ParameterMap::Global::License::Encrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string Native::ParameterMap::Global::License::Encrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::License::Encrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::License::Encrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::License::Encrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::License::Encrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::License::Encrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::License::Encrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Hex-string")
        return true;
    return false;
}

Native::ParameterMap::Global::Primary::Primary()
    :
    tower(std::make_shared<Native::ParameterMap::Global::Primary::Tower>())
{
    tower->parent = this;

    yang_name = "primary"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Primary::~Primary()
{
}

bool Native::ParameterMap::Global::Primary::has_data() const
{
    return (tower !=  nullptr && tower->has_data());
}

bool Native::ParameterMap::Global::Primary::has_operation() const
{
    return is_set(yfilter)
	|| (tower !=  nullptr && tower->has_operation());
}

std::string Native::ParameterMap::Global::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tower")
    {
        if(tower == nullptr)
        {
            tower = std::make_shared<Native::ParameterMap::Global::Primary::Tower>();
        }
        return tower;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tower != nullptr)
    {
        children["tower"] = tower;
    }

    return children;
}

void Native::ParameterMap::Global::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Global::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Global::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tower")
        return true;
    return false;
}

Native::ParameterMap::Global::Primary::Tower::Tower()
    :
    ipv4{YType::str, "ipv4"},
    name{YType::str, "name"}
{

    yang_name = "tower"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Primary::Tower::~Tower()
{
}

bool Native::ParameterMap::Global::Primary::Tower::has_data() const
{
    return ipv4.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Global::Primary::Tower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Global::Primary::Tower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tower";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Primary::Tower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Primary::Tower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Primary::Tower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::Primary::Tower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::Primary::Tower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::Primary::Tower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Global::Secondary::Secondary()
    :
    tower(std::make_shared<Native::ParameterMap::Global::Secondary::Tower>())
{
    tower->parent = this;

    yang_name = "secondary"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Secondary::~Secondary()
{
}

bool Native::ParameterMap::Global::Secondary::has_data() const
{
    return (tower !=  nullptr && tower->has_data());
}

bool Native::ParameterMap::Global::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| (tower !=  nullptr && tower->has_operation());
}

std::string Native::ParameterMap::Global::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tower")
    {
        if(tower == nullptr)
        {
            tower = std::make_shared<Native::ParameterMap::Global::Secondary::Tower>();
        }
        return tower;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tower != nullptr)
    {
        children["tower"] = tower;
    }

    return children;
}

void Native::ParameterMap::Global::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Global::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Global::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tower")
        return true;
    return false;
}

Native::ParameterMap::Global::Secondary::Tower::Tower()
    :
    ipv4{YType::str, "ipv4"},
    name{YType::str, "name"}
{

    yang_name = "tower"; yang_parent_name = "secondary"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Secondary::Tower::~Tower()
{
}

bool Native::ParameterMap::Global::Secondary::Tower::has_data() const
{
    return ipv4.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Global::Secondary::Tower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Global::Secondary::Tower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tower";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Secondary::Tower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Secondary::Tower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Secondary::Tower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::Secondary::Tower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::Secondary::Tower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::Secondary::Tower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Global::Whitelist::Whitelist()
    :
    acl(std::make_shared<Native::ParameterMap::Global::Whitelist::Acl>())
	,domain_name(std::make_shared<Native::ParameterMap::Global::Whitelist::DomainName>())
	,download(nullptr) // presence node
{
    acl->parent = this;
    domain_name->parent = this;

    yang_name = "whitelist"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Whitelist::~Whitelist()
{
}

bool Native::ParameterMap::Global::Whitelist::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (domain_name !=  nullptr && domain_name->has_data())
	|| (download !=  nullptr && download->has_data());
}

bool Native::ParameterMap::Global::Whitelist::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (domain_name !=  nullptr && domain_name->has_operation())
	|| (download !=  nullptr && download->has_operation());
}

std::string Native::ParameterMap::Global::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::ParameterMap::Global::Whitelist::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::ParameterMap::Global::Whitelist::DomainName>();
        }
        return domain_name;
    }

    if(child_yang_name == "download")
    {
        if(download == nullptr)
        {
            download = std::make_shared<Native::ParameterMap::Global::Whitelist::Download>();
        }
        return download;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(domain_name != nullptr)
    {
        children["domain-name"] = domain_name;
    }

    if(download != nullptr)
    {
        children["download"] = download;
    }

    return children;
}

void Native::ParameterMap::Global::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Global::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Global::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "domain-name" || name == "download")
        return true;
    return false;
}

Native::ParameterMap::Global::Whitelist::Acl::Acl()
    :
    acl_number{YType::str, "acl-number"},
    name{YType::str, "name"}
{

    yang_name = "acl"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Whitelist::Acl::~Acl()
{
}

bool Native::ParameterMap::Global::Whitelist::Acl::has_data() const
{
    return acl_number.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Global::Whitelist::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_number.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Global::Whitelist::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Whitelist::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_number.is_set || is_set(acl_number.yfilter)) leaf_name_data.push_back(acl_number.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Whitelist::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Whitelist::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::Whitelist::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-number")
    {
        acl_number = value;
        acl_number.value_namespace = name_space;
        acl_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::Whitelist::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-number")
    {
        acl_number.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::Whitelist::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-number" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Global::Whitelist::DomainName::DomainName()
    :
    regex{YType::str, "regex"}
{

    yang_name = "domain-name"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Whitelist::DomainName::~DomainName()
{
}

bool Native::ParameterMap::Global::Whitelist::DomainName::has_data() const
{
    return regex.is_set;
}

bool Native::ParameterMap::Global::Whitelist::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string Native::ParameterMap::Global::Whitelist::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Whitelist::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Whitelist::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Whitelist::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::Whitelist::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::Whitelist::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::Whitelist::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex")
        return true;
    return false;
}

Native::ParameterMap::Global::Whitelist::Download::Download()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "download"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Whitelist::Download::~Download()
{
}

bool Native::ParameterMap::Global::Whitelist::Download::has_data() const
{
    return interval.is_set;
}

bool Native::ParameterMap::Global::Whitelist::Download::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::ParameterMap::Global::Whitelist::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Whitelist::Download::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Whitelist::Download::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Whitelist::Download::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::Whitelist::Download::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::Whitelist::Download::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::Whitelist::Download::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::ParameterMap::Icmp::Icmp()
    :
    idle_time{YType::uint32, "idle-time"}
{

    yang_name = "icmp"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Icmp::~Icmp()
{
}

bool Native::ParameterMap::Icmp::has_data() const
{
    return idle_time.is_set;
}

bool Native::ParameterMap::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Native::ParameterMap::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time")
        return true;
    return false;
}

Native::ParameterMap::Lisp::Lisp()
    :
    inner_packet_inspection{YType::empty, "inner-packet-inspection"}
{

    yang_name = "lisp"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Lisp::~Lisp()
{
}

bool Native::ParameterMap::Lisp::has_data() const
{
    return inner_packet_inspection.is_set;
}

bool Native::ParameterMap::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inner_packet_inspection.yfilter);
}

std::string Native::ParameterMap::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_packet_inspection.is_set || is_set(inner_packet_inspection.yfilter)) leaf_name_data.push_back(inner_packet_inspection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner-packet-inspection")
    {
        inner_packet_inspection = value;
        inner_packet_inspection.value_namespace = name_space;
        inner_packet_inspection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner-packet-inspection")
    {
        inner_packet_inspection.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner-packet-inspection")
        return true;
    return false;
}

Native::ParameterMap::Log::Log()
    :
    dropped_packets{YType::empty, "dropped-packets"}
    	,
    flow_export(std::make_shared<Native::ParameterMap::Log::FlowExport>())
{
    flow_export->parent = this;

    yang_name = "log"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::~Log()
{
}

bool Native::ParameterMap::Log::has_data() const
{
    return dropped_packets.is_set
	|| (flow_export !=  nullptr && flow_export->has_data());
}

bool Native::ParameterMap::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| (flow_export !=  nullptr && flow_export->has_operation());
}

std::string Native::ParameterMap::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-export")
    {
        if(flow_export == nullptr)
        {
            flow_export = std::make_shared<Native::ParameterMap::Log::FlowExport>();
        }
        return flow_export;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_export != nullptr)
    {
        children["flow-export"] = flow_export;
    }

    return children;
}

void Native::ParameterMap::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-export" || name == "dropped-packets")
        return true;
    return false;
}

Native::ParameterMap::Log::FlowExport::FlowExport()
    :
    template_(std::make_shared<Native::ParameterMap::Log::FlowExport::Template_>())
	,v9(std::make_shared<Native::ParameterMap::Log::FlowExport::V9>())
{
    template_->parent = this;
    v9->parent = this;

    yang_name = "flow-export"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::FlowExport::~FlowExport()
{
}

bool Native::ParameterMap::Log::FlowExport::has_data() const
{
    return (template_ !=  nullptr && template_->has_data())
	|| (v9 !=  nullptr && v9->has_data());
}

bool Native::ParameterMap::Log::FlowExport::has_operation() const
{
    return is_set(yfilter)
	|| (template_ !=  nullptr && template_->has_operation())
	|| (v9 !=  nullptr && v9->has_operation());
}

std::string Native::ParameterMap::Log::FlowExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::FlowExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::ParameterMap::Log::FlowExport::Template_>();
        }
        return template_;
    }

    if(child_yang_name == "v9")
    {
        if(v9 == nullptr)
        {
            v9 = std::make_shared<Native::ParameterMap::Log::FlowExport::V9>();
        }
        return v9;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(v9 != nullptr)
    {
        children["v9"] = v9;
    }

    return children;
}

void Native::ParameterMap::Log::FlowExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Log::FlowExport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Log::FlowExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template" || name == "v9")
        return true;
    return false;
}

Native::ParameterMap::Log::FlowExport::Template_::Template_()
    :
    timeout_rate{YType::uint32, "timeout-rate"}
{

    yang_name = "template"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::FlowExport::Template_::~Template_()
{
}

bool Native::ParameterMap::Log::FlowExport::Template_::has_data() const
{
    return timeout_rate.is_set;
}

bool Native::ParameterMap::Log::FlowExport::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout_rate.yfilter);
}

std::string Native::ParameterMap::Log::FlowExport::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::FlowExport::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout_rate.is_set || is_set(timeout_rate.yfilter)) leaf_name_data.push_back(timeout_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Log::FlowExport::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout-rate")
    {
        timeout_rate = value;
        timeout_rate.value_namespace = name_space;
        timeout_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Log::FlowExport::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout-rate")
    {
        timeout_rate.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Log::FlowExport::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout-rate")
        return true;
    return false;
}

Native::ParameterMap::Log::FlowExport::V9::V9()
    :
    udp(std::make_shared<Native::ParameterMap::Log::FlowExport::V9::Udp>())
{
    udp->parent = this;

    yang_name = "v9"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::FlowExport::V9::~V9()
{
}

bool Native::ParameterMap::Log::FlowExport::V9::has_data() const
{
    return (udp !=  nullptr && udp->has_data());
}

bool Native::ParameterMap::Log::FlowExport::V9::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::ParameterMap::Log::FlowExport::V9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v9";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::FlowExport::V9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::V9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::ParameterMap::Log::FlowExport::V9::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::V9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::ParameterMap::Log::FlowExport::V9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Log::FlowExport::V9::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Log::FlowExport::V9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp")
        return true;
    return false;
}

Native::ParameterMap::Log::FlowExport::V9::Udp::Udp()
    :
    destination(std::make_shared<Native::ParameterMap::Log::FlowExport::V9::Udp::Destination>())
{
    destination->parent = this;

    yang_name = "udp"; yang_parent_name = "v9"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::FlowExport::V9::Udp::~Udp()
{
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::has_data() const
{
    return (destination !=  nullptr && destination->has_data());
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::ParameterMap::Log::FlowExport::V9::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::FlowExport::V9::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::V9::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::ParameterMap::Log::FlowExport::V9::Udp::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::V9::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
}

void Native::ParameterMap::Log::FlowExport::V9::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Log::FlowExport::V9::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::Destination()
    :
    dst_ip{YType::str, "dst-ip"},
    dst_port{YType::uint16, "dst-port"}
{

    yang_name = "destination"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::~Destination()
{
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::has_data() const
{
    return dst_ip.is_set
	|| dst_port.is_set;
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(dst_port.yfilter);
}

std::string Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (dst_port.is_set || is_set(dst_port.yfilter)) leaf_name_data.push_back(dst_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-port")
    {
        dst_port = value;
        dst_port.value_namespace = name_space;
        dst_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "dst-port")
    {
        dst_port.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-ip" || name == "dst-port")
        return true;
    return false;
}

Native::ParameterMap::MaxIncomplete::MaxIncomplete()
    :
    high{YType::uint32, "high"},
    low{YType::uint32, "low"}
{

    yang_name = "max-incomplete"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::MaxIncomplete::~MaxIncomplete()
{
}

bool Native::ParameterMap::MaxIncomplete::has_data() const
{
    return high.is_set
	|| low.is_set;
}

bool Native::ParameterMap::MaxIncomplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Native::ParameterMap::MaxIncomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:max-incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::MaxIncomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::MaxIncomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::MaxIncomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::MaxIncomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::MaxIncomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::ParameterMap::MaxIncomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::ParameterMap::OneMinute::OneMinute()
    :
    high{YType::uint32, "high"},
    low{YType::uint32, "low"}
{

    yang_name = "one-minute"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::OneMinute::~OneMinute()
{
}

bool Native::ParameterMap::OneMinute::has_data() const
{
    return high.is_set
	|| low.is_set;
}

bool Native::ParameterMap::OneMinute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Native::ParameterMap::OneMinute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:one-minute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::OneMinute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::OneMinute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::OneMinute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::OneMinute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::OneMinute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::ParameterMap::OneMinute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::ParameterMap::Sessions::Sessions()
    :
    maximum{YType::uint32, "maximum"}
    	,
    queue(std::make_shared<Native::ParameterMap::Sessions::Queue>())
{
    queue->parent = this;

    yang_name = "sessions"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Sessions::~Sessions()
{
}

bool Native::ParameterMap::Sessions::has_data() const
{
    return maximum.is_set
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::ParameterMap::Sessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::ParameterMap::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::ParameterMap::Sessions::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::ParameterMap::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "maximum")
        return true;
    return false;
}

Native::ParameterMap::Sessions::Queue::Queue()
    :
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"}
{

    yang_name = "queue"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Sessions::Queue::~Queue()
{
}

bool Native::ParameterMap::Sessions::Queue::has_data() const
{
    return max_threshold.is_set
	|| min_threshold.is_set;
}

bool Native::ParameterMap::Sessions::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(min_threshold.yfilter);
}

std::string Native::ParameterMap::Sessions::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Sessions::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Sessions::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Sessions::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Sessions::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Sessions::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Sessions::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-threshold" || name == "min-threshold")
        return true;
    return false;
}

Native::ParameterMap::TcpInspect::TcpInspect()
    :
    tcp(std::make_shared<Native::ParameterMap::TcpInspect::Tcp>())
{
    tcp->parent = this;

    yang_name = "tcp-inspect"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspect::~TcpInspect()
{
}

bool Native::ParameterMap::TcpInspect::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data());
}

bool Native::ParameterMap::TcpInspect::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::ParameterMap::TcpInspect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:tcp-inspect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::TcpInspect::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    return children;
}

void Native::ParameterMap::TcpInspect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::TcpInspect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::TcpInspect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp")
        return true;
    return false;
}

Native::ParameterMap::TcpInspect::Tcp::Tcp()
    :
    finwait_time{YType::uint32, "finwait-time"},
    idle_time{YType::uint32, "idle-time"},
    synwait_time{YType::uint32, "synwait-time"}
    	,
    max_incomplete(std::make_shared<Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete>())
{
    max_incomplete->parent = this;

    yang_name = "tcp"; yang_parent_name = "tcp-inspect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspect::Tcp::~Tcp()
{
}

bool Native::ParameterMap::TcpInspect::Tcp::has_data() const
{
    return finwait_time.is_set
	|| idle_time.is_set
	|| synwait_time.is_set
	|| (max_incomplete !=  nullptr && max_incomplete->has_data());
}

bool Native::ParameterMap::TcpInspect::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(finwait_time.yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(synwait_time.yfilter)
	|| (max_incomplete !=  nullptr && max_incomplete->has_operation());
}

std::string Native::ParameterMap::TcpInspect::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspect::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (finwait_time.is_set || is_set(finwait_time.yfilter)) leaf_name_data.push_back(finwait_time.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (synwait_time.is_set || is_set(synwait_time.yfilter)) leaf_name_data.push_back(synwait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspect::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-incomplete")
    {
        if(max_incomplete == nullptr)
        {
            max_incomplete = std::make_shared<Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete>();
        }
        return max_incomplete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspect::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(max_incomplete != nullptr)
    {
        children["max-incomplete"] = max_incomplete;
    }

    return children;
}

void Native::ParameterMap::TcpInspect::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "finwait-time")
    {
        finwait_time = value;
        finwait_time.value_namespace = name_space;
        finwait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synwait-time")
    {
        synwait_time = value;
        synwait_time.value_namespace = name_space;
        synwait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::TcpInspect::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "finwait-time")
    {
        finwait_time.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "synwait-time")
    {
        synwait_time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::TcpInspect::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-incomplete" || name == "finwait-time" || name == "idle-time" || name == "synwait-time")
        return true;
    return false;
}

Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::MaxIncomplete()
    :
    host{YType::uint32, "host"}
{

    yang_name = "max-incomplete"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::~MaxIncomplete()
{
}

bool Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::has_data() const
{
    return host.is_set;
}

bool Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::ParameterMap::TcpInspectZone::TcpInspectZone()
    :
    tcp(std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp>())
{
    tcp->parent = this;

    yang_name = "tcp-inspect-zone"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspectZone::~TcpInspectZone()
{
}

bool Native::ParameterMap::TcpInspectZone::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data());
}

bool Native::ParameterMap::TcpInspectZone::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::ParameterMap::TcpInspectZone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:tcp-inspect-zone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspectZone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspectZone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspectZone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    return children;
}

void Native::ParameterMap::TcpInspectZone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::TcpInspectZone::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::TcpInspectZone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp")
        return true;
    return false;
}

Native::ParameterMap::TcpInspectZone::Tcp::Tcp()
    :
    syn_flood(std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp::SynFlood>())
{
    syn_flood->parent = this;

    yang_name = "tcp"; yang_parent_name = "tcp-inspect-zone"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspectZone::Tcp::~Tcp()
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::has_data() const
{
    return (syn_flood !=  nullptr && syn_flood->has_data());
}

bool Native::ParameterMap::TcpInspectZone::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (syn_flood !=  nullptr && syn_flood->has_operation());
}

std::string Native::ParameterMap::TcpInspectZone::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspectZone::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspectZone::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syn-flood")
    {
        if(syn_flood == nullptr)
        {
            syn_flood = std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp::SynFlood>();
        }
        return syn_flood;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspectZone::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(syn_flood != nullptr)
    {
        children["syn-flood"] = syn_flood;
    }

    return children;
}

void Native::ParameterMap::TcpInspectZone::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::TcpInspectZone::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syn-flood")
        return true;
    return false;
}

Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::SynFlood()
    :
    rate(std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate>())
{
    rate->parent = this;

    yang_name = "syn-flood"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::~SynFlood()
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::has_data() const
{
    return (rate !=  nullptr && rate->has_data());
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::has_operation() const
{
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::Rate()
    :
    per_destination{YType::uint32, "per-destination"}
{

    yang_name = "rate"; yang_parent_name = "syn-flood"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::~Rate()
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::has_data() const
{
    return per_destination.is_set;
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_destination.yfilter);
}

std::string Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_destination.is_set || is_set(per_destination.yfilter)) leaf_name_data.push_back(per_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-destination")
    {
        per_destination = value;
        per_destination.value_namespace = name_space;
        per_destination.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-destination")
    {
        per_destination.yfilter = yfilter;
    }
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-destination")
        return true;
    return false;
}

Native::ParameterMap::ThreatDetection::ThreatDetection()
    :
    basic_threat{YType::empty, "basic-threat"}
    	,
    rate(std::make_shared<Native::ParameterMap::ThreatDetection::Rate>())
{
    rate->parent = this;

    yang_name = "threat-detection"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::ThreatDetection::~ThreatDetection()
{
}

bool Native::ParameterMap::ThreatDetection::has_data() const
{
    return basic_threat.is_set
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::ParameterMap::ThreatDetection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(basic_threat.yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::ParameterMap::ThreatDetection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:threat-detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::ThreatDetection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (basic_threat.is_set || is_set(basic_threat.yfilter)) leaf_name_data.push_back(basic_threat.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::ParameterMap::ThreatDetection::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::ParameterMap::ThreatDetection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "basic-threat")
    {
        basic_threat = value;
        basic_threat.value_namespace = name_space;
        basic_threat.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::ThreatDetection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "basic-threat")
    {
        basic_threat.yfilter = yfilter;
    }
}

bool Native::ParameterMap::ThreatDetection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "basic-threat")
        return true;
    return false;
}

Native::ParameterMap::ThreatDetection::Rate::Rate()
    :
    fw_drop(std::make_shared<Native::ParameterMap::ThreatDetection::Rate::FwDrop>())
	,inspect_drop(std::make_shared<Native::ParameterMap::ThreatDetection::Rate::InspectDrop>())
	,syn_attack(std::make_shared<Native::ParameterMap::ThreatDetection::Rate::SynAttack>())
{
    fw_drop->parent = this;
    inspect_drop->parent = this;
    syn_attack->parent = this;

    yang_name = "rate"; yang_parent_name = "threat-detection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::ThreatDetection::Rate::~Rate()
{
}

bool Native::ParameterMap::ThreatDetection::Rate::has_data() const
{
    return (fw_drop !=  nullptr && fw_drop->has_data())
	|| (inspect_drop !=  nullptr && inspect_drop->has_data())
	|| (syn_attack !=  nullptr && syn_attack->has_data());
}

bool Native::ParameterMap::ThreatDetection::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (fw_drop !=  nullptr && fw_drop->has_operation())
	|| (inspect_drop !=  nullptr && inspect_drop->has_operation())
	|| (syn_attack !=  nullptr && syn_attack->has_operation());
}

std::string Native::ParameterMap::ThreatDetection::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::ThreatDetection::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fw-drop")
    {
        if(fw_drop == nullptr)
        {
            fw_drop = std::make_shared<Native::ParameterMap::ThreatDetection::Rate::FwDrop>();
        }
        return fw_drop;
    }

    if(child_yang_name == "inspect-drop")
    {
        if(inspect_drop == nullptr)
        {
            inspect_drop = std::make_shared<Native::ParameterMap::ThreatDetection::Rate::InspectDrop>();
        }
        return inspect_drop;
    }

    if(child_yang_name == "syn-attack")
    {
        if(syn_attack == nullptr)
        {
            syn_attack = std::make_shared<Native::ParameterMap::ThreatDetection::Rate::SynAttack>();
        }
        return syn_attack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fw_drop != nullptr)
    {
        children["fw-drop"] = fw_drop;
    }

    if(inspect_drop != nullptr)
    {
        children["inspect-drop"] = inspect_drop;
    }

    if(syn_attack != nullptr)
    {
        children["syn-attack"] = syn_attack;
    }

    return children;
}

void Native::ParameterMap::ThreatDetection::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::ThreatDetection::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::ThreatDetection::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fw-drop" || name == "inspect-drop" || name == "syn-attack")
        return true;
    return false;
}

Native::ParameterMap::ThreatDetection::Rate::FwDrop::FwDrop()
    :
    average_time_frame{YType::uint32, "average-time-frame"},
    average_threshold{YType::uint64, "average-threshold"},
    burst_threshold{YType::uint64, "burst-threshold"}
{

    yang_name = "fw-drop"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::ThreatDetection::Rate::FwDrop::~FwDrop()
{
}

bool Native::ParameterMap::ThreatDetection::Rate::FwDrop::has_data() const
{
    return average_time_frame.is_set
	|| average_threshold.is_set
	|| burst_threshold.is_set;
}

bool Native::ParameterMap::ThreatDetection::Rate::FwDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_time_frame.yfilter)
	|| ydk::is_set(average_threshold.yfilter)
	|| ydk::is_set(burst_threshold.yfilter);
}

std::string Native::ParameterMap::ThreatDetection::Rate::FwDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::ThreatDetection::Rate::FwDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_time_frame.is_set || is_set(average_time_frame.yfilter)) leaf_name_data.push_back(average_time_frame.get_name_leafdata());
    if (average_threshold.is_set || is_set(average_threshold.yfilter)) leaf_name_data.push_back(average_threshold.get_name_leafdata());
    if (burst_threshold.is_set || is_set(burst_threshold.yfilter)) leaf_name_data.push_back(burst_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::Rate::FwDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::Rate::FwDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::ThreatDetection::Rate::FwDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame = value;
        average_time_frame.value_namespace = name_space;
        average_time_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-threshold")
    {
        average_threshold = value;
        average_threshold.value_namespace = name_space;
        average_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold = value;
        burst_threshold.value_namespace = name_space;
        burst_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::ThreatDetection::Rate::FwDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame.yfilter = yfilter;
    }
    if(value_path == "average-threshold")
    {
        average_threshold.yfilter = yfilter;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold.yfilter = yfilter;
    }
}

bool Native::ParameterMap::ThreatDetection::Rate::FwDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-time-frame" || name == "average-threshold" || name == "burst-threshold")
        return true;
    return false;
}

Native::ParameterMap::ThreatDetection::Rate::InspectDrop::InspectDrop()
    :
    average_time_frame{YType::uint32, "average-time-frame"},
    average_threshold{YType::uint64, "average-threshold"},
    burst_threshold{YType::uint64, "burst-threshold"}
{

    yang_name = "inspect-drop"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::ThreatDetection::Rate::InspectDrop::~InspectDrop()
{
}

bool Native::ParameterMap::ThreatDetection::Rate::InspectDrop::has_data() const
{
    return average_time_frame.is_set
	|| average_threshold.is_set
	|| burst_threshold.is_set;
}

bool Native::ParameterMap::ThreatDetection::Rate::InspectDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_time_frame.yfilter)
	|| ydk::is_set(average_threshold.yfilter)
	|| ydk::is_set(burst_threshold.yfilter);
}

std::string Native::ParameterMap::ThreatDetection::Rate::InspectDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspect-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::ThreatDetection::Rate::InspectDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_time_frame.is_set || is_set(average_time_frame.yfilter)) leaf_name_data.push_back(average_time_frame.get_name_leafdata());
    if (average_threshold.is_set || is_set(average_threshold.yfilter)) leaf_name_data.push_back(average_threshold.get_name_leafdata());
    if (burst_threshold.is_set || is_set(burst_threshold.yfilter)) leaf_name_data.push_back(burst_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::Rate::InspectDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::Rate::InspectDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::ThreatDetection::Rate::InspectDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame = value;
        average_time_frame.value_namespace = name_space;
        average_time_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-threshold")
    {
        average_threshold = value;
        average_threshold.value_namespace = name_space;
        average_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold = value;
        burst_threshold.value_namespace = name_space;
        burst_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::ThreatDetection::Rate::InspectDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame.yfilter = yfilter;
    }
    if(value_path == "average-threshold")
    {
        average_threshold.yfilter = yfilter;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold.yfilter = yfilter;
    }
}

bool Native::ParameterMap::ThreatDetection::Rate::InspectDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-time-frame" || name == "average-threshold" || name == "burst-threshold")
        return true;
    return false;
}

Native::ParameterMap::ThreatDetection::Rate::SynAttack::SynAttack()
    :
    average_time_frame{YType::uint32, "average-time-frame"},
    average_threshold{YType::uint64, "average-threshold"},
    burst_threshold{YType::uint64, "burst-threshold"}
{

    yang_name = "syn-attack"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::ThreatDetection::Rate::SynAttack::~SynAttack()
{
}

bool Native::ParameterMap::ThreatDetection::Rate::SynAttack::has_data() const
{
    return average_time_frame.is_set
	|| average_threshold.is_set
	|| burst_threshold.is_set;
}

bool Native::ParameterMap::ThreatDetection::Rate::SynAttack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_time_frame.yfilter)
	|| ydk::is_set(average_threshold.yfilter)
	|| ydk::is_set(burst_threshold.yfilter);
}

std::string Native::ParameterMap::ThreatDetection::Rate::SynAttack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-attack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::ThreatDetection::Rate::SynAttack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_time_frame.is_set || is_set(average_time_frame.yfilter)) leaf_name_data.push_back(average_time_frame.get_name_leafdata());
    if (average_threshold.is_set || is_set(average_threshold.yfilter)) leaf_name_data.push_back(average_threshold.get_name_leafdata());
    if (burst_threshold.is_set || is_set(burst_threshold.yfilter)) leaf_name_data.push_back(burst_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::Rate::SynAttack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::Rate::SynAttack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::ThreatDetection::Rate::SynAttack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame = value;
        average_time_frame.value_namespace = name_space;
        average_time_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-threshold")
    {
        average_threshold = value;
        average_threshold.value_namespace = name_space;
        average_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold = value;
        burst_threshold.value_namespace = name_space;
        burst_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::ThreatDetection::Rate::SynAttack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame.yfilter = yfilter;
    }
    if(value_path == "average-threshold")
    {
        average_threshold.yfilter = yfilter;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold.yfilter = yfilter;
    }
}

bool Native::ParameterMap::ThreatDetection::Rate::SynAttack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-time-frame" || name == "average-threshold" || name == "burst-threshold")
        return true;
    return false;
}

Native::ParameterMap::Udp::Udp()
    :
    idle_time{YType::uint32, "idle-time"}
{

    yang_name = "udp"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Udp::~Udp()
{
}

bool Native::ParameterMap::Udp::has_data() const
{
    return idle_time.is_set;
}

bool Native::ParameterMap::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Native::ParameterMap::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time")
        return true;
    return false;
}

Native::ParameterMap::Vrf::Vrf()
    :
    name{YType::str, "name"},
    inspect{YType::str, "inspect"}
{

    yang_name = "vrf"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Vrf::~Vrf()
{
}

bool Native::ParameterMap::Vrf::has_data() const
{
    return name.is_set
	|| inspect.is_set;
}

bool Native::ParameterMap::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(inspect.yfilter);
}

std::string Native::ParameterMap::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (inspect.is_set || is_set(inspect.yfilter)) leaf_name_data.push_back(inspect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inspect")
    {
        inspect = value;
        inspect.value_namespace = name_space;
        inspect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "inspect")
    {
        inspect.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "inspect")
        return true;
    return false;
}

Native::Ppp::Ppp()
    :
    packet(std::make_shared<Native::Ppp::Packet>())
{
    packet->parent = this;

    yang_name = "ppp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ppp::~Ppp()
{
}

bool Native::Ppp::has_data() const
{
    return (packet !=  nullptr && packet->has_data());
}

bool Native::Ppp::has_operation() const
{
    return is_set(yfilter)
	|| (packet !=  nullptr && packet->has_operation());
}

std::string Native::Ppp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Ppp::Packet>();
        }
        return packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    return children;
}

void Native::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet")
        return true;
    return false;
}

Native::Ppp::Packet::Packet()
    :
    throttle{YType::uint32, "throttle"},
    allow_time{YType::uint32, "allow_time"},
    block_time{YType::uint32, "block_time"}
{

    yang_name = "packet"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ppp::Packet::~Packet()
{
}

bool Native::Ppp::Packet::has_data() const
{
    return throttle.is_set
	|| allow_time.is_set
	|| block_time.is_set;
}

bool Native::Ppp::Packet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(throttle.yfilter)
	|| ydk::is_set(allow_time.yfilter)
	|| ydk::is_set(block_time.yfilter);
}

std::string Native::Ppp::Packet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ppp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ppp::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ppp:packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ppp::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (throttle.is_set || is_set(throttle.yfilter)) leaf_name_data.push_back(throttle.get_name_leafdata());
    if (allow_time.is_set || is_set(allow_time.yfilter)) leaf_name_data.push_back(allow_time.get_name_leafdata());
    if (block_time.is_set || is_set(block_time.yfilter)) leaf_name_data.push_back(block_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ppp::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ppp::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ppp::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "throttle")
    {
        throttle = value;
        throttle.value_namespace = name_space;
        throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow_time")
    {
        allow_time = value;
        allow_time.value_namespace = name_space;
        allow_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block_time")
    {
        block_time = value;
        block_time.value_namespace = name_space;
        block_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ppp::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "throttle")
    {
        throttle.yfilter = yfilter;
    }
    if(value_path == "allow_time")
    {
        allow_time.yfilter = yfilter;
    }
    if(value_path == "block_time")
    {
        block_time.yfilter = yfilter;
    }
}

bool Native::Ppp::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle" || name == "allow_time" || name == "block_time")
        return true;
    return false;
}

Native::Mac::Mac()
    :
    address_table(std::make_shared<Native::Mac::AddressTable>())
	,access_list(std::make_shared<Native::Mac::AccessList>())
{
    address_table->parent = this;
    access_list->parent = this;

    yang_name = "mac"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::~Mac()
{
}

bool Native::Mac::has_data() const
{
    return (address_table !=  nullptr && address_table->has_data())
	|| (access_list !=  nullptr && access_list->has_data());
}

bool Native::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (address_table !=  nullptr && address_table->has_operation())
	|| (access_list !=  nullptr && access_list->has_operation());
}

std::string Native::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-table")
    {
        if(address_table == nullptr)
        {
            address_table = std::make_shared<Native::Mac::AddressTable>();
        }
        return address_table;
    }

    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Mac::AccessList>();
        }
        return access_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_table != nullptr)
    {
        children["address-table"] = address_table;
    }

    if(access_list != nullptr)
    {
        children["access-list"] = access_list;
    }

    return children;
}

void Native::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-table" || name == "access-list")
        return true;
    return false;
}

Native::Mac::AddressTable::AddressTable()
    :
    control_packet_learn{YType::empty, "control-packet-learn"}
    	,
    aging_time(std::make_shared<Native::Mac::AddressTable::AgingTime>())
	,learning(std::make_shared<Native::Mac::AddressTable::Learning>())
	,notification(std::make_shared<Native::Mac::AddressTable::Notification>())
	,static_(std::make_shared<Native::Mac::AddressTable::Static_>())
{
    aging_time->parent = this;
    learning->parent = this;
    notification->parent = this;
    static_->parent = this;

    yang_name = "address-table"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::~AddressTable()
{
}

bool Native::Mac::AddressTable::has_data() const
{
    return control_packet_learn.is_set
	|| (aging_time !=  nullptr && aging_time->has_data())
	|| (learning !=  nullptr && learning->has_data())
	|| (notification !=  nullptr && notification->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Mac::AddressTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_packet_learn.yfilter)
	|| (aging_time !=  nullptr && aging_time->has_operation())
	|| (learning !=  nullptr && learning->has_operation())
	|| (notification !=  nullptr && notification->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Mac::AddressTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_packet_learn.is_set || is_set(control_packet_learn.yfilter)) leaf_name_data.push_back(control_packet_learn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging-time")
    {
        if(aging_time == nullptr)
        {
            aging_time = std::make_shared<Native::Mac::AddressTable::AgingTime>();
        }
        return aging_time;
    }

    if(child_yang_name == "learning")
    {
        if(learning == nullptr)
        {
            learning = std::make_shared<Native::Mac::AddressTable::Learning>();
        }
        return learning;
    }

    if(child_yang_name == "notification")
    {
        if(notification == nullptr)
        {
            notification = std::make_shared<Native::Mac::AddressTable::Notification>();
        }
        return notification;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Mac::AddressTable::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging_time != nullptr)
    {
        children["aging-time"] = aging_time;
    }

    if(learning != nullptr)
    {
        children["learning"] = learning;
    }

    if(notification != nullptr)
    {
        children["notification"] = notification;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Mac::AddressTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control-packet-learn")
    {
        control_packet_learn = value;
        control_packet_learn.value_namespace = name_space;
        control_packet_learn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-packet-learn")
    {
        control_packet_learn.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging-time" || name == "learning" || name == "notification" || name == "static" || name == "control-packet-learn")
        return true;
    return false;
}

Native::Mac::AddressTable::AgingTime::AgingTime()
    :
    val{YType::uint32, "val"},
    routed_mac{YType::empty, "routed-mac"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "aging-time"; yang_parent_name = "address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::AgingTime::~AgingTime()
{
}

bool Native::Mac::AddressTable::AgingTime::has_data() const
{
    return val.is_set
	|| routed_mac.is_set
	|| vlan.is_set;
}

bool Native::Mac::AddressTable::AgingTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(routed_mac.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Mac::AddressTable::AgingTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::AgingTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::AgingTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (routed_mac.is_set || is_set(routed_mac.yfilter)) leaf_name_data.push_back(routed_mac.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::AgingTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::AgingTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AddressTable::AgingTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routed-mac")
    {
        routed_mac = value;
        routed_mac.value_namespace = name_space;
        routed_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::AgingTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "routed-mac")
    {
        routed_mac.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::AgingTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "routed-mac" || name == "vlan")
        return true;
    return false;
}

Native::Mac::AddressTable::Learning::Learning()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "learning"; yang_parent_name = "address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Learning::~Learning()
{
}

bool Native::Mac::AddressTable::Learning::has_data() const
{
    return vlan.is_set;
}

bool Native::Mac::AddressTable::Learning::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Mac::AddressTable::Learning::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Learning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Learning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Learning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Learning::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AddressTable::Learning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Learning::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Learning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Mac::AddressTable::Notification::Notification()
    :
    mac_move{YType::empty, "mac-move"}
    	,
    change(nullptr) // presence node
	,threshold(nullptr) // presence node
{

    yang_name = "notification"; yang_parent_name = "address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Notification::~Notification()
{
}

bool Native::Mac::AddressTable::Notification::has_data() const
{
    return mac_move.is_set
	|| (change !=  nullptr && change->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Mac::AddressTable::Notification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_move.yfilter)
	|| (change !=  nullptr && change->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Mac::AddressTable::Notification::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_move.is_set || is_set(mac_move.yfilter)) leaf_name_data.push_back(mac_move.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change")
    {
        if(change == nullptr)
        {
            change = std::make_shared<Native::Mac::AddressTable::Notification::Change>();
        }
        return change;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Mac::AddressTable::Notification::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change != nullptr)
    {
        children["change"] = change;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Mac::AddressTable::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-move")
    {
        mac_move = value;
        mac_move.value_namespace = name_space;
        mac_move.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-move")
    {
        mac_move.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change" || name == "threshold" || name == "mac-move")
        return true;
    return false;
}

Native::Mac::AddressTable::Notification::Change::Change()
    :
    history_size{YType::uint16, "history-size"},
    interval{YType::uint32, "interval"}
{

    yang_name = "change"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Notification::Change::~Change()
{
}

bool Native::Mac::AddressTable::Notification::Change::has_data() const
{
    return history_size.is_set
	|| interval.is_set;
}

bool Native::Mac::AddressTable::Notification::Change::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_size.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Mac::AddressTable::Notification::Change::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Notification::Change::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Notification::Change::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_size.is_set || is_set(history_size.yfilter)) leaf_name_data.push_back(history_size.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Notification::Change::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Notification::Change::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AddressTable::Notification::Change::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history-size")
    {
        history_size = value;
        history_size.value_namespace = name_space;
        history_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Notification::Change::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history-size")
    {
        history_size.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Notification::Change::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history-size" || name == "interval")
        return true;
    return false;
}

Native::Mac::AddressTable::Notification::Threshold::Threshold()
    :
    interval{YType::uint32, "interval"}
    	,
    limit(std::make_shared<Native::Mac::AddressTable::Notification::Threshold::Limit>())
{
    limit->parent = this;

    yang_name = "threshold"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Notification::Threshold::~Threshold()
{
}

bool Native::Mac::AddressTable::Notification::Threshold::has_data() const
{
    return interval.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Mac::AddressTable::Notification::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Mac::AddressTable::Notification::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Notification::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Notification::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Notification::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Mac::AddressTable::Notification::Threshold::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Notification::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Mac::AddressTable::Notification::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Notification::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Notification::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "interval")
        return true;
    return false;
}

Native::Mac::AddressTable::Notification::Threshold::Limit::Limit()
    :
    percentage{YType::uint8, "percentage"},
    interval{YType::uint32, "interval"}
{

    yang_name = "limit"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Notification::Threshold::Limit::~Limit()
{
}

bool Native::Mac::AddressTable::Notification::Threshold::Limit::has_data() const
{
    return percentage.is_set
	|| interval.is_set;
}

bool Native::Mac::AddressTable::Notification::Threshold::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percentage.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Mac::AddressTable::Notification::Threshold::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/notification/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Notification::Threshold::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Notification::Threshold::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percentage.is_set || is_set(percentage.yfilter)) leaf_name_data.push_back(percentage.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Notification::Threshold::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Notification::Threshold::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AddressTable::Notification::Threshold::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percentage")
    {
        percentage = value;
        percentage.value_namespace = name_space;
        percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Notification::Threshold::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percentage")
    {
        percentage.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Notification::Threshold::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percentage" || name == "interval")
        return true;
    return false;
}

Native::Mac::AddressTable::Static_::Static_()
    :
    mac_address{YType::str, "mac-address"},
    vlan{YType::uint16, "vlan"},
    drop{YType::empty, "drop"},
    interface{YType::str, "interface"}
{

    yang_name = "static"; yang_parent_name = "address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Static_::~Static_()
{
}

bool Native::Mac::AddressTable::Static_::has_data() const
{
    return mac_address.is_set
	|| vlan.is_set
	|| drop.is_set
	|| interface.is_set;
}

bool Native::Mac::AddressTable::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Mac::AddressTable::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AddressTable::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "vlan" || name == "drop" || name == "interface")
        return true;
    return false;
}

Native::Mac::AccessList::AccessList()
{

    yang_name = "access-list"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AccessList::~AccessList()
{
}

bool Native::Mac::AccessList::has_data() const
{
    for (std::size_t index=0; index<extended.size(); index++)
    {
        if(extended[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mac::AccessList::has_operation() const
{
    for (std::size_t index=0; index<extended.size(); index++)
    {
        if(extended[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mac::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended")
    {
        for(auto const & c : extended)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mac::AccessList::Extended>();
        c->parent = this;
        extended.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : extended)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mac::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mac::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mac::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Extended()
    :
    id{YType::str, "id"}
    	,
    deny(std::make_shared<Native::Mac::AccessList::Extended::Deny>())
	,permit(std::make_shared<Native::Mac::AccessList::Extended::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "extended"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AccessList::Extended::~Extended()
{
}

bool Native::Mac::AccessList::Extended::has_data() const
{
    return id.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Mac::AccessList::Extended::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Mac::AccessList::Extended::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/Cisco-IOS-XE-acl:access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AccessList::Extended::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Mac::AccessList::Extended::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Mac::AccessList::Extended::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Mac::AccessList::Extended::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "id")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Deny::Deny()
    :
    ethertype{YType::str, "ethertype"}
    	,
    source(std::make_shared<Native::Mac::AccessList::Extended::Deny::Source>())
	,dest(std::make_shared<Native::Mac::AccessList::Extended::Deny::Dest>())
{
    source->parent = this;
    dest->parent = this;

    yang_name = "deny"; yang_parent_name = "extended"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mac::AccessList::Extended::Deny::~Deny()
{
}

bool Native::Mac::AccessList::Extended::Deny::has_data() const
{
    return ethertype.is_set
	|| (source !=  nullptr && source->has_data())
	|| (dest !=  nullptr && dest->has_data());
}

bool Native::Mac::AccessList::Extended::Deny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (dest !=  nullptr && dest->has_operation());
}

std::string Native::Mac::AccessList::Extended::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Mac::AccessList::Extended::Deny::Source>();
        }
        return source;
    }

    if(child_yang_name == "dest")
    {
        if(dest == nullptr)
        {
            dest = std::make_shared<Native::Mac::AccessList::Extended::Deny::Dest>();
        }
        return dest;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(dest != nullptr)
    {
        children["dest"] = dest;
    }

    return children;
}

void Native::Mac::AccessList::Extended::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "dest" || name == "ethertype")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Deny::Source::Source()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "source"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mac::AccessList::Extended::Deny::Source::~Source()
{
}

bool Native::Mac::AccessList::Extended::Deny::Source::has_data() const
{
    return any.is_set
	|| host.is_set
	|| mac_address.is_set;
}

bool Native::Mac::AccessList::Extended::Deny::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Native::Mac::AccessList::Extended::Deny::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::Deny::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Deny::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Deny::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AccessList::Extended::Deny::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::Deny::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::Deny::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "mac-address")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Deny::Dest::Dest()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "dest"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mac::AccessList::Extended::Deny::Dest::~Dest()
{
}

bool Native::Mac::AccessList::Extended::Deny::Dest::has_data() const
{
    return any.is_set
	|| host.is_set
	|| mac_address.is_set;
}

bool Native::Mac::AccessList::Extended::Deny::Dest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Native::Mac::AccessList::Extended::Deny::Dest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::Deny::Dest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Deny::Dest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Deny::Dest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AccessList::Extended::Deny::Dest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::Deny::Dest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::Deny::Dest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "mac-address")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Permit::Permit()
    :
    ethertype{YType::str, "ethertype"}
    	,
    source(std::make_shared<Native::Mac::AccessList::Extended::Permit::Source>())
	,dest(std::make_shared<Native::Mac::AccessList::Extended::Permit::Dest>())
{
    source->parent = this;
    dest->parent = this;

    yang_name = "permit"; yang_parent_name = "extended"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mac::AccessList::Extended::Permit::~Permit()
{
}

bool Native::Mac::AccessList::Extended::Permit::has_data() const
{
    return ethertype.is_set
	|| (source !=  nullptr && source->has_data())
	|| (dest !=  nullptr && dest->has_data());
}

bool Native::Mac::AccessList::Extended::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (dest !=  nullptr && dest->has_operation());
}

std::string Native::Mac::AccessList::Extended::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Mac::AccessList::Extended::Permit::Source>();
        }
        return source;
    }

    if(child_yang_name == "dest")
    {
        if(dest == nullptr)
        {
            dest = std::make_shared<Native::Mac::AccessList::Extended::Permit::Dest>();
        }
        return dest;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(dest != nullptr)
    {
        children["dest"] = dest;
    }

    return children;
}

void Native::Mac::AccessList::Extended::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "dest" || name == "ethertype")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Permit::Source::Source()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "source"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mac::AccessList::Extended::Permit::Source::~Source()
{
}

bool Native::Mac::AccessList::Extended::Permit::Source::has_data() const
{
    return any.is_set
	|| host.is_set
	|| mac_address.is_set;
}

bool Native::Mac::AccessList::Extended::Permit::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Native::Mac::AccessList::Extended::Permit::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::Permit::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Permit::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Permit::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AccessList::Extended::Permit::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::Permit::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::Permit::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "mac-address")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Permit::Dest::Dest()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "dest"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mac::AccessList::Extended::Permit::Dest::~Dest()
{
}

bool Native::Mac::AccessList::Extended::Permit::Dest::has_data() const
{
    return any.is_set
	|| host.is_set
	|| mac_address.is_set;
}

bool Native::Mac::AccessList::Extended::Permit::Dest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Native::Mac::AccessList::Extended::Permit::Dest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::Permit::Dest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Permit::Dest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Permit::Dest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AccessList::Extended::Permit::Dest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::Permit::Dest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::Permit::Dest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "mac-address")
        return true;
    return false;
}

Native::Tacacs::Tacacs()
{

    yang_name = "tacacs"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Tacacs::~Tacacs()
{
}

bool Native::Tacacs::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Tacacs::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Tacacs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Tacacs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Tacacs::Server>();
        c->parent = this;
        server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Tacacs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Tacacs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Tacacs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Tacacs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Tacacs::Server::Server()
    :
    name{YType::str, "name"}
    	,
    address(std::make_shared<Native::Tacacs::Server::Address>())
	,key(std::make_shared<Native::Tacacs::Server::Key>())
{
    address->parent = this;
    key->parent = this;

    yang_name = "server"; yang_parent_name = "tacacs"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Tacacs::Server::~Server()
{
}

bool Native::Tacacs::Server::has_data() const
{
    return name.is_set
	|| (address !=  nullptr && address->has_data())
	|| (key !=  nullptr && key->has_data());
}

bool Native::Tacacs::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Tacacs::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tacacs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Tacacs::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:server" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Tacacs::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Tacacs::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Tacacs::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Tacacs::Server::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Tacacs::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Tacacs::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Tacacs::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Tacacs::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "key" || name == "name")
        return true;
    return false;
}

Native::Tacacs::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Tacacs::Server::Address::~Address()
{
}

bool Native::Tacacs::Server::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Tacacs::Server::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Tacacs::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Tacacs::Server::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Tacacs::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Tacacs::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Tacacs::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Tacacs::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Tacacs::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Tacacs::Server::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Tacacs::Server::Key::~Key()
{
}

bool Native::Tacacs::Server::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Tacacs::Server::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Tacacs::Server::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Tacacs::Server::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Tacacs::Server::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Tacacs::Server::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Tacacs::Server::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Tacacs::Server::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Tacacs::Server::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::TacacsServer::TacacsServer()
    :
    timeout{YType::uint16, "Cisco-IOS-XE-aaa:timeout"}
    	,
    directed_request(nullptr) // presence node
	,key(std::make_shared<Native::TacacsServer::Key>())
{
    key->parent = this;

    yang_name = "tacacs-server"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TacacsServer::~TacacsServer()
{
}

bool Native::TacacsServer::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return timeout.is_set
	|| (directed_request !=  nullptr && directed_request->has_data())
	|| (key !=  nullptr && key->has_data());
}

bool Native::TacacsServer::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (directed_request !=  nullptr && directed_request->has_operation())
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::TacacsServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TacacsServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TacacsServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TacacsServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::TacacsServer::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    if(child_yang_name == "directed-request")
    {
        if(directed_request == nullptr)
        {
            directed_request = std::make_shared<Native::TacacsServer::DirectedRequest>();
        }
        return directed_request;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::TacacsServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TacacsServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    if(directed_request != nullptr)
    {
        children["directed-request"] = directed_request;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::TacacsServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TacacsServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::TacacsServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "directed-request" || name == "key" || name == "timeout")
        return true;
    return false;
}

Native::TacacsServer::Host::Host()
    :
    name{YType::str, "name"},
    port{YType::uint16, "port"},
    key{YType::str, "key"},
    encryption_key{YType::str, "encryption-key"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "host"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TacacsServer::Host::~Host()
{
}

bool Native::TacacsServer::Host::has_data() const
{
    return name.is_set
	|| port.is_set
	|| key.is_set
	|| encryption_key.is_set
	|| timeout.is_set;
}

bool Native::TacacsServer::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption_key.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::TacacsServer::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TacacsServer::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:host" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TacacsServer::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption_key.is_set || is_set(encryption_key.yfilter)) leaf_name_data.push_back(encryption_key.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TacacsServer::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TacacsServer::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TacacsServer::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-key")
    {
        encryption_key = value;
        encryption_key.value_namespace = name_space;
        encryption_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TacacsServer::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption-key")
    {
        encryption_key.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::TacacsServer::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "port" || name == "key" || name == "encryption-key" || name == "timeout")
        return true;
    return false;
}

Native::TacacsServer::DirectedRequest::DirectedRequest()
    :
    restricted{YType::empty, "restricted"},
    no_truncate{YType::empty, "no-truncate"}
{

    yang_name = "directed-request"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TacacsServer::DirectedRequest::~DirectedRequest()
{
}

bool Native::TacacsServer::DirectedRequest::has_data() const
{
    return restricted.is_set
	|| no_truncate.is_set;
}

bool Native::TacacsServer::DirectedRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restricted.yfilter)
	|| ydk::is_set(no_truncate.yfilter);
}

std::string Native::TacacsServer::DirectedRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TacacsServer::DirectedRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:directed-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TacacsServer::DirectedRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restricted.is_set || is_set(restricted.yfilter)) leaf_name_data.push_back(restricted.get_name_leafdata());
    if (no_truncate.is_set || is_set(no_truncate.yfilter)) leaf_name_data.push_back(no_truncate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TacacsServer::DirectedRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TacacsServer::DirectedRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TacacsServer::DirectedRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restricted")
    {
        restricted = value;
        restricted.value_namespace = name_space;
        restricted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-truncate")
    {
        no_truncate = value;
        no_truncate.value_namespace = name_space;
        no_truncate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TacacsServer::DirectedRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restricted")
    {
        restricted.yfilter = yfilter;
    }
    if(value_path == "no-truncate")
    {
        no_truncate.yfilter = yfilter;
    }
}

bool Native::TacacsServer::DirectedRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restricted" || name == "no-truncate")
        return true;
    return false;
}

Native::TacacsServer::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TacacsServer::Key::~Key()
{
}

bool Native::TacacsServer::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::TacacsServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::TacacsServer::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TacacsServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TacacsServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TacacsServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TacacsServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TacacsServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TacacsServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::TacacsServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

const Enum::YLeaf Native::SpanningTree::Mode::mst {0, "mst"};
const Enum::YLeaf Native::SpanningTree::Mode::pvst {1, "pvst"};
const Enum::YLeaf Native::SpanningTree::Mode::rapid_pvst {2, "rapid-pvst"};

const Enum::YLeaf Native::SpanningTree::Mst::InstanceRange::Root::primary {0, "primary"};
const Enum::YLeaf Native::SpanningTree::Mst::InstanceRange::Root::secondary {1, "secondary"};

const Enum::YLeaf Native::SpanningTree::Portfast::Bdpu::bpdufilter {0, "bpdufilter"};
const Enum::YLeaf Native::SpanningTree::Portfast::Bdpu::bpduguard {1, "bpduguard"};

const Enum::YLeaf Native::Track::TrackedObject::DefaultState::down {0, "down"};
const Enum::YLeaf Native::Track::TrackedObject::DefaultState::up {1, "up"};

const Enum::YLeaf Native::Track::TrackedObject::Interface::Protocol::ip {0, "ip"};
const Enum::YLeaf Native::Track::TrackedObject::Interface::Protocol::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Track::TrackedObject::Interface::Protocol::line_protocol {2, "line-protocol"};

const Enum::YLeaf Native::Track::TrackedObject::Ip::Route::Metric::threshold {0, "threshold"};

const Enum::YLeaf Native::Track::TrackedObject::Ipv6::Route::Metric::threshold {0, "threshold"};

const Enum::YLeaf Native::Track::TrackedObject::List::Boolean::and_ {0, "and"};
const Enum::YLeaf Native::Track::TrackedObject::List::Boolean::or_ {1, "or"};

const Enum::YLeaf Native::Track::TrackedObject::List::Threshold::percentage {0, "percentage"};
const Enum::YLeaf Native::Track::TrackedObject::List::Threshold::weight {1, "weight"};

const Enum::YLeaf Native::Track::TrackedObject::Default_::DefaultState::down {0, "down"};
const Enum::YLeaf Native::Track::TrackedObject::Default_::DefaultState::up {1, "up"};

const Enum::YLeaf Native::Dot1X::Credentials::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Dot1X::Credentials::Password::Type::Y_7 {1, "7"};

const Enum::YLeaf Native::ParameterMap::Name::global {0, "global"};
const Enum::YLeaf Native::ParameterMap::Name::gtp {1, "gtp"};

const Enum::YLeaf Native::ParameterMap::Type::cws_tunnel {0, "cws-tunnel"};
const Enum::YLeaf Native::ParameterMap::Type::inspect {1, "inspect"};
const Enum::YLeaf Native::ParameterMap::Type::inspect_global {2, "inspect-global"};
const Enum::YLeaf Native::ParameterMap::Type::webauth {3, "webauth"};
const Enum::YLeaf Native::ParameterMap::Type::inspect_vrf {4, "inspect-vrf"};
const Enum::YLeaf Native::ParameterMap::Type::inspect_zone {5, "inspect-zone"};
const Enum::YLeaf Native::ParameterMap::Type::regex {6, "regex"};
const Enum::YLeaf Native::ParameterMap::Type::authbypass {7, "authbypass"};

const Enum::YLeaf Native::ParameterMap::ParameterMapType::webauth {0, "webauth"};
const Enum::YLeaf Native::ParameterMap::ParameterMapType::authbypass {1, "authbypass"};

const Enum::YLeaf Native::ParameterMap::Alert::off {0, "off"};
const Enum::YLeaf Native::ParameterMap::Alert::on {1, "on"};

const Enum::YLeaf Native::ParameterMap::ApplicationInspect::all {0, "all"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::dns {1, "dns"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::exec {2, "exec"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::ftp {3, "ftp"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::gtp {4, "gtp"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::h323 {5, "h323"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::http {6, "http"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::imap {7, "imap"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::login {8, "login"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::msrpc {9, "msrpc"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::netbios {10, "netbios"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::pop3 {11, "pop3"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::rtsp {12, "rtsp"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::shell {13, "shell"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::sip {14, "sip"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::skinny {15, "skinny"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::smtp {16, "smtp"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::sunrpc {17, "sunrpc"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::tftp {18, "tftp"};

const Enum::YLeaf Native::ParameterMap::AuditTrail::off {0, "off"};
const Enum::YLeaf Native::ParameterMap::AuditTrail::on {1, "on"};

const Enum::YLeaf Native::ParameterMap::ZoneMismatch::drop {0, "drop"};

const Enum::YLeaf Native::Tacacs::Server::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Tacacs::Server::Key::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::TacacsServer::Host::Key::Y_0 {0, "0"};
const Enum::YLeaf Native::TacacsServer::Host::Key::Y_7 {1, "7"};

const Enum::YLeaf Native::TacacsServer::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::TacacsServer::Key::Encryption::Y_7 {1, "7"};


}
}

