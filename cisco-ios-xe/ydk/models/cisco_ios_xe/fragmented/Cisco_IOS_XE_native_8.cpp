
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_8.hpp"
#include "Cisco_IOS_XE_native_9.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::DomainLookupConf::DomainLookupConf()
    :
    domain_lookup{YType::boolean, "domain-lookup"}
{

    yang_name = "domain-lookup-conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::DomainLookupConf::~DomainLookupConf()
{
}

bool Native::Ip::DomainLookupConf::has_data() const
{
    if (is_presence_container) return true;
    return domain_lookup.is_set;
}

bool Native::Ip::DomainLookupConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_lookup.yfilter);
}

std::string Native::Ip::DomainLookupConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookupConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-lookup-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookupConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_lookup.is_set || is_set(domain_lookup.yfilter)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::DomainLookupConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::DomainLookupConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::DomainLookupConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
        domain_lookup.value_namespace = name_space;
        domain_lookup.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookupConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-lookup")
    {
        domain_lookup.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookupConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-lookup")
        return true;
    return false;
}

Native::Ip::DomainLookup::DomainLookup()
    :
    nsap{YType::empty, "nsap"}
        ,
    source_interface(std::make_shared<Native::Ip::DomainLookup::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "domain-lookup"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::DomainLookup::~DomainLookup()
{
}

bool Native::Ip::DomainLookup::has_data() const
{
    if (is_presence_container) return true;
    return nsap.is_set
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::DomainLookup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsap.yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::DomainLookup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-lookup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsap.is_set || is_set(nsap.yfilter)) leaf_name_data.push_back(nsap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::DomainLookup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::DomainLookup::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::DomainLookup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_interface != nullptr)
    {
        _children["source-interface"] = source_interface;
    }

    return _children;
}

void Native::Ip::DomainLookup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsap")
    {
        nsap = value;
        nsap.value_namespace = name_space;
        nsap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsap")
    {
        nsap.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface" || name == "nsap")
        return true;
    return false;
}

Native::Ip::DomainLookup::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
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
    atm_subinterface(std::make_shared<Native::Ip::DomainLookup::SourceInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ip::DomainLookup::SourceInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "domain-lookup"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::DomainLookup::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
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

bool Native::Ip::DomainLookup::SourceInterface::has_operation() const
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
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
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

std::string Native::Ip::DomainLookup::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::SourceInterface::get_name_leaf_data() const
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
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> Native::Ip::DomainLookup::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::DomainLookup::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::DomainLookup::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::DomainLookup::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Ip::DomainLookup::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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

void Native::Ip::DomainLookup::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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

bool Native::Ip::DomainLookup::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Dns::Dns()
    :
    server(nullptr) // presence node
{

    yang_name = "dns"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dns::~Dns()
{
}

bool Native::Ip::Dns::has_data() const
{
    if (is_presence_container) return true;
    return (server !=  nullptr && server->has_data());
}

bool Native::Ip::Dns::has_operation() const
{
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ip::Dns::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ip::Dns::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(server != nullptr)
    {
        _children["server"] = server;
    }

    return _children;
}

void Native::Ip::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Ip::Dns::Server::Server()
{

    yang_name = "server"; yang_parent_name = "dns"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Dns::Server::~Server()
{
}

bool Native::Ip::Dns::Server::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Ip::Dns::Server::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Ip::Dns::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dns/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dns::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dns::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dns::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dns::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dns::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dns::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dns::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Ip::Dhcp::Dhcp()
    :
    smart_relay{YType::empty, "Cisco-IOS-XE-dhcp:smart-relay"},
    snooping{YType::empty, "Cisco-IOS-XE-dhcp:snooping"}
        ,
    aaa(std::make_shared<Native::Ip::Dhcp::Aaa>())
    , bootp(std::make_shared<Native::Ip::Dhcp::Bootp>())
    , class_(this, {"id"})
    , ping(std::make_shared<Native::Ip::Dhcp::Ping>())
    , conflict(std::make_shared<Native::Ip::Dhcp::Conflict>())
    , excluded_address(std::make_shared<Native::Ip::Dhcp::ExcludedAddress>())
    , binding(std::make_shared<Native::Ip::Dhcp::Binding>())
    , database(std::make_shared<Native::Ip::Dhcp::Database>())
    , limit(std::make_shared<Native::Ip::Dhcp::Limit>())
    , subscriber_id(std::make_shared<Native::Ip::Dhcp::SubscriberId>())
    , route(std::make_shared<Native::Ip::Dhcp::Route>())
    , relay(std::make_shared<Native::Ip::Dhcp::Relay>())
    , pool(this, {"id"})
    , snooping_conf(std::make_shared<Native::Ip::Dhcp::SnoopingConf>())
    , use(std::make_shared<Native::Ip::Dhcp::Use>())
{
    aaa->parent = this;
    bootp->parent = this;
    ping->parent = this;
    conflict->parent = this;
    excluded_address->parent = this;
    binding->parent = this;
    database->parent = this;
    limit->parent = this;
    subscriber_id->parent = this;
    route->parent = this;
    relay->parent = this;
    snooping_conf->parent = this;
    use->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::~Dhcp()
{
}

bool Native::Ip::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return smart_relay.is_set
	|| snooping.is_set
	|| (aaa !=  nullptr && aaa->has_data())
	|| (bootp !=  nullptr && bootp->has_data())
	|| (ping !=  nullptr && ping->has_data())
	|| (conflict !=  nullptr && conflict->has_data())
	|| (excluded_address !=  nullptr && excluded_address->has_data())
	|| (binding !=  nullptr && binding->has_data())
	|| (database !=  nullptr && database->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (subscriber_id !=  nullptr && subscriber_id->has_data())
	|| (route !=  nullptr && route->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (snooping_conf !=  nullptr && snooping_conf->has_data())
	|| (use !=  nullptr && use->has_data());
}

bool Native::Ip::Dhcp::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(smart_relay.yfilter)
	|| ydk::is_set(snooping.yfilter)
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (bootp !=  nullptr && bootp->has_operation())
	|| (ping !=  nullptr && ping->has_operation())
	|| (conflict !=  nullptr && conflict->has_operation())
	|| (excluded_address !=  nullptr && excluded_address->has_operation())
	|| (binding !=  nullptr && binding->has_operation())
	|| (database !=  nullptr && database->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (subscriber_id !=  nullptr && subscriber_id->has_operation())
	|| (route !=  nullptr && route->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (snooping_conf !=  nullptr && snooping_conf->has_operation())
	|| (use !=  nullptr && use->has_operation());
}

std::string Native::Ip::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (smart_relay.is_set || is_set(smart_relay.yfilter)) leaf_name_data.push_back(smart_relay.get_name_leafdata());
    if (snooping.is_set || is_set(snooping.yfilter)) leaf_name_data.push_back(snooping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-dhcp:aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Native::Ip::Dhcp::Aaa>();
        }
        return aaa;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:bootp")
    {
        if(bootp == nullptr)
        {
            bootp = std::make_shared<Native::Ip::Dhcp::Bootp>();
        }
        return bootp;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:class")
    {
        auto ent_ = std::make_shared<Native::Ip::Dhcp::Class>();
        ent_->parent = this;
        class_.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:ping")
    {
        if(ping == nullptr)
        {
            ping = std::make_shared<Native::Ip::Dhcp::Ping>();
        }
        return ping;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:conflict")
    {
        if(conflict == nullptr)
        {
            conflict = std::make_shared<Native::Ip::Dhcp::Conflict>();
        }
        return conflict;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:excluded-address")
    {
        if(excluded_address == nullptr)
        {
            excluded_address = std::make_shared<Native::Ip::Dhcp::ExcludedAddress>();
        }
        return excluded_address;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:binding")
    {
        if(binding == nullptr)
        {
            binding = std::make_shared<Native::Ip::Dhcp::Binding>();
        }
        return binding;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Ip::Dhcp::Database>();
        }
        return database;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Ip::Dhcp::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:subscriber-id")
    {
        if(subscriber_id == nullptr)
        {
            subscriber_id = std::make_shared<Native::Ip::Dhcp::SubscriberId>();
        }
        return subscriber_id;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Ip::Dhcp::Route>();
        }
        return route;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:pool")
    {
        auto ent_ = std::make_shared<Native::Ip::Dhcp::Pool>();
        ent_->parent = this;
        pool.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:snooping-conf")
    {
        if(snooping_conf == nullptr)
        {
            snooping_conf = std::make_shared<Native::Ip::Dhcp::SnoopingConf>();
        }
        return snooping_conf;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:use")
    {
        if(use == nullptr)
        {
            use = std::make_shared<Native::Ip::Dhcp::Use>();
        }
        return use;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aaa != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:aaa"] = aaa;
    }

    if(bootp != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:bootp"] = bootp;
    }

    count_ = 0;
    for (auto ent_ : class_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(ping != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:ping"] = ping;
    }

    if(conflict != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:conflict"] = conflict;
    }

    if(excluded_address != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:excluded-address"] = excluded_address;
    }

    if(binding != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:binding"] = binding;
    }

    if(database != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:database"] = database;
    }

    if(limit != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:limit"] = limit;
    }

    if(subscriber_id != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:subscriber-id"] = subscriber_id;
    }

    if(route != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:route"] = route;
    }

    if(relay != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:relay"] = relay;
    }

    count_ = 0;
    for (auto ent_ : pool.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(snooping_conf != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:snooping-conf"] = snooping_conf;
    }

    if(use != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:use"] = use;
    }

    return _children;
}

void Native::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-dhcp:smart-relay")
    {
        smart_relay = value;
        smart_relay.value_namespace = name_space;
        smart_relay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-dhcp:snooping")
    {
        snooping = value;
        snooping.value_namespace = name_space;
        snooping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "smart-relay")
    {
        smart_relay.yfilter = yfilter;
    }
    if(value_path == "snooping")
    {
        snooping.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa" || name == "bootp" || name == "class" || name == "ping" || name == "conflict" || name == "excluded-address" || name == "binding" || name == "database" || name == "limit" || name == "subscriber-id" || name == "route" || name == "relay" || name == "pool" || name == "snooping-conf" || name == "use" || name == "smart-relay" || name == "snooping")
        return true;
    return false;
}

Native::Ip::Dhcp::Aaa::Aaa()
    :
    default_(std::make_shared<Native::Ip::Dhcp::Aaa::Default>())
{
    default_->parent = this;

    yang_name = "aaa"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Aaa::~Aaa()
{
}

bool Native::Ip::Dhcp::Aaa::has_data() const
{
    if (is_presence_container) return true;
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::Dhcp::Aaa::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::Dhcp::Aaa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::Dhcp::Aaa::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Ip::Dhcp::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Ip::Dhcp::Aaa::Default::Default()
    :
    username{YType::str, "username"}
{

    yang_name = "default"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Aaa::Default::~Default()
{
}

bool Native::Ip::Dhcp::Aaa::Default::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set;
}

bool Native::Ip::Dhcp::Aaa::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter);
}

std::string Native::Ip::Dhcp::Aaa::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Aaa::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Aaa::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Aaa::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Aaa::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Aaa::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Aaa::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Aaa::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username")
        return true;
    return false;
}

Native::Ip::Dhcp::Bootp::Bootp()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "bootp"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Bootp::~Bootp()
{
}

bool Native::Ip::Dhcp::Bootp::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set;
}

bool Native::Ip::Dhcp::Bootp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Ip::Dhcp::Bootp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Bootp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:bootp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Bootp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Bootp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Bootp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Bootp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Bootp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Bootp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Ip::Dhcp::Class::Class()
    :
    id{YType::str, "id"},
    remark{YType::str, "remark"}
        ,
    option(std::make_shared<Native::Ip::Dhcp::Class::Option>())
    , relay(std::make_shared<Native::Ip::Dhcp::Class::Relay>())
{
    option->parent = this;
    relay->parent = this;

    yang_name = "class"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Class::~Class()
{
}

bool Native::Ip::Dhcp::Class::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| remark.is_set
	|| (option !=  nullptr && option->has_data())
	|| (relay !=  nullptr && relay->has_data());
}

bool Native::Ip::Dhcp::Class::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (option !=  nullptr && option->has_operation())
	|| (relay !=  nullptr && relay->has_operation());
}

std::string Native::Ip::Dhcp::Class::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:class";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Ip::Dhcp::Class::Option>();
        }
        return option;
    }

    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Ip::Dhcp::Class::Relay>();
        }
        return relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(option != nullptr)
    {
        _children["option"] = option;
    }

    if(relay != nullptr)
    {
        _children["relay"] = relay;
    }

    return _children;
}

void Native::Ip::Dhcp::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "relay" || name == "id" || name == "remark")
        return true;
    return false;
}

Native::Ip::Dhcp::Class::Option::Option()
    :
    option_list(this, {"option_range"})
{

    yang_name = "option"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Class::Option::~Option()
{
}

bool Native::Ip::Dhcp::Class::Option::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<option_list.len(); index++)
    {
        if(option_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Dhcp::Class::Option::has_operation() const
{
    for (std::size_t index=0; index<option_list.len(); index++)
    {
        if(option_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Dhcp::Class::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Class::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Class::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Dhcp::Class::Option::OptionList>();
        ent_->parent = this;
        option_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Class::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : option_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Dhcp::Class::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Class::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Class::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-list")
        return true;
    return false;
}

Native::Ip::Dhcp::Class::Option::OptionList::OptionList()
    :
    option_range{YType::uint8, "option-range"},
    line{YType::str, "LINE"}
        ,
    hex_list(this, {"hex_string"})
{

    yang_name = "option-list"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Class::Option::OptionList::~OptionList()
{
}

bool Native::Ip::Dhcp::Class::Option::OptionList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hex_list.len(); index++)
    {
        if(hex_list[index]->has_data())
            return true;
    }
    return option_range.is_set
	|| line.is_set;
}

bool Native::Ip::Dhcp::Class::Option::OptionList::has_operation() const
{
    for (std::size_t index=0; index<hex_list.len(); index++)
    {
        if(hex_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option_range.yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Ip::Dhcp::Class::Option::OptionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-list";
    ADD_KEY_TOKEN(option_range, "option-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Class::Option::OptionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_range.is_set || is_set(option_range.yfilter)) leaf_name_data.push_back(option_range.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Class::Option::OptionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hex-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Dhcp::Class::Option::OptionList::HexList>();
        ent_->parent = this;
        hex_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Class::Option::OptionList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hex_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Dhcp::Class::Option::OptionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-range")
    {
        option_range = value;
        option_range.value_namespace = name_space;
        option_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LINE")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Class::Option::OptionList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-range")
    {
        option_range.yfilter = yfilter;
    }
    if(value_path == "LINE")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Class::Option::OptionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex-list" || name == "option-range" || name == "LINE")
        return true;
    return false;
}

Native::Ip::Dhcp::Class::Option::OptionList::HexList::HexList()
    :
    hex_string{YType::str, "hex-string"},
    mask{YType::str, "mask"}
{

    yang_name = "hex-list"; yang_parent_name = "option-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Class::Option::OptionList::HexList::~HexList()
{
}

bool Native::Ip::Dhcp::Class::Option::OptionList::HexList::has_data() const
{
    if (is_presence_container) return true;
    return hex_string.is_set
	|| mask.is_set;
}

bool Native::Ip::Dhcp::Class::Option::OptionList::HexList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_string.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Dhcp::Class::Option::OptionList::HexList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hex-list";
    ADD_KEY_TOKEN(hex_string, "hex-string");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Class::Option::OptionList::HexList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Class::Option::OptionList::HexList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Class::Option::OptionList::HexList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Class::Option::OptionList::HexList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Class::Option::OptionList::HexList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Class::Option::OptionList::HexList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex-string" || name == "mask")
        return true;
    return false;
}

Native::Ip::Dhcp::Class::Relay::Relay()
    :
    agent(std::make_shared<Native::Ip::Dhcp::Class::Relay::Agent>())
{
    agent->parent = this;

    yang_name = "relay"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Class::Relay::~Relay()
{
}

bool Native::Ip::Dhcp::Class::Relay::has_data() const
{
    if (is_presence_container) return true;
    return (agent !=  nullptr && agent->has_data());
}

bool Native::Ip::Dhcp::Class::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (agent !=  nullptr && agent->has_operation());
}

std::string Native::Ip::Dhcp::Class::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Class::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Class::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agent")
    {
        if(agent == nullptr)
        {
            agent = std::make_shared<Native::Ip::Dhcp::Class::Relay::Agent>();
        }
        return agent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Class::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(agent != nullptr)
    {
        _children["agent"] = agent;
    }

    return _children;
}

void Native::Ip::Dhcp::Class::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Class::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Class::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent")
        return true;
    return false;
}

Native::Ip::Dhcp::Class::Relay::Agent::Agent()
    :
    information{YType::empty, "information"}
{

    yang_name = "agent"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Class::Relay::Agent::~Agent()
{
}

bool Native::Ip::Dhcp::Class::Relay::Agent::has_data() const
{
    if (is_presence_container) return true;
    return information.is_set;
}

bool Native::Ip::Dhcp::Class::Relay::Agent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(information.yfilter);
}

std::string Native::Ip::Dhcp::Class::Relay::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Class::Relay::Agent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (information.is_set || is_set(information.yfilter)) leaf_name_data.push_back(information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Class::Relay::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Class::Relay::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Class::Relay::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "information")
    {
        information = value;
        information.value_namespace = name_space;
        information.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Class::Relay::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "information")
    {
        information.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Class::Relay::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

Native::Ip::Dhcp::Ping::Ping()
    :
    timeout{YType::uint16, "timeout"}
        ,
    packets(nullptr) // presence node
{

    yang_name = "ping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Ping::~Ping()
{
}

bool Native::Ip::Dhcp::Ping::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Ip::Dhcp::Ping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Ip::Dhcp::Ping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Ping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:ping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Ping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Ping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Ip::Dhcp::Ping::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Ping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(packets != nullptr)
    {
        _children["packets"] = packets;
    }

    return _children;
}

void Native::Ip::Dhcp::Ping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Ping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Ping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "timeout")
        return true;
    return false;
}

Native::Ip::Dhcp::Ping::Packets::Packets()
    :
    number_packets{YType::uint8, "number-packets"}
{

    yang_name = "packets"; yang_parent_name = "ping"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Dhcp::Ping::Packets::~Packets()
{
}

bool Native::Ip::Dhcp::Ping::Packets::has_data() const
{
    if (is_presence_container) return true;
    return number_packets.is_set;
}

bool Native::Ip::Dhcp::Ping::Packets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_packets.yfilter);
}

std::string Native::Ip::Dhcp::Ping::Packets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:ping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Ping::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Ping::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_packets.is_set || is_set(number_packets.yfilter)) leaf_name_data.push_back(number_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Ping::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Ping::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Ping::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-packets")
    {
        number_packets = value;
        number_packets.value_namespace = name_space;
        number_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Ping::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-packets")
    {
        number_packets.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Ping::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-packets")
        return true;
    return false;
}

Native::Ip::Dhcp::Conflict::Conflict()
    :
    logging{YType::boolean, "logging"}
        ,
    resolution(nullptr) // presence node
{

    yang_name = "conflict"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Conflict::~Conflict()
{
}

bool Native::Ip::Dhcp::Conflict::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| (resolution !=  nullptr && resolution->has_data());
}

bool Native::Ip::Dhcp::Conflict::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| (resolution !=  nullptr && resolution->has_operation());
}

std::string Native::Ip::Dhcp::Conflict::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Conflict::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:conflict";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Conflict::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Conflict::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resolution")
    {
        if(resolution == nullptr)
        {
            resolution = std::make_shared<Native::Ip::Dhcp::Conflict::Resolution>();
        }
        return resolution;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Conflict::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(resolution != nullptr)
    {
        _children["resolution"] = resolution;
    }

    return _children;
}

void Native::Ip::Dhcp::Conflict::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Conflict::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Conflict::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resolution" || name == "logging")
        return true;
    return false;
}

Native::Ip::Dhcp::Conflict::Resolution::Resolution()
    :
    interval{YType::uint32, "interval"}
{

    yang_name = "resolution"; yang_parent_name = "conflict"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Dhcp::Conflict::Resolution::~Resolution()
{
}

bool Native::Ip::Dhcp::Conflict::Resolution::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Ip::Dhcp::Conflict::Resolution::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Dhcp::Conflict::Resolution::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:conflict/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Conflict::Resolution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resolution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Conflict::Resolution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Conflict::Resolution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Conflict::Resolution::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Conflict::Resolution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Conflict::Resolution::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Conflict::Resolution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Ip::Dhcp::ExcludedAddress::ExcludedAddress()
    :
    low_address_list(this, {"low_address"})
    , low_high_address_list(this, {"low_address", "high_address"})
    , vrf_low_address_list(this, {"vrf", "low_address"})
    , vrf_low_high_address_list(this, {"vrf", "low_address", "high_address"})
{

    yang_name = "excluded-address"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::ExcludedAddress::~ExcludedAddress()
{
}

bool Native::Ip::Dhcp::ExcludedAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<low_address_list.len(); index++)
    {
        if(low_address_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<low_high_address_list.len(); index++)
    {
        if(low_high_address_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_low_address_list.len(); index++)
    {
        if(vrf_low_address_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_low_high_address_list.len(); index++)
    {
        if(vrf_low_high_address_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Dhcp::ExcludedAddress::has_operation() const
{
    for (std::size_t index=0; index<low_address_list.len(); index++)
    {
        if(low_address_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<low_high_address_list.len(); index++)
    {
        if(low_high_address_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_low_address_list.len(); index++)
    {
        if(vrf_low_address_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_low_high_address_list.len(); index++)
    {
        if(vrf_low_high_address_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Dhcp::ExcludedAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::ExcludedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:excluded-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::ExcludedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::ExcludedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "low-address-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Dhcp::ExcludedAddress::LowAddressList>();
        ent_->parent = this;
        low_address_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "low-high-address-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Dhcp::ExcludedAddress::LowHighAddressList>();
        ent_->parent = this;
        low_high_address_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-low-address-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Dhcp::ExcludedAddress::VrfLowAddressList>();
        ent_->parent = this;
        vrf_low_address_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-low-high-address-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Dhcp::ExcludedAddress::VrfLowHighAddressList>();
        ent_->parent = this;
        vrf_low_high_address_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::ExcludedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : low_address_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : low_high_address_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_low_address_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_low_high_address_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Dhcp::ExcludedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::ExcludedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::ExcludedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "low-address-list" || name == "low-high-address-list" || name == "vrf-low-address-list" || name == "vrf-low-high-address-list")
        return true;
    return false;
}

Native::Ip::Dhcp::ExcludedAddress::LowAddressList::LowAddressList()
    :
    low_address{YType::str, "low-address"}
{

    yang_name = "low-address-list"; yang_parent_name = "excluded-address"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::ExcludedAddress::LowAddressList::~LowAddressList()
{
}

bool Native::Ip::Dhcp::ExcludedAddress::LowAddressList::has_data() const
{
    if (is_presence_container) return true;
    return low_address.is_set;
}

bool Native::Ip::Dhcp::ExcludedAddress::LowAddressList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low_address.yfilter);
}

std::string Native::Ip::Dhcp::ExcludedAddress::LowAddressList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:excluded-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::ExcludedAddress::LowAddressList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-address-list";
    ADD_KEY_TOKEN(low_address, "low-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::ExcludedAddress::LowAddressList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low_address.is_set || is_set(low_address.yfilter)) leaf_name_data.push_back(low_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::ExcludedAddress::LowAddressList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::ExcludedAddress::LowAddressList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::ExcludedAddress::LowAddressList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low-address")
    {
        low_address = value;
        low_address.value_namespace = name_space;
        low_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::ExcludedAddress::LowAddressList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low-address")
    {
        low_address.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::ExcludedAddress::LowAddressList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "low-address")
        return true;
    return false;
}

Native::Ip::Dhcp::ExcludedAddress::LowHighAddressList::LowHighAddressList()
    :
    low_address{YType::str, "low-address"},
    high_address{YType::str, "high-address"}
{

    yang_name = "low-high-address-list"; yang_parent_name = "excluded-address"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::ExcludedAddress::LowHighAddressList::~LowHighAddressList()
{
}

bool Native::Ip::Dhcp::ExcludedAddress::LowHighAddressList::has_data() const
{
    if (is_presence_container) return true;
    return low_address.is_set
	|| high_address.is_set;
}

bool Native::Ip::Dhcp::ExcludedAddress::LowHighAddressList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low_address.yfilter)
	|| ydk::is_set(high_address.yfilter);
}

std::string Native::Ip::Dhcp::ExcludedAddress::LowHighAddressList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:excluded-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::ExcludedAddress::LowHighAddressList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-high-address-list";
    ADD_KEY_TOKEN(low_address, "low-address");
    ADD_KEY_TOKEN(high_address, "high-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::ExcludedAddress::LowHighAddressList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low_address.is_set || is_set(low_address.yfilter)) leaf_name_data.push_back(low_address.get_name_leafdata());
    if (high_address.is_set || is_set(high_address.yfilter)) leaf_name_data.push_back(high_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::ExcludedAddress::LowHighAddressList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::ExcludedAddress::LowHighAddressList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::ExcludedAddress::LowHighAddressList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low-address")
    {
        low_address = value;
        low_address.value_namespace = name_space;
        low_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-address")
    {
        high_address = value;
        high_address.value_namespace = name_space;
        high_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::ExcludedAddress::LowHighAddressList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low-address")
    {
        low_address.yfilter = yfilter;
    }
    if(value_path == "high-address")
    {
        high_address.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::ExcludedAddress::LowHighAddressList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "low-address" || name == "high-address")
        return true;
    return false;
}

Native::Ip::Dhcp::ExcludedAddress::VrfLowAddressList::VrfLowAddressList()
    :
    vrf{YType::str, "vrf"},
    low_address{YType::str, "low-address"}
{

    yang_name = "vrf-low-address-list"; yang_parent_name = "excluded-address"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::ExcludedAddress::VrfLowAddressList::~VrfLowAddressList()
{
}

bool Native::Ip::Dhcp::ExcludedAddress::VrfLowAddressList::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| low_address.is_set;
}

bool Native::Ip::Dhcp::ExcludedAddress::VrfLowAddressList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(low_address.yfilter);
}

std::string Native::Ip::Dhcp::ExcludedAddress::VrfLowAddressList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:excluded-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::ExcludedAddress::VrfLowAddressList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-low-address-list";
    ADD_KEY_TOKEN(vrf, "vrf");
    ADD_KEY_TOKEN(low_address, "low-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::ExcludedAddress::VrfLowAddressList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (low_address.is_set || is_set(low_address.yfilter)) leaf_name_data.push_back(low_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::ExcludedAddress::VrfLowAddressList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::ExcludedAddress::VrfLowAddressList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::ExcludedAddress::VrfLowAddressList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-address")
    {
        low_address = value;
        low_address.value_namespace = name_space;
        low_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::ExcludedAddress::VrfLowAddressList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "low-address")
    {
        low_address.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::ExcludedAddress::VrfLowAddressList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "low-address")
        return true;
    return false;
}

Native::Ip::Dhcp::ExcludedAddress::VrfLowHighAddressList::VrfLowHighAddressList()
    :
    vrf{YType::str, "vrf"},
    low_address{YType::str, "low-address"},
    high_address{YType::str, "high-address"}
{

    yang_name = "vrf-low-high-address-list"; yang_parent_name = "excluded-address"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::ExcludedAddress::VrfLowHighAddressList::~VrfLowHighAddressList()
{
}

bool Native::Ip::Dhcp::ExcludedAddress::VrfLowHighAddressList::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| low_address.is_set
	|| high_address.is_set;
}

bool Native::Ip::Dhcp::ExcludedAddress::VrfLowHighAddressList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(low_address.yfilter)
	|| ydk::is_set(high_address.yfilter);
}

std::string Native::Ip::Dhcp::ExcludedAddress::VrfLowHighAddressList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:excluded-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::ExcludedAddress::VrfLowHighAddressList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-low-high-address-list";
    ADD_KEY_TOKEN(vrf, "vrf");
    ADD_KEY_TOKEN(low_address, "low-address");
    ADD_KEY_TOKEN(high_address, "high-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::ExcludedAddress::VrfLowHighAddressList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (low_address.is_set || is_set(low_address.yfilter)) leaf_name_data.push_back(low_address.get_name_leafdata());
    if (high_address.is_set || is_set(high_address.yfilter)) leaf_name_data.push_back(high_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::ExcludedAddress::VrfLowHighAddressList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::ExcludedAddress::VrfLowHighAddressList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::ExcludedAddress::VrfLowHighAddressList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-address")
    {
        low_address = value;
        low_address.value_namespace = name_space;
        low_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-address")
    {
        high_address = value;
        high_address.value_namespace = name_space;
        high_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::ExcludedAddress::VrfLowHighAddressList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "low-address")
    {
        low_address.yfilter = yfilter;
    }
    if(value_path == "high-address")
    {
        high_address.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::ExcludedAddress::VrfLowHighAddressList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "low-address" || name == "high-address")
        return true;
    return false;
}

Native::Ip::Dhcp::Binding::Binding()
    :
    cleanup(std::make_shared<Native::Ip::Dhcp::Binding::Cleanup>())
{
    cleanup->parent = this;

    yang_name = "binding"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Binding::~Binding()
{
}

bool Native::Ip::Dhcp::Binding::has_data() const
{
    if (is_presence_container) return true;
    return (cleanup !=  nullptr && cleanup->has_data());
}

bool Native::Ip::Dhcp::Binding::has_operation() const
{
    return is_set(yfilter)
	|| (cleanup !=  nullptr && cleanup->has_operation());
}

std::string Native::Ip::Dhcp::Binding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cleanup")
    {
        if(cleanup == nullptr)
        {
            cleanup = std::make_shared<Native::Ip::Dhcp::Binding::Cleanup>();
        }
        return cleanup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cleanup != nullptr)
    {
        _children["cleanup"] = cleanup;
    }

    return _children;
}

void Native::Ip::Dhcp::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cleanup")
        return true;
    return false;
}

Native::Ip::Dhcp::Binding::Cleanup::Cleanup()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "cleanup"; yang_parent_name = "binding"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Binding::Cleanup::~Cleanup()
{
}

bool Native::Ip::Dhcp::Binding::Cleanup::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Ip::Dhcp::Binding::Cleanup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Dhcp::Binding::Cleanup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:binding/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Binding::Cleanup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cleanup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Binding::Cleanup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Binding::Cleanup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Binding::Cleanup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Binding::Cleanup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Binding::Cleanup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Binding::Cleanup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Ip::Dhcp::Database::Database()
    :
    resource(this, {"resource_locator"})
{

    yang_name = "database"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Database::~Database()
{
}

bool Native::Ip::Dhcp::Database::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<resource.len(); index++)
    {
        if(resource[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Dhcp::Database::has_operation() const
{
    for (std::size_t index=0; index<resource.len(); index++)
    {
        if(resource[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Dhcp::Database::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resource")
    {
        auto ent_ = std::make_shared<Native::Ip::Dhcp::Database::Resource>();
        ent_->parent = this;
        resource.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : resource.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Dhcp::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resource")
        return true;
    return false;
}

Native::Ip::Dhcp::Database::Resource::Resource()
    :
    resource_locator{YType::str, "resource-locator"},
    write_delay{YType::uint32, "write-delay"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "resource"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Database::Resource::~Resource()
{
}

bool Native::Ip::Dhcp::Database::Resource::has_data() const
{
    if (is_presence_container) return true;
    return resource_locator.is_set
	|| write_delay.is_set
	|| timeout.is_set;
}

bool Native::Ip::Dhcp::Database::Resource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(resource_locator.yfilter)
	|| ydk::is_set(write_delay.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Ip::Dhcp::Database::Resource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Database::Resource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource";
    ADD_KEY_TOKEN(resource_locator, "resource-locator");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Database::Resource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resource_locator.is_set || is_set(resource_locator.yfilter)) leaf_name_data.push_back(resource_locator.get_name_leafdata());
    if (write_delay.is_set || is_set(write_delay.yfilter)) leaf_name_data.push_back(write_delay.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Database::Resource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Database::Resource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Database::Resource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resource-locator")
    {
        resource_locator = value;
        resource_locator.value_namespace = name_space;
        resource_locator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-delay")
    {
        write_delay = value;
        write_delay.value_namespace = name_space;
        write_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Database::Resource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resource-locator")
    {
        resource_locator.yfilter = yfilter;
    }
    if(value_path == "write-delay")
    {
        write_delay.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Database::Resource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resource-locator" || name == "write-delay" || name == "timeout")
        return true;
    return false;
}

Native::Ip::Dhcp::Limit::Limit()
    :
    lease(std::make_shared<Native::Ip::Dhcp::Limit::Lease>())
{
    lease->parent = this;

    yang_name = "limit"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Limit::~Limit()
{
}

bool Native::Ip::Dhcp::Limit::has_data() const
{
    if (is_presence_container) return true;
    return (lease !=  nullptr && lease->has_data());
}

bool Native::Ip::Dhcp::Limit::has_operation() const
{
    return is_set(yfilter)
	|| (lease !=  nullptr && lease->has_operation());
}

std::string Native::Ip::Dhcp::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lease")
    {
        if(lease == nullptr)
        {
            lease = std::make_shared<Native::Ip::Dhcp::Limit::Lease>();
        }
        return lease;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lease != nullptr)
    {
        _children["lease"] = lease;
    }

    return _children;
}

void Native::Ip::Dhcp::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lease")
        return true;
    return false;
}

Native::Ip::Dhcp::Limit::Lease::Lease()
    :
    log{YType::empty, "log"}
        ,
    per(std::make_shared<Native::Ip::Dhcp::Limit::Lease::Per>())
{
    per->parent = this;

    yang_name = "lease"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Limit::Lease::~Lease()
{
}

bool Native::Ip::Dhcp::Limit::Lease::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set
	|| (per !=  nullptr && per->has_data());
}

bool Native::Ip::Dhcp::Limit::Lease::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter)
	|| (per !=  nullptr && per->has_operation());
}

std::string Native::Ip::Dhcp::Limit::Lease::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Limit::Lease::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Limit::Lease::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Limit::Lease::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per")
    {
        if(per == nullptr)
        {
            per = std::make_shared<Native::Ip::Dhcp::Limit::Lease::Per>();
        }
        return per;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Limit::Lease::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(per != nullptr)
    {
        _children["per"] = per;
    }

    return _children;
}

void Native::Ip::Dhcp::Limit::Lease::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Limit::Lease::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Limit::Lease::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per" || name == "log")
        return true;
    return false;
}

Native::Ip::Dhcp::Limit::Lease::Per::Per()
    :
    interface{YType::uint16, "interface"}
{

    yang_name = "per"; yang_parent_name = "lease"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Limit::Lease::Per::~Per()
{
}

bool Native::Ip::Dhcp::Limit::Lease::Per::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set;
}

bool Native::Ip::Dhcp::Limit::Lease::Per::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Ip::Dhcp::Limit::Lease::Per::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:limit/lease/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Limit::Lease::Per::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Limit::Lease::Per::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Limit::Lease::Per::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Limit::Lease::Per::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Limit::Lease::Per::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Limit::Lease::Per::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Limit::Lease::Per::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Ip::Dhcp::SubscriberId::SubscriberId()
    :
    interface_name{YType::empty, "interface-name"}
{

    yang_name = "subscriber-id"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::SubscriberId::~SubscriberId()
{
}

bool Native::Ip::Dhcp::SubscriberId::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool Native::Ip::Dhcp::SubscriberId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Ip::Dhcp::SubscriberId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::SubscriberId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:subscriber-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::SubscriberId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::SubscriberId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::SubscriberId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::SubscriberId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::SubscriberId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::SubscriberId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Native::Ip::Dhcp::Route::Route()
    :
    route{YType::enumeration, "route"}
{

    yang_name = "route"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Route::~Route()
{
}

bool Native::Ip::Dhcp::Route::has_data() const
{
    if (is_presence_container) return true;
    return route.is_set;
}

bool Native::Ip::Dhcp::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter);
}

std::string Native::Ip::Dhcp::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Ip::Dhcp::Relay::Relay()
    :
    information(std::make_shared<Native::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Ip::Dhcp::Relay::has_data() const
{
    if (is_presence_container) return true;
    return (information !=  nullptr && information->has_data());
}

bool Native::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Ip::Dhcp::Relay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(information != nullptr)
    {
        _children["information"] = information;
    }

    return _children;
}

void Native::Ip::Dhcp::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

Native::Ip::Dhcp::Relay::Information::Information()
    :
    trust_all{YType::empty, "trust-all"}
        ,
    option(std::make_shared<Native::Ip::Dhcp::Relay::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Ip::Dhcp::Relay::Information::has_data() const
{
    if (is_presence_container) return true;
    return trust_all.is_set
	|| (option !=  nullptr && option->has_data());
}

bool Native::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust_all.yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Ip::Dhcp::Relay::Information::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:relay/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust_all.is_set || is_set(trust_all.yfilter)) leaf_name_data.push_back(trust_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(option != nullptr)
    {
        _children["option"] = option;
    }

    return _children;
}

void Native::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust-all")
    {
        trust_all = value;
        trust_all.value_namespace = name_space;
        trust_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust-all")
    {
        trust_all.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "trust-all")
        return true;
    return false;
}

Native::Ip::Dhcp::Relay::Information::Option::Option()
    :
    option_default{YType::empty, "option-default"},
    vpn{YType::empty, "vpn"}
{

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    if (is_presence_container) return true;
    return option_default.is_set
	|| vpn.is_set;
}

bool Native::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option_default.yfilter)
	|| ydk::is_set(vpn.yfilter);
}

std::string Native::Ip::Dhcp::Relay::Information::Option::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:relay/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Relay::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_default.is_set || is_set(option_default.yfilter)) leaf_name_data.push_back(option_default.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.yfilter)) leaf_name_data.push_back(vpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-default")
    {
        option_default = value;
        option_default.value_namespace = name_space;
        option_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn")
    {
        vpn = value;
        vpn.value_namespace = name_space;
        vpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Relay::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-default")
    {
        option_default.yfilter = yfilter;
    }
    if(value_path == "vpn")
    {
        vpn.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Relay::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-default" || name == "vpn")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Pool()
    :
    id{YType::str, "id"},
    vrf{YType::str, "vrf"},
    domain_name{YType::str, "domain-name"},
    client_identifier{YType::str, "client-identifier"},
    client_name{YType::str, "client-name"}
        ,
    option(std::make_shared<Native::Ip::Dhcp::Pool::Option>())
    , class_(this, {"name"})
    , lease(std::make_shared<Native::Ip::Dhcp::Pool::Lease>())
    , default_router(std::make_shared<Native::Ip::Dhcp::Pool::DefaultRouter>())
    , utilization(std::make_shared<Native::Ip::Dhcp::Pool::Utilization>())
    , dns_server(std::make_shared<Native::Ip::Dhcp::Pool::DnsServer>())
    , network(std::make_shared<Native::Ip::Dhcp::Pool::Network>())
    , host(std::make_shared<Native::Ip::Dhcp::Pool::Host>())
    , hardware_address(std::make_shared<Native::Ip::Dhcp::Pool::HardwareAddress>())
{
    option->parent = this;
    lease->parent = this;
    default_router->parent = this;
    utilization->parent = this;
    dns_server->parent = this;
    network->parent = this;
    host->parent = this;
    hardware_address->parent = this;

    yang_name = "pool"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Pool::~Pool()
{
}

bool Native::Ip::Dhcp::Pool::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return id.is_set
	|| vrf.is_set
	|| domain_name.is_set
	|| client_identifier.is_set
	|| client_name.is_set
	|| (option !=  nullptr && option->has_data())
	|| (lease !=  nullptr && lease->has_data())
	|| (default_router !=  nullptr && default_router->has_data())
	|| (utilization !=  nullptr && utilization->has_data())
	|| (dns_server !=  nullptr && dns_server->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (host !=  nullptr && host->has_data())
	|| (hardware_address !=  nullptr && hardware_address->has_data());
}

bool Native::Ip::Dhcp::Pool::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(client_identifier.yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| (option !=  nullptr && option->has_operation())
	|| (lease !=  nullptr && lease->has_operation())
	|| (default_router !=  nullptr && default_router->has_operation())
	|| (utilization !=  nullptr && utilization->has_operation())
	|| (dns_server !=  nullptr && dns_server->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (host !=  nullptr && host->has_operation())
	|| (hardware_address !=  nullptr && hardware_address->has_operation());
}

std::string Native::Ip::Dhcp::Pool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:pool";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (client_identifier.is_set || is_set(client_identifier.yfilter)) leaf_name_data.push_back(client_identifier.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Ip::Dhcp::Pool::Option>();
        }
        return option;
    }

    if(child_yang_name == "class")
    {
        auto ent_ = std::make_shared<Native::Ip::Dhcp::Pool::Class>();
        ent_->parent = this;
        class_.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lease")
    {
        if(lease == nullptr)
        {
            lease = std::make_shared<Native::Ip::Dhcp::Pool::Lease>();
        }
        return lease;
    }

    if(child_yang_name == "default-router")
    {
        if(default_router == nullptr)
        {
            default_router = std::make_shared<Native::Ip::Dhcp::Pool::DefaultRouter>();
        }
        return default_router;
    }

    if(child_yang_name == "utilization")
    {
        if(utilization == nullptr)
        {
            utilization = std::make_shared<Native::Ip::Dhcp::Pool::Utilization>();
        }
        return utilization;
    }

    if(child_yang_name == "dns-server")
    {
        if(dns_server == nullptr)
        {
            dns_server = std::make_shared<Native::Ip::Dhcp::Pool::DnsServer>();
        }
        return dns_server;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Ip::Dhcp::Pool::Network>();
        }
        return network;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Ip::Dhcp::Pool::Host>();
        }
        return host;
    }

    if(child_yang_name == "hardware-address")
    {
        if(hardware_address == nullptr)
        {
            hardware_address = std::make_shared<Native::Ip::Dhcp::Pool::HardwareAddress>();
        }
        return hardware_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(option != nullptr)
    {
        _children["option"] = option;
    }

    count_ = 0;
    for (auto ent_ : class_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(lease != nullptr)
    {
        _children["lease"] = lease;
    }

    if(default_router != nullptr)
    {
        _children["default-router"] = default_router;
    }

    if(utilization != nullptr)
    {
        _children["utilization"] = utilization;
    }

    if(dns_server != nullptr)
    {
        _children["dns-server"] = dns_server;
    }

    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    if(hardware_address != nullptr)
    {
        _children["hardware-address"] = hardware_address;
    }

    return _children;
}

void Native::Ip::Dhcp::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-identifier")
    {
        client_identifier = value;
        client_identifier.value_namespace = name_space;
        client_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "client-identifier")
    {
        client_identifier.yfilter = yfilter;
    }
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "class" || name == "lease" || name == "default-router" || name == "utilization" || name == "dns-server" || name == "network" || name == "host" || name == "hardware-address" || name == "id" || name == "vrf" || name == "domain-name" || name == "client-identifier" || name == "client-name")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Option::Option()
    :
    option_range(this, {"option_range"})
{

    yang_name = "option"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Option::~Option()
{
}

bool Native::Ip::Dhcp::Pool::Option::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<option_range.len(); index++)
    {
        if(option_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Dhcp::Pool::Option::has_operation() const
{
    for (std::size_t index=0; index<option_range.len(); index++)
    {
        if(option_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Dhcp::Pool::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option-range")
    {
        auto ent_ = std::make_shared<Native::Ip::Dhcp::Pool::Option::OptionRange>();
        ent_->parent = this;
        option_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : option_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Dhcp::Pool::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Pool::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Pool::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-range")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Option::OptionRange::OptionRange()
    :
    option_range{YType::uint8, "option-range"},
    ascii{YType::str, "ascii"},
    ip{YType::str, "ip"}
        ,
    hex(std::make_shared<Native::Ip::Dhcp::Pool::Option::OptionRange::Hex>())
{
    hex->parent = this;

    yang_name = "option-range"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Option::OptionRange::~OptionRange()
{
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ip.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return option_range.is_set
	|| ascii.is_set
	|| (hex !=  nullptr && hex->has_data());
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::has_operation() const
{
    for (auto const & leaf : ip.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option_range.yfilter)
	|| ydk::is_set(ascii.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (hex !=  nullptr && hex->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Option::OptionRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-range";
    ADD_KEY_TOKEN(option_range, "option-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Option::OptionRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_range.is_set || is_set(option_range.yfilter)) leaf_name_data.push_back(option_range.get_name_leafdata());
    if (ascii.is_set || is_set(ascii.yfilter)) leaf_name_data.push_back(ascii.get_name_leafdata());

    auto ip_name_datas = ip.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ip_name_datas.begin(), ip_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::Option::OptionRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hex")
    {
        if(hex == nullptr)
        {
            hex = std::make_shared<Native::Ip::Dhcp::Pool::Option::OptionRange::Hex>();
        }
        return hex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::Option::OptionRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hex != nullptr)
    {
        _children["hex"] = hex;
    }

    return _children;
}

void Native::Ip::Dhcp::Pool::Option::OptionRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-range")
    {
        option_range = value;
        option_range.value_namespace = name_space;
        option_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ascii")
    {
        ascii = value;
        ascii.value_namespace = name_space;
        ascii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip.append(value);
    }
}

void Native::Ip::Dhcp::Pool::Option::OptionRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-range")
    {
        option_range.yfilter = yfilter;
    }
    if(value_path == "ascii")
    {
        ascii.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex" || name == "option-range" || name == "ascii" || name == "ip")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::Hex()
    :
    hex_line{YType::str, "hex-line"},
    none{YType::empty, "none"}
{

    yang_name = "hex"; yang_parent_name = "option-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::~Hex()
{
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::has_data() const
{
    if (is_presence_container) return true;
    return hex_line.is_set
	|| none.is_set;
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_line.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_line.is_set || is_set(hex_line.yfilter)) leaf_name_data.push_back(hex_line.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex-line")
    {
        hex_line = value;
        hex_line.value_namespace = name_space;
        hex_line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex-line")
    {
        hex_line.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex-line" || name == "none")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Class::Class()
    :
    name{YType::str, "name"}
        ,
    address(std::make_shared<Native::Ip::Dhcp::Pool::Class::Address>())
{
    address->parent = this;

    yang_name = "class"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Class::~Class()
{
}

bool Native::Ip::Dhcp::Pool::Class::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Ip::Dhcp::Pool::Class::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Ip::Dhcp::Pool::Class::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Ip::Dhcp::Pool::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Class::Address::Address()
    :
    range(std::make_shared<Native::Ip::Dhcp::Pool::Class::Address::Range>())
{
    range->parent = this;

    yang_name = "address"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Class::Address::~Address()
{
}

bool Native::Ip::Dhcp::Pool::Class::Address::has_data() const
{
    if (is_presence_container) return true;
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Dhcp::Pool::Class::Address::has_operation() const
{
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Class::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Class::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::Class::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Dhcp::Pool::Class::Address::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::Class::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::Dhcp::Pool::Class::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Pool::Class::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Pool::Class::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Class::Address::Range::Range()
    :
    ipv4_start{YType::str, "ipv4-start"},
    ipv4_end{YType::str, "ipv4-end"}
{

    yang_name = "range"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Class::Address::Range::~Range()
{
}

bool Native::Ip::Dhcp::Pool::Class::Address::Range::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_start.is_set
	|| ipv4_end.is_set;
}

bool Native::Ip::Dhcp::Pool::Class::Address::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_start.yfilter)
	|| ydk::is_set(ipv4_end.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Class::Address::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Class::Address::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_start.is_set || is_set(ipv4_start.yfilter)) leaf_name_data.push_back(ipv4_start.get_name_leafdata());
    if (ipv4_end.is_set || is_set(ipv4_end.yfilter)) leaf_name_data.push_back(ipv4_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::Class::Address::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::Class::Address::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Pool::Class::Address::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-start")
    {
        ipv4_start = value;
        ipv4_start.value_namespace = name_space;
        ipv4_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-end")
    {
        ipv4_end = value;
        ipv4_end.value_namespace = name_space;
        ipv4_end.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Class::Address::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-start")
    {
        ipv4_start.yfilter = yfilter;
    }
    if(value_path == "ipv4-end")
    {
        ipv4_end.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Class::Address::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-start" || name == "ipv4-end")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Lease::Lease()
    :
    infinite{YType::empty, "infinite"}
        ,
    lease_value(std::make_shared<Native::Ip::Dhcp::Pool::Lease::LeaseValue>())
{
    lease_value->parent = this;

    yang_name = "lease"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Lease::~Lease()
{
}

bool Native::Ip::Dhcp::Pool::Lease::has_data() const
{
    if (is_presence_container) return true;
    return infinite.is_set
	|| (lease_value !=  nullptr && lease_value->has_data());
}

bool Native::Ip::Dhcp::Pool::Lease::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(infinite.yfilter)
	|| (lease_value !=  nullptr && lease_value->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Lease::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Lease::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::Lease::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lease-value")
    {
        if(lease_value == nullptr)
        {
            lease_value = std::make_shared<Native::Ip::Dhcp::Pool::Lease::LeaseValue>();
        }
        return lease_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::Lease::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lease_value != nullptr)
    {
        _children["lease-value"] = lease_value;
    }

    return _children;
}

void Native::Ip::Dhcp::Pool::Lease::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Lease::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Lease::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lease-value" || name == "infinite")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Lease::LeaseValue::LeaseValue()
    :
    days{YType::uint16, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"}
{

    yang_name = "lease-value"; yang_parent_name = "lease"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Lease::LeaseValue::~LeaseValue()
{
}

bool Native::Ip::Dhcp::Pool::Lease::LeaseValue::has_data() const
{
    if (is_presence_container) return true;
    return days.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool Native::Ip::Dhcp::Pool::Lease::LeaseValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Lease::LeaseValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Lease::LeaseValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::Lease::LeaseValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::Lease::LeaseValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Pool::Lease::LeaseValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Lease::LeaseValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Lease::LeaseValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::DefaultRouter::DefaultRouter()
    :
    default_router_list{YType::str, "default-router-list"}
{

    yang_name = "default-router"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::DefaultRouter::~DefaultRouter()
{
}

bool Native::Ip::Dhcp::Pool::DefaultRouter::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : default_router_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::Dhcp::Pool::DefaultRouter::has_operation() const
{
    for (auto const & leaf : default_router_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_router_list.yfilter);
}

std::string Native::Ip::Dhcp::Pool::DefaultRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::DefaultRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto default_router_list_name_datas = default_router_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), default_router_list_name_datas.begin(), default_router_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::DefaultRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::DefaultRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Pool::DefaultRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-router-list")
    {
        default_router_list.append(value);
    }
}

void Native::Ip::Dhcp::Pool::DefaultRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-router-list")
    {
        default_router_list.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::DefaultRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-router-list")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Utilization::Utilization()
    :
    mark(std::make_shared<Native::Ip::Dhcp::Pool::Utilization::Mark>())
{
    mark->parent = this;

    yang_name = "utilization"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Utilization::~Utilization()
{
}

bool Native::Ip::Dhcp::Pool::Utilization::has_data() const
{
    if (is_presence_container) return true;
    return (mark !=  nullptr && mark->has_data());
}

bool Native::Ip::Dhcp::Pool::Utilization::has_operation() const
{
    return is_set(yfilter)
	|| (mark !=  nullptr && mark->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Utilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Utilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::Utilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        if(mark == nullptr)
        {
            mark = std::make_shared<Native::Ip::Dhcp::Pool::Utilization::Mark>();
        }
        return mark;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::Utilization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mark != nullptr)
    {
        _children["mark"] = mark;
    }

    return _children;
}

void Native::Ip::Dhcp::Pool::Utilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Pool::Utilization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Pool::Utilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Utilization::Mark::Mark()
    :
    high(std::make_shared<Native::Ip::Dhcp::Pool::Utilization::Mark::High>())
    , low(std::make_shared<Native::Ip::Dhcp::Pool::Utilization::Mark::Low>())
{
    high->parent = this;
    low->parent = this;

    yang_name = "mark"; yang_parent_name = "utilization"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Utilization::Mark::~Mark()
{
}

bool Native::Ip::Dhcp::Pool::Utilization::Mark::has_data() const
{
    if (is_presence_container) return true;
    return (high !=  nullptr && high->has_data())
	|| (low !=  nullptr && low->has_data());
}

bool Native::Ip::Dhcp::Pool::Utilization::Mark::has_operation() const
{
    return is_set(yfilter)
	|| (high !=  nullptr && high->has_operation())
	|| (low !=  nullptr && low->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Utilization::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Utilization::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::Utilization::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Ip::Dhcp::Pool::Utilization::Mark::High>();
        }
        return high;
    }

    if(child_yang_name == "low")
    {
        if(low == nullptr)
        {
            low = std::make_shared<Native::Ip::Dhcp::Pool::Utilization::Mark::Low>();
        }
        return low;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::Utilization::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    if(low != nullptr)
    {
        _children["low"] = low;
    }

    return _children;
}

void Native::Ip::Dhcp::Pool::Utilization::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Pool::Utilization::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Pool::Utilization::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Utilization::Mark::High::High()
    :
    high_value{YType::uint8, "high-value"},
    log{YType::empty, "log"}
{

    yang_name = "high"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Utilization::Mark::High::~High()
{
}

bool Native::Ip::Dhcp::Pool::Utilization::Mark::High::has_data() const
{
    if (is_presence_container) return true;
    return high_value.is_set
	|| log.is_set;
}

bool Native::Ip::Dhcp::Pool::Utilization::Mark::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_value.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Utilization::Mark::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Utilization::Mark::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_value.is_set || is_set(high_value.yfilter)) leaf_name_data.push_back(high_value.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::Utilization::Mark::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::Utilization::Mark::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Pool::Utilization::Mark::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-value")
    {
        high_value = value;
        high_value.value_namespace = name_space;
        high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Utilization::Mark::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-value")
    {
        high_value.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Utilization::Mark::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-value" || name == "log")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Utilization::Mark::Low::Low()
    :
    low_value{YType::uint8, "low-value"},
    log{YType::empty, "log"}
{

    yang_name = "low"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Utilization::Mark::Low::~Low()
{
}

bool Native::Ip::Dhcp::Pool::Utilization::Mark::Low::has_data() const
{
    if (is_presence_container) return true;
    return low_value.is_set
	|| log.is_set;
}

bool Native::Ip::Dhcp::Pool::Utilization::Mark::Low::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low_value.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Utilization::Mark::Low::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Utilization::Mark::Low::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low_value.is_set || is_set(low_value.yfilter)) leaf_name_data.push_back(low_value.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::Utilization::Mark::Low::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::Utilization::Mark::Low::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Pool::Utilization::Mark::Low::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low-value")
    {
        low_value = value;
        low_value.value_namespace = name_space;
        low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Utilization::Mark::Low::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low-value")
    {
        low_value.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Utilization::Mark::Low::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "low-value" || name == "log")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::DnsServer::DnsServer()
    :
    dns_server_list{YType::str, "dns-server-list"}
{

    yang_name = "dns-server"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::DnsServer::~DnsServer()
{
}

bool Native::Ip::Dhcp::Pool::DnsServer::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : dns_server_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::Dhcp::Pool::DnsServer::has_operation() const
{
    for (auto const & leaf : dns_server_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dns_server_list.yfilter);
}

std::string Native::Ip::Dhcp::Pool::DnsServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::DnsServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dns_server_list_name_datas = dns_server_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_server_list_name_datas.begin(), dns_server_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::DnsServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::DnsServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Pool::DnsServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns-server-list")
    {
        dns_server_list.append(value);
    }
}

void Native::Ip::Dhcp::Pool::DnsServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns-server-list")
    {
        dns_server_list.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::DnsServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-server-list")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Network::Network()
    :
    primary_network(std::make_shared<Native::Ip::Dhcp::Pool::Network::PrimaryNetwork>())
    , secondary_network(this, {"number"})
{
    primary_network->parent = this;

    yang_name = "network"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Network::~Network()
{
}

bool Native::Ip::Dhcp::Pool::Network::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary_network.len(); index++)
    {
        if(secondary_network[index]->has_data())
            return true;
    }
    return (primary_network !=  nullptr && primary_network->has_data());
}

bool Native::Ip::Dhcp::Pool::Network::has_operation() const
{
    for (std::size_t index=0; index<secondary_network.len(); index++)
    {
        if(secondary_network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (primary_network !=  nullptr && primary_network->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-network")
    {
        if(primary_network == nullptr)
        {
            primary_network = std::make_shared<Native::Ip::Dhcp::Pool::Network::PrimaryNetwork>();
        }
        return primary_network;
    }

    if(child_yang_name == "secondary-network")
    {
        auto ent_ = std::make_shared<Native::Ip::Dhcp::Pool::Network::SecondaryNetwork>();
        ent_->parent = this;
        secondary_network.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary_network != nullptr)
    {
        _children["primary-network"] = primary_network;
    }

    count_ = 0;
    for (auto ent_ : secondary_network.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Dhcp::Pool::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Pool::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Pool::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-network" || name == "secondary-network")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Network::PrimaryNetwork::PrimaryNetwork()
    :
    number{YType::str, "number"},
    mask{YType::str, "mask"}
{

    yang_name = "primary-network"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Network::PrimaryNetwork::~PrimaryNetwork()
{
}

bool Native::Ip::Dhcp::Pool::Network::PrimaryNetwork::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| mask.is_set;
}

bool Native::Ip::Dhcp::Pool::Network::PrimaryNetwork::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Network::PrimaryNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Network::PrimaryNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::Network::PrimaryNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::Network::PrimaryNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Pool::Network::PrimaryNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Network::PrimaryNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Network::PrimaryNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "mask")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Network::SecondaryNetwork::SecondaryNetwork()
    :
    number{YType::str, "number"},
    mask{YType::str, "mask"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "secondary-network"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Network::SecondaryNetwork::~SecondaryNetwork()
{
}

bool Native::Ip::Dhcp::Pool::Network::SecondaryNetwork::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| mask.is_set
	|| secondary.is_set;
}

bool Native::Ip::Dhcp::Pool::Network::SecondaryNetwork::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Network::SecondaryNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-network";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Network::SecondaryNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::Network::SecondaryNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::Network::SecondaryNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Pool::Network::SecondaryNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Network::SecondaryNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Network::SecondaryNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "mask" || name == "secondary")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Host::Host()
    :
    number{YType::str, "number"},
    mask{YType::str, "mask"}
{

    yang_name = "host"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::Host::~Host()
{
}

bool Native::Ip::Dhcp::Pool::Host::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| mask.is_set;
}

bool Native::Ip::Dhcp::Pool::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Pool::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "mask")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::HardwareAddress::HardwareAddress()
    :
    hardware_address_val{YType::str, "hardware-address-val"}
{

    yang_name = "hardware-address"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Dhcp::Pool::HardwareAddress::~HardwareAddress()
{
}

bool Native::Ip::Dhcp::Pool::HardwareAddress::has_data() const
{
    if (is_presence_container) return true;
    return hardware_address_val.is_set;
}

bool Native::Ip::Dhcp::Pool::HardwareAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hardware_address_val.yfilter);
}

std::string Native::Ip::Dhcp::Pool::HardwareAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::HardwareAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hardware_address_val.is_set || is_set(hardware_address_val.yfilter)) leaf_name_data.push_back(hardware_address_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Pool::HardwareAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Pool::HardwareAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Pool::HardwareAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hardware-address-val")
    {
        hardware_address_val = value;
        hardware_address_val.value_namespace = name_space;
        hardware_address_val.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::HardwareAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hardware-address-val")
    {
        hardware_address_val.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::HardwareAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-address-val")
        return true;
    return false;
}

Native::Ip::Dhcp::SnoopingConf::SnoopingConf()
    :
    snooping(std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping>())
{
    snooping->parent = this;

    yang_name = "snooping-conf"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::SnoopingConf::~SnoopingConf()
{
}

bool Native::Ip::Dhcp::SnoopingConf::has_data() const
{
    if (is_presence_container) return true;
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::Ip::Dhcp::SnoopingConf::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Ip::Dhcp::SnoopingConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::SnoopingConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:snooping-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::SnoopingConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::SnoopingConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::SnoopingConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snooping != nullptr)
    {
        _children["snooping"] = snooping;
    }

    return _children;
}

void Native::Ip::Dhcp::SnoopingConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::SnoopingConf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::SnoopingConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Snooping()
    :
    glean{YType::empty, "glean"}
        ,
    database(std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Database>())
    , information(std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Information>())
    , track(std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Track>())
    , verify(std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Verify>())
    , vlan(this, {"id"})
    , wireless(std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless>())
{
    database->parent = this;
    information->parent = this;
    track->parent = this;
    verify->parent = this;
    wireless->parent = this;

    yang_name = "snooping"; yang_parent_name = "snooping-conf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::SnoopingConf::Snooping::~Snooping()
{
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return glean.is_set
	|| (database !=  nullptr && database->has_data())
	|| (information !=  nullptr && information->has_data())
	|| (track !=  nullptr && track->has_data())
	|| (verify !=  nullptr && verify->has_data())
	|| (wireless !=  nullptr && wireless->has_data());
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(glean.yfilter)
	|| (database !=  nullptr && database->has_operation())
	|| (information !=  nullptr && information->has_operation())
	|| (track !=  nullptr && track->has_operation())
	|| (verify !=  nullptr && verify->has_operation())
	|| (wireless !=  nullptr && wireless->has_operation());
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping-conf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::SnoopingConf::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (glean.is_set || is_set(glean.yfilter)) leaf_name_data.push_back(glean.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::SnoopingConf::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Database>();
        }
        return database;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Information>();
        }
        return information;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Track>();
        }
        return track;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Verify>();
        }
        return verify;
    }

    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    if(child_yang_name == "wireless")
    {
        if(wireless == nullptr)
        {
            wireless = std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless>();
        }
        return wireless;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::SnoopingConf::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database != nullptr)
    {
        _children["database"] = database;
    }

    if(information != nullptr)
    {
        _children["information"] = information;
    }

    if(track != nullptr)
    {
        _children["track"] = track;
    }

    if(verify != nullptr)
    {
        _children["verify"] = verify;
    }

    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(wireless != nullptr)
    {
        _children["wireless"] = wireless;
    }

    return _children;
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "glean")
    {
        glean = value;
        glean.value_namespace = name_space;
        glean.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "glean")
    {
        glean.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database" || name == "information" || name == "track" || name == "verify" || name == "vlan" || name == "wireless" || name == "glean")
        return true;
    return false;
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Database::Database()
    :
    url{YType::str, "url"},
    timeout{YType::uint32, "timeout"},
    write_delay{YType::uint32, "write-delay"}
{

    yang_name = "database"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Database::~Database()
{
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Database::has_data() const
{
    if (is_presence_container) return true;
    return url.is_set
	|| timeout.is_set
	|| write_delay.is_set;
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Database::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(write_delay.yfilter);
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Database::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping-conf/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::SnoopingConf::Snooping::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (write_delay.is_set || is_set(write_delay.yfilter)) leaf_name_data.push_back(write_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::SnoopingConf::Snooping::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::SnoopingConf::Snooping::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-delay")
    {
        write_delay = value;
        write_delay.value_namespace = name_space;
        write_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "write-delay")
    {
        write_delay.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "timeout" || name == "write-delay")
        return true;
    return false;
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Information()
    :
    option{YType::boolean, "option"}
        ,
    options(std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options>())
{
    options->parent = this;

    yang_name = "information"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Information::~Information()
{
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Information::has_data() const
{
    if (is_presence_container) return true;
    return option.is_set
	|| (options !=  nullptr && options->has_data());
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter)
	|| (options !=  nullptr && options->has_operation());
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Information::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping-conf/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::SnoopingConf::Snooping::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::SnoopingConf::Snooping::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "options")
    {
        if(options == nullptr)
        {
            options = std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options>();
        }
        return options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::SnoopingConf::Snooping::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(options != nullptr)
    {
        _children["options"] = options;
    }

    return _children;
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options" || name == "option")
        return true;
    return false;
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Options()
    :
    option(std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option>())
{
    option->parent = this;

    yang_name = "options"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::~Options()
{
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::has_data() const
{
    if (is_presence_container) return true;
    return (option !=  nullptr && option->has_data());
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::has_operation() const
{
    return is_set(yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping-conf/snooping/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(option != nullptr)
    {
        _children["option"] = option;
    }

    return _children;
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Option()
    :
    allow_untrusted{YType::empty, "allow-untrusted"}
        ,
    format(std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format>())
{
    format->parent = this;

    yang_name = "option"; yang_parent_name = "options"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::~Option()
{
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::has_data() const
{
    if (is_presence_container) return true;
    return allow_untrusted.is_set
	|| (format !=  nullptr && format->has_data());
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_untrusted.yfilter)
	|| (format !=  nullptr && format->has_operation());
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping-conf/snooping/information/options/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_untrusted.is_set || is_set(allow_untrusted.yfilter)) leaf_name_data.push_back(allow_untrusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        if(format == nullptr)
        {
            format = std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format>();
        }
        return format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(format != nullptr)
    {
        _children["format"] = format;
    }

    return _children;
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted = value;
        allow_untrusted.value_namespace = name_space;
        allow_untrusted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "allow-untrusted")
        return true;
    return false;
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::Format()
    :
    remote_id(std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::RemoteId>())
{
    remote_id->parent = this;

    yang_name = "format"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::~Format()
{
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::has_data() const
{
    if (is_presence_container) return true;
    return (remote_id !=  nullptr && remote_id->has_data());
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::has_operation() const
{
    return is_set(yfilter)
	|| (remote_id !=  nullptr && remote_id->has_operation());
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping-conf/snooping/information/options/option/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-id")
    {
        if(remote_id == nullptr)
        {
            remote_id = std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::RemoteId>();
        }
        return remote_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_id != nullptr)
    {
        _children["remote-id"] = remote_id;
    }

    return _children;
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-id")
        return true;
    return false;
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::RemoteId::RemoteId()
    :
    hostname{YType::empty, "hostname"},
    string{YType::str, "string"}
{

    yang_name = "remote-id"; yang_parent_name = "format"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::RemoteId::~RemoteId()
{
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::RemoteId::has_data() const
{
    if (is_presence_container) return true;
    return hostname.is_set
	|| string.is_set;
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::RemoteId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::RemoteId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping-conf/snooping/information/options/option/format/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::RemoteId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::RemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::RemoteId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::RemoteId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Information::Options::Option::Format::RemoteId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostname" || name == "string")
        return true;
    return false;
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Track::Track()
    :
    host{YType::empty, "host"}
{

    yang_name = "track"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Track::~Track()
{
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Track::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set;
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Track::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping-conf/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::SnoopingConf::Snooping::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::SnoopingConf::Snooping::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::SnoopingConf::Snooping::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Verify::Verify()
    :
    mac_address{YType::empty, "mac-address"},
    no_relay_agent_address{YType::empty, "no-relay-agent-address"}
{

    yang_name = "verify"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Verify::~Verify()
{
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Verify::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| no_relay_agent_address.is_set;
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(no_relay_agent_address.yfilter);
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Verify::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping-conf/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::SnoopingConf::Snooping::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (no_relay_agent_address.is_set || is_set(no_relay_agent_address.yfilter)) leaf_name_data.push_back(no_relay_agent_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::SnoopingConf::Snooping::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::SnoopingConf::Snooping::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-relay-agent-address")
    {
        no_relay_agent_address = value;
        no_relay_agent_address.value_namespace = name_space;
        no_relay_agent_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "no-relay-agent-address")
    {
        no_relay_agent_address.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "no-relay-agent-address")
        return true;
    return false;
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Vlan::Vlan()
    :
    id{YType::uint16, "id"}
{

    yang_name = "vlan"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Vlan::~Vlan()
{
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping-conf/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::SnoopingConf::Snooping::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::SnoopingConf::Snooping::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::SnoopingConf::Snooping::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::Wireless()
    :
    bootp_broadcast(std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::BootpBroadcast>())
{
    bootp_broadcast->parent = this;

    yang_name = "wireless"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::~Wireless()
{
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::has_data() const
{
    if (is_presence_container) return true;
    return (bootp_broadcast !=  nullptr && bootp_broadcast->has_data());
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::has_operation() const
{
    return is_set(yfilter)
	|| (bootp_broadcast !=  nullptr && bootp_broadcast->has_operation());
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping-conf/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wireless";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootp-broadcast")
    {
        if(bootp_broadcast == nullptr)
        {
            bootp_broadcast = std::make_shared<Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::BootpBroadcast>();
        }
        return bootp_broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bootp_broadcast != nullptr)
    {
        _children["bootp-broadcast"] = bootp_broadcast;
    }

    return _children;
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootp-broadcast")
        return true;
    return false;
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::BootpBroadcast::BootpBroadcast()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bootp-broadcast"; yang_parent_name = "wireless"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::BootpBroadcast::~BootpBroadcast()
{
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::BootpBroadcast::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::BootpBroadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::BootpBroadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping-conf/snooping/wireless/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::BootpBroadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootp-broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::BootpBroadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::BootpBroadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::BootpBroadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::BootpBroadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::BootpBroadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::SnoopingConf::Snooping::Wireless::BootpBroadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Ip::Dhcp::Use::Use()
    :
    class_name(std::make_shared<Native::Ip::Dhcp::Use::ClassName>())
    , subscriber_id(std::make_shared<Native::Ip::Dhcp::Use::SubscriberId>())
    , vrf(std::make_shared<Native::Ip::Dhcp::Use::Vrf>())
{
    class_name->parent = this;
    subscriber_id->parent = this;
    vrf->parent = this;

    yang_name = "use"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Use::~Use()
{
}

bool Native::Ip::Dhcp::Use::has_data() const
{
    if (is_presence_container) return true;
    return (class_name !=  nullptr && class_name->has_data())
	|| (subscriber_id !=  nullptr && subscriber_id->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Ip::Dhcp::Use::has_operation() const
{
    return is_set(yfilter)
	|| (class_name !=  nullptr && class_name->has_operation())
	|| (subscriber_id !=  nullptr && subscriber_id->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Ip::Dhcp::Use::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Use::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:use";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Use::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Use::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-name")
    {
        if(class_name == nullptr)
        {
            class_name = std::make_shared<Native::Ip::Dhcp::Use::ClassName>();
        }
        return class_name;
    }

    if(child_yang_name == "subscriber-id")
    {
        if(subscriber_id == nullptr)
        {
            subscriber_id = std::make_shared<Native::Ip::Dhcp::Use::SubscriberId>();
        }
        return subscriber_id;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Ip::Dhcp::Use::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Use::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(class_name != nullptr)
    {
        _children["class-name"] = class_name;
    }

    if(subscriber_id != nullptr)
    {
        _children["subscriber-id"] = subscriber_id;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::Ip::Dhcp::Use::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Use::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Use::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-name" || name == "subscriber-id" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Dhcp::Use::ClassName::ClassName()
    :
    class_{YType::boolean, "class"},
    aaa{YType::empty, "aaa"}
{

    yang_name = "class-name"; yang_parent_name = "use"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Use::ClassName::~ClassName()
{
}

bool Native::Ip::Dhcp::Use::ClassName::has_data() const
{
    if (is_presence_container) return true;
    return class_.is_set
	|| aaa.is_set;
}

bool Native::Ip::Dhcp::Use::ClassName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(aaa.yfilter);
}

std::string Native::Ip::Dhcp::Use::ClassName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:use/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Use::ClassName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Use::ClassName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (aaa.is_set || is_set(aaa.yfilter)) leaf_name_data.push_back(aaa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Use::ClassName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Use::ClassName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Use::ClassName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa")
    {
        aaa = value;
        aaa.value_namespace = name_space;
        aaa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Use::ClassName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "aaa")
    {
        aaa.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Use::ClassName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class" || name == "aaa")
        return true;
    return false;
}

Native::Ip::Dhcp::Use::SubscriberId::SubscriberId()
    :
    client_id{YType::empty, "client-id"}
{

    yang_name = "subscriber-id"; yang_parent_name = "use"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Use::SubscriberId::~SubscriberId()
{
}

bool Native::Ip::Dhcp::Use::SubscriberId::has_data() const
{
    if (is_presence_container) return true;
    return client_id.is_set;
}

bool Native::Ip::Dhcp::Use::SubscriberId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_id.yfilter);
}

std::string Native::Ip::Dhcp::Use::SubscriberId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:use/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Use::SubscriberId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Use::SubscriberId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Use::SubscriberId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Use::SubscriberId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Use::SubscriberId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Use::SubscriberId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Use::SubscriberId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id")
        return true;
    return false;
}

Native::Ip::Dhcp::Use::Vrf::Vrf()
    :
    connected{YType::boolean, "connected"},
    remote{YType::empty, "remote"}
{

    yang_name = "vrf"; yang_parent_name = "use"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Dhcp::Use::Vrf::~Vrf()
{
}

bool Native::Ip::Dhcp::Use::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return connected.is_set
	|| remote.is_set;
}

bool Native::Ip::Dhcp::Use::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Ip::Dhcp::Use::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:use/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Use::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Use::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Dhcp::Use::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Dhcp::Use::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Dhcp::Use::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Use::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Use::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected" || name == "remote")
        return true;
    return false;
}

Native::Ip::ForwardProtocol::ForwardProtocol()
    :
    protocol{YType::enumeration, "protocol"}
        ,
    spanning_tree(nullptr) // presence node
    , udp(std::make_shared<Native::Ip::ForwardProtocol::Udp>())
{
    udp->parent = this;

    yang_name = "forward-protocol"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::ForwardProtocol::~ForwardProtocol()
{
}

bool Native::Ip::ForwardProtocol::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Ip::ForwardProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Ip::ForwardProtocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ForwardProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ForwardProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ForwardProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Ip::ForwardProtocol::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Ip::ForwardProtocol::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ForwardProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spanning_tree != nullptr)
    {
        _children["spanning-tree"] = spanning_tree;
    }

    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::Ip::ForwardProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ForwardProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Ip::ForwardProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spanning-tree" || name == "udp" || name == "protocol")
        return true;
    return false;
}

Native::Ip::ForwardProtocol::SpanningTree::SpanningTree()
    :
    any_local_broadcast{YType::empty, "any-local-broadcast"}
{

    yang_name = "spanning-tree"; yang_parent_name = "forward-protocol"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::ForwardProtocol::SpanningTree::~SpanningTree()
{
}

bool Native::Ip::ForwardProtocol::SpanningTree::has_data() const
{
    if (is_presence_container) return true;
    return any_local_broadcast.is_set;
}

bool Native::Ip::ForwardProtocol::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any_local_broadcast.yfilter);
}

std::string Native::Ip::ForwardProtocol::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/forward-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ForwardProtocol::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ForwardProtocol::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_local_broadcast.is_set || is_set(any_local_broadcast.yfilter)) leaf_name_data.push_back(any_local_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ForwardProtocol::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ForwardProtocol::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ForwardProtocol::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-local-broadcast")
    {
        any_local_broadcast = value;
        any_local_broadcast.value_namespace = name_space;
        any_local_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ForwardProtocol::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-local-broadcast")
    {
        any_local_broadcast.yfilter = yfilter;
    }
}

bool Native::Ip::ForwardProtocol::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any-local-broadcast")
        return true;
    return false;
}

Native::Ip::ForwardProtocol::Udp::Udp()
    :
    biff{YType::boolean, "biff"},
    bootpc{YType::boolean, "bootpc"},
    bootps{YType::boolean, "bootps"},
    discard{YType::boolean, "discard"},
    dnsix{YType::boolean, "dnsix"},
    domain{YType::boolean, "domain"},
    echo{YType::boolean, "echo"},
    isakmp{YType::boolean, "isakmp"},
    mobile_ip{YType::boolean, "mobile-ip"},
    nameserver{YType::boolean, "nameserver"},
    netbios_dgm{YType::boolean, "netbios-dgm"},
    netbios_ns{YType::boolean, "netbios-ns"},
    netbios_ss{YType::boolean, "netbios-ss"},
    non500_isakmp{YType::boolean, "non500-isakmp"},
    ntp{YType::boolean, "ntp"},
    pim_auto_rp{YType::boolean, "pim-auto-rp"},
    rip{YType::boolean, "rip"},
    snmp{YType::boolean, "snmp"},
    snmptrap{YType::boolean, "snmptrap"},
    sunrpc{YType::boolean, "sunrpc"},
    syslog{YType::boolean, "syslog"},
    tacacs{YType::boolean, "tacacs"},
    talk{YType::boolean, "talk"},
    tftp{YType::boolean, "tftp"},
    time{YType::boolean, "time"},
    who{YType::boolean, "who"},
    xdmcp{YType::boolean, "xdmcp"}
{

    yang_name = "udp"; yang_parent_name = "forward-protocol"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::ForwardProtocol::Udp::~Udp()
{
}

bool Native::Ip::ForwardProtocol::Udp::has_data() const
{
    if (is_presence_container) return true;
    return biff.is_set
	|| bootpc.is_set
	|| bootps.is_set
	|| discard.is_set
	|| dnsix.is_set
	|| domain.is_set
	|| echo.is_set
	|| isakmp.is_set
	|| mobile_ip.is_set
	|| nameserver.is_set
	|| netbios_dgm.is_set
	|| netbios_ns.is_set
	|| netbios_ss.is_set
	|| non500_isakmp.is_set
	|| ntp.is_set
	|| pim_auto_rp.is_set
	|| rip.is_set
	|| snmp.is_set
	|| snmptrap.is_set
	|| sunrpc.is_set
	|| syslog.is_set
	|| tacacs.is_set
	|| talk.is_set
	|| tftp.is_set
	|| time.is_set
	|| who.is_set
	|| xdmcp.is_set;
}

bool Native::Ip::ForwardProtocol::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(biff.yfilter)
	|| ydk::is_set(bootpc.yfilter)
	|| ydk::is_set(bootps.yfilter)
	|| ydk::is_set(discard.yfilter)
	|| ydk::is_set(dnsix.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(echo.yfilter)
	|| ydk::is_set(isakmp.yfilter)
	|| ydk::is_set(mobile_ip.yfilter)
	|| ydk::is_set(nameserver.yfilter)
	|| ydk::is_set(netbios_dgm.yfilter)
	|| ydk::is_set(netbios_ns.yfilter)
	|| ydk::is_set(netbios_ss.yfilter)
	|| ydk::is_set(non500_isakmp.yfilter)
	|| ydk::is_set(ntp.yfilter)
	|| ydk::is_set(pim_auto_rp.yfilter)
	|| ydk::is_set(rip.yfilter)
	|| ydk::is_set(snmp.yfilter)
	|| ydk::is_set(snmptrap.yfilter)
	|| ydk::is_set(sunrpc.yfilter)
	|| ydk::is_set(syslog.yfilter)
	|| ydk::is_set(tacacs.yfilter)
	|| ydk::is_set(talk.yfilter)
	|| ydk::is_set(tftp.yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(who.yfilter)
	|| ydk::is_set(xdmcp.yfilter);
}

std::string Native::Ip::ForwardProtocol::Udp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/forward-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ForwardProtocol::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ForwardProtocol::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (biff.is_set || is_set(biff.yfilter)) leaf_name_data.push_back(biff.get_name_leafdata());
    if (bootpc.is_set || is_set(bootpc.yfilter)) leaf_name_data.push_back(bootpc.get_name_leafdata());
    if (bootps.is_set || is_set(bootps.yfilter)) leaf_name_data.push_back(bootps.get_name_leafdata());
    if (discard.is_set || is_set(discard.yfilter)) leaf_name_data.push_back(discard.get_name_leafdata());
    if (dnsix.is_set || is_set(dnsix.yfilter)) leaf_name_data.push_back(dnsix.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (echo.is_set || is_set(echo.yfilter)) leaf_name_data.push_back(echo.get_name_leafdata());
    if (isakmp.is_set || is_set(isakmp.yfilter)) leaf_name_data.push_back(isakmp.get_name_leafdata());
    if (mobile_ip.is_set || is_set(mobile_ip.yfilter)) leaf_name_data.push_back(mobile_ip.get_name_leafdata());
    if (nameserver.is_set || is_set(nameserver.yfilter)) leaf_name_data.push_back(nameserver.get_name_leafdata());
    if (netbios_dgm.is_set || is_set(netbios_dgm.yfilter)) leaf_name_data.push_back(netbios_dgm.get_name_leafdata());
    if (netbios_ns.is_set || is_set(netbios_ns.yfilter)) leaf_name_data.push_back(netbios_ns.get_name_leafdata());
    if (netbios_ss.is_set || is_set(netbios_ss.yfilter)) leaf_name_data.push_back(netbios_ss.get_name_leafdata());
    if (non500_isakmp.is_set || is_set(non500_isakmp.yfilter)) leaf_name_data.push_back(non500_isakmp.get_name_leafdata());
    if (ntp.is_set || is_set(ntp.yfilter)) leaf_name_data.push_back(ntp.get_name_leafdata());
    if (pim_auto_rp.is_set || is_set(pim_auto_rp.yfilter)) leaf_name_data.push_back(pim_auto_rp.get_name_leafdata());
    if (rip.is_set || is_set(rip.yfilter)) leaf_name_data.push_back(rip.get_name_leafdata());
    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (snmptrap.is_set || is_set(snmptrap.yfilter)) leaf_name_data.push_back(snmptrap.get_name_leafdata());
    if (sunrpc.is_set || is_set(sunrpc.yfilter)) leaf_name_data.push_back(sunrpc.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (tacacs.is_set || is_set(tacacs.yfilter)) leaf_name_data.push_back(tacacs.get_name_leafdata());
    if (talk.is_set || is_set(talk.yfilter)) leaf_name_data.push_back(talk.get_name_leafdata());
    if (tftp.is_set || is_set(tftp.yfilter)) leaf_name_data.push_back(tftp.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (who.is_set || is_set(who.yfilter)) leaf_name_data.push_back(who.get_name_leafdata());
    if (xdmcp.is_set || is_set(xdmcp.yfilter)) leaf_name_data.push_back(xdmcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ForwardProtocol::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ForwardProtocol::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ForwardProtocol::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "biff")
    {
        biff = value;
        biff.value_namespace = name_space;
        biff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootpc")
    {
        bootpc = value;
        bootpc.value_namespace = name_space;
        bootpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootps")
    {
        bootps = value;
        bootps.value_namespace = name_space;
        bootps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard")
    {
        discard = value;
        discard.value_namespace = name_space;
        discard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnsix")
    {
        dnsix = value;
        dnsix.value_namespace = name_space;
        dnsix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo")
    {
        echo = value;
        echo.value_namespace = name_space;
        echo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp")
    {
        isakmp = value;
        isakmp.value_namespace = name_space;
        isakmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobile-ip")
    {
        mobile_ip = value;
        mobile_ip.value_namespace = name_space;
        mobile_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nameserver")
    {
        nameserver = value;
        nameserver.value_namespace = name_space;
        nameserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netbios-dgm")
    {
        netbios_dgm = value;
        netbios_dgm.value_namespace = name_space;
        netbios_dgm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netbios-ns")
    {
        netbios_ns = value;
        netbios_ns.value_namespace = name_space;
        netbios_ns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netbios-ss")
    {
        netbios_ss = value;
        netbios_ss.value_namespace = name_space;
        netbios_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non500-isakmp")
    {
        non500_isakmp = value;
        non500_isakmp.value_namespace = name_space;
        non500_isakmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp")
    {
        ntp = value;
        ntp.value_namespace = name_space;
        ntp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim-auto-rp")
    {
        pim_auto_rp = value;
        pim_auto_rp.value_namespace = name_space;
        pim_auto_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rip")
    {
        rip = value;
        rip.value_namespace = name_space;
        rip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmptrap")
    {
        snmptrap = value;
        snmptrap.value_namespace = name_space;
        snmptrap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sunrpc")
    {
        sunrpc = value;
        sunrpc.value_namespace = name_space;
        sunrpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tacacs")
    {
        tacacs = value;
        tacacs.value_namespace = name_space;
        tacacs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "talk")
    {
        talk = value;
        talk.value_namespace = name_space;
        talk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp")
    {
        tftp = value;
        tftp.value_namespace = name_space;
        tftp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "who")
    {
        who = value;
        who.value_namespace = name_space;
        who.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xdmcp")
    {
        xdmcp = value;
        xdmcp.value_namespace = name_space;
        xdmcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ForwardProtocol::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "biff")
    {
        biff.yfilter = yfilter;
    }
    if(value_path == "bootpc")
    {
        bootpc.yfilter = yfilter;
    }
    if(value_path == "bootps")
    {
        bootps.yfilter = yfilter;
    }
    if(value_path == "discard")
    {
        discard.yfilter = yfilter;
    }
    if(value_path == "dnsix")
    {
        dnsix.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "echo")
    {
        echo.yfilter = yfilter;
    }
    if(value_path == "isakmp")
    {
        isakmp.yfilter = yfilter;
    }
    if(value_path == "mobile-ip")
    {
        mobile_ip.yfilter = yfilter;
    }
    if(value_path == "nameserver")
    {
        nameserver.yfilter = yfilter;
    }
    if(value_path == "netbios-dgm")
    {
        netbios_dgm.yfilter = yfilter;
    }
    if(value_path == "netbios-ns")
    {
        netbios_ns.yfilter = yfilter;
    }
    if(value_path == "netbios-ss")
    {
        netbios_ss.yfilter = yfilter;
    }
    if(value_path == "non500-isakmp")
    {
        non500_isakmp.yfilter = yfilter;
    }
    if(value_path == "ntp")
    {
        ntp.yfilter = yfilter;
    }
    if(value_path == "pim-auto-rp")
    {
        pim_auto_rp.yfilter = yfilter;
    }
    if(value_path == "rip")
    {
        rip.yfilter = yfilter;
    }
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
    if(value_path == "snmptrap")
    {
        snmptrap.yfilter = yfilter;
    }
    if(value_path == "sunrpc")
    {
        sunrpc.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
    if(value_path == "tacacs")
    {
        tacacs.yfilter = yfilter;
    }
    if(value_path == "talk")
    {
        talk.yfilter = yfilter;
    }
    if(value_path == "tftp")
    {
        tftp.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "who")
    {
        who.yfilter = yfilter;
    }
    if(value_path == "xdmcp")
    {
        xdmcp.yfilter = yfilter;
    }
}

bool Native::Ip::ForwardProtocol::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "biff" || name == "bootpc" || name == "bootps" || name == "discard" || name == "dnsix" || name == "domain" || name == "echo" || name == "isakmp" || name == "mobile-ip" || name == "nameserver" || name == "netbios-dgm" || name == "netbios-ns" || name == "netbios-ss" || name == "non500-isakmp" || name == "ntp" || name == "pim-auto-rp" || name == "rip" || name == "snmp" || name == "snmptrap" || name == "sunrpc" || name == "syslog" || name == "tacacs" || name == "talk" || name == "tftp" || name == "time" || name == "who" || name == "xdmcp")
        return true;
    return false;
}

Native::Ip::GratuitousArpsConf::GratuitousArpsConf()
    :
    gratuitous_arps{YType::boolean, "gratuitous-arps"}
{

    yang_name = "gratuitous-arps-conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::GratuitousArpsConf::~GratuitousArpsConf()
{
}

bool Native::Ip::GratuitousArpsConf::has_data() const
{
    if (is_presence_container) return true;
    return gratuitous_arps.is_set;
}

bool Native::Ip::GratuitousArpsConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gratuitous_arps.yfilter);
}

std::string Native::Ip::GratuitousArpsConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::GratuitousArpsConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gratuitous-arps-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::GratuitousArpsConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gratuitous_arps.is_set || is_set(gratuitous_arps.yfilter)) leaf_name_data.push_back(gratuitous_arps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::GratuitousArpsConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::GratuitousArpsConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::GratuitousArpsConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gratuitous-arps")
    {
        gratuitous_arps = value;
        gratuitous_arps.value_namespace = name_space;
        gratuitous_arps.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::GratuitousArpsConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gratuitous-arps")
    {
        gratuitous_arps.yfilter = yfilter;
    }
}

bool Native::Ip::GratuitousArpsConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gratuitous-arps")
        return true;
    return false;
}

Native::Ip::Ftp::Ftp()
    :
    passive{YType::empty, "passive"},
    username{YType::str, "username"}
        ,
    source_interface(std::make_shared<Native::Ip::Ftp::SourceInterface>())
    , password(std::make_shared<Native::Ip::Ftp::Password>())
{
    source_interface->parent = this;
    password->parent = this;

    yang_name = "ftp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ftp::~Ftp()
{
}

bool Native::Ip::Ftp::has_data() const
{
    if (is_presence_container) return true;
    return passive.is_set
	|| username.is_set
	|| (source_interface !=  nullptr && source_interface->has_data())
	|| (password !=  nullptr && password->has_data());
}

bool Native::Ip::Ftp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(username.yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation())
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Ip::Ftp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ftp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ftp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Ftp::SourceInterface>();
        }
        return source_interface;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Ftp::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ftp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_interface != nullptr)
    {
        _children["source-interface"] = source_interface;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Ip::Ftp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface" || name == "password" || name == "passive" || name == "username")
        return true;
    return false;
}

Native::Ip::Ftp::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
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
    atm_subinterface(std::make_shared<Native::Ip::Ftp::SourceInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ip::Ftp::SourceInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ip::Ftp::SourceInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ip::Ftp::SourceInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "ftp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ftp::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Ftp::SourceInterface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
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

bool Native::Ip::Ftp::SourceInterface::has_operation() const
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
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
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

std::string Native::Ip::Ftp::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::SourceInterface::get_name_leaf_data() const
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
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> Native::Ip::Ftp::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Ftp::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Ftp::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Ftp::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Ftp::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ftp::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Ip::Ftp::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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

void Native::Ip::Ftp::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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

bool Native::Ip::Ftp::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Ftp::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ftp::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Ftp::SourceInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ip::Ftp::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Ftp::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ftp::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ftp::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ftp::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Ftp::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ftp::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Ftp::SourceInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ip::Ftp::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Ftp::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ftp::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ftp::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ftp::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Ftp::Password::Password()
    :
    password_container(std::make_shared<Native::Ip::Ftp::Password::PasswordContainer>())
{
    password_container->parent = this;

    yang_name = "password"; yang_parent_name = "ftp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ftp::Password::~Password()
{
}

bool Native::Ip::Ftp::Password::has_data() const
{
    if (is_presence_container) return true;
    return (password_container !=  nullptr && password_container->has_data());
}

bool Native::Ip::Ftp::Password::has_operation() const
{
    return is_set(yfilter)
	|| (password_container !=  nullptr && password_container->has_operation());
}

std::string Native::Ip::Ftp::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ftp::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password-container")
    {
        if(password_container == nullptr)
        {
            password_container = std::make_shared<Native::Ip::Ftp::Password::PasswordContainer>();
        }
        return password_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ftp::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password_container != nullptr)
    {
        _children["password-container"] = password_container;
    }

    return _children;
}

void Native::Ip::Ftp::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ftp::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ftp::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password-container")
        return true;
    return false;
}

Native::Ip::Ftp::Password::PasswordContainer::PasswordContainer()
    :
    encryption{YType::uint8, "encryption"},
    password{YType::str, "password"}
{

    yang_name = "password-container"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ftp::Password::PasswordContainer::~PasswordContainer()
{
}

bool Native::Ip::Ftp::Password::PasswordContainer::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| password.is_set;
}

bool Native::Ip::Ftp::Password::PasswordContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Ip::Ftp::Password::PasswordContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::Password::PasswordContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::Password::PasswordContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ftp::Password::PasswordContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ftp::Password::PasswordContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ftp::Password::PasswordContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::Password::PasswordContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::Password::PasswordContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "password")
        return true;
    return false;
}

Native::Ip::Telnet::Telnet()
    :
    source_interface{YType::str, "source-interface"}
{

    yang_name = "telnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Telnet::~Telnet()
{
}

bool Native::Ip::Telnet::has_data() const
{
    if (is_presence_container) return true;
    return source_interface.is_set;
}

bool Native::Ip::Telnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter);
}

std::string Native::Ip::Telnet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Telnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Telnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Telnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Ip::Telnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface")
        return true;
    return false;
}

Native::Ip::Host::Host()
    :
    host_list(this, {"name"})
    , vrf(this, {"vrf_name"})
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Host::~Host()
{
}

bool Native::Ip::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host_list.len(); index++)
    {
        if(host_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<host_list.len(); index++)
    {
        if(host_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Host::HostList>();
        ent_->parent = this;
        host_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Host::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-list" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Host::HostList::HostList()
    :
    name{YType::str, "name"},
    ip_list{YType::str, "ip-list"}
{

    yang_name = "host-list"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Host::HostList::~HostList()
{
}

bool Native::Ip::Host::HostList::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ip_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Host::HostList::has_operation() const
{
    for (auto const & leaf : ip_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ip_list.yfilter);
}

std::string Native::Ip::Host::HostList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Host::HostList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Host::HostList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    auto ip_list_name_datas = ip_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ip_list_name_datas.begin(), ip_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Host::HostList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Host::HostList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Host::HostList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-list")
    {
        ip_list.append(value);
    }
}

void Native::Ip::Host::HostList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ip-list")
    {
        ip_list.yfilter = yfilter;
    }
}

bool Native::Ip::Host::HostList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ip-list")
        return true;
    return false;
}

Native::Ip::Host::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    host_name(this, {"host_name"})
{

    yang_name = "vrf"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Host::Vrf::~Vrf()
{
}

bool Native::Ip::Host::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host_name.len(); index++)
    {
        if(host_name[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool Native::Ip::Host::Vrf::has_operation() const
{
    for (std::size_t index=0; index<host_name.len(); index++)
    {
        if(host_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Native::Ip::Host::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Host::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Host::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Host::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-name")
    {
        auto ent_ = std::make_shared<Native::Ip::Host::Vrf::HostName>();
        ent_->parent = this;
        host_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Host::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Host::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Host::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Ip::Host::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "vrf-name")
        return true;
    return false;
}

Native::Ip::Host::Vrf::HostName::HostName()
    :
    host_name{YType::str, "host-name"},
    ip_list{YType::str, "ip-list"}
{

    yang_name = "host-name"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Host::Vrf::HostName::~HostName()
{
}

bool Native::Ip::Host::Vrf::HostName::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ip_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return host_name.is_set;
}

bool Native::Ip::Host::Vrf::HostName::has_operation() const
{
    for (auto const & leaf : ip_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(ip_list.yfilter);
}

std::string Native::Ip::Host::Vrf::HostName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-name";
    ADD_KEY_TOKEN(host_name, "host-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Host::Vrf::HostName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());

    auto ip_list_name_datas = ip_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ip_list_name_datas.begin(), ip_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Host::Vrf::HostName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Host::Vrf::HostName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Host::Vrf::HostName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-list")
    {
        ip_list.append(value);
    }
}

void Native::Ip::Host::Vrf::HostName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "ip-list")
    {
        ip_list.yfilter = yfilter;
    }
}

bool Native::Ip::Host::Vrf::HostName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "ip-list")
        return true;
    return false;
}

Native::Ip::Multicast::Multicast()
    :
    route_limit{YType::uint32, "Cisco-IOS-XE-multicast:route-limit"}
        ,
    multipath(nullptr) // presence node
    , vrf(this, {"name"})
{

    yang_name = "multicast"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Multicast::~Multicast()
{
}

bool Native::Ip::Multicast::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return route_limit.is_set
	|| (multipath !=  nullptr && multipath->has_data());
}

bool Native::Ip::Multicast::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_limit.yfilter)
	|| (multipath !=  nullptr && multipath->has_operation());
}

std::string Native::Ip::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_limit.is_set || is_set(route_limit.yfilter)) leaf_name_data.push_back(route_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-multicast:multipath")
    {
        if(multipath == nullptr)
        {
            multipath = std::make_shared<Native::Ip::Multicast::Multipath>();
        }
        return multipath;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Multicast::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multipath != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:multipath"] = multipath;
    }

    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-multicast:route-limit")
    {
        route_limit = value;
        route_limit.value_namespace = name_space;
        route_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-limit")
    {
        route_limit.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multipath" || name == "vrf" || name == "route-limit")
        return true;
    return false;
}

Native::Ip::Multicast::Multipath::Multipath()
    :
    s_g_hash{YType::enumeration, "s-g-hash"}
{

    yang_name = "multipath"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Multicast::Multipath::~Multipath()
{
}

bool Native::Ip::Multicast::Multipath::has_data() const
{
    if (is_presence_container) return true;
    return s_g_hash.is_set;
}

bool Native::Ip::Multicast::Multipath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s_g_hash.yfilter);
}

std::string Native::Ip::Multicast::Multipath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Multicast::Multipath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:multipath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Multipath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s_g_hash.is_set || is_set(s_g_hash.yfilter)) leaf_name_data.push_back(s_g_hash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Multicast::Multipath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Multicast::Multipath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Multicast::Multipath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s-g-hash")
    {
        s_g_hash = value;
        s_g_hash.value_namespace = name_space;
        s_g_hash.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Multipath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s-g-hash")
    {
        s_g_hash.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Multipath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s-g-hash")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Vrf()
    :
    name{YType::str, "name"}
        ,
    multipath(nullptr) // presence node
    , route_limit(std::make_shared<Native::Ip::Multicast::Vrf::RouteLimit>())
    , rpf(std::make_shared<Native::Ip::Multicast::Vrf::Rpf>())
{
    route_limit->parent = this;
    rpf->parent = this;

    yang_name = "vrf"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Multicast::Vrf::~Vrf()
{
}

bool Native::Ip::Multicast::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (multipath !=  nullptr && multipath->has_data())
	|| (route_limit !=  nullptr && route_limit->has_data())
	|| (rpf !=  nullptr && rpf->has_data());
}

bool Native::Ip::Multicast::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (multipath !=  nullptr && multipath->has_operation())
	|| (route_limit !=  nullptr && route_limit->has_operation())
	|| (rpf !=  nullptr && rpf->has_operation());
}

std::string Native::Ip::Multicast::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Multicast::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Multicast::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multipath")
    {
        if(multipath == nullptr)
        {
            multipath = std::make_shared<Native::Ip::Multicast::Vrf::Multipath>();
        }
        return multipath;
    }

    if(child_yang_name == "route-limit")
    {
        if(route_limit == nullptr)
        {
            route_limit = std::make_shared<Native::Ip::Multicast::Vrf::RouteLimit>();
        }
        return route_limit;
    }

    if(child_yang_name == "rpf")
    {
        if(rpf == nullptr)
        {
            rpf = std::make_shared<Native::Ip::Multicast::Vrf::Rpf>();
        }
        return rpf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Multicast::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multipath != nullptr)
    {
        _children["multipath"] = multipath;
    }

    if(route_limit != nullptr)
    {
        _children["route-limit"] = route_limit;
    }

    if(rpf != nullptr)
    {
        _children["rpf"] = rpf;
    }

    return _children;
}

void Native::Ip::Multicast::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multipath" || name == "route-limit" || name == "rpf" || name == "name")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Multipath::Multipath()
    :
    s_g_hash{YType::enumeration, "s-g-hash"}
{

    yang_name = "multipath"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Multicast::Vrf::Multipath::~Multipath()
{
}

bool Native::Ip::Multicast::Vrf::Multipath::has_data() const
{
    if (is_presence_container) return true;
    return s_g_hash.is_set;
}

bool Native::Ip::Multicast::Vrf::Multipath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s_g_hash.yfilter);
}

std::string Native::Ip::Multicast::Vrf::Multipath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multipath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Multipath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s_g_hash.is_set || is_set(s_g_hash.yfilter)) leaf_name_data.push_back(s_g_hash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Multicast::Vrf::Multipath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Multicast::Vrf::Multipath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Multicast::Vrf::Multipath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s-g-hash")
    {
        s_g_hash = value;
        s_g_hash.value_namespace = name_space;
        s_g_hash.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::Multipath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s-g-hash")
    {
        s_g_hash.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::Multipath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s-g-hash")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::RouteLimit::RouteLimit()
    :
    no_routes{YType::uint32, "no-routes"},
    warning_threshold{YType::uint32, "warning-threshold"}
{

    yang_name = "route-limit"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Multicast::Vrf::RouteLimit::~RouteLimit()
{
}

bool Native::Ip::Multicast::Vrf::RouteLimit::has_data() const
{
    if (is_presence_container) return true;
    return no_routes.is_set
	|| warning_threshold.is_set;
}

bool Native::Ip::Multicast::Vrf::RouteLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_routes.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Ip::Multicast::Vrf::RouteLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::RouteLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_routes.is_set || is_set(no_routes.yfilter)) leaf_name_data.push_back(no_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Multicast::Vrf::RouteLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Multicast::Vrf::RouteLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Multicast::Vrf::RouteLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-routes")
    {
        no_routes = value;
        no_routes.value_namespace = name_space;
        no_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::RouteLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-routes")
    {
        no_routes.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::RouteLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-routes" || name == "warning-threshold")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Rpf::Rpf()
    :
    select(std::make_shared<Native::Ip::Multicast::Vrf::Rpf::Select>())
{
    select->parent = this;

    yang_name = "rpf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Multicast::Vrf::Rpf::~Rpf()
{
}

bool Native::Ip::Multicast::Vrf::Rpf::has_data() const
{
    if (is_presence_container) return true;
    return (select !=  nullptr && select->has_data());
}

bool Native::Ip::Multicast::Vrf::Rpf::has_operation() const
{
    return is_set(yfilter)
	|| (select !=  nullptr && select->has_operation());
}

std::string Native::Ip::Multicast::Vrf::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Multicast::Vrf::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        if(select == nullptr)
        {
            select = std::make_shared<Native::Ip::Multicast::Vrf::Rpf::Select>();
        }
        return select;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Multicast::Vrf::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(select != nullptr)
    {
        _children["select"] = select;
    }

    return _children;
}

void Native::Ip::Multicast::Vrf::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Multicast::Vrf::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Multicast::Vrf::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Rpf::Select::Select()
    :
    vrf(this, {"name"})
{

    yang_name = "select"; yang_parent_name = "rpf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Multicast::Vrf::Rpf::Select::~Select()
{
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Multicast::Vrf::Rpf::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Rpf::Select::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Multicast::Vrf::Rpf::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Multicast::Vrf::Rpf::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Multicast::Vrf::Rpf::Select::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Multicast::Vrf::Rpf::Select::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::Vrf_()
    :
    name{YType::str, "name"}
        ,
    group_list(this, {"group_list_name"})
{

    yang_name = "vrf"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::~Vrf_()
{
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::has_operation() const
{
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList>();
        ent_->parent = this;
        group_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list" || name == "name")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::GroupList()
    :
    group_list_name{YType::str, "group-list-name"}
{

    yang_name = "group-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::~GroupList()
{
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return group_list_name.is_set;
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_list_name.yfilter);
}

std::string Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-list";
    ADD_KEY_TOKEN(group_list_name, "group-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_list_name.is_set || is_set(group_list_name.yfilter)) leaf_name_data.push_back(group_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-list-name")
    {
        group_list_name = value;
        group_list_name.value_namespace = name_space;
        group_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-list-name")
    {
        group_list_name.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list-name")
        return true;
    return false;
}

Native::Ip::NameServer::NameServer()
    :
    no_vrf{YType::str, "no-vrf"}
        ,
    vrf(this, {"word"})
{

    yang_name = "name-server"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::NameServer::~NameServer()
{
}

bool Native::Ip::NameServer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    for (auto const & leaf : no_vrf.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::NameServer::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    for (auto const & leaf : no_vrf.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(no_vrf.yfilter);
}

std::string Native::Ip::NameServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::NameServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::NameServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto no_vrf_name_datas = no_vrf.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), no_vrf_name_datas.begin(), no_vrf_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::NameServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::NameServer::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::NameServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::NameServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-vrf")
    {
        no_vrf.append(value);
    }
}

void Native::Ip::NameServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-vrf")
    {
        no_vrf.yfilter = yfilter;
    }
}

bool Native::Ip::NameServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "no-vrf")
        return true;
    return false;
}

Native::Ip::NameServer::Vrf::Vrf()
    :
    word{YType::str, "word"},
    server_ip{YType::str, "server-ip"}
{

    yang_name = "vrf"; yang_parent_name = "name-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::NameServer::Vrf::~Vrf()
{
}

bool Native::Ip::NameServer::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| server_ip.is_set;
}

bool Native::Ip::NameServer::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(server_ip.yfilter);
}

std::string Native::Ip::NameServer::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/name-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::NameServer::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::NameServer::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (server_ip.is_set || is_set(server_ip.yfilter)) leaf_name_data.push_back(server_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::NameServer::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::NameServer::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::NameServer::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-ip")
    {
        server_ip = value;
        server_ip.value_namespace = name_space;
        server_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::NameServer::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "server-ip")
    {
        server_ip.yfilter = yfilter;
    }
}

bool Native::Ip::NameServer::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "server-ip")
        return true;
    return false;
}

Native::Ip::Pim::Pim()
    :
    register_source{YType::str, "Cisco-IOS-XE-multicast:register-source"}
        ,
    accept_register(std::make_shared<Native::Ip::Pim::AcceptRegister>())
    , autorp(nullptr) // presence node
    , rp_address(this, {"address"})
    , spt_threshold(this, {"how", "group_list"})
    , spt_threshold_container(std::make_shared<Native::Ip::Pim::SptThresholdContainer>())
    , send_rp_announce(std::make_shared<Native::Ip::Pim::SendRpAnnounce>())
    , send_rp_discovery(std::make_shared<Native::Ip::Pim::SendRpDiscovery>())
    , ssm(std::make_shared<Native::Ip::Pim::Ssm>())
    , vrf(this, {"id"})
{
    accept_register->parent = this;
    spt_threshold_container->parent = this;
    send_rp_announce->parent = this;
    send_rp_discovery->parent = this;
    ssm->parent = this;

    yang_name = "pim"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::~Pim()
{
}

bool Native::Ip::Pim::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rp_address.len(); index++)
    {
        if(rp_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.len(); index++)
    {
        if(spt_threshold[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return register_source.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (autorp !=  nullptr && autorp->has_data())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_data())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_data())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Native::Ip::Pim::has_operation() const
{
    for (std::size_t index=0; index<rp_address.len(); index++)
    {
        if(rp_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.len(); index++)
    {
        if(spt_threshold[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(register_source.yfilter)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (autorp !=  nullptr && autorp->has_operation())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_operation())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_operation())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_operation())
	|| (ssm !=  nullptr && ssm->has_operation());
}

std::string Native::Ip::Pim::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (register_source.is_set || is_set(register_source.yfilter)) leaf_name_data.push_back(register_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-multicast:accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Ip::Pim::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:autorp")
    {
        if(autorp == nullptr)
        {
            autorp = std::make_shared<Native::Ip::Pim::Autorp>();
        }
        return autorp;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:rp-address")
    {
        auto ent_ = std::make_shared<Native::Ip::Pim::RpAddress>();
        ent_->parent = this;
        rp_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:spt-threshold")
    {
        auto ent_ = std::make_shared<Native::Ip::Pim::SptThreshold>();
        ent_->parent = this;
        spt_threshold.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:spt-threshold-container")
    {
        if(spt_threshold_container == nullptr)
        {
            spt_threshold_container = std::make_shared<Native::Ip::Pim::SptThresholdContainer>();
        }
        return spt_threshold_container;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:send-rp-announce")
    {
        if(send_rp_announce == nullptr)
        {
            send_rp_announce = std::make_shared<Native::Ip::Pim::SendRpAnnounce>();
        }
        return send_rp_announce;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:send-rp-discovery")
    {
        if(send_rp_discovery == nullptr)
        {
            send_rp_discovery = std::make_shared<Native::Ip::Pim::SendRpDiscovery>();
        }
        return send_rp_discovery;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:ssm")
    {
        if(ssm == nullptr)
        {
            ssm = std::make_shared<Native::Ip::Pim::Ssm>();
        }
        return ssm;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Pim::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accept_register != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:accept-register"] = accept_register;
    }

    if(autorp != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:autorp"] = autorp;
    }

    count_ = 0;
    for (auto ent_ : rp_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : spt_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(spt_threshold_container != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:spt-threshold-container"] = spt_threshold_container;
    }

    if(send_rp_announce != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:send-rp-announce"] = send_rp_announce;
    }

    if(send_rp_discovery != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:send-rp-discovery"] = send_rp_discovery;
    }

    if(ssm != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:ssm"] = ssm;
    }

    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-multicast:register-source")
    {
        register_source = value;
        register_source.value_namespace = name_space;
        register_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "register-source")
    {
        register_source.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-register" || name == "autorp" || name == "rp-address" || name == "spt-threshold" || name == "spt-threshold-container" || name == "send-rp-announce" || name == "send-rp-discovery" || name == "ssm" || name == "vrf" || name == "register-source")
        return true;
    return false;
}

Native::Ip::Pim::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{

    yang_name = "accept-register"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::AcceptRegister::~AcceptRegister()
{
}

bool Native::Ip::Pim::AcceptRegister::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Ip::Pim::AcceptRegister::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Pim::AcceptRegister::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:accept-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::AcceptRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::AcceptRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::AcceptRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::AcceptRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Ip::Pim::Autorp::Autorp()
    :
    listener{YType::empty, "listener"}
{

    yang_name = "autorp"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Pim::Autorp::~Autorp()
{
}

bool Native::Ip::Pim::Autorp::has_data() const
{
    if (is_presence_container) return true;
    return listener.is_set;
}

bool Native::Ip::Pim::Autorp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(listener.yfilter);
}

std::string Native::Ip::Pim::Autorp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::Autorp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:autorp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Autorp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (listener.is_set || is_set(listener.yfilter)) leaf_name_data.push_back(listener.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::Autorp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::Autorp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::Autorp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "listener")
    {
        listener = value;
        listener.value_namespace = name_space;
        listener.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Autorp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "listener")
    {
        listener.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Autorp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listener")
        return true;
    return false;
}

Native::Ip::Pim::RpAddress::RpAddress()
    :
    address{YType::str, "address"},
    access_list{YType::str, "access-list"},
    override{YType::empty, "override"}
{

    yang_name = "rp-address"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::RpAddress::~RpAddress()
{
}

bool Native::Ip::Pim::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| access_list.is_set
	|| override.is_set;
}

bool Native::Ip::Pim::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string Native::Ip::Pim::RpAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:rp-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "access-list" || name == "override")
        return true;
    return false;
}

Native::Ip::Pim::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"},
    group_list{YType::str, "group-list"}
{

    yang_name = "spt-threshold"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::SptThreshold::has_data() const
{
    if (is_presence_container) return true;
    return how.is_set
	|| group_list.is_set;
}

bool Native::Ip::Pim::SptThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(how.yfilter)
	|| ydk::is_set(group_list.yfilter);
}

std::string Native::Ip::Pim::SptThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:spt-threshold";
    ADD_KEY_TOKEN(how, "how");
    ADD_KEY_TOKEN(group_list, "group-list");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SptThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.yfilter)) leaf_name_data.push_back(how.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::SptThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "how")
    {
        how = value;
        how.value_namespace = name_space;
        how.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list")
    {
        group_list = value;
        group_list.value_namespace = name_space;
        group_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SptThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "how")
    {
        how.yfilter = yfilter;
    }
    if(value_path == "group-list")
    {
        group_list.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SptThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "how" || name == "group-list")
        return true;
    return false;
}

Native::Ip::Pim::SptThresholdContainer::SptThresholdContainer()
    :
    spt_threshold(std::make_shared<Native::Ip::Pim::SptThresholdContainer::SptThreshold>())
{
    spt_threshold->parent = this;

    yang_name = "spt-threshold-container"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::SptThresholdContainer::~SptThresholdContainer()
{
}

bool Native::Ip::Pim::SptThresholdContainer::has_data() const
{
    if (is_presence_container) return true;
    return (spt_threshold !=  nullptr && spt_threshold->has_data());
}

bool Native::Ip::Pim::SptThresholdContainer::has_operation() const
{
    return is_set(yfilter)
	|| (spt_threshold !=  nullptr && spt_threshold->has_operation());
}

std::string Native::Ip::Pim::SptThresholdContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SptThresholdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:spt-threshold-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SptThresholdContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::SptThresholdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spt-threshold")
    {
        if(spt_threshold == nullptr)
        {
            spt_threshold = std::make_shared<Native::Ip::Pim::SptThresholdContainer::SptThreshold>();
        }
        return spt_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::SptThresholdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spt_threshold != nullptr)
    {
        _children["spt-threshold"] = spt_threshold;
    }

    return _children;
}

void Native::Ip::Pim::SptThresholdContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Pim::SptThresholdContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Pim::SptThresholdContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spt-threshold")
        return true;
    return false;
}

Native::Ip::Pim::SptThresholdContainer::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"}
{

    yang_name = "spt-threshold"; yang_parent_name = "spt-threshold-container"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::SptThresholdContainer::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::SptThresholdContainer::SptThreshold::has_data() const
{
    if (is_presence_container) return true;
    return how.is_set;
}

bool Native::Ip::Pim::SptThresholdContainer::SptThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(how.yfilter);
}

std::string Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/Cisco-IOS-XE-multicast:spt-threshold-container/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.yfilter)) leaf_name_data.push_back(how.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::SptThresholdContainer::SptThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "how")
    {
        how = value;
        how.value_namespace = name_space;
        how.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SptThresholdContainer::SptThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "how")
    {
        how.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SptThresholdContainer::SptThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "how")
        return true;
    return false;
}

Native::Ip::Pim::SendRpAnnounce::SendRpAnnounce()
    :
    interface_list(this, {"if_name"})
    , port_channel(this, {"name"})
{

    yang_name = "send-rp-announce"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::SendRpAnnounce::~SendRpAnnounce()
{
}

bool Native::Ip::Pim::SendRpAnnounce::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_list.len(); index++)
    {
        if(interface_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_channel.len(); index++)
    {
        if(port_channel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Pim::SendRpAnnounce::has_operation() const
{
    for (std::size_t index=0; index<interface_list.len(); index++)
    {
        if(interface_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_channel.len(); index++)
    {
        if(port_channel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Pim::SendRpAnnounce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SendRpAnnounce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:send-rp-announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpAnnounce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::SendRpAnnounce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface_list")
    {
        auto ent_ = std::make_shared<Native::Ip::Pim::SendRpAnnounce::InterfaceList>();
        ent_->parent = this;
        interface_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Port-channel")
    {
        auto ent_ = std::make_shared<Native::Ip::Pim::SendRpAnnounce::PortChannel>();
        ent_->parent = this;
        port_channel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::SendRpAnnounce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : port_channel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Pim::SendRpAnnounce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Pim::SendRpAnnounce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Pim::SendRpAnnounce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_list" || name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::InterfaceList()
    :
    if_name{YType::str, "if-name"}
        ,
    scope(std::make_shared<Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope>())
{
    scope->parent = this;

    yang_name = "interface_list"; yang_parent_name = "send-rp-announce"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::~InterfaceList()
{
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::has_data() const
{
    if (is_presence_container) return true;
    return if_name.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_name.yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Ip::Pim::SendRpAnnounce::InterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/Cisco-IOS-XE-multicast:send-rp-announce/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SendRpAnnounce::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface_list";
    ADD_KEY_TOKEN(if_name, "if-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpAnnounce::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_name.is_set || is_set(if_name.yfilter)) leaf_name_data.push_back(if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::SendRpAnnounce::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::SendRpAnnounce::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(scope != nullptr)
    {
        _children["scope"] = scope;
    }

    return _children;
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-name")
    {
        if_name = value;
        if_name.value_namespace = name_space;
        if_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-name")
    {
        if_name.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "if-name")
        return true;
    return false;
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::Scope()
    :
    pkt_ttl{YType::uint8, "pkt-ttl"}
        ,
    group_list(std::make_shared<Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList>())
{
    group_list->parent = this;

    yang_name = "scope"; yang_parent_name = "interface_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::~Scope()
{
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::has_data() const
{
    if (is_presence_container) return true;
    return pkt_ttl.is_set
	|| (group_list !=  nullptr && group_list->has_data());
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pkt_ttl.yfilter)
	|| (group_list !=  nullptr && group_list->has_operation());
}

std::string Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkt_ttl.is_set || is_set(pkt_ttl.yfilter)) leaf_name_data.push_back(pkt_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-list")
    {
        if(group_list == nullptr)
        {
            group_list = std::make_shared<Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList>();
        }
        return group_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_list != nullptr)
    {
        _children["group-list"] = group_list;
    }

    return _children;
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pkt-ttl")
    {
        pkt_ttl = value;
        pkt_ttl.value_namespace = name_space;
        pkt_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pkt-ttl")
    {
        pkt_ttl.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list" || name == "pkt-ttl")
        return true;
    return false;
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::GroupList()
    :
    acl_ref{YType::uint8, "acl-ref"},
    std_acl{YType::str, "std-acl"}
{

    yang_name = "group-list"; yang_parent_name = "scope"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::~GroupList()
{
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return acl_ref.is_set
	|| std_acl.is_set;
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_ref.yfilter)
	|| ydk::is_set(std_acl.yfilter);
}

std::string Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_ref.is_set || is_set(acl_ref.yfilter)) leaf_name_data.push_back(acl_ref.get_name_leafdata());
    if (std_acl.is_set || is_set(std_acl.yfilter)) leaf_name_data.push_back(std_acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-ref")
    {
        acl_ref = value;
        acl_ref.value_namespace = name_space;
        acl_ref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "std-acl")
    {
        std_acl = value;
        std_acl.value_namespace = name_space;
        std_acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-ref")
    {
        acl_ref.yfilter = yfilter;
    }
    if(value_path == "std-acl")
    {
        std_acl.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-ref" || name == "std-acl")
        return true;
    return false;
}

Native::Ip::Pim::SendRpAnnounce::PortChannel::PortChannel()
    :
    name{YType::uint32, "name"},
    scope{YType::uint8, "scope"}
{

    yang_name = "Port-channel"; yang_parent_name = "send-rp-announce"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::SendRpAnnounce::PortChannel::~PortChannel()
{
}

bool Native::Ip::Pim::SendRpAnnounce::PortChannel::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| scope.is_set;
}

bool Native::Ip::Pim::SendRpAnnounce::PortChannel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(scope.yfilter);
}

std::string Native::Ip::Pim::SendRpAnnounce::PortChannel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/Cisco-IOS-XE-multicast:send-rp-announce/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SendRpAnnounce::PortChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpAnnounce::PortChannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::SendRpAnnounce::PortChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::SendRpAnnounce::PortChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::SendRpAnnounce::PortChannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SendRpAnnounce::PortChannel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SendRpAnnounce::PortChannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "scope")
        return true;
    return false;
}

Native::Ip::Pim::SendRpDiscovery::SendRpDiscovery()
    :
    scope{YType::uint8, "scope"}
{

    yang_name = "send-rp-discovery"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::SendRpDiscovery::~SendRpDiscovery()
{
}

bool Native::Ip::Pim::SendRpDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return scope.is_set;
}

bool Native::Ip::Pim::SendRpDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(scope.yfilter);
}

std::string Native::Ip::Pim::SendRpDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SendRpDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:send-rp-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::SendRpDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::SendRpDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::SendRpDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SendRpDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SendRpDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope")
        return true;
    return false;
}

Native::Ip::Pim::Ssm::Ssm()
    :
    range{YType::str, "range"},
    default_{YType::empty, "default"}
{

    yang_name = "ssm"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::Ssm::~Ssm()
{
}

bool Native::Ip::Pim::Ssm::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| default_.is_set;
}

bool Native::Ip::Pim::Ssm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Ip::Pim::Ssm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:ssm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Ssm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::Ssm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::Ssm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Ssm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Ssm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "default")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::Vrf()
    :
    id{YType::str, "id"},
    register_source{YType::str, "register-source"}
        ,
    accept_register(std::make_shared<Native::Ip::Pim::Vrf::AcceptRegister>())
    , autorp(nullptr) // presence node
    , rp_address(this, {"address"})
    , spt_threshold(this, {"how", "group_list"})
    , spt_threshold_container(std::make_shared<Native::Ip::Pim::Vrf::SptThresholdContainer>())
    , send_rp_announce(std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce>())
    , send_rp_discovery(std::make_shared<Native::Ip::Pim::Vrf::SendRpDiscovery>())
    , ssm(std::make_shared<Native::Ip::Pim::Vrf::Ssm>())
{
    accept_register->parent = this;
    spt_threshold_container->parent = this;
    send_rp_announce->parent = this;
    send_rp_discovery->parent = this;
    ssm->parent = this;

    yang_name = "vrf"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Pim::Vrf::~Vrf()
{
}

bool Native::Ip::Pim::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rp_address.len(); index++)
    {
        if(rp_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.len(); index++)
    {
        if(spt_threshold[index]->has_data())
            return true;
    }
    return id.is_set
	|| register_source.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (autorp !=  nullptr && autorp->has_data())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_data())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_data())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Native::Ip::Pim::Vrf::has_operation() const
{
    for (std::size_t index=0; index<rp_address.len(); index++)
    {
        if(rp_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.len(); index++)
    {
        if(spt_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(register_source.yfilter)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (autorp !=  nullptr && autorp->has_operation())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_operation())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_operation())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_operation())
	|| (ssm !=  nullptr && ssm->has_operation());
}

std::string Native::Ip::Pim::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:vrf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (register_source.is_set || is_set(register_source.yfilter)) leaf_name_data.push_back(register_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Ip::Pim::Vrf::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "autorp")
    {
        if(autorp == nullptr)
        {
            autorp = std::make_shared<Native::Ip::Pim::Vrf::Autorp>();
        }
        return autorp;
    }

    if(child_yang_name == "rp-address")
    {
        auto ent_ = std::make_shared<Native::Ip::Pim::Vrf::RpAddress>();
        ent_->parent = this;
        rp_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "spt-threshold")
    {
        auto ent_ = std::make_shared<Native::Ip::Pim::Vrf::SptThreshold>();
        ent_->parent = this;
        spt_threshold.append(ent_);
        return ent_;
    }

    if(child_yang_name == "spt-threshold-container")
    {
        if(spt_threshold_container == nullptr)
        {
            spt_threshold_container = std::make_shared<Native::Ip::Pim::Vrf::SptThresholdContainer>();
        }
        return spt_threshold_container;
    }

    if(child_yang_name == "send-rp-announce")
    {
        if(send_rp_announce == nullptr)
        {
            send_rp_announce = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce>();
        }
        return send_rp_announce;
    }

    if(child_yang_name == "send-rp-discovery")
    {
        if(send_rp_discovery == nullptr)
        {
            send_rp_discovery = std::make_shared<Native::Ip::Pim::Vrf::SendRpDiscovery>();
        }
        return send_rp_discovery;
    }

    if(child_yang_name == "ssm")
    {
        if(ssm == nullptr)
        {
            ssm = std::make_shared<Native::Ip::Pim::Vrf::Ssm>();
        }
        return ssm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accept_register != nullptr)
    {
        _children["accept-register"] = accept_register;
    }

    if(autorp != nullptr)
    {
        _children["autorp"] = autorp;
    }

    count_ = 0;
    for (auto ent_ : rp_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : spt_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(spt_threshold_container != nullptr)
    {
        _children["spt-threshold-container"] = spt_threshold_container;
    }

    if(send_rp_announce != nullptr)
    {
        _children["send-rp-announce"] = send_rp_announce;
    }

    if(send_rp_discovery != nullptr)
    {
        _children["send-rp-discovery"] = send_rp_discovery;
    }

    if(ssm != nullptr)
    {
        _children["ssm"] = ssm;
    }

    return _children;
}

void Native::Ip::Pim::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-source")
    {
        register_source = value;
        register_source.value_namespace = name_space;
        register_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "register-source")
    {
        register_source.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-register" || name == "autorp" || name == "rp-address" || name == "spt-threshold" || name == "spt-threshold-container" || name == "send-rp-announce" || name == "send-rp-discovery" || name == "ssm" || name == "id" || name == "register-source")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{

    yang_name = "accept-register"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Pim::Vrf::AcceptRegister::~AcceptRegister()
{
}

bool Native::Ip::Pim::Vrf::AcceptRegister::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Ip::Pim::Vrf::AcceptRegister::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Pim::Vrf::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::AcceptRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::Vrf::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::Vrf::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::Vrf::AcceptRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::AcceptRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::AcceptRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::Autorp::Autorp()
    :
    listener{YType::empty, "listener"}
{

    yang_name = "autorp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Pim::Vrf::Autorp::~Autorp()
{
}

bool Native::Ip::Pim::Vrf::Autorp::has_data() const
{
    if (is_presence_container) return true;
    return listener.is_set;
}

bool Native::Ip::Pim::Vrf::Autorp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(listener.yfilter);
}

std::string Native::Ip::Pim::Vrf::Autorp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autorp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::Autorp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (listener.is_set || is_set(listener.yfilter)) leaf_name_data.push_back(listener.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::Vrf::Autorp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::Vrf::Autorp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::Vrf::Autorp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "listener")
    {
        listener = value;
        listener.value_namespace = name_space;
        listener.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::Autorp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "listener")
    {
        listener.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::Autorp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listener")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::RpAddress::RpAddress()
    :
    address{YType::str, "address"},
    access_list{YType::str, "access-list"},
    override{YType::empty, "override"}
{

    yang_name = "rp-address"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Pim::Vrf::RpAddress::~RpAddress()
{
}

bool Native::Ip::Pim::Vrf::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| access_list.is_set
	|| override.is_set;
}

bool Native::Ip::Pim::Vrf::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string Native::Ip::Pim::Vrf::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::Vrf::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::Vrf::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::Vrf::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "access-list" || name == "override")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"},
    group_list{YType::str, "group-list"}
{

    yang_name = "spt-threshold"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Pim::Vrf::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::Vrf::SptThreshold::has_data() const
{
    if (is_presence_container) return true;
    return how.is_set
	|| group_list.is_set;
}

bool Native::Ip::Pim::Vrf::SptThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(how.yfilter)
	|| ydk::is_set(group_list.yfilter);
}

std::string Native::Ip::Pim::Vrf::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold";
    ADD_KEY_TOKEN(how, "how");
    ADD_KEY_TOKEN(group_list, "group-list");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SptThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.yfilter)) leaf_name_data.push_back(how.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::Vrf::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::Vrf::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::Vrf::SptThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "how")
    {
        how = value;
        how.value_namespace = name_space;
        how.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list")
    {
        group_list = value;
        group_list.value_namespace = name_space;
        group_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SptThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "how")
    {
        how.yfilter = yfilter;
    }
    if(value_path == "group-list")
    {
        group_list.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SptThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "how" || name == "group-list")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SptThresholdContainer::SptThresholdContainer()
    :
    spt_threshold(std::make_shared<Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold>())
{
    spt_threshold->parent = this;

    yang_name = "spt-threshold-container"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Pim::Vrf::SptThresholdContainer::~SptThresholdContainer()
{
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::has_data() const
{
    if (is_presence_container) return true;
    return (spt_threshold !=  nullptr && spt_threshold->has_data());
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::has_operation() const
{
    return is_set(yfilter)
	|| (spt_threshold !=  nullptr && spt_threshold->has_operation());
}

std::string Native::Ip::Pim::Vrf::SptThresholdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SptThresholdContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::Vrf::SptThresholdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spt-threshold")
    {
        if(spt_threshold == nullptr)
        {
            spt_threshold = std::make_shared<Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold>();
        }
        return spt_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::Vrf::SptThresholdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spt_threshold != nullptr)
    {
        _children["spt-threshold"] = spt_threshold;
    }

    return _children;
}

void Native::Ip::Pim::Vrf::SptThresholdContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Pim::Vrf::SptThresholdContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spt-threshold")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"}
{

    yang_name = "spt-threshold"; yang_parent_name = "spt-threshold-container"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::has_data() const
{
    if (is_presence_container) return true;
    return how.is_set;
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(how.yfilter);
}

std::string Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.yfilter)) leaf_name_data.push_back(how.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "how")
    {
        how = value;
        how.value_namespace = name_space;
        how.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "how")
    {
        how.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "how")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::SendRpAnnounce()
    :
    interface_list(this, {"if_name"})
    , port_channel(this, {"name"})
{

    yang_name = "send-rp-announce"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Pim::Vrf::SendRpAnnounce::~SendRpAnnounce()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_list.len(); index++)
    {
        if(interface_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_channel.len(); index++)
    {
        if(port_channel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::has_operation() const
{
    for (std::size_t index=0; index<interface_list.len(); index++)
    {
        if(interface_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_channel.len(); index++)
    {
        if(port_channel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-rp-announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpAnnounce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface_list")
    {
        auto ent_ = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList>();
        ent_->parent = this;
        interface_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Port-channel")
    {
        auto ent_ = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel>();
        ent_->parent = this;
        port_channel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : port_channel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_list" || name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::InterfaceList()
    :
    if_name{YType::str, "if-name"}
        ,
    scope(std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope>())
{
    scope->parent = this;

    yang_name = "interface_list"; yang_parent_name = "send-rp-announce"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::~InterfaceList()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::has_data() const
{
    if (is_presence_container) return true;
    return if_name.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_name.yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface_list";
    ADD_KEY_TOKEN(if_name, "if-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_name.is_set || is_set(if_name.yfilter)) leaf_name_data.push_back(if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(scope != nullptr)
    {
        _children["scope"] = scope;
    }

    return _children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-name")
    {
        if_name = value;
        if_name.value_namespace = name_space;
        if_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-name")
    {
        if_name.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "if-name")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::Scope()
    :
    pkt_ttl{YType::uint8, "pkt-ttl"}
        ,
    group_list(std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList>())
{
    group_list->parent = this;

    yang_name = "scope"; yang_parent_name = "interface_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::~Scope()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::has_data() const
{
    if (is_presence_container) return true;
    return pkt_ttl.is_set
	|| (group_list !=  nullptr && group_list->has_data());
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pkt_ttl.yfilter)
	|| (group_list !=  nullptr && group_list->has_operation());
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkt_ttl.is_set || is_set(pkt_ttl.yfilter)) leaf_name_data.push_back(pkt_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-list")
    {
        if(group_list == nullptr)
        {
            group_list = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList>();
        }
        return group_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_list != nullptr)
    {
        _children["group-list"] = group_list;
    }

    return _children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pkt-ttl")
    {
        pkt_ttl = value;
        pkt_ttl.value_namespace = name_space;
        pkt_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pkt-ttl")
    {
        pkt_ttl.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list" || name == "pkt-ttl")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::GroupList()
    :
    acl_ref{YType::uint8, "acl-ref"},
    std_acl{YType::str, "std-acl"}
{

    yang_name = "group-list"; yang_parent_name = "scope"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::~GroupList()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return acl_ref.is_set
	|| std_acl.is_set;
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_ref.yfilter)
	|| ydk::is_set(std_acl.yfilter);
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_ref.is_set || is_set(acl_ref.yfilter)) leaf_name_data.push_back(acl_ref.get_name_leafdata());
    if (std_acl.is_set || is_set(std_acl.yfilter)) leaf_name_data.push_back(std_acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-ref")
    {
        acl_ref = value;
        acl_ref.value_namespace = name_space;
        acl_ref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "std-acl")
    {
        std_acl = value;
        std_acl.value_namespace = name_space;
        std_acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-ref")
    {
        acl_ref.yfilter = yfilter;
    }
    if(value_path == "std-acl")
    {
        std_acl.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-ref" || name == "std-acl")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::PortChannel()
    :
    name{YType::uint32, "name"},
    scope{YType::uint8, "scope"}
{

    yang_name = "Port-channel"; yang_parent_name = "send-rp-announce"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::~PortChannel()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| scope.is_set;
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(scope.yfilter);
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "scope")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpDiscovery::SendRpDiscovery()
    :
    scope{YType::uint8, "scope"}
{

    yang_name = "send-rp-discovery"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Pim::Vrf::SendRpDiscovery::~SendRpDiscovery()
{
}

bool Native::Ip::Pim::Vrf::SendRpDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return scope.is_set;
}

bool Native::Ip::Pim::Vrf::SendRpDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(scope.yfilter);
}

std::string Native::Ip::Pim::Vrf::SendRpDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-rp-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::Vrf::SendRpDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::Vrf::SendRpDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::Vrf::SendRpDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SendRpDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SendRpDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::Ssm::Ssm()
    :
    range{YType::str, "range"},
    default_{YType::empty, "default"}
{

    yang_name = "ssm"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Pim::Vrf::Ssm::~Ssm()
{
}

bool Native::Ip::Pim::Vrf::Ssm::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| default_.is_set;
}

bool Native::Ip::Pim::Vrf::Ssm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Ip::Pim::Vrf::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::Ssm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Pim::Vrf::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Pim::Vrf::Ssm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Pim::Vrf::Ssm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::Ssm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::Ssm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "default")
        return true;
    return false;
}

Native::Ip::PrefixList::PrefixList()
    :
    sequence_number{YType::empty, "sequence-number"}
        ,
    prefixes(this, {"name"})
{

    yang_name = "prefix-list"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::PrefixList::~PrefixList()
{
}

bool Native::Ip::PrefixList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return sequence_number.is_set;
}

bool Native::Ip::PrefixList::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Native::Ip::PrefixList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Ip::PrefixList::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Native::Ip::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "sequence-number")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Prefixes()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
        ,
    seq(this, {"no"})
{

    yang_name = "prefixes"; yang_parent_name = "prefix-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::PrefixList::Prefixes::~Prefixes()
{
}

bool Native::Ip::PrefixList::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<seq.len(); index++)
    {
        if(seq[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set;
}

bool Native::Ip::PrefixList::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<seq.len(); index++)
    {
        if(seq[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::Ip::PrefixList::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/prefix-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::PrefixList::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::PrefixList::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq")
    {
        auto ent_ = std::make_shared<Native::Ip::PrefixList::Prefixes::Seq>();
        ent_->parent = this;
        seq.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::PrefixList::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : seq.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::PrefixList::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::PrefixList::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::PrefixList::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq" || name == "name" || name == "description")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Seq::Seq()
    :
    no{YType::uint32, "no"},
    action{YType::enumeration, "action"},
    ip{YType::str, "ip"},
    ge{YType::uint8, "ge"},
    le{YType::uint8, "le"}
{

    yang_name = "seq"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::PrefixList::Prefixes::Seq::~Seq()
{
}

bool Native::Ip::PrefixList::Prefixes::Seq::has_data() const
{
    if (is_presence_container) return true;
    return no.is_set
	|| action.is_set
	|| ip.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ip::PrefixList::Prefixes::Seq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ip::PrefixList::Prefixes::Seq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq";
    ADD_KEY_TOKEN(no, "no");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::Seq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::PrefixList::Prefixes::Seq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::PrefixList::Prefixes::Seq::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::PrefixList::Prefixes::Seq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::PrefixList::Prefixes::Seq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ip::PrefixList::Prefixes::Seq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no" || name == "action" || name == "ip" || name == "ge" || name == "le")
        return true;
    return false;
}

Native::Ip::Route::Route()
    :
    profile{YType::empty, "profile"}
        ,
    ip_route_interface_forwarding_list(this, {"prefix", "mask"})
    , static_(std::make_shared<Native::Ip::Route::Static>())
    , vrf(this, {"name"})
    , topology(this, {"name"})
{
    static_->parent = this;

    yang_name = "route"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Route::~Route()
{
}

bool Native::Ip::Route::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.len(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return profile.is_set
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Route::has_operation() const
{
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.len(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-route-interface-forwarding-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::IpRouteInterfaceForwardingList>();
        ent_->parent = this;
        ip_route_interface_forwarding_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Route::Static>();
        }
        return static_;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "topology")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Topology>();
        ent_->parent = this;
        topology.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ip_route_interface_forwarding_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : topology.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-route-interface-forwarding-list" || name == "static" || name == "vrf" || name == "topology" || name == "profile")
        return true;
    return false;
}

Native::Ip::Route::IpRouteInterfaceForwardingList::IpRouteInterfaceForwardingList()
    :
    prefix{YType::str, "prefix"},
    mask{YType::str, "mask"},
    dhcp{YType::empty, "dhcp"},
    metric{YType::uint8, "metric"}
        ,
    fwd_list(this, {"fwd"})
{

    yang_name = "ip-route-interface-forwarding-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Route::IpRouteInterfaceForwardingList::~IpRouteInterfaceForwardingList()
{
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fwd_list.len(); index++)
    {
        if(fwd_list[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| mask.is_set
	|| dhcp.is_set
	|| metric.is_set;
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::has_operation() const
{
    for (std::size_t index=0; index<fwd_list.len(); index++)
    {
        if(fwd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Ip::Route::IpRouteInterfaceForwardingList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::IpRouteInterfaceForwardingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-route-interface-forwarding-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    ADD_KEY_TOKEN(mask, "mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::IpRouteInterfaceForwardingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::IpRouteInterfaceForwardingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fwd-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList>();
        ent_->parent = this;
        fwd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::IpRouteInterfaceForwardingList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fwd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwd-list" || name == "prefix" || name == "mask" || name == "dhcp" || name == "metric")
        return true;
    return false;
}

Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::FwdList()
    :
    fwd{YType::str, "fwd"},
    dhcp{YType::empty, "dhcp"},
    metric{YType::uint8, "metric"},
    global{YType::empty, "global"},
    name{YType::str, "name"},
    permanent{YType::empty, "permanent"},
    multicast{YType::empty, "multicast"},
    tag{YType::uint32, "tag"},
    track{YType::uint16, "track"}
        ,
    interface_next_hop(this, {"ip_address"})
{

    yang_name = "fwd-list"; yang_parent_name = "ip-route-interface-forwarding-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::~FwdList()
{
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_next_hop.len(); index++)
    {
        if(interface_next_hop[index]->has_data())
            return true;
    }
    return fwd.is_set
	|| dhcp.is_set
	|| metric.is_set
	|| global.is_set
	|| name.is_set
	|| permanent.is_set
	|| multicast.is_set
	|| tag.is_set
	|| track.is_set;
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::has_operation() const
{
    for (std::size_t index=0; index<interface_next_hop.len(); index++)
    {
        if(interface_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fwd.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-list";
    ADD_KEY_TOKEN(fwd, "fwd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwd.is_set || is_set(fwd.yfilter)) leaf_name_data.push_back(fwd.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-next-hop")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop>();
        ent_->parent = this;
        interface_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fwd")
    {
        fwd = value;
        fwd.value_namespace = name_space;
        fwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fwd")
    {
        fwd.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-next-hop" || name == "fwd" || name == "dhcp" || name == "metric" || name == "global" || name == "name" || name == "permanent" || name == "multicast" || name == "tag" || name == "track")
        return true;
    return false;
}

Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::InterfaceNextHop()
    :
    ip_address{YType::str, "ip-address"},
    metric{YType::uint8, "metric"},
    global{YType::empty, "global"},
    name{YType::str, "name"},
    permanent{YType::empty, "permanent"},
    multicast{YType::empty, "multicast"},
    tag{YType::uint32, "tag"},
    track{YType::uint16, "track"}
{

    yang_name = "interface-next-hop"; yang_parent_name = "fwd-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::~InterfaceNextHop()
{
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| metric.is_set
	|| global.is_set
	|| name.is_set
	|| permanent.is_set
	|| multicast.is_set
	|| tag.is_set
	|| track.is_set;
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-next-hop";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "metric" || name == "global" || name == "name" || name == "permanent" || name == "multicast" || name == "tag" || name == "track")
        return true;
    return false;
}

Native::Ip::Route::Static::Static()
    :
    adjust_time{YType::uint8, "adjust-time"},
    inter_vrf{YType::empty, "inter-vrf"}
        ,
    bfd(std::make_shared<Native::Ip::Route::Static::Bfd>())
    , install_routes_recurse_via_nexthop(std::make_shared<Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop>())
{
    bfd->parent = this;
    install_routes_recurse_via_nexthop->parent = this;

    yang_name = "static"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Route::Static::~Static()
{
}

bool Native::Ip::Route::Static::has_data() const
{
    if (is_presence_container) return true;
    return adjust_time.is_set
	|| inter_vrf.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (install_routes_recurse_via_nexthop !=  nullptr && install_routes_recurse_via_nexthop->has_data());
}

bool Native::Ip::Route::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_time.yfilter)
	|| ydk::is_set(inter_vrf.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (install_routes_recurse_via_nexthop !=  nullptr && install_routes_recurse_via_nexthop->has_operation());
}

std::string Native::Ip::Route::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_time.is_set || is_set(adjust_time.yfilter)) leaf_name_data.push_back(adjust_time.get_name_leafdata());
    if (inter_vrf.is_set || is_set(inter_vrf.yfilter)) leaf_name_data.push_back(inter_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Ip::Route::Static::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "install-routes-recurse-via-nexthop")
    {
        if(install_routes_recurse_via_nexthop == nullptr)
        {
            install_routes_recurse_via_nexthop = std::make_shared<Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop>();
        }
        return install_routes_recurse_via_nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(install_routes_recurse_via_nexthop != nullptr)
    {
        _children["install-routes-recurse-via-nexthop"] = install_routes_recurse_via_nexthop;
    }

    return _children;
}

void Native::Ip::Route::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-time")
    {
        adjust_time = value;
        adjust_time.value_namespace = name_space;
        adjust_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-vrf")
    {
        inter_vrf = value;
        inter_vrf.value_namespace = name_space;
        inter_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-time")
    {
        adjust_time.yfilter = yfilter;
    }
    if(value_path == "inter-vrf")
    {
        inter_vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "install-routes-recurse-via-nexthop" || name == "adjust-time" || name == "inter-vrf")
        return true;
    return false;
}

Native::Ip::Route::Static::Bfd::Bfd()
    :
    iface_name(this, {"interface", "ipv4_source"})
    , ipv4_addr(this, {"ipv4_des"})
    , vrf(this, {"destination_vrf"})
{

    yang_name = "bfd"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Route::Static::Bfd::~Bfd()
{
}

bool Native::Ip::Route::Static::Bfd::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iface_name.len(); index++)
    {
        if(iface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_addr.len(); index++)
    {
        if(ipv4_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Route::Static::Bfd::has_operation() const
{
    for (std::size_t index=0; index<iface_name.len(); index++)
    {
        if(iface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_addr.len(); index++)
    {
        if(ipv4_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Route::Static::Bfd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Static::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Static::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iface_name")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Static::Bfd::IfaceName>();
        ent_->parent = this;
        iface_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4_addr")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Static::Bfd::Ipv4Addr>();
        ent_->parent = this;
        ipv4_addr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Static::Bfd::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Static::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iface_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_addr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Route::Static::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Route::Static::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Route::Static::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iface_name" || name == "ipv4_addr" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Route::Static::Bfd::IfaceName::IfaceName()
    :
    interface{YType::str, "interface"},
    ipv4_source{YType::str, "ipv4_source"},
    group{YType::str, "group"},
    passive{YType::empty, "passive"},
    log{YType::empty, "log"},
    unassociate{YType::empty, "unassociate"}
{

    yang_name = "iface_name"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Route::Static::Bfd::IfaceName::~IfaceName()
{
}

bool Native::Ip::Route::Static::Bfd::IfaceName::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| ipv4_source.is_set
	|| group.is_set
	|| passive.is_set
	|| log.is_set
	|| unassociate.is_set;
}

bool Native::Ip::Route::Static::Bfd::IfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(ipv4_source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(unassociate.yfilter);
}

std::string Native::Ip::Route::Static::Bfd::IfaceName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/static/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Static::Bfd::IfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iface_name";
    ADD_KEY_TOKEN(interface, "interface");
    ADD_KEY_TOKEN(ipv4_source, "ipv4_source");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static::Bfd::IfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (ipv4_source.is_set || is_set(ipv4_source.yfilter)) leaf_name_data.push_back(ipv4_source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (unassociate.is_set || is_set(unassociate.yfilter)) leaf_name_data.push_back(unassociate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Static::Bfd::IfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Static::Bfd::IfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Route::Static::Bfd::IfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4_source")
    {
        ipv4_source = value;
        ipv4_source.value_namespace = name_space;
        ipv4_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unassociate")
    {
        unassociate = value;
        unassociate.value_namespace = name_space;
        unassociate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static::Bfd::IfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "ipv4_source")
    {
        ipv4_source.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "unassociate")
    {
        unassociate.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static::Bfd::IfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ipv4_source" || name == "group" || name == "passive" || name == "log" || name == "unassociate")
        return true;
    return false;
}

Native::Ip::Route::Static::Bfd::Ipv4Addr::Ipv4Addr()
    :
    ipv4_des{YType::str, "ipv4_des"}
        ,
    vrf(this, {"name", "ipv4_source"})
    , ipv4(this, {"ipv4_source"})
{

    yang_name = "ipv4_addr"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Route::Static::Bfd::Ipv4Addr::~Ipv4Addr()
{
}

bool Native::Ip::Route::Static::Bfd::Ipv4Addr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return ipv4_des.is_set;
}

bool Native::Ip::Route::Static::Bfd::Ipv4Addr::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_des.yfilter);
}

std::string Native::Ip::Route::Static::Bfd::Ipv4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/static/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Static::Bfd::Ipv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4_addr";
    ADD_KEY_TOKEN(ipv4_des, "ipv4_des");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static::Bfd::Ipv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_des.is_set || is_set(ipv4_des.yfilter)) leaf_name_data.push_back(ipv4_des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Static::Bfd::Ipv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Static::Bfd::Ipv4Addr::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Static::Bfd::Ipv4Addr::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Static::Bfd::Ipv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Route::Static::Bfd::Ipv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4_des")
    {
        ipv4_des = value;
        ipv4_des.value_namespace = name_space;
        ipv4_des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static::Bfd::Ipv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4_des")
    {
        ipv4_des.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static::Bfd::Ipv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "ipv4" || name == "ipv4_des")
        return true;
    return false;
}

Native::Ip::Route::Static::Bfd::Ipv4Addr::Vrf::Vrf()
    :
    name{YType::str, "name"},
    ipv4_source{YType::str, "ipv4_source"},
    group{YType::str, "group"},
    passive{YType::empty, "passive"},
    log{YType::empty, "log"},
    unassociate{YType::empty, "unassociate"}
{

    yang_name = "vrf"; yang_parent_name = "ipv4_addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::Static::Bfd::Ipv4Addr::Vrf::~Vrf()
{
}

bool Native::Ip::Route::Static::Bfd::Ipv4Addr::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ipv4_source.is_set
	|| group.is_set
	|| passive.is_set
	|| log.is_set
	|| unassociate.is_set;
}

bool Native::Ip::Route::Static::Bfd::Ipv4Addr::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ipv4_source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(unassociate.yfilter);
}

std::string Native::Ip::Route::Static::Bfd::Ipv4Addr::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(ipv4_source, "ipv4_source");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static::Bfd::Ipv4Addr::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ipv4_source.is_set || is_set(ipv4_source.yfilter)) leaf_name_data.push_back(ipv4_source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (unassociate.is_set || is_set(unassociate.yfilter)) leaf_name_data.push_back(unassociate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Static::Bfd::Ipv4Addr::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Static::Bfd::Ipv4Addr::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Route::Static::Bfd::Ipv4Addr::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4_source")
    {
        ipv4_source = value;
        ipv4_source.value_namespace = name_space;
        ipv4_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unassociate")
    {
        unassociate = value;
        unassociate.value_namespace = name_space;
        unassociate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static::Bfd::Ipv4Addr::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ipv4_source")
    {
        ipv4_source.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "unassociate")
    {
        unassociate.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static::Bfd::Ipv4Addr::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ipv4_source" || name == "group" || name == "passive" || name == "log" || name == "unassociate")
        return true;
    return false;
}

Native::Ip::Route::Static::Bfd::Ipv4Addr::Ipv4::Ipv4()
    :
    ipv4_source{YType::str, "ipv4_source"},
    group{YType::str, "group"},
    passive{YType::empty, "passive"},
    log{YType::empty, "log"},
    unassociate{YType::empty, "unassociate"}
{

    yang_name = "ipv4"; yang_parent_name = "ipv4_addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::Static::Bfd::Ipv4Addr::Ipv4::~Ipv4()
{
}

bool Native::Ip::Route::Static::Bfd::Ipv4Addr::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_source.is_set
	|| group.is_set
	|| passive.is_set
	|| log.is_set
	|| unassociate.is_set;
}

bool Native::Ip::Route::Static::Bfd::Ipv4Addr::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(unassociate.yfilter);
}

std::string Native::Ip::Route::Static::Bfd::Ipv4Addr::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4_source, "ipv4_source");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static::Bfd::Ipv4Addr::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_source.is_set || is_set(ipv4_source.yfilter)) leaf_name_data.push_back(ipv4_source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (unassociate.is_set || is_set(unassociate.yfilter)) leaf_name_data.push_back(unassociate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Static::Bfd::Ipv4Addr::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Static::Bfd::Ipv4Addr::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Route::Static::Bfd::Ipv4Addr::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4_source")
    {
        ipv4_source = value;
        ipv4_source.value_namespace = name_space;
        ipv4_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unassociate")
    {
        unassociate = value;
        unassociate.value_namespace = name_space;
        unassociate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static::Bfd::Ipv4Addr::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4_source")
    {
        ipv4_source.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "unassociate")
    {
        unassociate.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static::Bfd::Ipv4Addr::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4_source" || name == "group" || name == "passive" || name == "log" || name == "unassociate")
        return true;
    return false;
}

Native::Ip::Route::Static::Bfd::Vrf::Vrf()
    :
    destination_vrf{YType::str, "destination_vrf"}
        ,
    ipv4_addr(this, {"ipv4_des"})
{

    yang_name = "vrf"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Route::Static::Bfd::Vrf::~Vrf()
{
}

bool Native::Ip::Route::Static::Bfd::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_addr.len(); index++)
    {
        if(ipv4_addr[index]->has_data())
            return true;
    }
    return destination_vrf.is_set;
}

bool Native::Ip::Route::Static::Bfd::Vrf::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addr.len(); index++)
    {
        if(ipv4_addr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_vrf.yfilter);
}

std::string Native::Ip::Route::Static::Bfd::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/static/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Static::Bfd::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(destination_vrf, "destination_vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static::Bfd::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_vrf.is_set || is_set(destination_vrf.yfilter)) leaf_name_data.push_back(destination_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Static::Bfd::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4_addr")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr>();
        ent_->parent = this;
        ipv4_addr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Static::Bfd::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_addr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Route::Static::Bfd::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination_vrf")
    {
        destination_vrf = value;
        destination_vrf.value_namespace = name_space;
        destination_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static::Bfd::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination_vrf")
    {
        destination_vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static::Bfd::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4_addr" || name == "destination_vrf")
        return true;
    return false;
}

const Enum::YLeaf Native::Ip::Dhcp::Route::Route_::connected {0, "connected"};
const Enum::YLeaf Native::Ip::Dhcp::Route::Route_::static_ {1, "static"};

const Enum::YLeaf Native::Ip::ForwardProtocol::Protocol::nd {0, "nd"};
const Enum::YLeaf Native::Ip::ForwardProtocol::Protocol::sdns {1, "sdns"};
const Enum::YLeaf Native::Ip::ForwardProtocol::Protocol::turbo_flood {2, "turbo-flood"};

const Enum::YLeaf Native::Ip::Multicast::Multipath::SGHash::basic {0, "basic"};
const Enum::YLeaf Native::Ip::Multicast::Multipath::SGHash::next_hop_based {1, "next-hop-based"};

const Enum::YLeaf Native::Ip::Multicast::Vrf::Multipath::SGHash::basic {0, "basic"};
const Enum::YLeaf Native::Ip::Multicast::Vrf::Multipath::SGHash::next_hop_based {1, "next-hop-based"};

const Enum::YLeaf Native::Ip::Pim::SptThreshold::How::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::SptThreshold::How::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::Pim::SptThresholdContainer::SptThreshold::How::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::SptThresholdContainer::SptThreshold::How::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::Pim::Vrf::SptThreshold::How::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::Vrf::SptThreshold::How::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::How::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::How::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::PrefixList::Prefixes::Seq::Action::permit {0, "permit"};
const Enum::YLeaf Native::Ip::PrefixList::Prefixes::Seq::Action::deny {1, "deny"};

const Enum::YLeaf Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::Fwd::Null0 {0, "Null0"};

const Enum::YLeaf Native::Ip::Route::Static::Bfd::IfaceName::Interface::Null0 {0, "Null0"};


}
}

